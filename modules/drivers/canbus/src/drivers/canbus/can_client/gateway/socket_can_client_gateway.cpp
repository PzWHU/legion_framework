#include "modules/drivers/canbus/src/drivers/canbus/can_client/gateway/socket_can_client_gateway.h"

#include <sys/select.h>

#include <fstream>
#include <iostream>
#include <memory>

#include "modules/common/json/json.hpp"
#include "modules/common/logging/logging.h"
#include "modules/common/status/status.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/protocol_data.h"
#include "modules/drivers/canbus/src/vehicles/patrol/patrol_controller.h"
namespace legion {
namespace driver {
namespace drivers {
namespace can {
using namespace legion::common;
using json = nlohmann::json;
using namespace legion::drivers::patrol;
legion::common::Status::ErrorCode SocketCanClientPort::Start() {
  is_running_ = true;
  if (is_receivable_) {
    recv_thread_.reset(new std::thread([this] { RecvThreadFunc(); }));
    if (recv_thread_ == nullptr) {
      AERROR << "Unable to create can client receiver thread.";
      return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
  }
  if (is_sendable_) {
    if (timer_high_performance_enable_) {
      wheel_timer_manager_ =
          std::make_shared<ADTimerManager<SocketCanClientPort, void>>();
      pub_can_message_timer_ =
          std::make_shared<WheelTimer<SocketCanClientPort, void>>(
              wheel_timer_manager_);
      pub_can_message_timer_->AddTimer(5, &SocketCanClientPort::SendMessage,
                                       this);
      send_thread_.reset(new std::thread([this] { WheelTimerHandleFunc(); }));
    } else {
      send_thread_.reset(new std::thread([this] { SendThreadFunc(); }));
    }
    if (send_thread_ == nullptr) {
      AERROR << "Unable to create can client receiver thread.";
      return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
  }
  return SocketCanClientRaw::Start();
}

void SocketCanClientPort::Stop() {
  is_running_ = false;
  if (recv_thread_ != nullptr && recv_thread_->joinable()) {
    recv_thread_->join();
  }
  recv_thread_.reset();
  if (send_thread_ != nullptr && send_thread_->joinable()) {
    send_thread_->join();
  }
  send_thread_.reset();
  SocketCanClientRaw::Stop();
}

void SocketCanClientPort::RecvThreadFunc() {
  std::chrono::duration<double, std::micro> default_period{10 * 1000};
  while (is_running_) {
    std::vector<CanFrame> buf;
    int32_t frame_num = can_recv_len_;

    if (Receive(&buf, &frame_num) != legion::common::Status::ErrorCode::OK) {
      std::this_thread::sleep_for(default_period);
      continue;
    }

    if (buf.size() == 0 || frame_num == 0) {
      std::this_thread::sleep_for(default_period);
      continue;
    }
    // int64_t tm_now = TimeTool::Now2Ms();
    // cout << "[" << tm_now << "] " << "can" << port_ << ": " << buf.size() <<
    // " frames are received." << endl;
    HandleForwarder(&buf);
    std::this_thread::yield();
  }
  AINFO << "Can client: " << port_ << " receiver thread stopped.";
}

#define MAX_SEND_DELAY_MS 7
#define MAX_BUFFER_LEN 64
void SocketCanClientPort::SendData(SenderPtr send_func, void* ptr) {
  if (port_ == GATEWAY_PORT_CPU) {
    std::lock_guard<std::mutex> lock(*forwarder_queue_mutex_);
    for (auto& it : forwarder_queue_) {
      send_func(&it, ptr);
    }
    forwarder_queue_.clear();
    return;
  }
  std::vector<CanFrame> vec(MAX_BUFFER_LEN);
  int64_t tm_now = TimeTool::Now2Ms();
  int length = 0, tail_length = 0;
  {
    std::lock_guard<std::mutex> lock(*forwarder_queue_mutex_);
    if (forwarder_queue_.size() > 0) {
      for (auto& it : forwarder_queue_) {
        if (tm_now -
                (it.timestamp.tv_sec * 1e3 + it.timestamp.tv_usec * 1e-3) <=
            MAX_SEND_DELAY_MS) {
          tail_length = forwarder_queue_.size() - length;
          break;
        }
        length++;
      }
      if (length > 0) {
        if (length > MAX_BUFFER_LEN) {
          AERROR << "can" << port_ << ": Only " << MAX_BUFFER_LEN
                 << " frames can be sent. Something goes wrong!";
          length = MAX_BUFFER_LEN;
          tail_length = forwarder_queue_.size() - length;
        }
        std::copy(forwarder_queue_.begin(),
                  forwarder_queue_.end() - tail_length, vec.begin());
        if (static_cast<size_t>(length) == forwarder_queue_.size()) {
          forwarder_queue_.clear();
        } else {
          forwarder_queue_.erase(forwarder_queue_.begin(),
                                 forwarder_queue_.begin() + length);
        }
      }
    } else {
      return;
    }
  }
  if (length > 0) {
    // cout << "[" << tm_now << "] " << "can" << port_ << ": " << length << "
    // frames are sending, " << tail_length << " frames left." << endl;
    for (auto& it : vec) {
      send_func(&it, ptr);
      length--;
      if (length == 0) {
        break;
      }
    }
  }
}

void SocketCanClientPort::SendThreadFunc() {
  sched_param sch;
  sch.sched_priority = send_priority_;
  pthread_setschedparam(
      pthread_self(),
      (send_priority_ == 0) ? SCHED_OTHER : /*SCHED_FIFO*/ SCHED_RR, &sch);

  const int32_t INIT_PERIOD = 5000;  // 5ms
  int32_t delta_period = INIT_PERIOD;

  int64_t tm_start = 0;
  int64_t tm_end = 0;
  int64_t sleep_interval = 0;

  AINFO << "Can client: " << port_ << " sender thread starts.";

  while (is_running_) {
    tm_start = TimeTool::Now2Us();
    SendMessage();
    tm_end = TimeTool::Now2Us();
    sleep_interval = delta_period - (tm_end - tm_start);

    if (sleep_interval > 0) {
      std::this_thread::sleep_for(std::chrono::microseconds(sleep_interval));
    } else {
      stringstream sstream;
      // do not sleep
      sstream << "Too much time for can " << port_
              << " calculation: " << tm_end - tm_start
              << "us is more than minimum period: " << delta_period << "us";
      AERROR << sstream.str();
    }
  }
  AINFO << "Can client : " << port_ << " sender thread stopped!";
}

void SocketCanClientPort::SendMessage(void* param) {
  SenderPtr func = (SenderPtr)[](const CanFrame* message, void* instance) {
    std::vector<CanFrame> can_frames;
    can_frames.push_back(*message);
    ((SocketCanClientPort*)instance)->SendSingleFrame(can_frames);
  };
  SendData(func, (void*)this);
}

void SocketCanClientPort::WheelTimerHandleFunc() {
  sched_param sch;
  sch.sched_priority = send_priority_;
  pthread_setschedparam(
      pthread_self(),
      (send_priority_ == 0) ? SCHED_OTHER : /*SCHED_FIFO*/ SCHED_RR, &sch);

  while (1) {
    wheel_timer_manager_->DetectTimers(NULL);
    usleep(100);
  }
}

void SocketCanClientPort::HandleForwarder(const std::vector<CanFrame>* frames) {
  /// 遍历frames，根据frame_id查询预处理和转发关系，向目标端口的转发队列增加frame
  for (auto& frame : *frames) {
    Forwarder* forwarder = nullptr;
    uint32_t fid = frame.id;
    /// 查询frame_id是否有specified转发关系
    if (specified_forwarder_.size() > 0 &&
        specified_forwarder_.count(fid) > 0) {
      /// 查询特定转发关系，向相应的转发队列增加frame
      forwarder = &(specified_forwarder_[fid]);
    } else {
      forwarder = &default_forwarder_;
    }

    gateway_->HandleForwarder(forwarder, &frame);
  }
}

void SocketCanClientPort::InsertForwaderQueue(const CanFrame* frame) {
  std::lock_guard<std::mutex> lock(*forwarder_queue_mutex_);
  forwarder_queue_.push_back(*frame);
}
//////////////////////////////////////////////////////////////////

#define CAN(k) gateway_json["canport"][k]
#define FRAME(k, i) \
  CAN(k)            \
  ["canframe"][i]
void SocketCanClientGateway::BuildForwarder() {
  uint32_t send_port = 0, receive_port = 0;
  uint32_t port_tmp = port_ | CANCardParameter::CANChannelId::CHANNEL_ID_CPU;
  /// 根据网关配置文件初始化default_forwader_和specified_forwarder_
  json gateway_json;
  std::ifstream in_3("./conf/can_gateway/can_gateway.json");
  in_3 >> gateway_json;
  uint32_t canport_list_size = gateway_json["canport"].size();
  for (uint32_t k = 0; k < canport_list_size; k++) {
    /// 初始化default_forwarder_
    Forwarder default_forwarder;
    uint32_t id = CAN(k)["channel_id"];
    if (id != GATEWAY_PORT_CPU) {
      gaterway_port_[id].SetPriority(CAN(k)["send_priority"]);
      gaterway_port_[id].SetHighPerformance(
          CAN(k)["timer_high_performance_enable"]);
      gaterway_port_[id].SetCanRecvLen(CAN(k)["recv_len"]);
    }
    /*string default_preprocessor_name = CAN(k)["default_preprocessor"];
    if (preprocessor_map_.count(default_preprocessor_name) > 0)
    {
        default_forwarder.preprocessor =
    preprocessor_map_[default_preprocessor_name];
    }*/
    /// 只有cpu端口或初始化过的can端口才建立默认转发关系
    uint32_t default_forward_list = (CAN(k)["default_forward_list"]);
    default_forwarder.forward_list =
        (CANCardParameter::CANChannelId)(default_forward_list & port_tmp);
    /// send_port中记录具备具备发送功能的can和cpu端口掩码
    send_port = send_port | default_forwarder.forward_list;
    /// 为源can端口建立默认转发目标端口掩码
    gaterway_port_[id].SetDefaultForwarder(default_forwarder);
    /// 初始化specified_forwarder_
    uint32_t frame_list_size = CAN(k)["canframe"].size();
    for (uint32_t i = 0; i < frame_list_size; i++) {
      Forwarder specified_forwarder;
      uint32_t frame_id = FRAME(k, i)["frame_id"];
      string preprocessor_name = FRAME(k, i)["preprocessor"];
      uint32_t preprocess_list = FRAME(k, i)["preprocess_list"];
      if (preprocessor_map_.size() > 0 &&
          preprocessor_map_.count(preprocessor_name) > 0) {
        specified_forwarder.preprocessor = preprocessor_map_[preprocessor_name];
        specified_forwarder.preprocess_list =
            (CANCardParameter::CANChannelId)preprocess_list;
      }
      uint32_t specified_forward_list = (FRAME(k, i)["specified_forward_list"]);
      /// 只有cpu端口或初始化过的can端口才建立特定转发关系
      specified_forwarder.forward_list =
          (CANCardParameter::CANChannelId)(specified_forward_list & port_tmp);
      /// send_port中记录具备具备发送功能的can和cpu端口掩码
      send_port = send_port | specified_forwarder.forward_list;
      /// 为源can端口建立特定转发目标端口掩码
      gaterway_port_[id].SetSpecifiedForwarder(frame_id, specified_forwarder);
    }
    /// receive_port中记录具备接收功能的can端口
    if (default_forwarder.forward_list != (CANCardParameter::CANChannelId)0 ||
        frame_list_size > 0) {
      receive_port = receive_port | (1 << id);
    }
  }
  /// 根据send_port初始化转发队列的互斥锁和发送线程使能位
  uint32_t id = 0;
  while (send_port != 0) {
    if (send_port & 0x1) {
      if (id != GATEWAY_PORT_CPU) {
        /// cpu端口不需要发送线程，因为上层已经创建
        gaterway_port_[id].SetSendability(true);
      }
      gaterway_port_[id].InitMutex();
    }
    send_port >>= 1;
    id++;
  }
  /// 根据receive_port初始化转发队列的互斥锁和使能位
  id = 0;
  while (receive_port != 0) {
    if (receive_port & 0x1) {
      if (id != GATEWAY_PORT_CPU) {
        /// cpu端口不需要接收线程，因为上层已经创建
        gaterway_port_[id].SetReceivability(true);
      }
    }
    receive_port >>= 1;
    id++;
  }
}

void SocketCanClientGateway::BuildPreprocessorMap() {
  // BUILD_MAP;
}

bool SocketCanClientGateway::Init(const CANCardParameter& parameter) {
  /// 根据配置的channel_id初始化canport
  ///  port_中保存初始化的canport掩码，can0为0x1，can1为0x2，...，但不得包括cpu
  port_ = (CANCardParameter::CANChannelId)(parameter.can_channel_id_ &
                                           (~(1 << GATEWAY_PORT_CPU)));
  CANCardParameter tmp_parameter;
  tmp_parameter.can_card_brand_ = CANCardParameter::SOCKET_CAN_RAW;
  tmp_parameter.whitelist.assign(parameter.whitelist.begin(),
                                 parameter.whitelist.end());
  uint32_t id = 0;
  uint32_t bitmask = port_;
  while (bitmask != 0) {
    if (bitmask & 0x1) {
      tmp_parameter.can_channel_id_ = (CANCardParameter::CANChannelId)id;
      gaterway_port_[id].Init(tmp_parameter);
      gaterway_port_[id].SetGateway(this);
    }
    bitmask >>= 1;
    id++;
  }
  gaterway_port_[GATEWAY_PORT_CPU].SetGateway(this);
  gaterway_port_[GATEWAY_PORT_CPU].SetPort(
      (CANCardParameter::CANChannelId)GATEWAY_PORT_CPU);
  BuildPreprocessorMap();
  BuildForwarder();
  return true;
}

SocketCanClientGateway::~SocketCanClientGateway() { Stop(); }

legion::common::Status::ErrorCode SocketCanClientGateway::Start() {
  uint32_t id = 0;
  uint32_t bitmask = port_;
  while (bitmask != 0) {
    if (bitmask & 0x1) {
      gaterway_port_[id].Start();
    }
    bitmask >>= 1;
    id++;
  }
  is_started_ = true;
  return Status::ErrorCode::OK;
}

void SocketCanClientGateway::Stop() {
  is_started_ = false;
  uint32_t id = 0;
  uint32_t bitmask = port_;
  while (bitmask != 0) {
    if (bitmask & 0x1) {
      gaterway_port_[id].Stop();
    }
    bitmask >>= 1;
    id++;
  }
}

void SocketCanClientGateway::HandleForwarder(const Forwarder* forwarder,
                                             const CanFrame* frame) {
  CanFrame preprocessed = *frame;
  uint32_t dst_id = 0;
  uint32_t f_bitmask = forwarder->forward_list;
  /// 查询特定转发关系中是否有预处理函数并执行
  uint32_t p_bitmask = forwarder->preprocess_list;
  if (forwarder->preprocessor != nullptr && p_bitmask != 0) {
    forwarder->preprocessor(preprocessed.data);
  }
  while (f_bitmask != 0) {
    if (f_bitmask & 0x1) {
      if (p_bitmask & 0x1) {
        gaterway_port_[dst_id].InsertForwaderQueue(&preprocessed);
      } else {
        gaterway_port_[dst_id].InsertForwaderQueue(frame);
      }
    }
    f_bitmask >>= 1;
    p_bitmask >>= 1;
    dst_id++;
  }
}

legion::common::Status::ErrorCode SocketCanClientGateway::Send(
    const std::vector<CanFrame>& frames, int32_t* const frame_num) {
  if (!is_started_) {
    return Status::ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
  }
  /// frames即cpu端口的接收数据
  /// 对待发送的frames，根据cpu端口的转发关系存入forwarder_queue_
  gaterway_port_[GATEWAY_PORT_CPU].HandleForwarder(&frames);
  return Status::ErrorCode::OK;
}

legion::common::Status::ErrorCode SocketCanClientGateway::Receive(
    std::vector<CanFrame>* const frames, int32_t* const frame_num) {
  SenderPtr func = [](const CanFrame* message, void* frames) {
    ((std::vector<CanFrame>*)frames)->push_back(*message);
  };
  gaterway_port_[GATEWAY_PORT_CPU].SendData(func, (void*)frames);
  return Status::ErrorCode::OK;
}

std::string SocketCanClientGateway::GetErrorString(const int32_t status) {
  return "";
}

}  // namespace can
}  // namespace drivers
}  // namespace driver
}  // namespace legion

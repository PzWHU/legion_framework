/**
 * @file    canbus.cpp
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#include "canbus.h"

#include <sys/time.h>
#include <time.h>

#include <fstream>
#include <sstream>

#include "modules/common/file/file.h"
#include "modules/common/interface/chassis.hpp"
#include "modules/common/interface/control_command.hpp"
#include "modules/common/interface/faults.hpp"
#include "modules/common/interface/vehicle.hpp"
#include "modules/common/interface/vehicle_task.hpp"
#include "modules/common/interface/wheel_info.hpp"
#include "modules/common/macros/macros.h"
#include "modules/common/time/time_tool.h"
#include "modules/drivers/canbus/src/common/status_state_machine.hpp"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion {
namespace drivers {
void Canbus::Init() {
  // step1 初始化状态设置为false
  {
    is_init_ = false;
  }

  // step2 配置文件初始化
  {
    VariableInit();

    if (GetProtoFromJsonFile(FLAGS_control_config_file, canbus_conf_.get()) ==
        false) {
      AERROR << "GetProtoFrom canbus_config_file failed.";
      return;
    }

    if (GetProtoFromJsonFile(
            "../../../common/data/vehicle_param/vehicle_param.json",
            &vehicle_param_) == false) {
      AERROR << "GetProtoFrom vehicle_param_file failed.";
      return;
    }
    canbus_conf_->mutable_vehicle_param()->CopyFrom(vehicle_param_);

    try {
      stream_io_.open("./conf/drivers/canbus/odom.json", ios::in);
      stream_io_ >> odom_json_;
      odometer_km_ = odom_json_["odometer_km"];
      stream_io_.close();
    } catch (const nlohmann::detail::parse_error& e) {
      streambackup_io_.open("./conf/drivers/canbus/odom_backup.json", ios::in);
      streambackup_io_ >> odom_json_;
      odometer_km_ = odom_json_["odometer_km"];
      streambackup_io_.close();
    }
  }
  // step3 日志初始化
  {
    LOGGING_INIT(canbus_conf_)
  }

  // step4 IPC初始化
  {
    MESSAGE_INIT(canbus_conf_)
  }

  // step5 读取配置文件
  {
    can_card_parameter_.can_card_brand_ =
        (CANCardParameter::CANCardBrand)canbus_conf_->can_card().brand();
    can_card_parameter_.can_channel_id_ =
        (CANCardParameter::CANChannelId)canbus_conf_->can_card().channel_id();

    for (auto it : canbus_conf_->can_card().whitelist()) {
      uint32_t hex_value;
      std::stringstream ss;
      ss << std::hex << it;  // 将字符串以十六进制读入流
      ss >> hex_value;
      can_card_parameter_.whitelist.emplace_back(hex_value);
    }

    vehicle_parameter_.vehicle_brand_ =
        (VehicleParameter::VehicleBrand)canbus_conf_->vehicle_config().brand();
  }

  // step6 故障码初始化
  FaultMonitorInit();

  // step7 变量初始化
  {
    // 若不初始化，则在无check_control、check_teleop的情况下自动进入“自动驾驶”状态机
    legion::interface::Header header;
    header.set_frame_id("teleop");
    teleop_control_command_.set_header(header);
  }

  // step8 算法初始化
  {
    CanClientInit();
    Start();
    HadTeleopStateMachineInit();
  }

  // step9 定时器和线程初始化
  {
    ad_timer_manager_ = std::make_shared<ADTimerManager<Canbus, void>>();
    task_10ms_ = std::make_shared<WheelTimer<Canbus, void>>(ad_timer_manager_);
    task_10ms_->AddTimer(10, &Canbus::Task10ms, this);
    TimerManager<Canbus>::AddTimer(canbus_conf_->compute_canbus_command(),
                                   &Canbus::ComputeCanbusCommandOnTimer, this);
    task_thread_.reset(new std::thread([this] { Spin(); }));
    if (task_thread_ == nullptr) {
      AERROR << "Unable to create can task_thread_ thread.";
      return;
    }
  }

  // step10 初始化状态为true
  {
    is_init_ = true;
  }
}

void Canbus::Join() {
  if (task_thread_ != nullptr && task_thread_->joinable()) {
    task_thread_->join();
    task_thread_.reset();
    AINFO << "task_thread_ stopped [ok].";
  }
}

void Canbus::VariableInit() { canbus_conf_ = std::make_shared<CanbusConf>(); }

void Canbus::Print() {}

void Canbus::Log() {}

void Canbus::ResigerMessageManager(
    std::string name, std::shared_ptr<MessageManager<Canbus>> message_manager) {
  message_manager_.insert(
      std::pair<std::string, std::shared_ptr<MessageManager<Canbus>>>(
          name, message_manager));
}

void Canbus::Task10ms(void* param) {
  std::lock_guard<std::mutex> lock(mutex_);
  chassis_ = vehicle_controller_->chassis();
  vehicle_ = vehicle_controller_->GetVehicle();
  legion::interface::Header header;
  INTERFACE_HEADER_ASSIGN(chassis_)
  INTERFACE_HEADER_ASSIGN(vehicle_)
  if (chassis_.speed_mps() > 0.0) {
    ComputerOdom();
    SaveOdom();
  }
  // steering_invert为true时不取反，为false时取反(适用于标准左负右正)
  if (!canbus_conf_->vehicle_param().steering_invert()) {
    chassis_.set_front_steering_value(-chassis_.front_steering_value());
    chassis_.set_rear_steering_value(-chassis_.rear_steering_value());
  }
  PublishChassis(chassis_);
  PublishVehicle(vehicle_);
}

void Canbus::PublishWheelInfo(legion::interface::WheelInfo wheel_info) {
#if LCM_ENABLE
  message_manager_["LCM"]->PublishWheelInfo(wheel_info);
#endif

#if ROS_ENABLE
  message_manager_["ROS"]->PublishWheelInfo(wheel_info);
#endif

#if DDS_ENABLE
  message_manager_["DDS"]->PublishWheelInfo(wheel_info);
#endif

#if ROS2_ENABLE
  message_manager_["ROS2"]->PublishWheelInfo(wheel_info);
#endif
}
void Canbus::PublishChassis(legion::interface::Chassis chassis) {
#if LCM_ENABLE
  message_manager_["LCM"]->PublishChassis(chassis);
#endif

#if ROS_ENABLE
  message_manager_["ROS"]->PublishChassis(chassis);
#endif

#if DDS_ENABLE
  message_manager_["DDS"]->PublishChassis(chassis);
#endif

#if ROS2_ENABLE
  message_manager_["ROS2"]->PublishChassis(chassis);
#endif
}
void Canbus::PublishVehicle(legion::interface::Vehicle vehicle) {
#if LCM_ENABLE
  message_manager_["LCM"]->PublishVehicle(vehicle);
#endif

#if ROS_ENABLE
  message_manager_["ROS"]->PublishVehicle(vehicle);
#endif

#if DDS_ENABLE
  message_manager_["DDS"]->PublishVehicle(vehicle);
#endif

#if ROS2_ENABLE
  message_manager_["ROS2"]->PublishVehicle(vehicle);
#endif
}
void Canbus::PublishFaults(legion::interface::Faults faults) {
#if LCM_ENABLE
  message_manager_["LCM"]->PublishFaults(faults);
#endif

#if ROS_ENABLE
  message_manager_["ROS"]->PublishFaults(faults);
#endif

#if DDS_ENABLE
  message_manager_["DDS"]->PublishFaults(faults);
#endif

#if ROS2_ENABLE
  message_manager_["ROS2"]->PublishFaults(faults);
#endif
}

std::shared_ptr<CanbusConf> Canbus::GetConf() const { return canbus_conf_; }

void Canbus::HandleControlCommand(
    legion::interface::ControlCommand control_command) {
  if (is_init_ == false) {
    return;
  }
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (canbus_conf_->use_system_timestamp() == true) {
      legion::interface::Header header = control_command.header();
      header.set_stamp(TimeTool::Now2TmeStruct());
      control_command.set_header(header);
    }
    control_command_ = control_command;
    // 转角+buffer校正
    control_command_.set_front_steering_target(
        control_command_.front_steering_target() +
        canbus_conf_->vehicle_param().steering_buffer());
    // 转角限制保护
    control_command_.set_front_steering_target(
        LimitRange(control_command_.front_steering_target(),
                   R2D(-canbus_conf_->vehicle_param().max_front_steer_angle()),
                   R2D(canbus_conf_->vehicle_param().max_front_steer_angle())));
    // 油门限制保护
    control_command_.set_speed(
        LimitRange(control_command_.speed(), 0,
                   canbus_conf_->vehicle_param().speed_limit()));
    // steering_invert为true时不取反，为false时取反(适用于标准左负右正)
    if (!canbus_conf_->vehicle_param().steering_invert()) {
      control_command_.set_front_steering_target(
          -control_command_.front_steering_target());
      control_command_.set_rear_steering_target(
          -control_command_.rear_steering_target());
    }
  }
  if (!control_command_first_frame_recieved_) {
    control_command_first_frame_recieved_ = true;
    AINFO << "Control command first frame recieved ";
  }
}

void Canbus::HandleVehicleTask(legion::interface::VehicleTask vehicle_task) {
  if (is_init_ == false) {
    return;
  }
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (canbus_conf_->use_system_timestamp() == true) {
      legion::interface::Header header = vehicle_task.header();
      header.set_stamp(TimeTool::Now2TmeStruct());
      vehicle_task.set_header(header);
    }
    vehicle_task_ = vehicle_task;
  }
  if (!vehicle_task_first_frame_recieved_) {
    vehicle_task_first_frame_recieved_ = true;
    AINFO << "Vehicle task first frame recieved ";
  }

  if (vehicle_controller_->Update_task(vehicle_task_) !=
      Status::ErrorCode::OK) {
    AERROR << "vehicle_controller_->Update_task error.";
    return;
  }
}

void Canbus::HandleTeleopControlCommand(
    legion::interface::ControlCommand teleop_control_command) {
  if (is_init_ == false) {
    return;
  }
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (canbus_conf_->use_system_timestamp() == true) {
      legion::interface::Header header = teleop_control_command.header();
      header.set_stamp(TimeTool::Now2TmeStruct());
      teleop_control_command.set_header(header);
    }
    teleop_control_command_ = teleop_control_command;
    // 转角+buffer校正
    teleop_control_command_.set_front_steering_target(
        teleop_control_command_.front_steering_target() +
        canbus_conf_->vehicle_param().steering_buffer());
    // 转角限制保护
    teleop_control_command_.set_front_steering_target(
        LimitRange(teleop_control_command_.front_steering_target(),
                   R2D(-canbus_conf_->vehicle_param().max_front_steer_angle()),
                   R2D(canbus_conf_->vehicle_param().max_front_steer_angle())));
    // 油门限制保护
    teleop_control_command_.set_speed(
        LimitRange(teleop_control_command_.speed(), 0,
                   canbus_conf_->vehicle_param().speed_limit()));
    // steering_invert为true时不取反，为false时取反(适用于标准左负右正)
    if (!canbus_conf_->vehicle_param().steering_invert()) {
      teleop_control_command_.set_front_steering_target(
          -teleop_control_command_.front_steering_target());
      teleop_control_command_.set_rear_steering_target(
          -teleop_control_command_.rear_steering_target());
    }
  }
  if (!teleop_control_first_frame_recieved_) {
    teleop_control_first_frame_recieved_ = true;
    AINFO << "Teleop command first frame recieved ";
  }
}

void Canbus::ComputeCanbusCommandOnTimer() {
  {
    std::lock_guard<std::mutex> lock(mutex_);
    local_view_.control_command_ = control_command_;
    local_view_.teleop_control_command_ = teleop_control_command_;
    local_view_.vehicle_task_ = vehicle_task_;
  }

  if (canbus_conf_->check_control() && canbus_conf_->check_teleop()) {
    Status status = CheckInput(local_view_);
    if (!status.ok()) {
      return;
    }
  }

  if (canbus_conf_->check_teleop()) {
    Status status_teleop_tms = CheckTimestamp(
        local_view_.teleop_control_command_,
        canbus_conf_->max_miss_tms().max_miss_tms_teleop(), "teleop");
    if (!status_teleop_tms.ok()) {
      AERROR << "Teleop message lost";
      legion::interface::ControlCommand temp_cmd;
      ReSetCmd(&temp_cmd);
      UpdateCanControlCmd(temp_cmd);
      return;
    }
  }

  if (status_sm_) {
    status_sm_->OnUpdate();
  }
}

Status Canbus::CheckInput(const LocalView& local_view) {
  if (!teleop_control_first_frame_recieved_ ||
      !control_command_first_frame_recieved_) {
    AWARN << "Teleop or Control lost.[teleop_control_first_frame_recieved_:"
          << (int)teleop_control_first_frame_recieved_ << "]"
          << " [control_command_first_frame_recieved_:"
          << control_command_first_frame_recieved_ << "]";
    return Status(Status::ErrorCode::CANBUS_ERROR,
                  "Teleop or Control or VehicleTask message lost");
  }
  return Status::Ok();
}

Status Canbus::CheckTimestamp(const legion::interface::ControlCommand& msg,
                              const double max_miss_tms, const string name) {
  double time_diff_now = TimeTool::GetTimeDiffNow(msg.header().stamp());
  if (time_diff_now > max_miss_tms) {
    AERROR << name << "msg lost for " << time_diff_now;
    return Status(Status::ErrorCode::CANBUS_ERROR, "Cmd msg timeout");
  }
  return Status::Ok();
}

Status Canbus::CheckTimestamp(const legion::interface::VehicleTask& msg,
                              const double max_miss_tms, const string name) {
  double time_diff_now = TimeTool::GetTimeDiffNow(msg.header().stamp());
  if (time_diff_now > max_miss_tms) {
    AERROR << name << "msg lost for " << time_diff_now;
    return Status(Status::ErrorCode::CANBUS_ERROR, "Cmd msg timeout");
  }
  return Status::Ok();
}

void Canbus::ReSetCmd(legion::interface::ControlCommand* cmd) {
  cmd->set_front_steering_target(0.0);
  cmd->set_accel_value(0.0);
  cmd->set_speed(0.0);
  cmd->set_gear_location(legion::common::GearPosition::GEAR_PARKING);
  cmd->set_steer_driving_mode(COMPLETE_MANUAL);
  cmd->set_accel_driving_mode(COMPLETE_MANUAL);
  cmd->set_epb_driving_mode(COMPLETE_MANUAL);
  cmd->set_brake_driving_mode(COMPLETE_MANUAL);
}

void Canbus::SaveOdom() {
  odom_json_["odometer_km"] = odometer_km_;
  stream_io_.open("./conf/drivers/canbus/odom_backup.json", ios::out);
  stream_io_ << fixed << setprecision(3) << odom_json_ << std::flush;
  stream_io_.close();
  stream_io_.open("./conf/drivers/canbus/odom.json", ios::out);
  stream_io_ << fixed << setprecision(3) << odom_json_ << std::flush;
  stream_io_.close();
}

void Canbus::ComputerOdom() {
  static int64_t tm1 = TimeTool::Now2Ms();
  if (!first_) {
    first_ = true;
    return;
  }
  int64_t tm2 = TimeTool::Now2Ms();
  int64_t dt = tm2 - tm1;
  // chassis_.set_speed_mps(1);
  double d_odom = (1e-6) * dt * chassis_.speed_mps();
  odometer_km_ += d_odom;
  chassis_.set_odometer_m(odometer_km_);
  tm1 = tm2;
}

double Canbus::LimitRange(double value, double minValue, double maxValue) {
  if (value > maxValue) {
    return maxValue;
  } else if (value < minValue) {
    return minValue;
  } else {
    return value;
  }
}

void Canbus::MessagesInit() {
  if (canbus_conf_ == nullptr) return;

  for (auto it : canbus_conf_->messages().active_message()) {
    auto message = canbus_conf_->messages().message_info().at(it);
    switch (message.type()) {
#if LCM_ENABLE
      case legion::common::MessageType::LCM: {
        AINFO << "message type:LCM";

        lcm_message_manager_ = std::make_shared<LcmMessageManager<Canbus>>();
        ResigerMessageManager(message.name(), lcm_message_manager_);

        lcm_message_manager_->Init(this);
      } break;
#endif
#if DDS_ENABLE
      case legion::common::MessageType::DDS: {
        AINFO << "message type:DDS";

        dds_message_manager_ = std::make_shared<DdsMessageManager<Canbus>>();
        ResigerMessageManager(message.name(), dds_message_manager_);

        dds_message_manager_->Init(this);
      } break;
#endif
#if ROS_ENABLE
      case legion::common::MessageType::ROS: {
        AINFO << "message type:ROS";

        ros_message_manager_ = std::make_shared<RosMessageManager<Canbus>>();
        ResigerMessageManager(message.name(), ros_message_manager_);
        ros_message_manager_->Init(this);
      } break;
#endif
#if ROS2_ENABLE
      case legion::common::MessageType::ROS2: {
        AINFO << "message type:ROS2";

        ros2_message_manager_ = std::make_shared<Ros2MessageManager<Canbus>>();
        ResigerMessageManager(message.name(), ros2_message_manager_);

        ros2_message_manager_->Init(this);
      } break;
#endif

#if ADSFI_ENABLE
      case legion::common::MessageType::ADSFI: {
        AINFO << "message type:ADSFI";

        adsfi_message_manager_ =
            std::make_shared<AdsfiMessageManager<Canbus>>();
        ResigerMessageManager(message.name, adsfi_message_manager_);

        adsfi_message_manager_->Init(this);
      } break;
#endif
      default: {
        AERROR << "unknown message type";
      } break;
    }
  }
}

void Canbus::FaultMonitorInit() {}

void Canbus::UpdateCanControlCmd(legion::interface::ControlCommand cmd) {
  if (is_init_ == false) {
    return;
  }

  if (vehicle_controller_->Update(cmd) != Status::ErrorCode::OK) {
    AWARN << "Failed to process callback function OnControlCommand because "
             "vehicle_controller_->Update error.";
    return;
  }
  // can_sender_.Update();
}

void Canbus::CanClientInit() {
  // Init can client
  auto* can_factory = CanClientFactory::Instance();
  can_factory->RegisterCanClients();
  can_client_ = can_factory->CreateCANClient(can_card_parameter_);
  if (!can_client_) {
    AERROR << "Failed to create can client";
    return;
  }
  AINFO << "Can client is successfully created.";

  VehicleFactory vehicle_factory;
  vehicle_factory.RegisterVehicleFactory();
  auto vehicle_object =
      vehicle_factory.CreateVehicle(vehicle_parameter_);  // 生成具体的车辆对象
  if (!vehicle_object) {
    AERROR << "Failed to create vehicle:";
    return;
  }

  can_message_manager_ =
      vehicle_object
          ->CreateMessageManager();  // 生成对应车辆的message_manager_用来解析canbus从CAN接收到的消息
  if (can_message_manager_ == nullptr) {
    AERROR << "Failed to create message manager.";
    return;
  }
  AINFO << "Message manager is successfully created.";

  // 初始化can_receiver_，就是将can_client_、message_manager_赋给can_receiver_的成员变量
  if (can_receiver_.Init(can_client_.get(), can_message_manager_.get(),
                         canbus_conf_->can_receive_log_enable()) !=
      Status::ErrorCode::OK) {
    AERROR << "Failed to init can receiver.";
    return;
  }
  AINFO << "The can receiver is successfully initialized.";

  if (can_sender_.Init(can_client_.get(),
                       canbus_conf_->can_send_log_enable()) !=
      Status::ErrorCode::OK) {
    AERROR << "Failed to init can sender.";
    return;
  }
  can_sender_.SetHighPerformanceEnable(
      canbus_conf_->timer_high_performance_enable());
  AINFO << "The can sender is successfully initialized.";

  vehicle_controller_ = vehicle_object->CreateVehicleController();
  if (vehicle_controller_ == nullptr) {
    AERROR << "Failed to create vehicle controller.";
    return;
  }
  AINFO << "The vehicle controller is successfully created.";

  // 后面can_sender_发送数据时就会将send_messages_中的各个协议类型数据包含的CAN帧can_frame_to_send_发送到底盘
  if (vehicle_controller_->Init(
          vehicle_parameter_, &can_sender_, can_message_manager_.get(),
          canbus_conf_->max_miss_tms().max_miss_tms_vehicle_stop()) !=
      Status::ErrorCode::OK) {
    AERROR << "Failed to init vehicle controller.";
    return;
  }
  AINFO << "The vehicle controller is successfully initialized.";
}
void Canbus::Start() {
  // 1. init and start the can card hardware SocketCanClientRaw::Start()
  if (can_client_->Start() != Status::ErrorCode::OK) {
    AERROR << "Failed to start can client";
  }
  AINFO << "Can client is started.";

  // 2. start receive first then send
  if (can_receiver_.Start() != Status::ErrorCode::OK) {
    AERROR << "Failed to start can receiver.";
  }
  AINFO << "Can receiver is started.";

  // 3. start sender
  if (can_sender_.Start() != Status::ErrorCode::OK) {
    AERROR << "Failed to start can sender.";
  }

  // 4. start controller
  if (vehicle_controller_->Start() == false) {
    AERROR << "Failed to start vehicle controller.";
  }
}

void Canbus::Spin() {
  while (1) {
    ad_timer_manager_->DetectTimers(NULL);
    usleep(1000);
  }
}

}  // namespace drivers
}  // namespace legion

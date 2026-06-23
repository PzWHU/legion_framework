/**
 * @file    can_sender.h
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you apollo
 */

/**
 * @file
 * @brief Defines SenderMessage class and CanSender class.
 */

#pragma once

#include <algorithm>
#include <array>
#include <memory>
#include <mutex>
#include <thread>
#include <unordered_map>
#include <vector>

#include "modules/common/status/status.h"
#include "modules/common/logging/logging.h"
#include "modules/common/macros/macros.h"
#include "modules/common/time/time_tool.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_client/can_client.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/protocol_data.h"
#include "modules/common/timer/ad_timer_manager.h"

/**
 * @namespace legion::driver::drivers
 * @brief legion::driver::drivers
 */
namespace legion
{
namespace driver
{
namespace drivers
{
//using namespace legion::drivers;
using namespace legion::common;

/**
 * @class SenderMessage
 * @brief This class defines the message to send.
 */
template <typename SensorType>
class SenderMessage
{
public:
    /**
     * @brief Constructor which takes message ID and protocol data.
     * @param message_id The message ID.
     * @param protocol_data A pointer of ProtocolData
     *        which contains the content to send.
     */
    SenderMessage(const uint32_t message_id,
                  ProtocolData<SensorType> *protocol_data);

    void GetTestData(uint8_t *data);

    /**
     * @brief Constructor which takes message ID and protocol data and
     *        and indicator whether to initialize all bits of the .
     * @param message_id The message ID.
     * @param protocol_data A pointer of ProtocolData
     *        which contains the content to send.
     * @param init_with_one If it is true, then initialize all bits in
     *        the protocal data as one.
     */
    SenderMessage(const uint32_t message_id,
                  ProtocolData<SensorType> *protocol_data, bool init_with_one);

    /**
     * @brief Destructor.
     */
    ~SenderMessage() = default;

    /**
     * @brief Update the current period for sending messages by a difference.
     * @param delta_period Update the current period by reducing delta_period.
     */
    void UpdateCurrPeriod(const int32_t delta_period);

    /**
     * @brief Update the current send count for sending messages by a difference.
     * @param delta_count Update the current period by reducing delta_count.
     */
    void UpdateCurrSendCount(const int32_t delta_count);

    /**
     * @brief Update the protocol data. But the updating process depends on
     *        the real type of protocol data which inherites ProtocolData.
     */
    void Update();

    /**
     * @brief Get the CAN frame to send.
     * @return The CAN frame to send.
     */
    struct CanFrame CanFrame();

    /**
     * @brief Get the message ID.
     * @return The message ID.
     */
    uint32_t message_id() const;

    /**
     * @brief Get the current period to send messages. It may be different from
     *        the period from protocol data by updating.
     * @return The current period.
     */
    int32_t curr_period() const;

    /**
     * @brief Get the current period to send messages. It may be different from
     *        the period from protocol data by updating.
     * @return The current period.
     */
    bool curr_cycle_type() const;

    /**
     * @brief Get the current send count to send messages. It may be different from
     *        the period from protocol data by updating.
     * @return The current send count.
     */
    int32_t curr_send_count() const;

private:
    uint32_t message_id_ = 0;
    ProtocolData<SensorType> *protocol_data_ = nullptr;

    int32_t period_ = 0;
    bool cycle_type_ = false;
    uint32_t send_count_ = 0;
    int32_t curr_period_ = 0;
    int32_t curr_send_count_ = 0;
    bool curr_cycle_type_ = false;

private:
    static std::mutex mutex_;
    struct CanFrame can_frame_to_send_;
    struct CanFrame can_frame_to_update_;
};

/**
 * @class CanSender
 * @brief CAN sender.
 */
template <typename SensorType>
class CanSender
{
public:
    /**
     * @brief Constructor.
     */
    CanSender() = default;

    /**
     * @brief Destructor.
     */
    virtual ~CanSender() = default;

    /**
     * @brief Initialize by a CAN client based on its brand.
     * @param can_client The CAN client to use for sending messages.
     * @param enable_log whether enable record the send can frame log
     * @return An error code indicating the status of this initialization.
     */
    Status::ErrorCode Init(CanClient *can_client, bool enable_log);

    /**
     * @brief Add a message with its ID, protocol data.
     * @param message_id The message ID.
     * @param protocol_data A pointer of ProtocolData
     *        which contains the content to send.
     * @param init_with_one If it is true, then initialize all bits in
     *        the protocal data as one. By default, it is false.
     */
    void AddMessage(uint32_t message_id, ProtocolData<SensorType> *protocol_data,
                    bool init_one = false);


    void DelMessage(uint32_t message_id, ProtocolData<SensorType> *protocol_data);

    /**
     * @brief Start the CAN sender.
     * @return The error code indicating the status of this action.
     */
    legion::common::Status::ErrorCode Start();

    /*
     * @brief Update the protocol data based the types.
     */
    void Update();

    /**
     * @brief Stop the CAN sender.
     */
    void Stop();

    void SendMessage();

    /**
     * @brief Get the working status of this CAN sender.
     *        To check if it is running.
     * @return If this CAN sender is running.
     */
    bool IsRunning() const;
    bool EnableLog() const;

    void SetHighPerformanceEnable(int32_t timer_high_performance_enable);

    void GetTestData(uint8_t *data);

    legion::common::Status::ErrorCode Get_can_sender_status();

    //FRIEND_TEST(CanSenderTest, OneRunCase);

private:
    std::mutex msg_mutex_;
    ///时间轮定时器处理线程标识符指针
    std::unique_ptr<std::thread> wheel_timer_handle_thread_;

    // 时间轮定时器mananger
    std::shared_ptr<ADTimerManager<CanSender, void>> wheel_timer_manager_;
    // 发送can总线控制命令定时器
    std::shared_ptr<WheelTimer<CanSender, void>> pub_can_message_timer_;

    double last_0x15b_send_time_;

    void PowerSendThreadFunc();

   /**
    * @brief     高精度定时器发送控制信息到CAN,被高精度定时器创建函数调用．
    * @param[in] param.
    * @return    void.
    */
    void PubCanControlCmdLoopWheelTimerFunc(void * param);

   /**
    * @brief     时间轮定时器处理函数．
    * @param[in] param.
    * @return    void.
    */
    void WheelTimerHandleFunc();

    bool NeedSend(const SenderMessage<SensorType> &msg,
                  const int32_t delta_period,const int32_t delta_count);
    bool is_init_ = false;
    bool is_running_ = false;

    ///是否高性能定时器
    int32_t timer_high_performance_enable_;

    CanClient *can_client_ = nullptr;  // Owned by global canbus.cc
    std::vector<SenderMessage<SensorType>> send_messages_;
    std::unique_ptr<std::thread> thread_;
    bool enable_log_ = false;
    Status::ErrorCode can_sender_status_;
    // uint8_t rolling_count_ = 0;
    int64_t start_timestamp_ = TimeTool::Now2Us();
    uint32_t message_period_ = 0;
    DISALLOW_COPY_AND_ASSIGN(CanSender);
};

const uint32_t kSenderInterval = 6000;

template <typename SensorType>
std::mutex SenderMessage<SensorType>::mutex_;

template <typename SensorType>
SenderMessage<SensorType>::SenderMessage(const uint32_t message_id, ProtocolData<SensorType> *protocol_data): SenderMessage(message_id, protocol_data, false) {}

template <typename SensorType>
SenderMessage<SensorType>::SenderMessage(
    const uint32_t message_id, ProtocolData<SensorType> *protocol_data,
    bool init_with_one)
    : message_id_(message_id), protocol_data_(protocol_data)
{
    if (init_with_one)
    {
        for (int32_t i = 0; i < protocol_data->GetLength(); ++i)
        {
            can_frame_to_update_.data[i] = 0xFF;
        }
    }
    int32_t len = protocol_data_->GetLength();

    can_frame_to_update_.id = message_id_;
    can_frame_to_update_.len = len;

    period_ = protocol_data_->GetPeriod();
    cycle_type_ = protocol_data_->GetCycleType();
    send_count_ = protocol_data_->GetSendCount();
    curr_period_ = period_;
    curr_send_count_ = send_count_;
    curr_cycle_type_ = cycle_type_;

    Update();
}

template <typename SensorType>
void CanSender<SensorType>::SetHighPerformanceEnable(int32_t timer_high_performance_enable)
{
    timer_high_performance_enable_ = timer_high_performance_enable;
}

//高精度定时器
template <typename SensorType>
void CanSender<SensorType>::PubCanControlCmdLoopWheelTimerFunc(void * param)
{
    const int32_t INIT_PERIOD = 5000;  // 5ms
    const int32_t INIT_COUNT = 1;  // 1
    int32_t delta_period = INIT_PERIOD;
    int32_t delta_count = INIT_COUNT;
    int32_t new_delta_period = INIT_PERIOD;

    if(can_client_ == NULL)
    {
        AERROR << "CanSender<SensorType>::PowerSendThreadFunc() can_client_ is equal to NULL";
        return;
    }
    int64_t tm_start = TimeTool::Now2Us();
    for (auto &message : send_messages_)   //AddMessage
    {
        bool need_send = NeedSend(message, delta_period,delta_count);
        message.UpdateCurrPeriod(delta_period);

        new_delta_period = std::min(new_delta_period, message.curr_period());

        if (!need_send)
        {
            continue;
        }

        message.Update();

        message.UpdateCurrSendCount(delta_count);
        std::vector<CanFrame> can_frames;
        CanFrame can_frame = message.CanFrame();
        can_frame.timestamp.tv_sec = tm_start * 1e-6;
        can_frame.timestamp.tv_usec = tm_start - can_frame.timestamp.tv_sec * 1e6;
        can_frames.push_back(can_frame);

        can_sender_status_ = can_client_->SendSingleFrame(can_frames);
        if (can_sender_status_!= legion::common::Status::ErrorCode::OK)
        {
            stringstream sstream;
            sstream << "PubCanControlCmdLoopWheelTimerFunc Send msg failed:" << can_frame.CanFrameString();
            AERROR << sstream.str();
        }

        if (EnableLog())
        {
            {
                stringstream sstream;
                sstream << "1.send_can_frame#" << can_frame.CanFrameString();
                AINFO << sstream.str();
            }
        }
    }

    int64_t current_timestamp_ = TimeTool::Now2Us();
    if (message_period_!= 0 && (current_timestamp_ - start_timestamp_ )> 5 * message_period_){
        if (can_sender_status_ == legion::common::Status::ErrorCode::OK){
            can_sender_status_ = legion::common::Status::ErrorCode::CAN_CLIENT_ERROR_SEND_PERIOD;
            stringstream sstream;
            sstream << "Send msg period error:" << current_timestamp_ << start_timestamp_<< message_period_;
            AERROR << sstream.str();
        }
    }
}

template <typename SensorType>
void CanSender<SensorType>::WheelTimerHandleFunc()
{
    sched_param sch;
    sch.sched_priority = 99;
    pthread_setschedparam(pthread_self(), /*SCHED_FIFO*/ SCHED_RR, &sch);

    while(1)
    {
        wheel_timer_manager_->DetectTimers(NULL);
        usleep(100);
    }
}

template <typename SensorType>
void SenderMessage<SensorType>::UpdateCurrPeriod(const int32_t period_delta)
{
    curr_period_ -= period_delta;
    if (curr_period_ <= 0)
    {
        curr_period_ = period_;
    }
}

template <typename SensorType>
void SenderMessage<SensorType>::UpdateCurrSendCount(const int32_t delta_count)
{
    curr_send_count_ -= delta_count;
    if (curr_send_count_ <= 0)
    {
        curr_send_count_ = 0;
    }
}

template <typename SensorType>
void SenderMessage<SensorType>::Update()
{
    if (protocol_data_ == nullptr)
    {
        AERROR << "Attention: ProtocolData is nullptr!";
        return;
    }
    protocol_data_->UpdateData(can_frame_to_update_.data);
    // if (can_frame_to_update_.id == 0x15b)
    // {
    //     GetTestData(can_frame_to_update_.data);
    // }
    std::lock_guard<std::mutex> lock(mutex_);
    can_frame_to_send_ = can_frame_to_update_;
}

template <typename SensorType>
uint32_t SenderMessage<SensorType>::message_id() const
{
    return message_id_;
}

template <typename SensorType>
struct CanFrame SenderMessage<SensorType>::CanFrame()
{
    std::lock_guard<std::mutex> lock(mutex_);
    return can_frame_to_send_;
}

template <typename SensorType>
int32_t SenderMessage<SensorType>::curr_period() const
{
    return curr_period_;
}

template <typename SensorType>
bool SenderMessage<SensorType>::curr_cycle_type() const
{
    return curr_cycle_type_;
}

template <typename SensorType>
int32_t SenderMessage<SensorType>::curr_send_count() const
{
    return curr_send_count_;
}

template <typename SensorType>
void CanSender<SensorType>::SendMessage()
{
    for (auto &message : send_messages_)
    {
        std::vector<CanFrame> can_frames;
        CanFrame can_frame = message.CanFrame();

        can_frames.push_back(can_frame);

        if (can_client_->SendSingleFrame(can_frames) != legion::common::Status::ErrorCode::OK)
        {
            stringstream sstream;
            sstream << "SendMessage Send msg failed:" << can_frame.CanFrameString();
            AERROR << sstream.str();
        }

        if (EnableLog())
        {
            stringstream sstream;
            sstream << "send_can_frame#" << can_frame.CanFrameString();
            AINFO << sstream.str();
        }
    }
}

template <typename SensorType>
void SenderMessage<SensorType>::GetTestData(uint8_t *data)
{
    uint8_t t;
    long long value;
    Byte to_set(data + 17);
    t = to_set.get_byte(2, 3);
    value = (long long)t;
    AWARN << "send: gear " << value;
}

template <typename SensorType>
void CanSender<SensorType>::GetTestData(uint8_t *data)
{
    uint8_t t;
    long long value;
    Byte to_set(data + 17);
    t = to_set.get_byte(2, 3);
    value = (long long)t;
    AWARN << "send: gear " << value;

    // uint8_t t[6] = {0};
    // long long x[6] = {0};
    // long long value;
    // Byte to_set0(data + 63);
    // Byte to_set1(data + 62);
    // Byte to_set2(data + 61);
    // Byte to_set3(data + 60);
    // Byte to_set4(data + 59);
    // Byte to_set5(data + 58);
    // t[0] = to_set0.get_byte(0, 8);
    // t[1] = to_set1.get_byte(0, 8);
    // t[2] = to_set2.get_byte(0, 8);
    // t[3] = to_set3.get_byte(0, 8);
    // t[4] = to_set4.get_byte(0, 8);
    // t[5] = to_set5.get_byte(0, 8);
    // for (int i = 0; i < 6; i++)
    // {
    //     x[i] = (long long)t[i];
    //     x[i] <<= (8 * i);
    // }
    // value = x[0] | x[1] | x[2] | x[3] | x[4] | x[5];
    // std::cout << "data:" << hex << value << std::endl;
}

template <typename SensorType>
void CanSender<SensorType>::PowerSendThreadFunc()
{
    if(can_client_ == NULL)
    {
        AERROR << "CanSender<SensorType>::PowerSendThreadFunc() can_client_ is equal to NULL";
        return;
    }
    sched_param sch;
    sch.sched_priority = 99;
    pthread_setschedparam(pthread_self(), /*SCHED_FIFO*/ SCHED_RR, &sch);

    const int32_t INIT_PERIOD = 5000;  // 5ms
    const int32_t INIT_COUNT = 1;  // 1
    int32_t delta_period = INIT_PERIOD;
    int32_t new_delta_period = INIT_PERIOD;
    int32_t delta_count = INIT_COUNT;

    int64_t tm_start = 0;
    int64_t tm_end = 0;
    int64_t sleep_interval = 0;

    AINFO << "Can client sender thread starts.";

    while (is_running_)
    {
        tm_start = TimeTool::Now2Us();
        new_delta_period = INIT_PERIOD;
        
        for (auto &message : send_messages_)
        {
            bool need_send = NeedSend(message, delta_period,delta_count);
            message.UpdateCurrPeriod(delta_period);

            new_delta_period = std::min(new_delta_period, message.curr_period());

            if (!need_send)
            {
                continue;
            }

            message.Update();

            message.UpdateCurrSendCount(delta_count);
            std::vector<CanFrame> can_frames;
            CanFrame can_frame = message.CanFrame();
            can_frame.timestamp.tv_sec = tm_start * 1e-6;
            can_frame.timestamp.tv_usec = tm_start - can_frame.timestamp.tv_sec * 1e6;

            // if (can_frame.id == 0x385 || can_frame.id == 0x383)
            // {
            //     stringstream sstream;
            //     sstream << "send_can_frame==" << can_frame.CanFrameString();
            //     std::cout << sstream.str() << std::endl;
            // }

            // 打印相邻两次发送0x15b报文的时延
            if (can_frame.id == 0x15b)
            {
                double current_0x15b_send_time = TimeTool::NowToSeconds();
                double send_time_gap = current_0x15b_send_time - last_0x15b_send_time_;
                if (send_time_gap > 0.025)
                {
                    AERROR << "0x15b send time gap: " << send_time_gap;
                }
                // GetTestData(can_frame.data);
                last_0x15b_send_time_ = current_0x15b_send_time;
            }


            can_frames.push_back(can_frame);
            

            if (can_client_->SendSingleFrame(can_frames) != legion::common::Status::ErrorCode::OK)
            {
                stringstream sstream;
                sstream << "PowerSendThreadFunc Send msg failed:" << can_frame.CanFrameString();
                AERROR << sstream.str();
            }

            if (EnableLog())
            {
                stringstream sstream;
                sstream << "send_can_frame#" << can_frame.CanFrameString();
                AINFO << sstream.str();
            }
        }
        delta_period = new_delta_period;
        tm_end = TimeTool::Now2Us();
        sleep_interval = delta_period - (tm_end - tm_start);

        if (sleep_interval > 0)
        {
            std::this_thread::sleep_for(std::chrono::microseconds(sleep_interval));
        }
        else
        {
            stringstream sstream;
            // do not sleep
            sstream << "Too much time for calculation: " << tm_end - tm_start
                  << "us is more than minimum period: " << delta_period << "us";
            AERROR << sstream.str();
        }
    }
    AINFO << "Can client sender thread stopped!";
}

template <typename SensorType>
legion::common::Status::ErrorCode CanSender<SensorType>::Init(CanClient *can_client,
        bool enable_log)
{
    if (is_init_)
    {
        AERROR << "Duplicated Init request.";
        return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
    if (can_client == nullptr)
    {
        AERROR << "Invalid can client.";
        return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
    is_init_ = true;
    can_client_ = can_client;
    enable_log_ = enable_log;
    last_0x15b_send_time_ = TimeTool::NowToSeconds();

    return legion::common::Status::ErrorCode::OK;
}

template <typename SensorType>
void CanSender<SensorType>::AddMessage(uint32_t message_id,ProtocolData<SensorType> *protocol_data,bool init_with_one)
{
    if (protocol_data == nullptr)
    {
        AERROR << "invalid protocol data.";
        return;
    }
    std::lock_guard<std::mutex> lock(msg_mutex_);

    //这里的an_frame.id，及message_id都是十进制。can id是十六进制
    for (auto &message : send_messages_)
    { 
        CanFrame can_frame = message.CanFrame();
        if(can_frame.id == message_id)
            return;
    }
//   if(it != send_messages_.end())
//      return;
    send_messages_.emplace_back(SenderMessage<SensorType>(message_id, protocol_data, init_with_one));

    stringstream sstream;
    sstream << "Add send message:" << std::hex << message_id;
    AINFO << sstream.str();
}

template <typename SensorType>
void CanSender<SensorType>::DelMessage(uint32_t message_id,ProtocolData<SensorType> *protocol_data)
{
    if (protocol_data == nullptr)
    {
        AERROR << "invalid protocol data.";
        return;
    }

    //遍历名为 send_messages_的容器，其中存储了发送消息对象
    //找到了匹配的 id，那么会从 send_messages_ 容器中删除当前迭代器指向的元素。
    //随后代码会创建一个 stringstream 对象，并向其中输出一条日志消息，内容为删除发送消息的操作以及被删除的消息的 id（使用十六进制表示）。最后，函数会提前返回，结束循环
    for(auto message = send_messages_.begin();message != send_messages_.end();message++)
    {
        CanFrame can_frame = message->CanFrame();
        if(can_frame.id == message_id)
        {
        	send_messages_.erase(message);
            stringstream sstream;
            sstream << "Delete send message:" << std::hex << message_id;
            AINFO << sstream.str();
            return;
        }
    }

}

template <typename SensorType>
legion::common::Status::ErrorCode CanSender<SensorType>::Start()
{
    if (is_running_)
    {
        AERROR << "Cansender has already started.";
        return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
    is_running_ = true;

    if(timer_high_performance_enable_)
    {
        AINFO << "High performance start";
        wheel_timer_manager_ = std::make_shared<ADTimerManager<CanSender, void>>();
        pub_can_message_timer_ = std::make_shared<WheelTimer<CanSender, void>>(wheel_timer_manager_);
        pub_can_message_timer_->AddTimer(5, &CanSender::PubCanControlCmdLoopWheelTimerFunc, this);

        wheel_timer_handle_thread_.reset(new std::thread([this] { WheelTimerHandleFunc(); }));
        if (wheel_timer_handle_thread_ == nullptr)
        {
            AERROR << "Unable to create wheel timer thread.";
            return legion::common::Status::ErrorCode::CANBUS_ERROR;
        }
    }
    else
    {
        thread_.reset(new std::thread([this] { PowerSendThreadFunc(); }));
    }

    return legion::common::Status::ErrorCode::OK;
}

template <typename SensorType>
void CanSender<SensorType>::Update()
{
    // for (auto &message : send_messages_)
    // {
    //     message.Update();
    // }
}

template <typename SensorType>
legion::common::Status::ErrorCode CanSender<SensorType>::Get_can_sender_status()
{
    return can_sender_status_;
}

template <typename SensorType>
void CanSender<SensorType>::Stop()
{
    if (is_running_)
    {
        AINFO << "Stopping can sender ...";
        is_running_ = false;
        if (thread_ != nullptr && thread_->joinable())
        {
            thread_->join();
        }
        thread_.reset();
    }
    else
    {
        AERROR << "CanSender is not running.";
    }

    AINFO << "Can client sender stopped [ok].";
}

template <typename SensorType>
bool CanSender<SensorType>::IsRunning() const
{
    return is_running_;
}

template <typename SensorType>
bool CanSender<SensorType>::EnableLog() const
{
    return enable_log_;
}

template <typename SensorType>
bool CanSender<SensorType>::NeedSend(const SenderMessage<SensorType> &msg,
                                     const int32_t delta_period,const int32_t delta_count)
{
    if(msg.curr_cycle_type() == true)
    {
        return msg.curr_period() <= delta_period;
    }
    else
    {
        return msg.curr_period() <= delta_period && msg.curr_send_count() >= delta_count;
    }
    
}

}  // namespace drivers
}  // namespace driver
}  // namespace legion

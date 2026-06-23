/**
 * @file    can_receiver.cpp
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you apollo
 */

/**
 * @file
 * @brief Defines CanReceiver class.
 */

#ifndef DRIVERS_CANBUS_CAN_COMM_CAN_RECEIVER_H_
#define DRIVERS_CANBUS_CAN_COMM_CAN_RECEIVER_H_

#include <cmath>
#include <iostream>
#include <memory>
#include <sstream>
#include <thread>
#include <vector>

#include "modules/common/logging/logging.h"
#include "modules/common/macros/macros.h"
#include "modules/common/status/status.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_client/can_client.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/can_message_manager.h"
#include "modules/drivers/canbus/src/drivers/canbus/common/canbus_consts.h"


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
using namespace legion::common;
/**
 * @class CanReceiver
 * @brief CAN receiver.
 */
template <typename SensorType>
class CanReceiver
{
public:
    /**
     * @brief Constructor.
     */
    CanReceiver() = default;

    /**
     * @brief Destructor.
     */
    virtual ~CanReceiver() = default;

    /**
     * @brief Initialize by a CAN client, message manager.
     * @param can_client The CAN client to use for receiving messages.
     * @param pt_manager The message manager which can parse and
     *        get protocol data by message id.
     * @param enable_log If log the essential information during running.
     * @return An error code indicating the status of this initialization.
     */
    legion::common::Status::ErrorCode Init(CanClient *can_client,
                                   CanMessageManager<SensorType> *pt_manager,
                                   bool enable_log);

    /**
     * @brief Get the working status of this CAN receiver.
     *        To check if it is running.
     * @return If this CAN receiver is running.
     */
    bool IsRunning() const;

    /**
     * @brief Start the CAN receiver.
     * @return The error code indicating the status of this action.
     */
    legion::common::Status::ErrorCode Start();

    /**
     * @brief Stop the CAN receiver.
     */
    void Stop();

private:
    void RecvThreadFunc();

    int32_t Start(bool is_blocked);

private:
    std::unique_ptr<std::thread> thread_;
    bool is_running_ = false;
    // CanClient, MessageManager pointer life is managed by outer program
    CanClient *can_client_ = nullptr;
    CanMessageManager<SensorType> *pt_manager_ = nullptr;
    bool enable_log_ = false;
    bool is_init_ = false;

    DISALLOW_COPY_AND_ASSIGN(CanReceiver);
};

template <typename SensorType>
legion::common::Status::ErrorCode CanReceiver<SensorType>::Init(
    CanClient *can_client, CanMessageManager<SensorType> *pt_manager,
    bool enable_log)
{
    can_client_ = can_client;
    pt_manager_ = pt_manager;
    enable_log_ = enable_log;
    if (can_client_ == nullptr)
    {
        AERROR << "Invalid can client.";
        return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
    if (pt_manager_ == nullptr)
    {
        AERROR << "Invalid protocol manager.";
        return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
    is_init_ = true;
    return legion::common::Status::ErrorCode::OK;
}

template <typename SensorType>
void CanReceiver<SensorType>::RecvThreadFunc()
{
	AINFO << "Can client receiver thread starts.";
    if(can_client_ == NULL)
    {
        AERROR << "CanReceiver<SensorType>::RecvThreadFunc() can_client_ is equal to NULL";
        return;
    }

    if(pt_manager_ == NULL)
    {
        AERROR << "CanReceiver<SensorType>::RecvThreadFunc() pt_manager_ is equal to NULL";
        return;
    }

    int32_t receive_error_count = 0;
    int32_t receive_none_count = 0;
    const int32_t ERROR_COUNT_MAX = 10;
    std::chrono::duration<double, std::micro> default_period{10 * 1000};

    while (IsRunning())
    {
        std::vector<CanFrame> buf;
        int32_t frame_num = MAX_CAN_RECV_FRAME_LEN;

        if (can_client_->Receive(&buf, &frame_num) != legion::common::Status::ErrorCode::OK)
        {
            if (receive_error_count++ > ERROR_COUNT_MAX)
            {
                stringstream sstream;
                sstream << "Received " << receive_error_count << " error messages.";
                AERROR << sstream.str();
            }

            std::this_thread::sleep_for(default_period);
            continue;
        }

        receive_error_count = 0;

        if (buf.size() == 0)
        {
            /*            stringstream sstream;
                        sstream<< "Zero bytes received";
                        AERROR << sstream.str();*/
            std::this_thread::sleep_for(default_period);
            continue;
        }

        if (buf.size() != static_cast<size_t>(frame_num))
        {
            stringstream sstream;
        //    sstream << "Receiver buf size [" << buf.size()
        //            << "] does not match can_client returned length["
        //            << frame_num << "].";
        //      AERROR << sstream.str();
        }

        if (frame_num == 0)
        {
            stringstream sstream;
            sstream << "Received " << receive_none_count << " empty messages.";
            AERROR << sstream.str();
            std::this_thread::sleep_for(default_period);
            continue;
        }
        receive_none_count = 0;

        for (const auto &frame : buf)
        {
            uint8_t len = frame.len;
            uint32_t uid = frame.id;
            const uint8_t *data = frame.data;
            pt_manager_->Parse(uid, data, len);

            //stringstream sstream;
            // std::cout << "frame.id =="<<frame.id<<std::endl;
            // sstream << "recv_can_frame==" << frame.CanFrameString();
            // std::cout << sstream.str() << std::endl;
            // std::cout << "recv_time==" << TimeTool::Now2Ms() << std::endl;
            

            // const uint32_t can_id_pass[] = {0x15B, 0x351, 0x245, 0x319, 0xA1, 0x147, 0x137, 0x13B, 0x219, 0xB5};
            // bool can_id_in_pass_list = false;
            // for (int i = 0; i < sizeof(can_id_pass) / sizeof(uint32_t); i++)
            // {
            //     if (frame.id == can_id_pass[i])
            //     {
            //         can_id_in_pass_list = true;
            //         break;
            //     }
            // }
            // if (!can_id_in_pass_list)
            // {
            //     AWARN << " can id pass no effect!";
            //     AWARN << hex << frame.id;
            // }
            // // else
            // {
            //     AWARN << "white list: " << hex << frame.id;
            // }
            // TODO调试(打印received的message)
            //   if (frame.id == 0x212)
            //       {
            //          std::cout<<"-------------------------------"<<std::endl;
            //          stringstream sstream;
            //          sstream << "recv_can_frame==" << frame.CanFrameString();
            //          AINFO << sstream.str();
            //          AINFO << "recv_time==" << TimeTool::Now2Ms();
            //       }
            //  if (frame.id == 0x38D)
            //       {
            //          std::cout<<"-------------------------------"<<std::endl;
            //          stringstream sstream;
            //          sstream << "recv_can_frame==" << frame.CanFrameString();
            //          AINFO << sstream.str();
            //          AINFO << "recv_time==" << TimeTool::Now2Ms();
            //       }
        }
        std::this_thread::yield();
    }
    AINFO << "Can client receiver thread stopped.";
}

template <typename SensorType>
bool CanReceiver<SensorType>::IsRunning() const
{
    return is_running_;
}

template <typename SensorType>
legion::common::Status::ErrorCode CanReceiver<SensorType>::Start()
{
    if (is_init_ == false)
    {
        AERROR << "Unable to create can client receiver thread is_init_ is false.";
        return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
    is_running_ = true;

    thread_.reset(new std::thread([this] { RecvThreadFunc(); }));
    if (thread_ == nullptr)
    {
        AERROR << "Unable to create can client receiver thread.";
        return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
    return legion::common::Status::ErrorCode::OK;
}

template <typename SensorType>
void CanReceiver<SensorType>::Stop()
{
    if (IsRunning())
    {
        AINFO << "Stopping can client receiver ...";
        is_running_ = false;
        if (thread_ != nullptr && thread_->joinable())
        {
            thread_->join();
        }
        thread_.reset();
    }
    else
    {
        AINFO << "Can client receiver is not running.";
    }
    AINFO << "Can client receiver stopped [ok].";
}

}  // namespace radar
}  // namespace driver
}  // namespace legion

#endif  // MODULES_DRIVERS_CANBUS_CAN_COMM_CAN_RECEIVER_H_

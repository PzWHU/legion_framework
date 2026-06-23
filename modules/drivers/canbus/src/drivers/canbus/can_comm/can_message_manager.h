/**
 * @file    can_message_manager.cpp
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you apollo
 */

/**
 * @file message_manager.h
 * @brief The class of CanMessageManager
 */
#ifndef DRIVERS_CANBUS_CAN_COMM_CAN_MESSAGE_MANAGER_H_
#define DRIVERS_CANBUS_CAN_COMM_CAN_MESSAGE_MANAGER_H_

#include <memory>
#include <mutex>
#include <set>
#include <thread>
#include <unordered_map>
#include <vector>
#include <condition_variable>

#include "modules/common/logging/logging.h"
#include "modules/common/time/time_tool.h"
#include "modules/common/status/status.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/protocol_data.h"
#include "modules/drivers/canbus/src/drivers/canbus/common/byte.h"

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
using micros = std::chrono::microseconds;

/**
 * @struct CheckIdArg
 *
 * @brief this struct include data for check ids.
 */
struct CheckIdArg
{
    int64_t period = 0;
    int64_t real_period = 0;
    int64_t last_time = 0;
    int32_t error_count = 0;
};

/**
 * @class CanMessageManager
 *
 * @brief message manager manages protocols. It supports parse and can get
 * protocol data by message id.
 */
template <typename SensorType>
class CanMessageManager
{
public:
    /*
    * @brief constructor function
    */
    CanMessageManager() {}
    /*
     * @brief destructor function
     */
    virtual ~CanMessageManager() = default;

    /**
     * @brief parse data and store parsed info in protocol data
     * @param message_id the id of the message
     * @param data a pointer to the data array to be parsed
     * @param length the length of data array
     */
    virtual void Parse(const uint32_t message_id, const uint8_t *data,int32_t length);

    void ClearSensorData();

    std::condition_variable* GetMutableCVar();

    /**
     * @brief get mutable protocol data by message id
     * @param message_id the id of the message
     * @return a pointer to the protocol data
     */
    ProtocolData<SensorType> *GetMutableProtocolRecvDataById(const uint32_t message_id);

     /**
     * @brief get mutable protocol data by message id
     * @param message_id the id of the message
     * @return a pointer to the protocol data
     */
    ProtocolData<SensorType> *GetMutableProtocolSendDataById(const uint32_t message_id);

    /**
     * @brief get chassis detail. used lock_guard in this function to avoid
     * concurrent read/write issue.
     * @param radar_track_array_detail radar_track_array_detail to be filled.
     */
    legion::common::Status::ErrorCode GetSensorData(SensorType *const sensor_data);

    /*
     * @brief reset send messages
     */
    void ResetSendMessages();

protected:
    template <class T, bool need_check>
    void AddRecvProtocolData();

    template <class T, bool need_check>
    void AddSendProtocolData();

    std::vector<std::unique_ptr<ProtocolData<SensorType>>> send_protocol_data_;
    std::vector<std::unique_ptr<ProtocolData<SensorType>>> recv_protocol_data_;

    std::unordered_map<uint32_t, ProtocolData<SensorType> *> protocol_recv_data_map_;
    std::unordered_map<uint32_t, ProtocolData<SensorType> *> protocol_send_data_map_;
    std::unordered_map<uint32_t, CheckIdArg> check_recv_ids_;
    std::unordered_map<uint32_t, CheckIdArg> check_send_ids_;
    std::set<uint32_t> received_ids_;

    std::mutex sensor_data_mutex_;
    SensorType sensor_data_;
    bool is_received_on_time_ = false;

    std::condition_variable cvar_;
};

template <typename SensorType>
template <class T, bool need_check>
void CanMessageManager<SensorType>::AddRecvProtocolData()
{
    recv_protocol_data_.emplace_back(new T());
    auto *dt = recv_protocol_data_.back().get();
    if (dt == nullptr)
    {
        return;
    }
    protocol_recv_data_map_[T::ID] = dt;
    if (need_check)
    {
        check_recv_ids_[T::ID].period = dt->GetPeriod();
        check_recv_ids_[T::ID].real_period = 0;
        check_recv_ids_[T::ID].last_time = 0;
        check_recv_ids_[T::ID].error_count = 0;
    }
}

template <typename SensorType>
template <class T, bool need_check>
void CanMessageManager<SensorType>::AddSendProtocolData()
{
    send_protocol_data_.emplace_back(new T());
    auto *dt = send_protocol_data_.back().get();
    if (dt == nullptr)
    {
        return;
    }
    protocol_send_data_map_[T::ID] = dt;
    if (need_check)
    {
        check_send_ids_[T::ID].period = dt->GetPeriod();
        check_send_ids_[T::ID].real_period = 0;
        check_send_ids_[T::ID].last_time = 0;
        check_send_ids_[T::ID].error_count = 0;
    }
}

template <typename SensorType>
ProtocolData<SensorType>
*CanMessageManager<SensorType>::GetMutableProtocolSendDataById(
    const uint32_t message_id)
{
    if (protocol_send_data_map_.find(message_id) == protocol_send_data_map_.end())
    {
        stringstream sstream;
        sstream << "Unable to get protocol send data because of invalid message_id:"
                << Byte::byte_to_hex(message_id);
        ADEBUG << sstream.str();
        return nullptr;
    }
    return protocol_send_data_map_[message_id];
}

template <typename SensorType>
ProtocolData<SensorType>
*CanMessageManager<SensorType>::GetMutableProtocolRecvDataById(const uint32_t message_id)
{
    if (protocol_recv_data_map_.find(message_id) == protocol_recv_data_map_.end())
    {
        stringstream sstream;
        sstream << "Unable to get protocol recv data because of invalid message_id:"
                << Byte::byte_to_hex(message_id);
        ADEBUG << sstream.str();
        return nullptr;
    }
    return protocol_recv_data_map_[message_id];
}

template <typename SensorType>
void CanMessageManager<SensorType>::Parse(const uint32_t message_id,const uint8_t *data, int32_t length)
{
    ProtocolData<SensorType> *protocol_data = GetMutableProtocolRecvDataById(message_id);

    if (protocol_data == nullptr)
    {
        return;
    }
    {
        std::lock_guard<std::mutex> lock(sensor_data_mutex_);
        protocol_data->Parse(data, length, &sensor_data_);
    }
    received_ids_.insert(message_id);
    // check if need to check period
    const auto it = check_recv_ids_.find(message_id);
    if (it != check_recv_ids_.end())
    {
        const int64_t time = TimeTool::Now2Us();
        it->second.real_period = time - it->second.last_time;
        // if period 1.5 large than base period, inc error_count
        const double period_multiplier = 1.5;
        if (it->second.real_period > (it->second.period * period_multiplier))
        {
            it->second.error_count += 1;
        }
        else
        {
            it->second.error_count = 0;
        }
        it->second.last_time = time;
    }
}

template <typename SensorType>
void CanMessageManager<SensorType>::ClearSensorData()
{
    std::lock_guard<std::mutex> lock(sensor_data_mutex_);
    sensor_data_.Clear();
}

template <typename SensorType>
std::condition_variable* CanMessageManager<SensorType>::GetMutableCVar()
{
    return &cvar_;
}

template <typename SensorType>

legion::common::Status::ErrorCode CanMessageManager<SensorType>::GetSensorData(SensorType *const sensor_data)
{
    if (sensor_data == nullptr)
    {
        AERROR << "Failed to get sensor_data due to nullptr.";
        return legion::common::Status::ErrorCode::CANBUS_ERROR;
    }
    std::lock_guard<std::mutex> lock(sensor_data_mutex_);
    *sensor_data = sensor_data_; //sensor_data_去更新传入的*sensor_data
    return legion::common::Status::ErrorCode::OK;
}

template <typename SensorType>
void CanMessageManager<SensorType>::ResetSendMessages()
{
    for (auto &protocol_data : send_protocol_data_)
    {
        if (protocol_data == nullptr)
        {
            AERROR << "Invalid protocol data.";
        }
        else
        {
            protocol_data->Reset();
            AERROR << "ResetSendMessages.";
        }
    }
}

}  // namespace radar
}  // namespace driver
}  // namespace legion

#endif  // MODULES_DRIVERS_CANBUS_CAN_COMM_MESSAGE_MANAGER_H_

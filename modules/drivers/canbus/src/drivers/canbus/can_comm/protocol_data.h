/**
 * @file    protocol_data.h
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you apollo
 */

/**
 * @file
 * @brief The class of ProtocolData
 */

#ifndef DRIVERS_CANBUS_CAN_COMM_PROTOCOL_DATA_H_
#define DRIVERS_CANBUS_CAN_COMM_PROTOCOL_DATA_H_

#include <cmath>
#include <numeric>

#include "modules/common/logging/logging.h"
#include "modules/drivers/canbus/src/drivers/canbus/common/canbus_consts.h"
// #include "modules/drivers/canbus/src/proto/canbus_proto_conf.pb.h"

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

/**
 * @class ProtocolData
 *
 * @brief This is the base class of protocol data.
 */
template <typename SensorType>
class ProtocolData
{
public:
    /**
     * @brief static function, used to calculate the checksum of input array.
     * @param u8_data the pointer to the start position of input array
     * @param u8_len the length of the input array
     * @param pos_from_tail the position of checksum byte from tail to head, i.e., it is 0 for the last byte
     * @return the value of checksum
     */
    static std::uint8_t CRC8(const uint8_t *u8_data, const uint8_t u8_len, int pos_from_tail = 0);

    /**
     * @brief static function, used to calculate the checksum of input array.
     * @param input the pointer to the start position of input array
     * @param length the length of the input array
     * @return the value of checksum
     */
    static std::uint8_t CalculateCheckSum(const uint8_t *input,const uint32_t length);
    /**
     * @brief construct protocol data.
     */
    ProtocolData() = default;

    /**
     * @brief destruct protocol data.
     */
    virtual ~ProtocolData() = default;

    /*
     * @brief get interval period for canbus messages
     * @return the interval period in us (1e-6s)
     */
    virtual uint32_t GetPeriod() const;

    /*
     * @brief get cycle type for canbus messages
     * @return true:permanent false:temporary
     */
    virtual bool GetCycleType() const;

    /*
     * @brief get send count for canbus messages
     * @return send count period in us (1e-6s)
     */
    virtual uint32_t GetSendCount() const;

    /*
     * @brief get the length of protocol data. The length is usually 8.
     * @return the length of protocol data.
     */
    virtual int32_t GetLength() const;

    /*
     * @brief parse received data
     * @param bytes a pointer to the input bytes
     * @param length the length of the input bytes
     * @param sensor_data the parsed sensor_data
     */
    virtual void Parse(const uint8_t *bytes, int32_t length,SensorType *sensor_data) const;

    /*
     * @brief update the data
     */
    virtual void UpdateData(uint8_t *data);

    /*
     * @brief reset the protocol data
     */
    virtual void Reset();

    /*
     * @brief check if the value is in [lower, upper], if not , round it to bound
     */
    template <typename T>
    static T BoundedValue(T lower, T upper, T val);

private:
// bool canfd_enable = false;
#if CANFD_ENABLE
                int32_t data_length_ = CANBUS_FD_MESSAGE_LENGTH;
#else
                int32_t data_length_ = CANBUS_MESSAGE_LENGTH;
#endif
            };

            template <typename SensorType>
            template <typename T>
            T ProtocolData<SensorType>::BoundedValue(T lower, T upper, T val)
            {
                if (lower > upper)
                {
                    return val;
                }
                if (val < lower)
                {
                    return lower;
                }
                if (val > upper)
                {
                    return upper;
                }
                return val;
            }

            template <typename SensorType>
            uint8_t ProtocolData<SensorType>::CRC8(const uint8_t *u8_data, const uint8_t u8_len, int pos_from_tail)
            {
                uint8_t i, j;
                uint8_t u8_crc8;
                uint8_t u8_poly;

                u8_crc8 = 0x00;
                u8_poly = 0x1D;

                for (i = 0; i < u8_len; i++)
                {
                    u8_crc8 ^= ((i == pos_from_tail) ? 0 : u8_data[u8_len - i - 1]);

                    for (j = 0; j < 8; j++)
                    {
                        if (u8_crc8 & 0x80)
                        {
                            u8_crc8 = (u8_crc8 << 1) ^ u8_poly;
                        }
                        else
                        {
                            u8_crc8 <<= 1;
                        }
                    }
                }

                u8_crc8 ^= 0xFF;
                return ~u8_crc8;
            }

            // (SUM(input))^0xFF
            template <typename SensorType>
            uint8_t ProtocolData<SensorType>::CalculateCheckSum(const uint8_t *input,
                                                                const uint32_t length)
            {
                return std::accumulate(input, input + length, 0) ^ 0xFF;
            }

            template <typename SensorType>
            uint32_t ProtocolData<SensorType>::GetPeriod() const
            {
                const uint32_t CONST_PERIOD = 100 * 1000;
                return CONST_PERIOD;
            }

            template <typename SensorType>
            bool ProtocolData<SensorType>::GetCycleType() const
            {
                static bool CYCLE_TYPE = false;
                return CYCLE_TYPE;
            }

            template <typename SensorType>
            uint32_t ProtocolData<SensorType>::GetSendCount() const
            {
                static const uint32_t SEND_COUNT = 0;
                return SEND_COUNT;
            }

            template <typename SensorType>
            int32_t ProtocolData<SensorType>::GetLength() const
            {
                return data_length_;
            }

            template <typename SensorType>
            void ProtocolData<SensorType>::Parse(const uint8_t *bytes, int32_t length,
                                                 SensorType *sensor_data) const {}

            template <typename SensorType>
            void ProtocolData<SensorType>::UpdateData(uint8_t * /*data*/) {}

            template <typename SensorType>
            void ProtocolData<SensorType>::Reset() {}

        } // namespace radar
    }     // namespace driver
}  // namespace legion

#endif  // MODULES_DRIVERS_CANBUS_CAN_COMM_PROTOCOL_DATA_H_

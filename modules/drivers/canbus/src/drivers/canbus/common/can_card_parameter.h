/**
 * @file    can_card_parameter.h
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you apollo
 */

#ifndef CAN_CARD_PARAMETER_H_
#define CAN_CARD_PARAMETER_H_
#include <stdint.h>
#include <vector>
#include <map>
namespace legion
{
namespace driver
{
namespace drivers
{
/**
 * @class CANCardParameter
 * @brief CANCardParameter inherites legion::common::util::Facotory.
 */
#define GATEWAY_PORT_CPU 15
#define MAX_GATEWAY_PORT_NUM (GATEWAY_PORT_CPU + 1)
            class CANCardParameter
            {
            public:
                enum CANCardBrand : int32_t
                {
                    SOCKET_CAN_RAW = 0,
                    MDC_CAN = 1,
                    SOCKET_CAN_GATEWAY = 2
                };

                enum CANChannelId
                {
                    CHANNEL_ID_ZERO = 0,
                    CHANNEL_ID_ONE = 1,
                    CHANNEL_ID_TWO = 2,
                    CHANNEL_ID_THREE = 3,
                    CHANNEL_ID_FOUR = 4,
                    CHANNEL_ID_CPU = (1 << GATEWAY_PORT_CPU),
                    CHANNEL_ID_INVALID = (1 << MAX_GATEWAY_PORT_NUM) - 1
                };
                CANCardBrand can_card_brand_;
                CANChannelId can_channel_id_;
                std::vector<uint32_t> whitelist;
            };

        } // namespace radar
    }     // namespace driver
}  // namespace legion

#endif

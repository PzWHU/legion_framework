/**
 * @file    canbus_const.h
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you apollo
 */

/**
 * @file
 */

#ifndef MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
#define MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_

#include <cstdint>
#include "modules/common/time/time_tool.h"
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

const int32_t CAN_FRAME_SIZE = 8;
const int32_t MAX_CAN_SEND_FRAME_LEN = 1;
const int32_t MAX_CAN_RECV_FRAME_LEN = 10;

const int32_t CANBUS_MESSAGE_LENGTH = 8;     // according to ISO-11891-
const int32_t CANBUS_FD_MESSAGE_LENGTH = 64; // according to ISO-11891-1
const int32_t MAX_CAN_PORT = 4;

}  // namespace radar
}  // namespace driver
}  // namespace legion

#endif  // MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_

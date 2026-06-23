/**
 * @file    can_client_factory.h
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you legion
 */

/**
 * @file
 * @brief Defines the SocketCanClientRaw class which inherits CanClient.
 */

#ifndef MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_SOCKET_CAN_CLIENT_RAW_H_
#define MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_SOCKET_CAN_CLIENT_RAW_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>

#include <linux/can.h>
#include <linux/can/raw.h>

#include <string>
#include <vector>

#include "modules/drivers/canbus/src/drivers/canbus/common/can_card_parameter.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_client/can_client.h"
#include "modules/drivers/canbus/src/drivers/canbus/common/canbus_consts.h"

/**
 * @namespace legion::drivers::can
 * @brief legion::drivers::can
 */
namespace legion
{
namespace driver
{
namespace drivers
{
namespace can
{

#define MAX_WHITELIST_SIZE 64

typedef enum{
    CAN_FILTER_PASS = 1,
    CAN_FILTER_REJECT = 2,
}CanFilterType;

/**
 * @class SocketCanClientRaw
 * @brief The class which defines a ESD CAN client which inherites CanClient.
 */
class SocketCanClientRaw : public CanClient
{
public:
    /**
     * @brief Initialize the ESD CAN client by specified CAN card parameters.
     * @param parameter CAN card parameters to initialize the CAN client.
     * @return If the initialization is successful.
     */
    bool Init(const CANCardParameter &parameter) override;

    /**
     * @brief Destructor
     */
    virtual ~SocketCanClientRaw();

    /**
     * @brief Start the ESD CAN client.
     * @return The status of the start action which is defined by
     *         legion::common::ErrorCode.
     */
    legion::common::Status::ErrorCode Start() override;

    /**
     * @brief Stop the ESD CAN client.
     */
    void Stop() override;

    /**
     * @brief Send messages
     * @param frames The messages to send.
     * @param frame_num The amount of messages to send.
     * @return The status of the sending action which is defined by
     *         legion::common::ErrorCode.
     */
    legion::common::Status::ErrorCode Send(const std::vector<CanFrame> &frames,
                                   int32_t *const frame_num) override;

    /**
     * @brief Receive messages
     * @param frames The messages to receive.
     * @param frame_num The amount of messages to receive.
     * @return The status of the receiving action which is defined by
     *         legion::common::ErrorCode.
     */
    legion::common::Status::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                      int32_t *const frame_num) override;

    /**
     * @brief Get the error string.
     * @param status The status to get the error string.
     */
    std::string GetErrorString(const int32_t status) override;

    bool RcvFiltersSet(const uint32_t *CanIdArray, const uint32_t &ArraySize, CanFilterType FilterType);

    // private:
protected:
    int dev_handler_ = 0;
    CANCardParameter::CANChannelId port_;
    bool canfd_enable = false;

    canfd_frame send_fd_frames_[MAX_CAN_SEND_FRAME_LEN];
    canfd_frame recv_fd_frames_[MAX_CAN_RECV_FRAME_LEN];

    can_frame send_frames_[MAX_CAN_SEND_FRAME_LEN];
    can_frame recv_frames_[MAX_CAN_RECV_FRAME_LEN];

    uint32_t can_id_pass[MAX_WHITELIST_SIZE];
    uint32_t whitelist_size = 0;
};

}  // namespace can
}  // namespace drivers
}  // namespace driver
}  // namespace legion

#endif  // MODULES_DRIVERS_CANBUS_CANCARD_CLIENT_SOCKET_CAN_CLIENT_RAW_H_

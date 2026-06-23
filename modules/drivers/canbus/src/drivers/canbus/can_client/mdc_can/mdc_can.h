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

#ifndef MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_MDC_CAN_H_
#define MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_MDC_CAN_H_
#include "modules/drivers/canbus/src/drivers/canbus/can_client/can_client.h"
#if MDC_CAN_ENABLE
#include <linux/can.h>
#include <linux/can/raw.h>

#include <thread>
#include <mutex>
#include <string>
#include <random>
#include <iostream>
#include <fstream>
#include <ctime>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "../../../../common/error_code.h"
#include "canbus/common/can_card_parameter.h"

#include "canbus/common/canbus_consts.h"

#include "mdc/sensor/canrxserviceinterface_proxy.h"
#include "mdc/sensor/cantxserviceinterface_skeleton.h"

#include "common/tool_time.h"

#if MDCLOG_ENABLE
using namespace ara::log;
#endif
using namespace ara::com;
using namespace ara::core;
using namespace mdc;
using CanRxServiceInterfaceProxy = mdc::sensor::proxy::CanRxServiceInterfaceProxy;
using CanTxServiceInterfaceSkeleton = mdc::sensor::skeleton::CanTxServiceInterfaceSkeleton;
/**
 * @namespace legion::radar::can
 * @brief legion::radar::can
 */
namespace legion
{
namespace driver
{
namespace drivers
{
namespace can
{
/**
 * @class SocketCanClientRaw
 * @brief The class which defines a ESD CAN client which inherites CanClient.
 */
class MdcCan : public CanClient
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
    virtual ~MdcCan();

    /**
     * @brief Start the ESD CAN client.
     * @return The status of the start action which is defined by
     *         legion::common::ErrorCode.
     */
    legion::common::ErrorCode Start() override;

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
    legion::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                   int32_t *const frame_num) override;

    /**
     * @brief Receive messages
     * @param frames The messages to receive.
     * @param frame_num The amount of messages to receive.
     * @return The status of the receiving action which is defined by
     *         legion::common::ErrorCode.
     */
    legion::common::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                      int32_t *const frame_num) override;

    /**
     * @brief Get the error string.
     * @param status The status to get the error string.
     */
    std::string GetErrorString(const int32_t status) override;


private:
    CANCardParameter::CANChannelId port_;
    std::mutex can_rx_mutex_;
    std::mutex can_tx_mutex_;
    int32_t send_valid_frame_cnt_;
    int32_t recv_valid_frame_cnt_;

    std::vector<CanFrame> recv_recv_frames_;

    ///上一次发送219时间戳
    int64_t last_pub_can_timestamp_;
//    can_frame can_frame[MAX_CAN_SEND_FRAME_LEN];
//    can_frame recv_frames_[MAX_CAN_RECV_FRAME_LEN];
private:

    uint32_t sensor_id_;
    std::shared_ptr<CanRxServiceInterfaceProxy> can_rx_service_interface_proxy_;
    CanTxServiceInterfaceSkeleton *can_tx_service_interface_skeleton_;
    std::mutex can_rx_service_interface_proxy_mutex_;

    std::unique_ptr<std::thread> mdc_send_thread_;

    std::vector<CanFrame> send_can_frame_;
    /**
     * @brief     线程运行函数.
     * @return    void.
     */
    void Run();


    /**
     * @brief     毫米波接收回调函数
 	* @param[in] handles,handler.
 	* @return    void.
 	*/
 	void CanRxMsgServiceAvailabilityCallback(ServiceHandleContainer<CanRxServiceInterfaceProxy::HandleType> handles,
 				FindServiceHandle handler);


    /**
 	* @brief     毫米波接收
 	* @param[in] void.
     * @return    void.
 	*/
 	 void CanRxMsgReceived();

     /**
      * @brief     发送MDC can数据.
      * @param[in] frame can报文.
      * @return    void.
      */
     void PublishMdcCanData(CanFrame frame);

    /**
      * @brief     发送MDC can数据.
      * @param[in] frame can报文.
      * @return    void.
      */
     void PublishMdcCanData(const std::vector<CanFrame> &frames);

//     template <class T>
//     bool DetectionTimeout(const T &output,const std::chrono::second &span);
};

}  // namespace can
}  // namespace radar
}  // namespace driver
}  // namespace legion
#endif
#endif  // MODULES_DRIVERS_CANBUS_CANCARD_CLIENT_SOCKET_CAN_CLIENT_RAW_H_

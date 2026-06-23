#ifndef MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_SOCKET_CAN_CLIENT_GATEWAY_H_
#define MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_SOCKET_CAN_CLIENT_GATEWAY_H_

#include <thread>
#include <map>
#include <mutex>
#include <stdlib.h>
#include <functional>
#include "modules/drivers/canbus/src/drivers/canbus/can_client/socket/socket_can_client_raw.h"
#include "modules/common/timer/ad_timer_manager.h"

/**
 * @namespace legion::canbus::can
 * @brief legion::canbus::can
 */
namespace legion
{
    namespace driver
    {
        namespace drivers
        {
            namespace can
            {
                using namespace std;
                typedef std::function<void(uint8_t[])> PreProcessorPtr;
                typedef std::function<void(const CanFrame *, void *)> SenderPtr;
                struct Forwarder
                {
                    /// can端口转发比特掩码
                    /// 0: can0, 1: can1, ...
                    /// 0x8000: cpu
                    CANCardParameter::CANChannelId forward_list;

                    /// can端口预处理比特掩码
                    /// 0: can0, 1: can1, ...
                    /// 0x8000: cpu
                    CANCardParameter::CANChannelId preprocess_list;

                    ///预处理函数指针
                    PreProcessorPtr preprocessor;

                    ///构造函数
                    Forwarder() : forward_list((CANCardParameter::CANChannelId)0), preprocess_list((CANCardParameter::CANChannelId)0), preprocessor(nullptr) {}
                };

                class SocketCanClientGateway;
                class SocketCanClientPort : public SocketCanClientRaw
                {
                public:
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
                     * @brief Receive messages
                     * @param frames The messages to receive.
                     * @param frame_num The amount of messages to receive.
                     * @return The status of the receiving action which is defined by
                     *         legion::common::ErrorCode.
                     */
                    /*legion::common::Status::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                                      int32_t *const frame_num) override;*/

                    /**
                     * @brief Set port recv length.
                     * @param can_recv_len can receive length.
                     */
                    void SetCanRecvLen(uint8_t can_recv_len) { can_recv_len_ = can_recv_len; };

                    /**
                     * @brief Set port send priority.
                     * @param priority.
                     */
                    void SetPriority(int send_priority) { send_priority_ = send_priority; };

                    /**
                     * @brief Set port send high performance ability.
                     * @param high_performance.
                     */
                    void SetHighPerformance(bool high_performance) { timer_high_performance_enable_ = high_performance; };

                    /**
                     * @brief Set port channel id.
                     * @param port Channel ID.
                     */
                    void SetPort(CANCardParameter::CANChannelId port) { port_ = port; };

                    /**
                     * @brief Set port's owner, i.e. gateway ptr.
                     * @param gateway Gateway ptr.
                     */
                    void SetGateway(SocketCanClientGateway *gateway) { gateway_ = gateway; };

                    /**
                     * @brief Initial port's mutex ptr.
                     */
                    void InitMutex() { forwarder_queue_mutex_ = std::make_shared<std::mutex>(); };

                    /**
                     * @brief Set port default forwarder.
                     * @param forwarder Default forwarder.
                     */
                    void SetDefaultForwarder(Forwarder forwarder) { default_forwarder_ = forwarder; };

                    /**
                     * @brief Set port specified forwarder.
                     * @param forwarder Specified forwarder.
                     * @param fid Frame ID.
                     */
                    void SetSpecifiedForwarder(uint32_t fid, Forwarder forwarder) { specified_forwarder_[fid] = forwarder; };

                    /**
                     * @brief Set port sendability.
                     * @param enable Sendability.
                     */
                    void SetSendability(bool enable) { is_sendable_ = enable; };

                    /**
                     * @brief Set port receivability.
                     * @param enable Receivability.
                     */
                    void SetReceivability(bool enable) { is_receivable_ = enable; };

                    /**
                     * @brief Receive data thread function.
                     */
                    void RecvThreadFunc();

                    /**
                     * @brief Send data thread function.
                     */
                    void SendThreadFunc();

                    /** @brief   发送消息到CAN
                     * @param[in] param.
                     * @return    void.
                     */
                    void SendMessage(void *param = nullptr);

                    /**
                     * @brief     时间轮定时器处理函数．
                     * @param[in] param.
                     * @return    void.
                     */
                    void WheelTimerHandleFunc();

                    /**
                     * @brief Insert data into vectors to forward.
                     * @param send_func The function to send data.
                     * @param ptr The handler used in send_func.
                     */
                    void SendData(SenderPtr send_func, void *ptr);

                    /**
                     * @brief Insert data into vectors to forward.
                     * @param frame The frame to forward.
                     */
                    void InsertForwaderQueue(const CanFrame *frame);

                    /**
                     * @brief Handle received data based on forward relations.
                     * @param frame The received frame.
                     */
                    void HandleForwarder(const std::vector<CanFrame> *frames);

                private:
                    ///网关端口默认转发关系
                    Forwarder default_forwarder_;
                    ///网关端口特定转发关系
                    std::map<uint32_t, Forwarder> specified_forwarder_;
                    ///网关端口转发队列
                    std::vector<CanFrame> forwarder_queue_;
                    ///网关端口转发队列互斥锁
                    std::shared_ptr<std::mutex> forwarder_queue_mutex_;
                    ///发送线程和接收线程
                    std::unique_ptr<std::thread> send_thread_, recv_thread_;
                    /// can接收长度
                    uint8_t can_recv_len_;
                    ///接收发送线程运行标识
                    bool is_running_ = false;
                    ///发送使能标识
                    bool is_sendable_ = false;
                    ///接收使能标识
                    bool is_receivable_ = false;
                    ///发送线程优先级
                    int send_priority_ = 99;
                    // 时间轮定时器mananger
                    std::shared_ptr<ADTimerManager<SocketCanClientPort, void>> wheel_timer_manager_;
                    // 发送can总线控制命令定时器
                    std::shared_ptr<WheelTimer<SocketCanClientPort, void>> pub_can_message_timer_;
                    ///是否高性能定时器
                    bool timer_high_performance_enable_ = true;
                    ///所属网关的类对象指针
                    SocketCanClientGateway *gateway_;
                };

                /**
                 * @class SocketCanClientGateway
                 * @brief The class which defines a ESD CAN client gateway which onws multiple SocketCanClientPort and inherites CanClient.
                 */
                class SocketCanClientGateway : public CanClient
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
                    virtual ~SocketCanClientGateway();

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

                    /**
                     * @brief Fill data vectors to forward based on forward relations.
                     * @param src_id The can_id from which frames are received.
                     * @param frames The frames.
                     */

                    void HandleForwarder(const Forwarder *forwarder, const CanFrame *frame);

                private:
                    /**
                     * @brief Build Forwarder params from json file.
                     */
                    void BuildForwarder();

                    /**
                     * @brief Build Preprocessor Map based on static functions.
                     */
                    void BuildPreprocessorMap();

                private:
                    ///网关的端口数组
                    SocketCanClientPort gaterway_port_[MAX_GATEWAY_PORT_NUM];
                    ///网关的can端口比特掩码
                    CANCardParameter::CANChannelId port_;
                    ///网关的预处理函数字典
                    std::map<string, PreProcessorPtr> preprocessor_map_;
                };
            } // namespace can
        }     // namespace canbus
    }         // namespace drivers
} // namespace legion

#endif // MODULES_DRIVERS_CANBUS_CANCARD_CLIENT_SOCKET_CAN_CLIENT_GATEWAY_H_

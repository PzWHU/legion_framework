/**
 * @file    lcm_message_manager.h
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#if LCM_ENABLE
#include <thread>
#include <lcm/lcm.h>
#include <lcm/lcm-cpp.hpp>

#include "lcm_interface/Events.hpp"
#include "lcm_interface/Faults.hpp"
#include "lcm_interface/Chassis.hpp"
#include "lcm_interface/Vehicle.hpp"
#include "lcm_interface/ObuCmdMsg.hpp"
#include "lcm_interface/VehicleTask.hpp"
#include "lcm_interface/ControlCommand.hpp"
#include "lcm_interface/RoutingRequest.hpp"

#include "message_manager/message_manager.h"

/**
 * @namespace legion::legion_bridge
 * @brief legion::legion_bridge
 */

namespace legion {
namespace legion_bridge {
/**
 * @class LcmMessageManager
 * @brief LCM消息管理器.
 */
template <typename T>
class LcmMessageManager : public MessageManager<T> {
 public:
  LcmMessageManager() = default;
  ~LcmMessageManager() = default;

  /**
   * @brief     初始化。
   * @param[in] obu_url LCM组播信息.
   * @return    void.
   */
  void Init(T* t) override;

  /**
   * @brief     RoutingRequest消息发送.
   * @param[in] routing_request
   * @return    void.
   */
  void PublishRoutingRequest(legion::interface::RoutingRequest msg) override;

  /**
   * @brief     ObuCmdMsg消息发送.
   * @param[in] obu_cmd_msg
   * @return    void.
   */
  void PublishObuCmdMsg(legion::interface::ObuCmdMsg msg) override;

  /**
   * @brief     VehicleTask消息发送.
   * @param[in] vehicle_task
   * @return    void.
   */
  void PublishVehicleTask(legion::interface::VehicleTask msg) override;

  /**
   * @brief     ControlCommand消息发送.
   * @param[in] control_command
   * @return    void.
   */
  void PublishControlCommandOutput(
      legion::interface::ControlCommand msg) override;

  /**
   * @brief     Faults消息发送.
   * @param[in] faults
   * @return    void.
   */
  void PublishFaults(legion::interface::Faults msg) override;

 protected:
  T* instance_;
  bool is_init_;
  std::shared_ptr<lcm::LCM> lcm_;

  std::unique_ptr<std::thread> handle_message_thread_;

  void HandleControlCommandInputMessage(
      const lcm::ReceiveBuffer* rbuf, const std::string& chan,
      const lcm_interface::ControlCommand* msg);

  void HandleChassisMessage(const lcm::ReceiveBuffer* rbuf,
                            const std::string& chan,
                            const lcm_interface::Chassis* msg);

  void HandleEventsMessage(const lcm::ReceiveBuffer* rbuf,
                           const std::string& chan,
                           const lcm_interface::Events* msg);

  void HandleVehicleMessage(const lcm::ReceiveBuffer* rbuf,
                            const std::string& chan,
                            const lcm_interface::Vehicle* msg);

  /**
   * @brief     线程运行函数.
   * @return    void.
   */
  void Run();

  /**
   * @brief     线程结束函数.
   * @return    void.
   */
  void Stop();
};
}  // namespace legion_bridge
}  // namespace legion
#include "lcm_message_manager.hpp"
#endif
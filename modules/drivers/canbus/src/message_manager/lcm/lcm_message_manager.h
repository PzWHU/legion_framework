/**
 * @file    lcm_message_manager.h
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#if LCM_ENABLE
#include <thread>
#include <lcm/lcm.h>
#include <lcm/lcm-cpp.hpp>

#include "lcm_interface/Faults.hpp"
#include "lcm_interface/Chassis.hpp"
#include "lcm_interface/Vehicle.hpp"
#include "lcm_interface/WheelInfo.hpp"
#include "lcm_interface/VehicleTask.hpp"
#include "lcm_interface/ControlCommand.hpp"

#include "message_manager/message_manager.h"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion {
namespace drivers {
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
   * @brief     WheelInfo消息发送.
   * @param[in] wheel_info
   * @return    void.
   */
  void PublishWheelInfo(legion::interface::WheelInfo msg) override;

  /**
   * @brief     Chassis消息发送.
   * @param[in] chassis
   * @return    void.
   */
  void PublishChassis(legion::interface::Chassis msg) override;

  /**
   * @brief     Vehicle消息发送.
   * @param[in] vehicle
   * @return    void.
   */
  void PublishVehicle(legion::interface::Vehicle msg) override;

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

  void HandleControlCommandMessage(const lcm::ReceiveBuffer* rbuf,
                                   const std::string& chan,
                                   const lcm_interface::ControlCommand* msg);

  void HandleVehicleTaskMessage(const lcm::ReceiveBuffer* rbuf,
                                const std::string& chan,
                                const lcm_interface::VehicleTask* msg);

  void HandleTeleopControlCommandMessage(
      const lcm::ReceiveBuffer* rbuf, const std::string& chan,
      const lcm_interface::ControlCommand* msg);

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
}  // namespace drivers
}  // namespace legion
#include "lcm_message_manager.hpp"
#endif
/**
 * @file    ros_message_manager.h
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once
#if ROS_ENABLE
#include <thread>

#include <ros/ros.h>

#include "ros_interface/Faults.h"
#include "ros_interface/Chassis.h"
#include "ros_interface/Vehicle.h"
#include "ros_interface/WheelInfo.h"
#include "ros_interface/VehicleTask.h"
#include "ros_interface/ControlCommand.h"

#include "message_manager/message_manager.h"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion {
namespace drivers {
/**
 * @class RosMessageManager
 * @brief ROS消息管理器.
 */
template <typename T>
class RosMessageManager : public MessageManager<T> {
 public:
  RosMessageManager() = default;
  ~RosMessageManager() = default;

  /**
   * @brief     初始化。
   * @param[in] obu_url LCM组播信息.
   * @return    void.
   */
  void Init(T* t) override;

  /**
   * @brief     WheelInfo消息发布.
   * @param[in] wheel_info.
   * @return    void.
   */
  void PublishWheelInfo(legion::interface::WheelInfo msg) override;

  /**
   * @brief     Chassis消息发布.
   * @param[in] chassis.
   * @return    void.
   */
  void PublishChassis(legion::interface::Chassis msg) override;

  /**
   * @brief     Vehicle消息发布.
   * @param[in] vehicle.
   * @return    void.
   */
  void PublishVehicle(legion::interface::Vehicle msg) override;

  /**
   * @brief     Faults消息发布.
   * @param[in] faults.
   * @return    void.
   */
  void PublishFaults(legion::interface::Faults msg) override;

 protected:
  T* instance_;
  bool is_init_;

  std::unique_ptr<std::thread> handle_message_thread_;

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

 protected:
  ros::NodeHandle nh_;
  ros::Publisher wheel_info_pub_;
  ros::Publisher chassis_pub_;
  ros::Publisher vehicle_pub_;
  ros::Publisher faults_pub_;

  ros::Subscriber control_command_sub_;
  ros::Subscriber vehicle_task_sub_;
  ros::Subscriber teleop_control_command_sub_;

  void HandleControlCommandMessage(
      const ros_interface::ControlCommand& msg_obj);

  void HandleVehicleTaskMessage(const ros_interface::VehicleTask& msg_obj);

  void HandleTeleopControlCommandMessage(
      const ros_interface::ControlCommand& msg_obj);
};
}  // namespace drivers
}  // namespace legion
#include "ros_message_manager.hpp"
#endif  // ROS_ENABLE

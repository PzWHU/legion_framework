/**
 * @file    ros_2_message_manager.h
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once
#if ROS2_ENABLE
#include <thread>

#include "rclcpp/rclcpp.hpp"

#include "ros2_interface/msg/faults.hpp"
#include "ros2_interface/msg/chassis.hpp"
#include "ros2_interface/msg/vehicle.hpp"
#include "ros2_interface/msg/wheel_info.hpp"
#include "ros2_interface/msg/vehicle_task.hpp"
#include "ros2_interface/msg/control_command.hpp"

#include "message_manager/message_manager.h"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion {
namespace drivers {
/**
 * @class Ros2MessageManager
 * @brief ROS2消息管理器.
 */
template <typename T>
class Ros2MessageManager : public MessageManager<T>, public rclcpp::Node {
 public:
  Ros2MessageManager();
  ~Ros2MessageManager() = default;

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
  rclcpp::Publisher<::ros2_interface::msg::WheelInfo>::SharedPtr
      wheel_info_pub_;
  rclcpp::Publisher<::ros2_interface::msg::Chassis>::SharedPtr chassis_pub_;
  rclcpp::Publisher<::ros2_interface::msg::Vehicle>::SharedPtr vehicle_pub_;
  rclcpp::Publisher<::ros2_interface::msg::Faults>::SharedPtr faults_pub_;

  rclcpp::Subscription<::ros2_interface::msg::ControlCommand>::SharedPtr
      control_command_sub_;
  rclcpp::Subscription<::ros2_interface::msg::VehicleTask>::SharedPtr
      vehicle_task_sub_;
  rclcpp::Subscription<::ros2_interface::msg::ControlCommand>::SharedPtr
      teleop_control_command_sub_;

  void HandleControlCommandMessage(
      const ros2_interface::msg::ControlCommand::SharedPtr msg_obj);

  void HandleVehicleTaskMessage(
      const ros2_interface::msg::VehicleTask::SharedPtr msg_obj);

  void HandleTeleopControlCommandMessage(
      const ros2_interface::msg::ControlCommand::SharedPtr msg_obj);
};
}  // namespace drivers
}  // namespace legion
#include "ros2_message_manager.hpp"
#endif  // ROS2_ENABLE

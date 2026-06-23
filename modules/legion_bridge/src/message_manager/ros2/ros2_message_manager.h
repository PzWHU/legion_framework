/**
 * @file    ros_2_message_manager.h
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once
#if ROS2_ENABLE
#include <thread>

#include "rclcpp/rclcpp.hpp"

#include "ros2_interface/msg/events.hpp"
#include "ros2_interface/msg/faults.hpp"
#include "ros2_interface/msg/chassis.hpp"
#include "ros2_interface/msg/vehicle.hpp"
#include "ros2_interface/msg/obu_cmd_msg.hpp"
#include "ros2_interface/msg/vehicle_task.hpp"
#include "ros2_interface/msg/control_command.hpp"
#include "ros2_interface/msg/routing_request.hpp"

#include "message_manager/message_manager.h"

/**
 * @namespace legion::legion_bridge
 * @brief legion::legion_bridge
 */

namespace legion {
namespace legion_bridge {
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
   * @brief     RoutingRequest消息发布.
   * @param[in] routing_request.
   * @return    void.
   */
  void PublishRoutingRequest(legion::interface::RoutingRequest msg) override;

  /**
   * @brief     ObuCmdMsg消息发布.
   * @param[in] obu_cmd_msg.
   * @return    void.
   */
  void PublishObuCmdMsg(legion::interface::ObuCmdMsg msg) override;

  /**
   * @brief     VehicleTask消息发布.
   * @param[in] vehicle_task.
   * @return    void.
   */
  void PublishVehicleTask(legion::interface::VehicleTask msg) override;

  /**
   * @brief     ControlCommand消息发布.
   * @param[in] control_command.
   * @return    void.
   */
  void PublishControlCommandOutput(
      legion::interface::ControlCommand msg) override;

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
  rclcpp::Publisher<::ros2_interface::msg::RoutingRequest>::SharedPtr
      routing_request_pub_;
  rclcpp::Publisher<::ros2_interface::msg::ObuCmdMsg>::SharedPtr
      obu_cmd_msg_pub_;
  rclcpp::Publisher<::ros2_interface::msg::VehicleTask>::SharedPtr
      vehicle_task_pub_;
  rclcpp::Publisher<::ros2_interface::msg::ControlCommand>::SharedPtr
      control_command_output_pub_;
  rclcpp::Publisher<::ros2_interface::msg::Faults>::SharedPtr faults_pub_;

  rclcpp::Subscription<::ros2_interface::msg::ControlCommand>::SharedPtr
      control_command_input_sub_;
  rclcpp::Subscription<::ros2_interface::msg::Chassis>::SharedPtr chassis_sub_;
  rclcpp::Subscription<::ros2_interface::msg::Events>::SharedPtr events_sub_;
  rclcpp::Subscription<::ros2_interface::msg::Vehicle>::SharedPtr vehicle_sub_;

  void HandleControlCommandInputMessage(
      const ros2_interface::msg::ControlCommand::SharedPtr msg_obj);

  void HandleChassisMessage(
      const ros2_interface::msg::Chassis::SharedPtr msg_obj);

  void HandleEventsMessage(
      const ros2_interface::msg::Events::SharedPtr msg_obj);

  void HandleVehicleMessage(
      const ros2_interface::msg::Vehicle::SharedPtr msg_obj);
};
}  // namespace legion_bridge
}  // namespace legion
#include "ros2_message_manager.hpp"
#endif  // ROS2_ENABLE

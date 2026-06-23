/**
 * @file    ros_message_manager.h
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once
#if ROS_ENABLE
#include <thread>

#include <ros/ros.h>

#include "ros_interface/Events.h"
#include "ros_interface/Faults.h"
#include "ros_interface/Chassis.h"
#include "ros_interface/Vehicle.h"
#include "ros_interface/ObuCmdMsg.h"
#include "ros_interface/VehicleTask.h"
#include "ros_interface/ControlCommand.h"
#include "ros_interface/RoutingRequest.h"

#include "message_manager/message_manager.h"

/**
 * @namespace legion::legion_bridge
 * @brief legion::legion_bridge
 */

namespace legion {
namespace legion_bridge {
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
  ros::NodeHandle nh_;
  ros::Publisher routing_request_pub_;
  ros::Publisher obu_cmd_msg_pub_;
  ros::Publisher vehicle_task_pub_;
  ros::Publisher control_command_output_pub_;
  ros::Publisher faults_pub_;

  ros::Subscriber control_command_input_sub_;
  ros::Subscriber chassis_sub_;
  ros::Subscriber events_sub_;
  ros::Subscriber vehicle_sub_;

  void HandleControlCommandInputMessage(
      const ros_interface::ControlCommand& msg_obj);

  void HandleChassisMessage(const ros_interface::Chassis& msg_obj);

  void HandleEventsMessage(const ros_interface::Events& msg_obj);

  void HandleVehicleMessage(const ros_interface::Vehicle& msg_obj);
};
}  // namespace legion_bridge
}  // namespace legion
#include "ros_message_manager.hpp"
#endif  // ROS_ENABLE

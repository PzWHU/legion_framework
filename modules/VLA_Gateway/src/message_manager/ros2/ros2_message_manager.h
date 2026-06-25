/**
 * @file    ros2_message_manager.h
 * @brief   VLA_Gateway ROS2 消息管理器
 */

#pragma once

#if ROS2_ENABLE

#include <atomic>
#include <memory>
#include <thread>

#include "message_manager/message_manager.h"
#include "rclcpp/rclcpp.hpp"
#include "ros2_interface/msg/location.hpp"
#include "ros2_interface/msg/trajectory_array.hpp"
#include "ros2_interface/msg/routing_response.hpp"
#include "ros2_interface/msg/prediction_obstacles.hpp"
#include "ros2_interface/msg/chassis.hpp"
#include "ros2_interface/msg/guide_info.hpp"

namespace legion {
namespace vla_gateway {

/**
 * @brief ROS2 实现的消息管理器
 * @tparam T 宿主模块类型
 */
template <typename T>
class Ros2MessageManager : public MessageManager<T>, public rclcpp::Node {
 public:
  Ros2MessageManager();
  ~Ros2MessageManager() override;

  /**
   * @brief 初始化：创建订阅和定时器
   */
  void Init(T* t) override;

  /**
   * @brief 启动 ROS2 executor 循环
   */
  void Run() override;

  /**
   * @brief 发布 GuideInfo 消息
   */
  void PublishGuideInfo(const ros2_interface::msg::GuideInfo& guide_info);

  /**
   * @brief 停止 ROS2 executor 循环
   */
  void Stop() override;

 private:
  void HandleLocationMessage(ros2_interface::msg::Location::ConstSharedPtr msg);
  void HandlePredictionObstaclesMessage(
      ros2_interface::msg::PredictionObstacles::ConstSharedPtr msg);
  void HandleTrajectoryArrayMessage(
      ros2_interface::msg::TrajectoryArray::ConstSharedPtr msg);
  void HandleRoutingResponseMessage(
      ros2_interface::msg::RoutingResponse::ConstSharedPtr msg);
  void HandleChassisMessage(ros2_interface::msg::Chassis::ConstSharedPtr msg);
  void TimerCallback();

  T* instance_ = nullptr;
  std::atomic<bool> is_active_{false};
  std::unique_ptr<std::thread> spin_thread_;

  rclcpp::Subscription<ros2_interface::msg::Location>::SharedPtr location_sub_;
  rclcpp::Subscription<ros2_interface::msg::PredictionObstacles>::SharedPtr
      obstacles_sub_;
  rclcpp::Subscription<ros2_interface::msg::TrajectoryArray>::SharedPtr
      traj_array_sub_;
  rclcpp::Subscription<ros2_interface::msg::RoutingResponse>::SharedPtr
      routing_response_sub_;
  rclcpp::Subscription<ros2_interface::msg::Chassis>::SharedPtr chassis_sub_;
  rclcpp::Publisher<ros2_interface::msg::GuideInfo>::SharedPtr
      guide_info_pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

}  // namespace vla_gateway
}  // namespace legion

#include "ros2_message_manager.hpp"

#endif  // ROS2_ENABLE

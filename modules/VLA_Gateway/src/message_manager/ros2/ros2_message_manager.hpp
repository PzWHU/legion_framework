/**
 * @file    ros2_message_manager.hpp
 * @brief   VLA_Gateway ROS2 消息管理器实现
 */

#pragma once

#if ROS2_ENABLE

#include "ros2_message_manager.h"

#include <chrono>
#include <memory>
#include <rclcpp/qos.hpp>

namespace legion {
namespace vla_gateway {

template <typename T>
Ros2MessageManager<T>::Ros2MessageManager()
    : rclcpp::Node("vla_gateway"), instance_(nullptr), is_active_(false) {}

template <typename T>
Ros2MessageManager<T>::~Ros2MessageManager() {
  Stop();
}

template <typename T>
void Ros2MessageManager<T>::Init(T* t) {
  instance_ = t;

  rclcpp::QoS qos(10);

  location_sub_ = create_subscription<ros2_interface::msg::Location>(
      "/localization/global_fusion/Location", qos,
      [this](ros2_interface::msg::Location::ConstSharedPtr msg) {
        HandleLocationMessage(msg);
      });

  obstacles_sub_ = create_subscription<ros2_interface::msg::PredictionObstacles>(
      "/prediction/PredictionObstacles", qos,
      [this](ros2_interface::msg::PredictionObstacles::ConstSharedPtr msg) {
        HandlePredictionObstaclesMessage(msg);
      });

  traj_array_sub_ = create_subscription<ros2_interface::msg::TrajectoryArray>(
      "/planning/TrajectoryArray", qos,
      [this](ros2_interface::msg::TrajectoryArray::ConstSharedPtr msg) {
        HandleTrajectoryArrayMessage(msg);
      });

  routing_response_sub_ = create_subscription<ros2_interface::msg::RoutingResponse>(
      "/routing/RoutingResponse", qos,
      [this](ros2_interface::msg::RoutingResponse::ConstSharedPtr msg) {
        HandleRoutingResponseMessage(msg);
      });

  chassis_sub_ = create_subscription<ros2_interface::msg::Chassis>(
      "/drivers/canbus/Chassis", qos,
      [this](ros2_interface::msg::Chassis::ConstSharedPtr msg) {
        HandleChassisMessage(msg);
      });

  timer_ = create_wall_timer(
      std::chrono::milliseconds(instance_->process_period_ms()),
      [this]() { TimerCallback(); });

  guide_info_pub_ = create_publisher<ros2_interface::msg::GuideInfo>(
      instance_->guide_info_topic(), rclcpp::QoS(10));
}

template <typename T>
void Ros2MessageManager<T>::HandleLocationMessage(
    ros2_interface::msg::Location::ConstSharedPtr msg) {
  if (instance_ != nullptr && msg != nullptr) {
    instance_->HandleLocation(*msg);
  }
}

template <typename T>
void Ros2MessageManager<T>::HandlePredictionObstaclesMessage(
    ros2_interface::msg::PredictionObstacles::ConstSharedPtr msg) {
  if (instance_ != nullptr && msg != nullptr) {
    instance_->HandlePredictionObstacles(*msg);
  }
}

template <typename T>
void Ros2MessageManager<T>::HandleTrajectoryArrayMessage(
    ros2_interface::msg::TrajectoryArray::ConstSharedPtr msg) {
  if (instance_ != nullptr && msg != nullptr) {
    instance_->HandleTrajectoryArray(*msg);
  }
}

template <typename T>
void Ros2MessageManager<T>::HandleRoutingResponseMessage(
    ros2_interface::msg::RoutingResponse::ConstSharedPtr msg) {
  if (instance_ != nullptr && msg != nullptr) {
    instance_->HandleRoutingResponse(*msg);
  }
}

template <typename T>
void Ros2MessageManager<T>::HandleChassisMessage(
    ros2_interface::msg::Chassis::ConstSharedPtr msg) {
  if (instance_ != nullptr && msg != nullptr) {
    instance_->HandleChassis(*msg);
  }
}

template <typename T>
void Ros2MessageManager<T>::TimerCallback() {
  if (instance_ != nullptr) {
    instance_->Process();
  }
}

template <typename T>
void Ros2MessageManager<T>::PublishGuideInfo(
    const ros2_interface::msg::GuideInfo& guide_info) {
  if (guide_info_pub_ != nullptr) {
    guide_info_pub_->publish(guide_info);
  }
}

template <typename T>
void Ros2MessageManager<T>::Run() {
  if (is_active_.exchange(true)) {
    return;
  }
  spin_thread_.reset(new std::thread([this]() {
    rclcpp::executors::SingleThreadedExecutor executor;
    executor.add_node(this->get_node_base_interface());
    while (rclcpp::ok() && is_active_) {
      executor.spin_once(std::chrono::milliseconds(100));
    }
  }));
}

template <typename T>
void Ros2MessageManager<T>::Stop() {
  is_active_ = false;
  if (spin_thread_ != nullptr && spin_thread_->joinable()) {
    spin_thread_->join();
    spin_thread_.reset();
  }
}

}  // namespace vla_gateway
}  // namespace legion

#endif  // ROS2_ENABLE

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PredictionObstacles.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/prediction_obstacles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PredictionObstacles_scenario
{
public:
  explicit Init_PredictionObstacles_scenario(::ros2_interface::msg::PredictionObstacles & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PredictionObstacles scenario(::ros2_interface::msg::PredictionObstacles::_scenario_type arg)
  {
    msg_.scenario = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacles msg_;
};

class Init_PredictionObstacles_self_intent
{
public:
  explicit Init_PredictionObstacles_self_intent(::ros2_interface::msg::PredictionObstacles & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacles_scenario self_intent(::ros2_interface::msg::PredictionObstacles::_self_intent_type arg)
  {
    msg_.self_intent = std::move(arg);
    return Init_PredictionObstacles_scenario(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacles msg_;
};

class Init_PredictionObstacles_end_timestamp
{
public:
  explicit Init_PredictionObstacles_end_timestamp(::ros2_interface::msg::PredictionObstacles & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacles_self_intent end_timestamp(::ros2_interface::msg::PredictionObstacles::_end_timestamp_type arg)
  {
    msg_.end_timestamp = std::move(arg);
    return Init_PredictionObstacles_self_intent(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacles msg_;
};

class Init_PredictionObstacles_start_timestamp
{
public:
  explicit Init_PredictionObstacles_start_timestamp(::ros2_interface::msg::PredictionObstacles & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacles_end_timestamp start_timestamp(::ros2_interface::msg::PredictionObstacles::_start_timestamp_type arg)
  {
    msg_.start_timestamp = std::move(arg);
    return Init_PredictionObstacles_end_timestamp(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacles msg_;
};

class Init_PredictionObstacles_change_origin_flag
{
public:
  explicit Init_PredictionObstacles_change_origin_flag(::ros2_interface::msg::PredictionObstacles & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacles_start_timestamp change_origin_flag(::ros2_interface::msg::PredictionObstacles::_change_origin_flag_type arg)
  {
    msg_.change_origin_flag = std::move(arg);
    return Init_PredictionObstacles_start_timestamp(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacles msg_;
};

class Init_PredictionObstacles_prediction_obstacles
{
public:
  explicit Init_PredictionObstacles_prediction_obstacles(::ros2_interface::msg::PredictionObstacles & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacles_change_origin_flag prediction_obstacles(::ros2_interface::msg::PredictionObstacles::_prediction_obstacles_type arg)
  {
    msg_.prediction_obstacles = std::move(arg);
    return Init_PredictionObstacles_change_origin_flag(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacles msg_;
};

class Init_PredictionObstacles_header
{
public:
  Init_PredictionObstacles_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredictionObstacles_prediction_obstacles header(::ros2_interface::msg::PredictionObstacles::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PredictionObstacles_prediction_obstacles(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PredictionObstacles>()
{
  return ros2_interface::msg::builder::Init_PredictionObstacles_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__BUILDER_HPP_

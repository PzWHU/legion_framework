// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PredictionObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/prediction_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PredictionObstacle_is_static
{
public:
  explicit Init_PredictionObstacle_is_static(::ros2_interface::msg::PredictionObstacle & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PredictionObstacle is_static(::ros2_interface::msg::PredictionObstacle::_is_static_type arg)
  {
    msg_.is_static = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacle msg_;
};

class Init_PredictionObstacle_interactive_tag
{
public:
  explicit Init_PredictionObstacle_interactive_tag(::ros2_interface::msg::PredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacle_is_static interactive_tag(::ros2_interface::msg::PredictionObstacle::_interactive_tag_type arg)
  {
    msg_.interactive_tag = std::move(arg);
    return Init_PredictionObstacle_is_static(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacle msg_;
};

class Init_PredictionObstacle_priority
{
public:
  explicit Init_PredictionObstacle_priority(::ros2_interface::msg::PredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacle_interactive_tag priority(::ros2_interface::msg::PredictionObstacle::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_PredictionObstacle_interactive_tag(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacle msg_;
};

class Init_PredictionObstacle_intent
{
public:
  explicit Init_PredictionObstacle_intent(::ros2_interface::msg::PredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacle_priority intent(::ros2_interface::msg::PredictionObstacle::_intent_type arg)
  {
    msg_.intent = std::move(arg);
    return Init_PredictionObstacle_priority(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacle msg_;
};

class Init_PredictionObstacle_trajectory
{
public:
  explicit Init_PredictionObstacle_trajectory(::ros2_interface::msg::PredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacle_intent trajectory(::ros2_interface::msg::PredictionObstacle::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_PredictionObstacle_intent(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacle msg_;
};

class Init_PredictionObstacle_predicted_period
{
public:
  explicit Init_PredictionObstacle_predicted_period(::ros2_interface::msg::PredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacle_trajectory predicted_period(::ros2_interface::msg::PredictionObstacle::_predicted_period_type arg)
  {
    msg_.predicted_period = std::move(arg);
    return Init_PredictionObstacle_trajectory(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacle msg_;
};

class Init_PredictionObstacle_timestamp
{
public:
  explicit Init_PredictionObstacle_timestamp(::ros2_interface::msg::PredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_PredictionObstacle_predicted_period timestamp(::ros2_interface::msg::PredictionObstacle::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PredictionObstacle_predicted_period(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacle msg_;
};

class Init_PredictionObstacle_perception_obstacle
{
public:
  Init_PredictionObstacle_perception_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredictionObstacle_timestamp perception_obstacle(::ros2_interface::msg::PredictionObstacle::_perception_obstacle_type arg)
  {
    msg_.perception_obstacle = std::move(arg);
    return Init_PredictionObstacle_timestamp(msg_);
  }

private:
  ::ros2_interface::msg::PredictionObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PredictionObstacle>()
{
  return ros2_interface::msg::builder::Init_PredictionObstacle_perception_obstacle();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__BUILDER_HPP_

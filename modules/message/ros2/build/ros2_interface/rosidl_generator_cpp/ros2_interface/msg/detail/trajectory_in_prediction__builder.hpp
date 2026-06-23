// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrajectoryInPrediction.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_IN_PREDICTION__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_IN_PREDICTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/trajectory_in_prediction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrajectoryInPrediction_trajectory_points
{
public:
  explicit Init_TrajectoryInPrediction_trajectory_points(::ros2_interface::msg::TrajectoryInPrediction & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrajectoryInPrediction trajectory_points(::ros2_interface::msg::TrajectoryInPrediction::_trajectory_points_type arg)
  {
    msg_.trajectory_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryInPrediction msg_;
};

class Init_TrajectoryInPrediction_probability
{
public:
  Init_TrajectoryInPrediction_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryInPrediction_trajectory_points probability(::ros2_interface::msg::TrajectoryInPrediction::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_TrajectoryInPrediction_trajectory_points(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryInPrediction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrajectoryInPrediction>()
{
  return ros2_interface::msg::builder::Init_TrajectoryInPrediction_probability();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_IN_PREDICTION__BUILDER_HPP_

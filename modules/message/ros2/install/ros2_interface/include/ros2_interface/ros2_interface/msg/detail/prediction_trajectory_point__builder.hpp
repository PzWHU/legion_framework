// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PredictionTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_TRAJECTORY_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/prediction_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PredictionTrajectoryPoint_timestamp
{
public:
  explicit Init_PredictionTrajectoryPoint_timestamp(::ros2_interface::msg::PredictionTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PredictionTrajectoryPoint timestamp(::ros2_interface::msg::PredictionTrajectoryPoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PredictionTrajectoryPoint msg_;
};

class Init_PredictionTrajectoryPoint_predition_path_point
{
public:
  Init_PredictionTrajectoryPoint_predition_path_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredictionTrajectoryPoint_timestamp predition_path_point(::ros2_interface::msg::PredictionTrajectoryPoint::_predition_path_point_type arg)
  {
    msg_.predition_path_point = std::move(arg);
    return Init_PredictionTrajectoryPoint_timestamp(msg_);
  }

private:
  ::ros2_interface::msg::PredictionTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PredictionTrajectoryPoint>()
{
  return ros2_interface::msg::builder::Init_PredictionTrajectoryPoint_predition_path_point();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_TRAJECTORY_POINT__BUILDER_HPP_

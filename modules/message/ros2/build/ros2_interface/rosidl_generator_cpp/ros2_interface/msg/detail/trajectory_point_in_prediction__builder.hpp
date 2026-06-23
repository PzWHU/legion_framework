// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrajectoryPointInPrediction.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT_IN_PREDICTION__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT_IN_PREDICTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/trajectory_point_in_prediction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPointInPrediction_relative_time
{
public:
  explicit Init_TrajectoryPointInPrediction_relative_time(::ros2_interface::msg::TrajectoryPointInPrediction & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrajectoryPointInPrediction relative_time(::ros2_interface::msg::TrajectoryPointInPrediction::_relative_time_type arg)
  {
    msg_.relative_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPointInPrediction msg_;
};

class Init_TrajectoryPointInPrediction_a
{
public:
  explicit Init_TrajectoryPointInPrediction_a(::ros2_interface::msg::TrajectoryPointInPrediction & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPointInPrediction_relative_time a(::ros2_interface::msg::TrajectoryPointInPrediction::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TrajectoryPointInPrediction_relative_time(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPointInPrediction msg_;
};

class Init_TrajectoryPointInPrediction_v
{
public:
  explicit Init_TrajectoryPointInPrediction_v(::ros2_interface::msg::TrajectoryPointInPrediction & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPointInPrediction_a v(::ros2_interface::msg::TrajectoryPointInPrediction::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_TrajectoryPointInPrediction_a(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPointInPrediction msg_;
};

class Init_TrajectoryPointInPrediction_path_point
{
public:
  Init_TrajectoryPointInPrediction_path_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPointInPrediction_v path_point(::ros2_interface::msg::TrajectoryPointInPrediction::_path_point_type arg)
  {
    msg_.path_point = std::move(arg);
    return Init_TrajectoryPointInPrediction_v(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPointInPrediction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrajectoryPointInPrediction>()
{
  return ros2_interface::msg::builder::Init_TrajectoryPointInPrediction_path_point();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT_IN_PREDICTION__BUILDER_HPP_

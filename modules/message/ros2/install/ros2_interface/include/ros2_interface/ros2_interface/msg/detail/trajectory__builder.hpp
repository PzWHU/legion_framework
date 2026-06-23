// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Trajectory_trajectory_points
{
public:
  explicit Init_Trajectory_trajectory_points(::ros2_interface::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Trajectory trajectory_points(::ros2_interface::msg::Trajectory::_trajectory_points_type arg)
  {
    msg_.trajectory_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Trajectory msg_;
};

class Init_Trajectory_name
{
public:
  Init_Trajectory_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_trajectory_points name(::ros2_interface::msg::Trajectory::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Trajectory_trajectory_points(msg_);
  }

private:
  ::ros2_interface::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Trajectory>()
{
  return ros2_interface::msg::builder::Init_Trajectory_name();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

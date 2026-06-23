// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMITrajectory.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_TRAJECTORY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMITrajectory_trajectory_points
{
public:
  explicit Init_HMITrajectory_trajectory_points(::ros2_interface::msg::HMITrajectory & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMITrajectory trajectory_points(::ros2_interface::msg::HMITrajectory::_trajectory_points_type arg)
  {
    msg_.trajectory_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMITrajectory msg_;
};

class Init_HMITrajectory_header
{
public:
  Init_HMITrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMITrajectory_trajectory_points header(::ros2_interface::msg::HMITrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HMITrajectory_trajectory_points(msg_);
  }

private:
  ::ros2_interface::msg::HMITrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMITrajectory>()
{
  return ros2_interface::msg::builder::Init_HMITrajectory_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_TRAJECTORY__BUILDER_HPP_

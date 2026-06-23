// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Odometry.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ODOMETRY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Odometry_covariance
{
public:
  explicit Init_Odometry_covariance(::ros2_interface::msg::Odometry & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Odometry covariance(::ros2_interface::msg::Odometry::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Odometry msg_;
};

class Init_Odometry_orientation
{
public:
  explicit Init_Odometry_orientation(::ros2_interface::msg::Odometry & msg)
  : msg_(msg)
  {}
  Init_Odometry_covariance orientation(::ros2_interface::msg::Odometry::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Odometry_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Odometry msg_;
};

class Init_Odometry_position
{
public:
  explicit Init_Odometry_position(::ros2_interface::msg::Odometry & msg)
  : msg_(msg)
  {}
  Init_Odometry_orientation position(::ros2_interface::msg::Odometry::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Odometry_orientation(msg_);
  }

private:
  ::ros2_interface::msg::Odometry msg_;
};

class Init_Odometry_header
{
public:
  Init_Odometry_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odometry_position header(::ros2_interface::msg::Odometry::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Odometry_position(msg_);
  }

private:
  ::ros2_interface::msg::Odometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Odometry>()
{
  return ros2_interface::msg::builder::Init_Odometry_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ODOMETRY__BUILDER_HPP_

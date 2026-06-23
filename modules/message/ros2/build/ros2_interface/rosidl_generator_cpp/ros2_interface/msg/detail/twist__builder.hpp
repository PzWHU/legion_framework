// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TWIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TWIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/twist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Twist_angular
{
public:
  explicit Init_Twist_angular(::ros2_interface::msg::Twist & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Twist angular(::ros2_interface::msg::Twist::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Twist msg_;
};

class Init_Twist_linear
{
public:
  explicit Init_Twist_linear(::ros2_interface::msg::Twist & msg)
  : msg_(msg)
  {}
  Init_Twist_angular linear(::ros2_interface::msg::Twist::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_Twist_angular(msg_);
  }

private:
  ::ros2_interface::msg::Twist msg_;
};

class Init_Twist_header
{
public:
  Init_Twist_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Twist_linear header(::ros2_interface::msg::Twist::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Twist_linear(msg_);
  }

private:
  ::ros2_interface::msg::Twist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Twist>()
{
  return ros2_interface::msg::builder::Init_Twist_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TWIST__BUILDER_HPP_

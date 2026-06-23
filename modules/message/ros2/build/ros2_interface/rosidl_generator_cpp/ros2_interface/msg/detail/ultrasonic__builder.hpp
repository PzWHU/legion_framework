// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/ultrasonic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Ultrasonic_ranges
{
public:
  explicit Init_Ultrasonic_ranges(::ros2_interface::msg::Ultrasonic & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Ultrasonic ranges(::ros2_interface::msg::Ultrasonic::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Ultrasonic msg_;
};

class Init_Ultrasonic_header
{
public:
  Init_Ultrasonic_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ultrasonic_ranges header(::ros2_interface::msg::Ultrasonic::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Ultrasonic_ranges(msg_);
  }

private:
  ::ros2_interface::msg::Ultrasonic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Ultrasonic>()
{
  return ros2_interface::msg::builder::Init_Ultrasonic_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_ARRAY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/diagnostic_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_DiagnosticArray_status
{
public:
  explicit Init_DiagnosticArray_status(::ros2_interface::msg::DiagnosticArray & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::DiagnosticArray status(::ros2_interface::msg::DiagnosticArray::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::DiagnosticArray msg_;
};

class Init_DiagnosticArray_header
{
public:
  Init_DiagnosticArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticArray_status header(::ros2_interface::msg::DiagnosticArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticArray_status(msg_);
  }

private:
  ::ros2_interface::msg::DiagnosticArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::DiagnosticArray>()
{
  return ros2_interface::msg::builder::Init_DiagnosticArray_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_ARRAY__BUILDER_HPP_

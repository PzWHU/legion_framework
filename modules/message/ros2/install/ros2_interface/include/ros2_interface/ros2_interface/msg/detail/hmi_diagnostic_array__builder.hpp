// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMIDiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_ARRAY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_diagnostic_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMIDiagnosticArray_status
{
public:
  explicit Init_HMIDiagnosticArray_status(::ros2_interface::msg::HMIDiagnosticArray & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMIDiagnosticArray status(::ros2_interface::msg::HMIDiagnosticArray::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMIDiagnosticArray msg_;
};

class Init_HMIDiagnosticArray_header
{
public:
  Init_HMIDiagnosticArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMIDiagnosticArray_status header(::ros2_interface::msg::HMIDiagnosticArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HMIDiagnosticArray_status(msg_);
  }

private:
  ::ros2_interface::msg::HMIDiagnosticArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMIDiagnosticArray>()
{
  return ros2_interface::msg::builder::Init_HMIDiagnosticArray_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_ARRAY__BUILDER_HPP_

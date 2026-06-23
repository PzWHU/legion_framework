// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Fault.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FAULT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__FAULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/fault__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Fault_reason
{
public:
  explicit Init_Fault_reason(::ros2_interface::msg::Fault & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Fault reason(::ros2_interface::msg::Fault::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Fault msg_;
};

class Init_Fault_code
{
public:
  explicit Init_Fault_code(::ros2_interface::msg::Fault & msg)
  : msg_(msg)
  {}
  Init_Fault_reason code(::ros2_interface::msg::Fault::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Fault_reason(msg_);
  }

private:
  ::ros2_interface::msg::Fault msg_;
};

class Init_Fault_timestamp
{
public:
  Init_Fault_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fault_code timestamp(::ros2_interface::msg::Fault::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Fault_code(msg_);
  }

private:
  ::ros2_interface::msg::Fault msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Fault>()
{
  return ros2_interface::msg::builder::Init_Fault_timestamp();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__FAULT__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__MESSAGE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Message_value
{
public:
  explicit Init_Message_value(::ros2_interface::msg::Message & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Message value(::ros2_interface::msg::Message::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Message msg_;
};

class Init_Message_code
{
public:
  Init_Message_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Message_value code(::ros2_interface::msg::Message::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Message_value(msg_);
  }

private:
  ::ros2_interface::msg::Message msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Message>()
{
  return ros2_interface::msg::builder::Init_Message_code();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__MESSAGE__BUILDER_HPP_

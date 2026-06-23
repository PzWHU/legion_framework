// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__EVENT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Event_reason
{
public:
  explicit Init_Event_reason(::ros2_interface::msg::Event & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Event reason(::ros2_interface::msg::Event::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Event msg_;
};

class Init_Event_code
{
public:
  explicit Init_Event_code(::ros2_interface::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_reason code(::ros2_interface::msg::Event::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Event_reason(msg_);
  }

private:
  ::ros2_interface::msg::Event msg_;
};

class Init_Event_timestamp
{
public:
  Init_Event_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Event_code timestamp(::ros2_interface::msg::Event::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Event_code(msg_);
  }

private:
  ::ros2_interface::msg::Event msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Event>()
{
  return ros2_interface::msg::builder::Init_Event_timestamp();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__EVENT__BUILDER_HPP_

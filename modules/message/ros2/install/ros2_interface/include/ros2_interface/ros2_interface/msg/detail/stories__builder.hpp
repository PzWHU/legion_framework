// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Stories.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STORIES__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__STORIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/stories__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Stories_note
{
public:
  Init_Stories_note()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_interface::msg::Stories note(::ros2_interface::msg::Stories::_note_type arg)
  {
    msg_.note = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Stories msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Stories>()
{
  return ros2_interface::msg::builder::Init_Stories_note();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__STORIES__BUILDER_HPP_

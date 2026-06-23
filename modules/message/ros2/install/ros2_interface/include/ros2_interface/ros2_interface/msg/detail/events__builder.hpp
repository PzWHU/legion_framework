// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Events.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__EVENTS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__EVENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/events__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Events_events
{
public:
  explicit Init_Events_events(::ros2_interface::msg::Events & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Events events(::ros2_interface::msg::Events::_events_type arg)
  {
    msg_.events = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Events msg_;
};

class Init_Events_version
{
public:
  explicit Init_Events_version(::ros2_interface::msg::Events & msg)
  : msg_(msg)
  {}
  Init_Events_events version(::ros2_interface::msg::Events::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_Events_events(msg_);
  }

private:
  ::ros2_interface::msg::Events msg_;
};

class Init_Events_header
{
public:
  Init_Events_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Events_version header(::ros2_interface::msg::Events::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Events_version(msg_);
  }

private:
  ::ros2_interface::msg::Events msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Events>()
{
  return ros2_interface::msg::builder::Init_Events_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__EVENTS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/AlarmMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/alarm_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_AlarmMessage_alarm_data
{
public:
  explicit Init_AlarmMessage_alarm_data(::ros2_interface::msg::AlarmMessage & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::AlarmMessage alarm_data(::ros2_interface::msg::AlarmMessage::_alarm_data_type arg)
  {
    msg_.alarm_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::AlarmMessage msg_;
};

class Init_AlarmMessage_alarm_display
{
public:
  explicit Init_AlarmMessage_alarm_display(::ros2_interface::msg::AlarmMessage & msg)
  : msg_(msg)
  {}
  Init_AlarmMessage_alarm_data alarm_display(::ros2_interface::msg::AlarmMessage::_alarm_display_type arg)
  {
    msg_.alarm_display = std::move(arg);
    return Init_AlarmMessage_alarm_data(msg_);
  }

private:
  ::ros2_interface::msg::AlarmMessage msg_;
};

class Init_AlarmMessage_alarm_id
{
public:
  explicit Init_AlarmMessage_alarm_id(::ros2_interface::msg::AlarmMessage & msg)
  : msg_(msg)
  {}
  Init_AlarmMessage_alarm_display alarm_id(::ros2_interface::msg::AlarmMessage::_alarm_id_type arg)
  {
    msg_.alarm_id = std::move(arg);
    return Init_AlarmMessage_alarm_display(msg_);
  }

private:
  ::ros2_interface::msg::AlarmMessage msg_;
};

class Init_AlarmMessage_alarm_type
{
public:
  explicit Init_AlarmMessage_alarm_type(::ros2_interface::msg::AlarmMessage & msg)
  : msg_(msg)
  {}
  Init_AlarmMessage_alarm_id alarm_type(::ros2_interface::msg::AlarmMessage::_alarm_type_type arg)
  {
    msg_.alarm_type = std::move(arg);
    return Init_AlarmMessage_alarm_id(msg_);
  }

private:
  ::ros2_interface::msg::AlarmMessage msg_;
};

class Init_AlarmMessage_alarm_level
{
public:
  explicit Init_AlarmMessage_alarm_level(::ros2_interface::msg::AlarmMessage & msg)
  : msg_(msg)
  {}
  Init_AlarmMessage_alarm_type alarm_level(::ros2_interface::msg::AlarmMessage::_alarm_level_type arg)
  {
    msg_.alarm_level = std::move(arg);
    return Init_AlarmMessage_alarm_type(msg_);
  }

private:
  ::ros2_interface::msg::AlarmMessage msg_;
};

class Init_AlarmMessage_alarm_proc
{
public:
  explicit Init_AlarmMessage_alarm_proc(::ros2_interface::msg::AlarmMessage & msg)
  : msg_(msg)
  {}
  Init_AlarmMessage_alarm_level alarm_proc(::ros2_interface::msg::AlarmMessage::_alarm_proc_type arg)
  {
    msg_.alarm_proc = std::move(arg);
    return Init_AlarmMessage_alarm_level(msg_);
  }

private:
  ::ros2_interface::msg::AlarmMessage msg_;
};

class Init_AlarmMessage_header
{
public:
  Init_AlarmMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlarmMessage_alarm_proc header(::ros2_interface::msg::AlarmMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AlarmMessage_alarm_proc(msg_);
  }

private:
  ::ros2_interface::msg::AlarmMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::AlarmMessage>()
{
  return ros2_interface::msg::builder::Init_AlarmMessage_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__BUILDER_HPP_

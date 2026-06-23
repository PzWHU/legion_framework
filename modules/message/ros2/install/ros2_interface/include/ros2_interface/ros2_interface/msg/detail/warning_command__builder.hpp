// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/WarningCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/warning_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_WarningCommand_motion_alarm
{
public:
  explicit Init_WarningCommand_motion_alarm(::ros2_interface::msg::WarningCommand & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::WarningCommand motion_alarm(::ros2_interface::msg::WarningCommand::_motion_alarm_type arg)
  {
    msg_.motion_alarm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::WarningCommand msg_;
};

class Init_WarningCommand_media_alarm
{
public:
  explicit Init_WarningCommand_media_alarm(::ros2_interface::msg::WarningCommand & msg)
  : msg_(msg)
  {}
  Init_WarningCommand_motion_alarm media_alarm(::ros2_interface::msg::WarningCommand::_media_alarm_type arg)
  {
    msg_.media_alarm = std::move(arg);
    return Init_WarningCommand_motion_alarm(msg_);
  }

private:
  ::ros2_interface::msg::WarningCommand msg_;
};

class Init_WarningCommand_light_alarm
{
public:
  explicit Init_WarningCommand_light_alarm(::ros2_interface::msg::WarningCommand & msg)
  : msg_(msg)
  {}
  Init_WarningCommand_media_alarm light_alarm(::ros2_interface::msg::WarningCommand::_light_alarm_type arg)
  {
    msg_.light_alarm = std::move(arg);
    return Init_WarningCommand_media_alarm(msg_);
  }

private:
  ::ros2_interface::msg::WarningCommand msg_;
};

class Init_WarningCommand_sound_alarm
{
public:
  Init_WarningCommand_sound_alarm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WarningCommand_light_alarm sound_alarm(::ros2_interface::msg::WarningCommand::_sound_alarm_type arg)
  {
    msg_.sound_alarm = std::move(arg);
    return Init_WarningCommand_light_alarm(msg_);
  }

private:
  ::ros2_interface::msg::WarningCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::WarningCommand>()
{
  return ros2_interface::msg::builder::Init_WarningCommand_sound_alarm();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__BUILDER_HPP_

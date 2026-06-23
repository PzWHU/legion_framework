// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Log_line
{
public:
  explicit Init_Log_line(::ros2_interface::msg::Log & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Log line(::ros2_interface::msg::Log::_line_type arg)
  {
    msg_.line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Log msg_;
};

class Init_Log_function
{
public:
  explicit Init_Log_function(::ros2_interface::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_line function(::ros2_interface::msg::Log::_function_type arg)
  {
    msg_.function = std::move(arg);
    return Init_Log_line(msg_);
  }

private:
  ::ros2_interface::msg::Log msg_;
};

class Init_Log_file
{
public:
  explicit Init_Log_file(::ros2_interface::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_function file(::ros2_interface::msg::Log::_file_type arg)
  {
    msg_.file = std::move(arg);
    return Init_Log_function(msg_);
  }

private:
  ::ros2_interface::msg::Log msg_;
};

class Init_Log_msg
{
public:
  explicit Init_Log_msg(::ros2_interface::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_file msg(::ros2_interface::msg::Log::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_Log_file(msg_);
  }

private:
  ::ros2_interface::msg::Log msg_;
};

class Init_Log_name
{
public:
  explicit Init_Log_name(::ros2_interface::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_msg name(::ros2_interface::msg::Log::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Log_msg(msg_);
  }

private:
  ::ros2_interface::msg::Log msg_;
};

class Init_Log_level
{
public:
  explicit Init_Log_level(::ros2_interface::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_name level(::ros2_interface::msg::Log::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_Log_name(msg_);
  }

private:
  ::ros2_interface::msg::Log msg_;
};

class Init_Log_stamp
{
public:
  Init_Log_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Log_level stamp(::ros2_interface::msg::Log::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Log_level(msg_);
  }

private:
  ::ros2_interface::msg::Log msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Log>()
{
  return ros2_interface::msg::builder::Init_Log_stamp();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOG__BUILDER_HPP_

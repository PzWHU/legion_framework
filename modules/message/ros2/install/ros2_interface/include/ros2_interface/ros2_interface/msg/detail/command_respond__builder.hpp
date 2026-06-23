// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/CommandRespond.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/command_respond__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_CommandRespond_fail_code
{
public:
  explicit Init_CommandRespond_fail_code(::ros2_interface::msg::CommandRespond & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::CommandRespond fail_code(::ros2_interface::msg::CommandRespond::_fail_code_type arg)
  {
    msg_.fail_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::CommandRespond msg_;
};

class Init_CommandRespond_status
{
public:
  explicit Init_CommandRespond_status(::ros2_interface::msg::CommandRespond & msg)
  : msg_(msg)
  {}
  Init_CommandRespond_fail_code status(::ros2_interface::msg::CommandRespond::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CommandRespond_fail_code(msg_);
  }

private:
  ::ros2_interface::msg::CommandRespond msg_;
};

class Init_CommandRespond_respond_id
{
public:
  explicit Init_CommandRespond_respond_id(::ros2_interface::msg::CommandRespond & msg)
  : msg_(msg)
  {}
  Init_CommandRespond_status respond_id(::ros2_interface::msg::CommandRespond::_respond_id_type arg)
  {
    msg_.respond_id = std::move(arg);
    return Init_CommandRespond_status(msg_);
  }

private:
  ::ros2_interface::msg::CommandRespond msg_;
};

class Init_CommandRespond_self_id
{
public:
  explicit Init_CommandRespond_self_id(::ros2_interface::msg::CommandRespond & msg)
  : msg_(msg)
  {}
  Init_CommandRespond_respond_id self_id(::ros2_interface::msg::CommandRespond::_self_id_type arg)
  {
    msg_.self_id = std::move(arg);
    return Init_CommandRespond_respond_id(msg_);
  }

private:
  ::ros2_interface::msg::CommandRespond msg_;
};

class Init_CommandRespond_name
{
public:
  explicit Init_CommandRespond_name(::ros2_interface::msg::CommandRespond & msg)
  : msg_(msg)
  {}
  Init_CommandRespond_self_id name(::ros2_interface::msg::CommandRespond::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CommandRespond_self_id(msg_);
  }

private:
  ::ros2_interface::msg::CommandRespond msg_;
};

class Init_CommandRespond_header
{
public:
  Init_CommandRespond_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommandRespond_name header(::ros2_interface::msg::CommandRespond::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CommandRespond_name(msg_);
  }

private:
  ::ros2_interface::msg::CommandRespond msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::CommandRespond>()
{
  return ros2_interface::msg::builder::Init_CommandRespond_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__BUILDER_HPP_

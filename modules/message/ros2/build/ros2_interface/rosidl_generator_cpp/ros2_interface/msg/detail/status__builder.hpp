// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STATUS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Status_msg
{
public:
  explicit Init_Status_msg(::ros2_interface::msg::Status & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Status msg(::ros2_interface::msg::Status::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Status msg_;
};

class Init_Status_error_code
{
public:
  Init_Status_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_msg error_code(::ros2_interface::msg::Status::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Status_msg(msg_);
  }

private:
  ::ros2_interface::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Status>()
{
  return ros2_interface::msg::builder::Init_Status_error_code();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__STATUS__BUILDER_HPP_

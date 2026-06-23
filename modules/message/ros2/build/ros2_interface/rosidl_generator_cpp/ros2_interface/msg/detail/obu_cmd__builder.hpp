// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ObuCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBU_CMD__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBU_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/obu_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ObuCmd_val
{
public:
  explicit Init_ObuCmd_val(::ros2_interface::msg::ObuCmd & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ObuCmd val(::ros2_interface::msg::ObuCmd::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ObuCmd msg_;
};

class Init_ObuCmd_code
{
public:
  Init_ObuCmd_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObuCmd_val code(::ros2_interface::msg::ObuCmd::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_ObuCmd_val(msg_);
  }

private:
  ::ros2_interface::msg::ObuCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ObuCmd>()
{
  return ros2_interface::msg::builder::Init_ObuCmd_code();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBU_CMD__BUILDER_HPP_

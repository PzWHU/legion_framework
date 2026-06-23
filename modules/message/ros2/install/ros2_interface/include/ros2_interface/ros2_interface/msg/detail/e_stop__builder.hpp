// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/EStop.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__E_STOP__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__E_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/e_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_EStop_reason
{
public:
  explicit Init_EStop_reason(::ros2_interface::msg::EStop & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::EStop reason(::ros2_interface::msg::EStop::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::EStop msg_;
};

class Init_EStop_is_estop
{
public:
  Init_EStop_is_estop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EStop_reason is_estop(::ros2_interface::msg::EStop::_is_estop_type arg)
  {
    msg_.is_estop = std::move(arg);
    return Init_EStop_reason(msg_);
  }

private:
  ::ros2_interface::msg::EStop msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::EStop>()
{
  return ros2_interface::msg::builder::Init_EStop_is_estop();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__E_STOP__BUILDER_HPP_

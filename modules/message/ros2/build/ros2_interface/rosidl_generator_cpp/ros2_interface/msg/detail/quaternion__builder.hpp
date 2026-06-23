// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__QUATERNION__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__QUATERNION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/quaternion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Quaternion_qw
{
public:
  explicit Init_Quaternion_qw(::ros2_interface::msg::Quaternion & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Quaternion qw(::ros2_interface::msg::Quaternion::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Quaternion msg_;
};

class Init_Quaternion_qz
{
public:
  explicit Init_Quaternion_qz(::ros2_interface::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_qw qz(::ros2_interface::msg::Quaternion::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_Quaternion_qw(msg_);
  }

private:
  ::ros2_interface::msg::Quaternion msg_;
};

class Init_Quaternion_qy
{
public:
  explicit Init_Quaternion_qy(::ros2_interface::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_qz qy(::ros2_interface::msg::Quaternion::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_Quaternion_qz(msg_);
  }

private:
  ::ros2_interface::msg::Quaternion msg_;
};

class Init_Quaternion_qx
{
public:
  Init_Quaternion_qx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quaternion_qy qx(::ros2_interface::msg::Quaternion::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_Quaternion_qy(msg_);
  }

private:
  ::ros2_interface::msg::Quaternion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Quaternion>()
{
  return ros2_interface::msg::builder::Init_Quaternion_qx();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__QUATERNION__BUILDER_HPP_

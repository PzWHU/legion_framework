// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PointBasic.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_BASIC__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_BASIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/point_basic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PointBasic_theta
{
public:
  explicit Init_PointBasic_theta(::ros2_interface::msg::PointBasic & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PointBasic theta(::ros2_interface::msg::PointBasic::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PointBasic msg_;
};

class Init_PointBasic_z
{
public:
  explicit Init_PointBasic_z(::ros2_interface::msg::PointBasic & msg)
  : msg_(msg)
  {}
  Init_PointBasic_theta z(::ros2_interface::msg::PointBasic::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PointBasic_theta(msg_);
  }

private:
  ::ros2_interface::msg::PointBasic msg_;
};

class Init_PointBasic_y
{
public:
  explicit Init_PointBasic_y(::ros2_interface::msg::PointBasic & msg)
  : msg_(msg)
  {}
  Init_PointBasic_z y(::ros2_interface::msg::PointBasic::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PointBasic_z(msg_);
  }

private:
  ::ros2_interface::msg::PointBasic msg_;
};

class Init_PointBasic_x
{
public:
  Init_PointBasic_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointBasic_y x(::ros2_interface::msg::PointBasic::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointBasic_y(msg_);
  }

private:
  ::ros2_interface::msg::PointBasic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PointBasic>()
{
  return ros2_interface::msg::builder::Init_PointBasic_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_BASIC__BUILDER_HPP_

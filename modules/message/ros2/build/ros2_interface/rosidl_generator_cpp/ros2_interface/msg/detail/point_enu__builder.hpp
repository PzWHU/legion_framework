// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PointENU.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_ENU__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_ENU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/point_enu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PointENU_z
{
public:
  explicit Init_PointENU_z(::ros2_interface::msg::PointENU & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PointENU z(::ros2_interface::msg::PointENU::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PointENU msg_;
};

class Init_PointENU_y
{
public:
  explicit Init_PointENU_y(::ros2_interface::msg::PointENU & msg)
  : msg_(msg)
  {}
  Init_PointENU_z y(::ros2_interface::msg::PointENU::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PointENU_z(msg_);
  }

private:
  ::ros2_interface::msg::PointENU msg_;
};

class Init_PointENU_x
{
public:
  Init_PointENU_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointENU_y x(::ros2_interface::msg::PointENU::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointENU_y(msg_);
  }

private:
  ::ros2_interface::msg::PointENU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PointENU>()
{
  return ros2_interface::msg::builder::Init_PointENU_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_ENU__BUILDER_HPP_

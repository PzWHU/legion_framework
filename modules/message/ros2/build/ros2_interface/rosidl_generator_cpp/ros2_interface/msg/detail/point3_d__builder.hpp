// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Point3D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT3_D__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POINT3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/point3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Point3D_z
{
public:
  explicit Init_Point3D_z(::ros2_interface::msg::Point3D & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Point3D z(::ros2_interface::msg::Point3D::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Point3D msg_;
};

class Init_Point3D_y
{
public:
  explicit Init_Point3D_y(::ros2_interface::msg::Point3D & msg)
  : msg_(msg)
  {}
  Init_Point3D_z y(::ros2_interface::msg::Point3D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Point3D_z(msg_);
  }

private:
  ::ros2_interface::msg::Point3D msg_;
};

class Init_Point3D_x
{
public:
  Init_Point3D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point3D_y x(::ros2_interface::msg::Point3D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point3D_y(msg_);
  }

private:
  ::ros2_interface::msg::Point3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Point3D>()
{
  return ros2_interface::msg::builder::Init_Point3D_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT3_D__BUILDER_HPP_

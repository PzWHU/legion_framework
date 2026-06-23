// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Matrix3D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/matrix3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Matrix3D_a22
{
public:
  explicit Init_Matrix3D_a22(::ros2_interface::msg::Matrix3D & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Matrix3D a22(::ros2_interface::msg::Matrix3D::_a22_type arg)
  {
    msg_.a22 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Matrix3D msg_;
};

class Init_Matrix3D_a21
{
public:
  explicit Init_Matrix3D_a21(::ros2_interface::msg::Matrix3D & msg)
  : msg_(msg)
  {}
  Init_Matrix3D_a22 a21(::ros2_interface::msg::Matrix3D::_a21_type arg)
  {
    msg_.a21 = std::move(arg);
    return Init_Matrix3D_a22(msg_);
  }

private:
  ::ros2_interface::msg::Matrix3D msg_;
};

class Init_Matrix3D_a20
{
public:
  explicit Init_Matrix3D_a20(::ros2_interface::msg::Matrix3D & msg)
  : msg_(msg)
  {}
  Init_Matrix3D_a21 a20(::ros2_interface::msg::Matrix3D::_a20_type arg)
  {
    msg_.a20 = std::move(arg);
    return Init_Matrix3D_a21(msg_);
  }

private:
  ::ros2_interface::msg::Matrix3D msg_;
};

class Init_Matrix3D_a12
{
public:
  explicit Init_Matrix3D_a12(::ros2_interface::msg::Matrix3D & msg)
  : msg_(msg)
  {}
  Init_Matrix3D_a20 a12(::ros2_interface::msg::Matrix3D::_a12_type arg)
  {
    msg_.a12 = std::move(arg);
    return Init_Matrix3D_a20(msg_);
  }

private:
  ::ros2_interface::msg::Matrix3D msg_;
};

class Init_Matrix3D_a11
{
public:
  explicit Init_Matrix3D_a11(::ros2_interface::msg::Matrix3D & msg)
  : msg_(msg)
  {}
  Init_Matrix3D_a12 a11(::ros2_interface::msg::Matrix3D::_a11_type arg)
  {
    msg_.a11 = std::move(arg);
    return Init_Matrix3D_a12(msg_);
  }

private:
  ::ros2_interface::msg::Matrix3D msg_;
};

class Init_Matrix3D_a10
{
public:
  explicit Init_Matrix3D_a10(::ros2_interface::msg::Matrix3D & msg)
  : msg_(msg)
  {}
  Init_Matrix3D_a11 a10(::ros2_interface::msg::Matrix3D::_a10_type arg)
  {
    msg_.a10 = std::move(arg);
    return Init_Matrix3D_a11(msg_);
  }

private:
  ::ros2_interface::msg::Matrix3D msg_;
};

class Init_Matrix3D_a02
{
public:
  explicit Init_Matrix3D_a02(::ros2_interface::msg::Matrix3D & msg)
  : msg_(msg)
  {}
  Init_Matrix3D_a10 a02(::ros2_interface::msg::Matrix3D::_a02_type arg)
  {
    msg_.a02 = std::move(arg);
    return Init_Matrix3D_a10(msg_);
  }

private:
  ::ros2_interface::msg::Matrix3D msg_;
};

class Init_Matrix3D_a01
{
public:
  explicit Init_Matrix3D_a01(::ros2_interface::msg::Matrix3D & msg)
  : msg_(msg)
  {}
  Init_Matrix3D_a02 a01(::ros2_interface::msg::Matrix3D::_a01_type arg)
  {
    msg_.a01 = std::move(arg);
    return Init_Matrix3D_a02(msg_);
  }

private:
  ::ros2_interface::msg::Matrix3D msg_;
};

class Init_Matrix3D_a00
{
public:
  Init_Matrix3D_a00()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Matrix3D_a01 a00(::ros2_interface::msg::Matrix3D::_a00_type arg)
  {
    msg_.a00 = std::move(arg);
    return Init_Matrix3D_a01(msg_);
  }

private:
  ::ros2_interface::msg::Matrix3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Matrix3D>()
{
  return ros2_interface::msg::builder::Init_Matrix3D_a00();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__BUILDER_HPP_

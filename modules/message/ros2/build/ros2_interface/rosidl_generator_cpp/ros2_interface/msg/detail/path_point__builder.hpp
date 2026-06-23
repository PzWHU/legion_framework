// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/path_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PathPoint_y_derivative
{
public:
  explicit Init_PathPoint_y_derivative(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PathPoint y_derivative(::ros2_interface::msg::PathPoint::_y_derivative_type arg)
  {
    msg_.y_derivative = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_x_derivative
{
public:
  explicit Init_PathPoint_x_derivative(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_y_derivative x_derivative(::ros2_interface::msg::PathPoint::_x_derivative_type arg)
  {
    msg_.x_derivative = std::move(arg);
    return Init_PathPoint_y_derivative(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_lane_id
{
public:
  explicit Init_PathPoint_lane_id(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_x_derivative lane_id(::ros2_interface::msg::PathPoint::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_PathPoint_x_derivative(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_ddkappa
{
public:
  explicit Init_PathPoint_ddkappa(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_lane_id ddkappa(::ros2_interface::msg::PathPoint::_ddkappa_type arg)
  {
    msg_.ddkappa = std::move(arg);
    return Init_PathPoint_lane_id(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_dkappa
{
public:
  explicit Init_PathPoint_dkappa(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_ddkappa dkappa(::ros2_interface::msg::PathPoint::_dkappa_type arg)
  {
    msg_.dkappa = std::move(arg);
    return Init_PathPoint_ddkappa(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_s
{
public:
  explicit Init_PathPoint_s(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_dkappa s(::ros2_interface::msg::PathPoint::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_PathPoint_dkappa(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_kappa
{
public:
  explicit Init_PathPoint_kappa(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_s kappa(::ros2_interface::msg::PathPoint::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_PathPoint_s(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_theta
{
public:
  explicit Init_PathPoint_theta(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_kappa theta(::ros2_interface::msg::PathPoint::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_PathPoint_kappa(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_z
{
public:
  explicit Init_PathPoint_z(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_theta z(::ros2_interface::msg::PathPoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PathPoint_theta(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_y
{
public:
  explicit Init_PathPoint_y(::ros2_interface::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_z y(::ros2_interface::msg::PathPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PathPoint_z(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

class Init_PathPoint_x
{
public:
  Init_PathPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPoint_y x(::ros2_interface::msg::PathPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PathPoint_y(msg_);
  }

private:
  ::ros2_interface::msg::PathPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PathPoint>()
{
  return ros2_interface::msg::builder::Init_PathPoint_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__BUILDER_HPP_

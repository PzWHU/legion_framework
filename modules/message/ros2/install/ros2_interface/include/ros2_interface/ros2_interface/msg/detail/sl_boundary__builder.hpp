// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SL_BOUNDARY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SL_BOUNDARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/sl_boundary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_SLBoundary_boundary_point
{
public:
  explicit Init_SLBoundary_boundary_point(::ros2_interface::msg::SLBoundary & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::SLBoundary boundary_point(::ros2_interface::msg::SLBoundary::_boundary_point_type arg)
  {
    msg_.boundary_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::SLBoundary msg_;
};

class Init_SLBoundary_end_l
{
public:
  explicit Init_SLBoundary_end_l(::ros2_interface::msg::SLBoundary & msg)
  : msg_(msg)
  {}
  Init_SLBoundary_boundary_point end_l(::ros2_interface::msg::SLBoundary::_end_l_type arg)
  {
    msg_.end_l = std::move(arg);
    return Init_SLBoundary_boundary_point(msg_);
  }

private:
  ::ros2_interface::msg::SLBoundary msg_;
};

class Init_SLBoundary_start_l
{
public:
  explicit Init_SLBoundary_start_l(::ros2_interface::msg::SLBoundary & msg)
  : msg_(msg)
  {}
  Init_SLBoundary_end_l start_l(::ros2_interface::msg::SLBoundary::_start_l_type arg)
  {
    msg_.start_l = std::move(arg);
    return Init_SLBoundary_end_l(msg_);
  }

private:
  ::ros2_interface::msg::SLBoundary msg_;
};

class Init_SLBoundary_end_s
{
public:
  explicit Init_SLBoundary_end_s(::ros2_interface::msg::SLBoundary & msg)
  : msg_(msg)
  {}
  Init_SLBoundary_start_l end_s(::ros2_interface::msg::SLBoundary::_end_s_type arg)
  {
    msg_.end_s = std::move(arg);
    return Init_SLBoundary_start_l(msg_);
  }

private:
  ::ros2_interface::msg::SLBoundary msg_;
};

class Init_SLBoundary_start_s
{
public:
  Init_SLBoundary_start_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SLBoundary_end_s start_s(::ros2_interface::msg::SLBoundary::_start_s_type arg)
  {
    msg_.start_s = std::move(arg);
    return Init_SLBoundary_end_s(msg_);
  }

private:
  ::ros2_interface::msg::SLBoundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::SLBoundary>()
{
  return ros2_interface::msg::builder::Init_SLBoundary_start_s();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SL_BOUNDARY__BUILDER_HPP_

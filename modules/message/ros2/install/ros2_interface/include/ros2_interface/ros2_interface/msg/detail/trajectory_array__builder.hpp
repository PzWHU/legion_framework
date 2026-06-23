// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/trajectory_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrajectoryArray_trajectory_list
{
public:
  explicit Init_TrajectoryArray_trajectory_list(::ros2_interface::msg::TrajectoryArray & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrajectoryArray trajectory_list(::ros2_interface::msg::TrajectoryArray::_trajectory_list_type arg)
  {
    msg_.trajectory_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryArray msg_;
};

class Init_TrajectoryArray_qp_smooth
{
public:
  explicit Init_TrajectoryArray_qp_smooth(::ros2_interface::msg::TrajectoryArray & msg)
  : msg_(msg)
  {}
  Init_TrajectoryArray_trajectory_list qp_smooth(::ros2_interface::msg::TrajectoryArray::_qp_smooth_type arg)
  {
    msg_.qp_smooth = std::move(arg);
    return Init_TrajectoryArray_trajectory_list(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryArray msg_;
};

class Init_TrajectoryArray_spline_s
{
public:
  explicit Init_TrajectoryArray_spline_s(::ros2_interface::msg::TrajectoryArray & msg)
  : msg_(msg)
  {}
  Init_TrajectoryArray_qp_smooth spline_s(::ros2_interface::msg::TrajectoryArray::_spline_s_type arg)
  {
    msg_.spline_s = std::move(arg);
    return Init_TrajectoryArray_qp_smooth(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryArray msg_;
};

class Init_TrajectoryArray_header
{
public:
  Init_TrajectoryArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryArray_spline_s header(::ros2_interface::msg::TrajectoryArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrajectoryArray_spline_s(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrajectoryArray>()
{
  return ros2_interface::msg::builder::Init_TrajectoryArray_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__BUILDER_HPP_

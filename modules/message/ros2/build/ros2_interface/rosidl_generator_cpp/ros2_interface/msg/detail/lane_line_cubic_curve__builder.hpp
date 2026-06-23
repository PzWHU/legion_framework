// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/LaneLineCubicCurve.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/lane_line_cubic_curve__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_LaneLineCubicCurve_d
{
public:
  explicit Init_LaneLineCubicCurve_d(::ros2_interface::msg::LaneLineCubicCurve & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::LaneLineCubicCurve d(::ros2_interface::msg::LaneLineCubicCurve::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::LaneLineCubicCurve msg_;
};

class Init_LaneLineCubicCurve_c
{
public:
  explicit Init_LaneLineCubicCurve_c(::ros2_interface::msg::LaneLineCubicCurve & msg)
  : msg_(msg)
  {}
  Init_LaneLineCubicCurve_d c(::ros2_interface::msg::LaneLineCubicCurve::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_LaneLineCubicCurve_d(msg_);
  }

private:
  ::ros2_interface::msg::LaneLineCubicCurve msg_;
};

class Init_LaneLineCubicCurve_b
{
public:
  explicit Init_LaneLineCubicCurve_b(::ros2_interface::msg::LaneLineCubicCurve & msg)
  : msg_(msg)
  {}
  Init_LaneLineCubicCurve_c b(::ros2_interface::msg::LaneLineCubicCurve::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_LaneLineCubicCurve_c(msg_);
  }

private:
  ::ros2_interface::msg::LaneLineCubicCurve msg_;
};

class Init_LaneLineCubicCurve_a
{
public:
  explicit Init_LaneLineCubicCurve_a(::ros2_interface::msg::LaneLineCubicCurve & msg)
  : msg_(msg)
  {}
  Init_LaneLineCubicCurve_b a(::ros2_interface::msg::LaneLineCubicCurve::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_LaneLineCubicCurve_b(msg_);
  }

private:
  ::ros2_interface::msg::LaneLineCubicCurve msg_;
};

class Init_LaneLineCubicCurve_end_x
{
public:
  explicit Init_LaneLineCubicCurve_end_x(::ros2_interface::msg::LaneLineCubicCurve & msg)
  : msg_(msg)
  {}
  Init_LaneLineCubicCurve_a end_x(::ros2_interface::msg::LaneLineCubicCurve::_end_x_type arg)
  {
    msg_.end_x = std::move(arg);
    return Init_LaneLineCubicCurve_a(msg_);
  }

private:
  ::ros2_interface::msg::LaneLineCubicCurve msg_;
};

class Init_LaneLineCubicCurve_start_x
{
public:
  Init_LaneLineCubicCurve_start_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneLineCubicCurve_end_x start_x(::ros2_interface::msg::LaneLineCubicCurve::_start_x_type arg)
  {
    msg_.start_x = std::move(arg);
    return Init_LaneLineCubicCurve_end_x(msg_);
  }

private:
  ::ros2_interface::msg::LaneLineCubicCurve msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::LaneLineCubicCurve>()
{
  return ros2_interface::msg::builder::Init_LaneLineCubicCurve_start_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__BUILDER_HPP_

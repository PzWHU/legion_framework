// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/GaussianInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/gaussian_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_GaussianInfo_theta_a
{
public:
  explicit Init_GaussianInfo_theta_a(::ros2_interface::msg::GaussianInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::GaussianInfo theta_a(::ros2_interface::msg::GaussianInfo::_theta_a_type arg)
  {
    msg_.theta_a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::GaussianInfo msg_;
};

class Init_GaussianInfo_ellipse_b
{
public:
  explicit Init_GaussianInfo_ellipse_b(::ros2_interface::msg::GaussianInfo & msg)
  : msg_(msg)
  {}
  Init_GaussianInfo_theta_a ellipse_b(::ros2_interface::msg::GaussianInfo::_ellipse_b_type arg)
  {
    msg_.ellipse_b = std::move(arg);
    return Init_GaussianInfo_theta_a(msg_);
  }

private:
  ::ros2_interface::msg::GaussianInfo msg_;
};

class Init_GaussianInfo_ellipse_a
{
public:
  explicit Init_GaussianInfo_ellipse_a(::ros2_interface::msg::GaussianInfo & msg)
  : msg_(msg)
  {}
  Init_GaussianInfo_ellipse_b ellipse_a(::ros2_interface::msg::GaussianInfo::_ellipse_a_type arg)
  {
    msg_.ellipse_a = std::move(arg);
    return Init_GaussianInfo_ellipse_b(msg_);
  }

private:
  ::ros2_interface::msg::GaussianInfo msg_;
};

class Init_GaussianInfo_area_probability
{
public:
  explicit Init_GaussianInfo_area_probability(::ros2_interface::msg::GaussianInfo & msg)
  : msg_(msg)
  {}
  Init_GaussianInfo_ellipse_a area_probability(::ros2_interface::msg::GaussianInfo::_area_probability_type arg)
  {
    msg_.area_probability = std::move(arg);
    return Init_GaussianInfo_ellipse_a(msg_);
  }

private:
  ::ros2_interface::msg::GaussianInfo msg_;
};

class Init_GaussianInfo_correlation
{
public:
  explicit Init_GaussianInfo_correlation(::ros2_interface::msg::GaussianInfo & msg)
  : msg_(msg)
  {}
  Init_GaussianInfo_area_probability correlation(::ros2_interface::msg::GaussianInfo::_correlation_type arg)
  {
    msg_.correlation = std::move(arg);
    return Init_GaussianInfo_area_probability(msg_);
  }

private:
  ::ros2_interface::msg::GaussianInfo msg_;
};

class Init_GaussianInfo_sigma_y
{
public:
  explicit Init_GaussianInfo_sigma_y(::ros2_interface::msg::GaussianInfo & msg)
  : msg_(msg)
  {}
  Init_GaussianInfo_correlation sigma_y(::ros2_interface::msg::GaussianInfo::_sigma_y_type arg)
  {
    msg_.sigma_y = std::move(arg);
    return Init_GaussianInfo_correlation(msg_);
  }

private:
  ::ros2_interface::msg::GaussianInfo msg_;
};

class Init_GaussianInfo_sigma_x
{
public:
  Init_GaussianInfo_sigma_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaussianInfo_sigma_y sigma_x(::ros2_interface::msg::GaussianInfo::_sigma_x_type arg)
  {
    msg_.sigma_x = std::move(arg);
    return Init_GaussianInfo_sigma_y(msg_);
  }

private:
  ::ros2_interface::msg::GaussianInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::GaussianInfo>()
{
  return ros2_interface::msg::builder::Init_GaussianInfo_sigma_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__BUILDER_HPP_

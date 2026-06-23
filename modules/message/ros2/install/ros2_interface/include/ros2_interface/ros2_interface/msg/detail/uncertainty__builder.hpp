// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Uncertainty.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/uncertainty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Uncertainty_angular_velocity_std_dev
{
public:
  explicit Init_Uncertainty_angular_velocity_std_dev(::ros2_interface::msg::Uncertainty & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Uncertainty angular_velocity_std_dev(::ros2_interface::msg::Uncertainty::_angular_velocity_std_dev_type arg)
  {
    msg_.angular_velocity_std_dev = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Uncertainty msg_;
};

class Init_Uncertainty_linear_acceleration_std_dev
{
public:
  explicit Init_Uncertainty_linear_acceleration_std_dev(::ros2_interface::msg::Uncertainty & msg)
  : msg_(msg)
  {}
  Init_Uncertainty_angular_velocity_std_dev linear_acceleration_std_dev(::ros2_interface::msg::Uncertainty::_linear_acceleration_std_dev_type arg)
  {
    msg_.linear_acceleration_std_dev = std::move(arg);
    return Init_Uncertainty_angular_velocity_std_dev(msg_);
  }

private:
  ::ros2_interface::msg::Uncertainty msg_;
};

class Init_Uncertainty_linear_velocity_std_dev
{
public:
  explicit Init_Uncertainty_linear_velocity_std_dev(::ros2_interface::msg::Uncertainty & msg)
  : msg_(msg)
  {}
  Init_Uncertainty_linear_acceleration_std_dev linear_velocity_std_dev(::ros2_interface::msg::Uncertainty::_linear_velocity_std_dev_type arg)
  {
    msg_.linear_velocity_std_dev = std::move(arg);
    return Init_Uncertainty_linear_acceleration_std_dev(msg_);
  }

private:
  ::ros2_interface::msg::Uncertainty msg_;
};

class Init_Uncertainty_orientation_std_dev
{
public:
  explicit Init_Uncertainty_orientation_std_dev(::ros2_interface::msg::Uncertainty & msg)
  : msg_(msg)
  {}
  Init_Uncertainty_linear_velocity_std_dev orientation_std_dev(::ros2_interface::msg::Uncertainty::_orientation_std_dev_type arg)
  {
    msg_.orientation_std_dev = std::move(arg);
    return Init_Uncertainty_linear_velocity_std_dev(msg_);
  }

private:
  ::ros2_interface::msg::Uncertainty msg_;
};

class Init_Uncertainty_position_std_dev
{
public:
  Init_Uncertainty_position_std_dev()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Uncertainty_orientation_std_dev position_std_dev(::ros2_interface::msg::Uncertainty::_position_std_dev_type arg)
  {
    msg_.position_std_dev = std::move(arg);
    return Init_Uncertainty_orientation_std_dev(msg_);
  }

private:
  ::ros2_interface::msg::Uncertainty msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Uncertainty>()
{
  return ros2_interface::msg::builder::Init_Uncertainty_position_std_dev();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__BUILDER_HPP_

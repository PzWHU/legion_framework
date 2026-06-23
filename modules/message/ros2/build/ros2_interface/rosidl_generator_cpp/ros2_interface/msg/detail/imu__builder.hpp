// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__IMU__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Imu_linear_acceleration_covariance
{
public:
  explicit Init_Imu_linear_acceleration_covariance(::ros2_interface::msg::Imu & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Imu linear_acceleration_covariance(::ros2_interface::msg::Imu::_linear_acceleration_covariance_type arg)
  {
    msg_.linear_acceleration_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Imu msg_;
};

class Init_Imu_linear_acceleration
{
public:
  explicit Init_Imu_linear_acceleration(::ros2_interface::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_linear_acceleration_covariance linear_acceleration(::ros2_interface::msg::Imu::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Imu_linear_acceleration_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Imu msg_;
};

class Init_Imu_angular_velocity_covariance
{
public:
  explicit Init_Imu_angular_velocity_covariance(::ros2_interface::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_linear_acceleration angular_velocity_covariance(::ros2_interface::msg::Imu::_angular_velocity_covariance_type arg)
  {
    msg_.angular_velocity_covariance = std::move(arg);
    return Init_Imu_linear_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::Imu msg_;
};

class Init_Imu_angular_velocity
{
public:
  explicit Init_Imu_angular_velocity(::ros2_interface::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angular_velocity_covariance angular_velocity(::ros2_interface::msg::Imu::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Imu_angular_velocity_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Imu msg_;
};

class Init_Imu_orientation_covariance
{
public:
  explicit Init_Imu_orientation_covariance(::ros2_interface::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angular_velocity orientation_covariance(::ros2_interface::msg::Imu::_orientation_covariance_type arg)
  {
    msg_.orientation_covariance = std::move(arg);
    return Init_Imu_angular_velocity(msg_);
  }

private:
  ::ros2_interface::msg::Imu msg_;
};

class Init_Imu_orientation
{
public:
  explicit Init_Imu_orientation(::ros2_interface::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_orientation_covariance orientation(::ros2_interface::msg::Imu::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Imu_orientation_covariance(msg_);
  }

private:
  ::ros2_interface::msg::Imu msg_;
};

class Init_Imu_is_valid
{
public:
  explicit Init_Imu_is_valid(::ros2_interface::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_orientation is_valid(::ros2_interface::msg::Imu::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_Imu_orientation(msg_);
  }

private:
  ::ros2_interface::msg::Imu msg_;
};

class Init_Imu_header
{
public:
  Init_Imu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_is_valid header(::ros2_interface::msg::Imu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Imu_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Imu>()
{
  return ros2_interface::msg::builder::Init_Imu_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__IMU__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POSE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Pose_euler_angles
{
public:
  explicit Init_Pose_euler_angles(::ros2_interface::msg::Pose & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Pose euler_angles(::ros2_interface::msg::Pose::_euler_angles_type arg)
  {
    msg_.euler_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Pose msg_;
};

class Init_Pose_angular_velocity_vrf
{
public:
  explicit Init_Pose_angular_velocity_vrf(::ros2_interface::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_euler_angles angular_velocity_vrf(::ros2_interface::msg::Pose::_angular_velocity_vrf_type arg)
  {
    msg_.angular_velocity_vrf = std::move(arg);
    return Init_Pose_euler_angles(msg_);
  }

private:
  ::ros2_interface::msg::Pose msg_;
};

class Init_Pose_linear_acceleration_vrf
{
public:
  explicit Init_Pose_linear_acceleration_vrf(::ros2_interface::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_angular_velocity_vrf linear_acceleration_vrf(::ros2_interface::msg::Pose::_linear_acceleration_vrf_type arg)
  {
    msg_.linear_acceleration_vrf = std::move(arg);
    return Init_Pose_angular_velocity_vrf(msg_);
  }

private:
  ::ros2_interface::msg::Pose msg_;
};

class Init_Pose_heading
{
public:
  explicit Init_Pose_heading(::ros2_interface::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_linear_acceleration_vrf heading(::ros2_interface::msg::Pose::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Pose_linear_acceleration_vrf(msg_);
  }

private:
  ::ros2_interface::msg::Pose msg_;
};

class Init_Pose_angular_velocity
{
public:
  explicit Init_Pose_angular_velocity(::ros2_interface::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_heading angular_velocity(::ros2_interface::msg::Pose::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Pose_heading(msg_);
  }

private:
  ::ros2_interface::msg::Pose msg_;
};

class Init_Pose_linear_acceleration
{
public:
  explicit Init_Pose_linear_acceleration(::ros2_interface::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_angular_velocity linear_acceleration(::ros2_interface::msg::Pose::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Pose_angular_velocity(msg_);
  }

private:
  ::ros2_interface::msg::Pose msg_;
};

class Init_Pose_linear_velocity
{
public:
  explicit Init_Pose_linear_velocity(::ros2_interface::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_linear_acceleration linear_velocity(::ros2_interface::msg::Pose::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_Pose_linear_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::Pose msg_;
};

class Init_Pose_orientation
{
public:
  explicit Init_Pose_orientation(::ros2_interface::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_linear_velocity orientation(::ros2_interface::msg::Pose::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Pose_linear_velocity(msg_);
  }

private:
  ::ros2_interface::msg::Pose msg_;
};

class Init_Pose_position
{
public:
  Init_Pose_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_orientation position(::ros2_interface::msg::Pose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Pose_orientation(msg_);
  }

private:
  ::ros2_interface::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Pose>()
{
  return ros2_interface::msg::builder::Init_Pose_position();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POSE__BUILDER_HPP_

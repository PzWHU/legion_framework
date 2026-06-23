// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_VehicleState_rear_steering_value
{
public:
  explicit Init_VehicleState_rear_steering_value(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::VehicleState rear_steering_value(::ros2_interface::msg::VehicleState::_rear_steering_value_type arg)
  {
    msg_.rear_steering_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_front_steering_value
{
public:
  explicit Init_VehicleState_front_steering_value(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_rear_steering_value front_steering_value(::ros2_interface::msg::VehicleState::_front_steering_value_type arg)
  {
    msg_.front_steering_value = std::move(arg);
    return Init_VehicleState_rear_steering_value(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_pose
{
public:
  explicit Init_VehicleState_pose(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_front_steering_value pose(::ros2_interface::msg::VehicleState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_VehicleState_front_steering_value(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_driving_mode
{
public:
  explicit Init_VehicleState_driving_mode(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_pose driving_mode(::ros2_interface::msg::VehicleState::_driving_mode_type arg)
  {
    msg_.driving_mode = std::move(arg);
    return Init_VehicleState_pose(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_gear
{
public:
  explicit Init_VehicleState_gear(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_driving_mode gear(::ros2_interface::msg::VehicleState::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_VehicleState_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_linear_acceleration
{
public:
  explicit Init_VehicleState_linear_acceleration(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_gear linear_acceleration(::ros2_interface::msg::VehicleState::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_VehicleState_gear(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_angular_velocity
{
public:
  explicit Init_VehicleState_angular_velocity(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_linear_acceleration angular_velocity(::ros2_interface::msg::VehicleState::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_VehicleState_linear_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_linear_velocity
{
public:
  explicit Init_VehicleState_linear_velocity(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_angular_velocity linear_velocity(::ros2_interface::msg::VehicleState::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_VehicleState_angular_velocity(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_kappa
{
public:
  explicit Init_VehicleState_kappa(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_linear_velocity kappa(::ros2_interface::msg::VehicleState::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_VehicleState_linear_velocity(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_heading
{
public:
  explicit Init_VehicleState_heading(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_kappa heading(::ros2_interface::msg::VehicleState::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_VehicleState_kappa(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_yaw
{
public:
  explicit Init_VehicleState_yaw(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_heading yaw(::ros2_interface::msg::VehicleState::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_VehicleState_heading(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_pitch
{
public:
  explicit Init_VehicleState_pitch(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_yaw pitch(::ros2_interface::msg::VehicleState::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_VehicleState_yaw(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_roll
{
public:
  explicit Init_VehicleState_roll(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_pitch roll(::ros2_interface::msg::VehicleState::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_VehicleState_pitch(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_timestamp
{
public:
  explicit Init_VehicleState_timestamp(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_roll timestamp(::ros2_interface::msg::VehicleState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleState_roll(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_z
{
public:
  explicit Init_VehicleState_z(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_timestamp z(::ros2_interface::msg::VehicleState::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_VehicleState_timestamp(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_y
{
public:
  explicit Init_VehicleState_y(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_z y(::ros2_interface::msg::VehicleState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_VehicleState_z(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_x
{
public:
  explicit Init_VehicleState_x(::ros2_interface::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_y x(::ros2_interface::msg::VehicleState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_VehicleState_y(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

class Init_VehicleState_header
{
public:
  Init_VehicleState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_x header(::ros2_interface::msg::VehicleState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleState_x(msg_);
  }

private:
  ::ros2_interface::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::VehicleState>()
{
  return ros2_interface::msg::builder::Init_VehicleState_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/VehicleParam.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/vehicle_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_VehicleParam_min_turning_radius
{
public:
  explicit Init_VehicleParam_min_turning_radius(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::VehicleParam min_turning_radius(::ros2_interface::msg::VehicleParam::_min_turning_radius_type arg)
  {
    msg_.min_turning_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_deceleration
{
public:
  explicit Init_VehicleParam_max_deceleration(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_min_turning_radius max_deceleration(::ros2_interface::msg::VehicleParam::_max_deceleration_type arg)
  {
    msg_.max_deceleration = std::move(arg);
    return Init_VehicleParam_min_turning_radius(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_acceleration
{
public:
  explicit Init_VehicleParam_max_acceleration(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_deceleration max_acceleration(::ros2_interface::msg::VehicleParam::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_VehicleParam_max_deceleration(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_acceleration_jerk
{
public:
  explicit Init_VehicleParam_max_acceleration_jerk(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_acceleration max_acceleration_jerk(::ros2_interface::msg::VehicleParam::_max_acceleration_jerk_type arg)
  {
    msg_.max_acceleration_jerk = std::move(arg);
    return Init_VehicleParam_max_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_deceleration_in_idle
{
public:
  explicit Init_VehicleParam_deceleration_in_idle(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_acceleration_jerk deceleration_in_idle(::ros2_interface::msg::VehicleParam::_deceleration_in_idle_type arg)
  {
    msg_.deceleration_in_idle = std::move(arg);
    return Init_VehicleParam_max_acceleration_jerk(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_acceleration_in_idle
{
public:
  explicit Init_VehicleParam_acceleration_in_idle(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_deceleration_in_idle acceleration_in_idle(::ros2_interface::msg::VehicleParam::_acceleration_in_idle_type arg)
  {
    msg_.acceleration_in_idle = std::move(arg);
    return Init_VehicleParam_deceleration_in_idle(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_brake_deadzone
{
public:
  explicit Init_VehicleParam_brake_deadzone(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_acceleration_in_idle brake_deadzone(::ros2_interface::msg::VehicleParam::_brake_deadzone_type arg)
  {
    msg_.brake_deadzone = std::move(arg);
    return Init_VehicleParam_acceleration_in_idle(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_accel_deadzone
{
public:
  explicit Init_VehicleParam_accel_deadzone(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_brake_deadzone accel_deadzone(::ros2_interface::msg::VehicleParam::_accel_deadzone_type arg)
  {
    msg_.accel_deadzone = std::move(arg);
    return Init_VehicleParam_brake_deadzone(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_brake_value_when_gear_transitioning
{
public:
  explicit Init_VehicleParam_brake_value_when_gear_transitioning(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_accel_deadzone brake_value_when_gear_transitioning(::ros2_interface::msg::VehicleParam::_brake_value_when_gear_transitioning_type arg)
  {
    msg_.brake_value_when_gear_transitioning = std::move(arg);
    return Init_VehicleParam_accel_deadzone(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_abs_speed_when_stopped_duration
{
public:
  explicit Init_VehicleParam_max_abs_speed_when_stopped_duration(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_brake_value_when_gear_transitioning max_abs_speed_when_stopped_duration(::ros2_interface::msg::VehicleParam::_max_abs_speed_when_stopped_duration_type arg)
  {
    msg_.max_abs_speed_when_stopped_duration = std::move(arg);
    return Init_VehicleParam_brake_value_when_gear_transitioning(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_abs_speed_when_stopped
{
public:
  explicit Init_VehicleParam_max_abs_speed_when_stopped(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_abs_speed_when_stopped_duration max_abs_speed_when_stopped(::ros2_interface::msg::VehicleParam::_max_abs_speed_when_stopped_type arg)
  {
    msg_.max_abs_speed_when_stopped = std::move(arg);
    return Init_VehicleParam_max_abs_speed_when_stopped_duration(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_rear_steer_angle_rate
{
public:
  explicit Init_VehicleParam_max_rear_steer_angle_rate(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_abs_speed_when_stopped max_rear_steer_angle_rate(::ros2_interface::msg::VehicleParam::_max_rear_steer_angle_rate_type arg)
  {
    msg_.max_rear_steer_angle_rate = std::move(arg);
    return Init_VehicleParam_max_abs_speed_when_stopped(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_front_steer_angle_rate
{
public:
  explicit Init_VehicleParam_max_front_steer_angle_rate(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_rear_steer_angle_rate max_front_steer_angle_rate(::ros2_interface::msg::VehicleParam::_max_front_steer_angle_rate_type arg)
  {
    msg_.max_front_steer_angle_rate = std::move(arg);
    return Init_VehicleParam_max_rear_steer_angle_rate(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_standstill_acceleration
{
public:
  explicit Init_VehicleParam_standstill_acceleration(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_front_steer_angle_rate standstill_acceleration(::ros2_interface::msg::VehicleParam::_standstill_acceleration_type arg)
  {
    msg_.standstill_acceleration = std::move(arg);
    return Init_VehicleParam_max_front_steer_angle_rate(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_speed_deadzone
{
public:
  explicit Init_VehicleParam_speed_deadzone(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_standstill_acceleration speed_deadzone(::ros2_interface::msg::VehicleParam::_speed_deadzone_type arg)
  {
    msg_.speed_deadzone = std::move(arg);
    return Init_VehicleParam_standstill_acceleration(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_min_accel_value
{
public:
  explicit Init_VehicleParam_min_accel_value(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_speed_deadzone min_accel_value(::ros2_interface::msg::VehicleParam::_min_accel_value_type arg)
  {
    msg_.min_accel_value = std::move(arg);
    return Init_VehicleParam_speed_deadzone(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_accel_value
{
public:
  explicit Init_VehicleParam_max_accel_value(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_min_accel_value max_accel_value(::ros2_interface::msg::VehicleParam::_max_accel_value_type arg)
  {
    msg_.max_accel_value = std::move(arg);
    return Init_VehicleParam_min_accel_value(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_min_brake_value
{
public:
  explicit Init_VehicleParam_min_brake_value(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_accel_value min_brake_value(::ros2_interface::msg::VehicleParam::_min_brake_value_type arg)
  {
    msg_.min_brake_value = std::move(arg);
    return Init_VehicleParam_max_accel_value(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_brake_value
{
public:
  explicit Init_VehicleParam_max_brake_value(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_min_brake_value max_brake_value(::ros2_interface::msg::VehicleParam::_max_brake_value_type arg)
  {
    msg_.max_brake_value = std::move(arg);
    return Init_VehicleParam_min_brake_value(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_speed_limit
{
public:
  explicit Init_VehicleParam_speed_limit(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_brake_value speed_limit(::ros2_interface::msg::VehicleParam::_speed_limit_type arg)
  {
    msg_.speed_limit = std::move(arg);
    return Init_VehicleParam_max_brake_value(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_min_rear_steer_angle
{
public:
  explicit Init_VehicleParam_min_rear_steer_angle(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_speed_limit min_rear_steer_angle(::ros2_interface::msg::VehicleParam::_min_rear_steer_angle_type arg)
  {
    msg_.min_rear_steer_angle = std::move(arg);
    return Init_VehicleParam_speed_limit(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_rear_steer_angle
{
public:
  explicit Init_VehicleParam_max_rear_steer_angle(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_min_rear_steer_angle max_rear_steer_angle(::ros2_interface::msg::VehicleParam::_max_rear_steer_angle_type arg)
  {
    msg_.max_rear_steer_angle = std::move(arg);
    return Init_VehicleParam_min_rear_steer_angle(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_min_front_steer_angle
{
public:
  explicit Init_VehicleParam_min_front_steer_angle(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_rear_steer_angle min_front_steer_angle(::ros2_interface::msg::VehicleParam::_min_front_steer_angle_type arg)
  {
    msg_.min_front_steer_angle = std::move(arg);
    return Init_VehicleParam_max_rear_steer_angle(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_max_front_steer_angle
{
public:
  explicit Init_VehicleParam_max_front_steer_angle(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_min_front_steer_angle max_front_steer_angle(::ros2_interface::msg::VehicleParam::_max_front_steer_angle_type arg)
  {
    msg_.max_front_steer_angle = std::move(arg);
    return Init_VehicleParam_min_front_steer_angle(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_air_damping_coefficient
{
public:
  explicit Init_VehicleParam_air_damping_coefficient(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_max_front_steer_angle air_damping_coefficient(::ros2_interface::msg::VehicleParam::_air_damping_coefficient_type arg)
  {
    msg_.air_damping_coefficient = std::move(arg);
    return Init_VehicleParam_max_front_steer_angle(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_air_density
{
public:
  explicit Init_VehicleParam_air_density(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_air_damping_coefficient air_density(::ros2_interface::msg::VehicleParam::_air_density_type arg)
  {
    msg_.air_density = std::move(arg);
    return Init_VehicleParam_air_damping_coefficient(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_rolling_coefficient
{
public:
  explicit Init_VehicleParam_rolling_coefficient(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_air_density rolling_coefficient(::ros2_interface::msg::VehicleParam::_rolling_coefficient_type arg)
  {
    msg_.rolling_coefficient = std::move(arg);
    return Init_VehicleParam_air_density(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_steer_ratio
{
public:
  explicit Init_VehicleParam_steer_ratio(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_rolling_coefficient steer_ratio(::ros2_interface::msg::VehicleParam::_steer_ratio_type arg)
  {
    msg_.steer_ratio = std::move(arg);
    return Init_VehicleParam_rolling_coefficient(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_cr
{
public:
  explicit Init_VehicleParam_cr(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_steer_ratio cr(::ros2_interface::msg::VehicleParam::_cr_type arg)
  {
    msg_.cr = std::move(arg);
    return Init_VehicleParam_steer_ratio(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_cf
{
public:
  explicit Init_VehicleParam_cf(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_cr cf(::ros2_interface::msg::VehicleParam::_cf_type arg)
  {
    msg_.cf = std::move(arg);
    return Init_VehicleParam_cr(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_lr
{
public:
  explicit Init_VehicleParam_lr(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_cf lr(::ros2_interface::msg::VehicleParam::_lr_type arg)
  {
    msg_.lr = std::move(arg);
    return Init_VehicleParam_cf(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_lf
{
public:
  explicit Init_VehicleParam_lf(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_lr lf(::ros2_interface::msg::VehicleParam::_lf_type arg)
  {
    msg_.lf = std::move(arg);
    return Init_VehicleParam_lr(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_back_edge_to_center
{
public:
  explicit Init_VehicleParam_back_edge_to_center(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_lf back_edge_to_center(::ros2_interface::msg::VehicleParam::_back_edge_to_center_type arg)
  {
    msg_.back_edge_to_center = std::move(arg);
    return Init_VehicleParam_lf(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_front_edge_to_center
{
public:
  explicit Init_VehicleParam_front_edge_to_center(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_back_edge_to_center front_edge_to_center(::ros2_interface::msg::VehicleParam::_front_edge_to_center_type arg)
  {
    msg_.front_edge_to_center = std::move(arg);
    return Init_VehicleParam_back_edge_to_center(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_wheelbase
{
public:
  explicit Init_VehicleParam_wheelbase(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_front_edge_to_center wheelbase(::ros2_interface::msg::VehicleParam::_wheelbase_type arg)
  {
    msg_.wheelbase = std::move(arg);
    return Init_VehicleParam_front_edge_to_center(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_wheel_radius
{
public:
  explicit Init_VehicleParam_wheel_radius(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_wheelbase wheel_radius(::ros2_interface::msg::VehicleParam::_wheel_radius_type arg)
  {
    msg_.wheel_radius = std::move(arg);
    return Init_VehicleParam_wheelbase(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_mass_rr
{
public:
  explicit Init_VehicleParam_mass_rr(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_wheel_radius mass_rr(::ros2_interface::msg::VehicleParam::_mass_rr_type arg)
  {
    msg_.mass_rr = std::move(arg);
    return Init_VehicleParam_wheel_radius(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_mass_rl
{
public:
  explicit Init_VehicleParam_mass_rl(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_mass_rr mass_rl(::ros2_interface::msg::VehicleParam::_mass_rl_type arg)
  {
    msg_.mass_rl = std::move(arg);
    return Init_VehicleParam_mass_rr(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_mass_fr
{
public:
  explicit Init_VehicleParam_mass_fr(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_mass_rl mass_fr(::ros2_interface::msg::VehicleParam::_mass_fr_type arg)
  {
    msg_.mass_fr = std::move(arg);
    return Init_VehicleParam_mass_rl(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_mass_fl
{
public:
  explicit Init_VehicleParam_mass_fl(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_mass_fr mass_fl(::ros2_interface::msg::VehicleParam::_mass_fl_type arg)
  {
    msg_.mass_fl = std::move(arg);
    return Init_VehicleParam_mass_fr(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_height
{
public:
  explicit Init_VehicleParam_height(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_mass_fl height(::ros2_interface::msg::VehicleParam::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_VehicleParam_mass_fl(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_width
{
public:
  explicit Init_VehicleParam_width(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_height width(::ros2_interface::msg::VehicleParam::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_VehicleParam_height(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_length
{
public:
  explicit Init_VehicleParam_length(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_width length(::ros2_interface::msg::VehicleParam::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_VehicleParam_width(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_steer_mode
{
public:
  explicit Init_VehicleParam_steer_mode(::ros2_interface::msg::VehicleParam & msg)
  : msg_(msg)
  {}
  Init_VehicleParam_length steer_mode(::ros2_interface::msg::VehicleParam::_steer_mode_type arg)
  {
    msg_.steer_mode = std::move(arg);
    return Init_VehicleParam_length(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

class Init_VehicleParam_brand
{
public:
  Init_VehicleParam_brand()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleParam_steer_mode brand(::ros2_interface::msg::VehicleParam::_brand_type arg)
  {
    msg_.brand = std::move(arg);
    return Init_VehicleParam_steer_mode(msg_);
  }

private:
  ::ros2_interface::msg::VehicleParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::VehicleParam>()
{
  return ros2_interface::msg::builder::Init_VehicleParam_brand();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMIVehicleMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_vehicle_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMIVehicleMsg_mercator_position
{
public:
  explicit Init_HMIVehicleMsg_mercator_position(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMIVehicleMsg mercator_position(::ros2_interface::msg::HMIVehicleMsg::_mercator_position_type arg)
  {
    msg_.mercator_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_turn_lamp_status
{
public:
  explicit Init_HMIVehicleMsg_turn_lamp_status(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_mercator_position turn_lamp_status(::ros2_interface::msg::HMIVehicleMsg::_turn_lamp_status_type arg)
  {
    msg_.turn_lamp_status = std::move(arg);
    return Init_HMIVehicleMsg_mercator_position(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_brake_lamp_status
{
public:
  explicit Init_HMIVehicleMsg_brake_lamp_status(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_turn_lamp_status brake_lamp_status(::ros2_interface::msg::HMIVehicleMsg::_brake_lamp_status_type arg)
  {
    msg_.brake_lamp_status = std::move(arg);
    return Init_HMIVehicleMsg_turn_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_chassis_error_code
{
public:
  explicit Init_HMIVehicleMsg_chassis_error_code(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_brake_lamp_status chassis_error_code(::ros2_interface::msg::HMIVehicleMsg::_chassis_error_code_type arg)
  {
    msg_.chassis_error_code = std::move(arg);
    return Init_HMIVehicleMsg_brake_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_charging_gun_status
{
public:
  explicit Init_HMIVehicleMsg_charging_gun_status(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_chassis_error_code charging_gun_status(::ros2_interface::msg::HMIVehicleMsg::_charging_gun_status_type arg)
  {
    msg_.charging_gun_status = std::move(arg);
    return Init_HMIVehicleMsg_chassis_error_code(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_battery_power_percentage
{
public:
  explicit Init_HMIVehicleMsg_battery_power_percentage(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_charging_gun_status battery_power_percentage(::ros2_interface::msg::HMIVehicleMsg::_battery_power_percentage_type arg)
  {
    msg_.battery_power_percentage = std::move(arg);
    return Init_HMIVehicleMsg_charging_gun_status(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_auto_safe
{
public:
  explicit Init_HMIVehicleMsg_auto_safe(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_battery_power_percentage auto_safe(::ros2_interface::msg::HMIVehicleMsg::_auto_safe_type arg)
  {
    msg_.auto_safe = std::move(arg);
    return Init_HMIVehicleMsg_battery_power_percentage(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_current_ins_yaw
{
public:
  explicit Init_HMIVehicleMsg_current_ins_yaw(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_auto_safe current_ins_yaw(::ros2_interface::msg::HMIVehicleMsg::_current_ins_yaw_type arg)
  {
    msg_.current_ins_yaw = std::move(arg);
    return Init_HMIVehicleMsg_auto_safe(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_origin_lon
{
public:
  explicit Init_HMIVehicleMsg_origin_lon(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_current_ins_yaw origin_lon(::ros2_interface::msg::HMIVehicleMsg::_origin_lon_type arg)
  {
    msg_.origin_lon = std::move(arg);
    return Init_HMIVehicleMsg_current_ins_yaw(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_origin_lat
{
public:
  explicit Init_HMIVehicleMsg_origin_lat(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_origin_lon origin_lat(::ros2_interface::msg::HMIVehicleMsg::_origin_lat_type arg)
  {
    msg_.origin_lat = std::move(arg);
    return Init_HMIVehicleMsg_origin_lon(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_rtk_flag
{
public:
  explicit Init_HMIVehicleMsg_rtk_flag(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_origin_lat rtk_flag(::ros2_interface::msg::HMIVehicleMsg::_rtk_flag_type arg)
  {
    msg_.rtk_flag = std::move(arg);
    return Init_HMIVehicleMsg_origin_lat(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_heading
{
public:
  explicit Init_HMIVehicleMsg_heading(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_rtk_flag heading(::ros2_interface::msg::HMIVehicleMsg::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_HMIVehicleMsg_rtk_flag(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_roll
{
public:
  explicit Init_HMIVehicleMsg_roll(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_heading roll(::ros2_interface::msg::HMIVehicleMsg::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_HMIVehicleMsg_heading(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_pitch
{
public:
  explicit Init_HMIVehicleMsg_pitch(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_roll pitch(::ros2_interface::msg::HMIVehicleMsg::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_HMIVehicleMsg_roll(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_utm_position
{
public:
  explicit Init_HMIVehicleMsg_utm_position(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_pitch utm_position(::ros2_interface::msg::HMIVehicleMsg::_utm_position_type arg)
  {
    msg_.utm_position = std::move(arg);
    return Init_HMIVehicleMsg_pitch(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_position
{
public:
  explicit Init_HMIVehicleMsg_position(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_utm_position position(::ros2_interface::msg::HMIVehicleMsg::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_HMIVehicleMsg_utm_position(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_speed_mps
{
public:
  explicit Init_HMIVehicleMsg_speed_mps(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_position speed_mps(::ros2_interface::msg::HMIVehicleMsg::_speed_mps_type arg)
  {
    msg_.speed_mps = std::move(arg);
    return Init_HMIVehicleMsg_position(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_brake_value
{
public:
  explicit Init_HMIVehicleMsg_brake_value(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_speed_mps brake_value(::ros2_interface::msg::HMIVehicleMsg::_brake_value_type arg)
  {
    msg_.brake_value = std::move(arg);
    return Init_HMIVehicleMsg_speed_mps(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_accel_value
{
public:
  explicit Init_HMIVehicleMsg_accel_value(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_brake_value accel_value(::ros2_interface::msg::HMIVehicleMsg::_accel_value_type arg)
  {
    msg_.accel_value = std::move(arg);
    return Init_HMIVehicleMsg_brake_value(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_steering_value
{
public:
  explicit Init_HMIVehicleMsg_steering_value(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_accel_value steering_value(::ros2_interface::msg::HMIVehicleMsg::_steering_value_type arg)
  {
    msg_.steering_value = std::move(arg);
    return Init_HMIVehicleMsg_accel_value(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_gear_location
{
public:
  explicit Init_HMIVehicleMsg_gear_location(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_steering_value gear_location(::ros2_interface::msg::HMIVehicleMsg::_gear_location_type arg)
  {
    msg_.gear_location = std::move(arg);
    return Init_HMIVehicleMsg_steering_value(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_driving_mode
{
public:
  explicit Init_HMIVehicleMsg_driving_mode(::ros2_interface::msg::HMIVehicleMsg & msg)
  : msg_(msg)
  {}
  Init_HMIVehicleMsg_gear_location driving_mode(::ros2_interface::msg::HMIVehicleMsg::_driving_mode_type arg)
  {
    msg_.driving_mode = std::move(arg);
    return Init_HMIVehicleMsg_gear_location(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

class Init_HMIVehicleMsg_header
{
public:
  Init_HMIVehicleMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMIVehicleMsg_driving_mode header(::ros2_interface::msg::HMIVehicleMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HMIVehicleMsg_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::HMIVehicleMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMIVehicleMsg>()
{
  return ros2_interface::msg::builder::Init_HMIVehicleMsg_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__BUILDER_HPP_

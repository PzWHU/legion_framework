// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Chassis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CHASSIS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CHASSIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/chassis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Chassis_chassis_error_code
{
public:
  explicit Init_Chassis_chassis_error_code(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Chassis chassis_error_code(::ros2_interface::msg::Chassis::_chassis_error_code_type arg)
  {
    msg_.chassis_error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_vehicle_power_status
{
public:
  explicit Init_Chassis_vehicle_power_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_chassis_error_code vehicle_power_status(::ros2_interface::msg::Chassis::_vehicle_power_status_type arg)
  {
    msg_.vehicle_power_status = std::move(arg);
    return Init_Chassis_chassis_error_code(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_charging_gun_status
{
public:
  explicit Init_Chassis_charging_gun_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_vehicle_power_status charging_gun_status(::ros2_interface::msg::Chassis::_charging_gun_status_type arg)
  {
    msg_.charging_gun_status = std::move(arg);
    return Init_Chassis_vehicle_power_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_air_bag_status
{
public:
  explicit Init_Chassis_air_bag_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_charging_gun_status air_bag_status(::ros2_interface::msg::Chassis::_air_bag_status_type arg)
  {
    msg_.air_bag_status = std::move(arg);
    return Init_Chassis_charging_gun_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_battery_power_percentage
{
public:
  explicit Init_Chassis_battery_power_percentage(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_air_bag_status battery_power_percentage(::ros2_interface::msg::Chassis::_battery_power_percentage_type arg)
  {
    msg_.battery_power_percentage = std::move(arg);
    return Init_Chassis_air_bag_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_tire_pressure_rr
{
public:
  explicit Init_Chassis_tire_pressure_rr(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_battery_power_percentage tire_pressure_rr(::ros2_interface::msg::Chassis::_tire_pressure_rr_type arg)
  {
    msg_.tire_pressure_rr = std::move(arg);
    return Init_Chassis_battery_power_percentage(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_is_tire_pressure_rr_valid
{
public:
  explicit Init_Chassis_is_tire_pressure_rr_valid(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_tire_pressure_rr is_tire_pressure_rr_valid(::ros2_interface::msg::Chassis::_is_tire_pressure_rr_valid_type arg)
  {
    msg_.is_tire_pressure_rr_valid = std::move(arg);
    return Init_Chassis_tire_pressure_rr(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_tire_pressure_lr
{
public:
  explicit Init_Chassis_tire_pressure_lr(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_is_tire_pressure_rr_valid tire_pressure_lr(::ros2_interface::msg::Chassis::_tire_pressure_lr_type arg)
  {
    msg_.tire_pressure_lr = std::move(arg);
    return Init_Chassis_is_tire_pressure_rr_valid(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_is_tire_pressure_lr_valid
{
public:
  explicit Init_Chassis_is_tire_pressure_lr_valid(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_tire_pressure_lr is_tire_pressure_lr_valid(::ros2_interface::msg::Chassis::_is_tire_pressure_lr_valid_type arg)
  {
    msg_.is_tire_pressure_lr_valid = std::move(arg);
    return Init_Chassis_tire_pressure_lr(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_tire_pressure_rf
{
public:
  explicit Init_Chassis_tire_pressure_rf(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_is_tire_pressure_lr_valid tire_pressure_rf(::ros2_interface::msg::Chassis::_tire_pressure_rf_type arg)
  {
    msg_.tire_pressure_rf = std::move(arg);
    return Init_Chassis_is_tire_pressure_lr_valid(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_is_tire_pressure_rf_valid
{
public:
  explicit Init_Chassis_is_tire_pressure_rf_valid(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_tire_pressure_rf is_tire_pressure_rf_valid(::ros2_interface::msg::Chassis::_is_tire_pressure_rf_valid_type arg)
  {
    msg_.is_tire_pressure_rf_valid = std::move(arg);
    return Init_Chassis_tire_pressure_rf(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_tire_pressure_lf
{
public:
  explicit Init_Chassis_tire_pressure_lf(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_is_tire_pressure_rf_valid tire_pressure_lf(::ros2_interface::msg::Chassis::_tire_pressure_lf_type arg)
  {
    msg_.tire_pressure_lf = std::move(arg);
    return Init_Chassis_is_tire_pressure_rf_valid(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_is_tire_pressure_lf_valid
{
public:
  explicit Init_Chassis_is_tire_pressure_lf_valid(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_tire_pressure_lf is_tire_pressure_lf_valid(::ros2_interface::msg::Chassis::_is_tire_pressure_lf_valid_type arg)
  {
    msg_.is_tire_pressure_lf_valid = std::move(arg);
    return Init_Chassis_tire_pressure_lf(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_is_tire_pressure_ok
{
public:
  explicit Init_Chassis_is_tire_pressure_ok(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_is_tire_pressure_lf_valid is_tire_pressure_ok(::ros2_interface::msg::Chassis::_is_tire_pressure_ok_type arg)
  {
    msg_.is_tire_pressure_ok = std::move(arg);
    return Init_Chassis_is_tire_pressure_lf_valid(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_wheel_spd_fl
{
public:
  explicit Init_Chassis_wheel_spd_fl(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_is_tire_pressure_ok wheel_spd_fl(::ros2_interface::msg::Chassis::_wheel_spd_fl_type arg)
  {
    msg_.wheel_spd_fl = std::move(arg);
    return Init_Chassis_is_tire_pressure_ok(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_wheel_direction_fl
{
public:
  explicit Init_Chassis_wheel_direction_fl(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_wheel_spd_fl wheel_direction_fl(::ros2_interface::msg::Chassis::_wheel_direction_fl_type arg)
  {
    msg_.wheel_direction_fl = std::move(arg);
    return Init_Chassis_wheel_spd_fl(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_wheel_spd_fr
{
public:
  explicit Init_Chassis_wheel_spd_fr(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_wheel_direction_fl wheel_spd_fr(::ros2_interface::msg::Chassis::_wheel_spd_fr_type arg)
  {
    msg_.wheel_spd_fr = std::move(arg);
    return Init_Chassis_wheel_direction_fl(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_wheel_direction_fr
{
public:
  explicit Init_Chassis_wheel_direction_fr(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_wheel_spd_fr wheel_direction_fr(::ros2_interface::msg::Chassis::_wheel_direction_fr_type arg)
  {
    msg_.wheel_direction_fr = std::move(arg);
    return Init_Chassis_wheel_spd_fr(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_wheel_spd_rl
{
public:
  explicit Init_Chassis_wheel_spd_rl(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_wheel_direction_fr wheel_spd_rl(::ros2_interface::msg::Chassis::_wheel_spd_rl_type arg)
  {
    msg_.wheel_spd_rl = std::move(arg);
    return Init_Chassis_wheel_direction_fr(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_wheel_direction_rl
{
public:
  explicit Init_Chassis_wheel_direction_rl(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_wheel_spd_rl wheel_direction_rl(::ros2_interface::msg::Chassis::_wheel_direction_rl_type arg)
  {
    msg_.wheel_direction_rl = std::move(arg);
    return Init_Chassis_wheel_spd_rl(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_wheel_spd_rr
{
public:
  explicit Init_Chassis_wheel_spd_rr(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_wheel_direction_rl wheel_spd_rr(::ros2_interface::msg::Chassis::_wheel_spd_rr_type arg)
  {
    msg_.wheel_spd_rr = std::move(arg);
    return Init_Chassis_wheel_direction_rl(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_wheel_direction_rr
{
public:
  explicit Init_Chassis_wheel_direction_rr(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_wheel_spd_rr wheel_direction_rr(::ros2_interface::msg::Chassis::_wheel_direction_rr_type arg)
  {
    msg_.wheel_direction_rr = std::move(arg);
    return Init_Chassis_wheel_spd_rr(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_engine_bay_door_status
{
public:
  explicit Init_Chassis_engine_bay_door_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_wheel_direction_rr engine_bay_door_status(::ros2_interface::msg::Chassis::_engine_bay_door_status_type arg)
  {
    msg_.engine_bay_door_status = std::move(arg);
    return Init_Chassis_wheel_direction_rr(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_trunk_status
{
public:
  explicit Init_Chassis_trunk_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_engine_bay_door_status trunk_status(::ros2_interface::msg::Chassis::_trunk_status_type arg)
  {
    msg_.trunk_status = std::move(arg);
    return Init_Chassis_engine_bay_door_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_rearview_mirror_status
{
public:
  explicit Init_Chassis_rearview_mirror_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_trunk_status rearview_mirror_status(::ros2_interface::msg::Chassis::_rearview_mirror_status_type arg)
  {
    msg_.rearview_mirror_status = std::move(arg);
    return Init_Chassis_trunk_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_rr_door_status
{
public:
  explicit Init_Chassis_rr_door_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_rearview_mirror_status rr_door_status(::ros2_interface::msg::Chassis::_rr_door_status_type arg)
  {
    msg_.rr_door_status = std::move(arg);
    return Init_Chassis_rearview_mirror_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_lr_door_status
{
public:
  explicit Init_Chassis_lr_door_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_rr_door_status lr_door_status(::ros2_interface::msg::Chassis::_lr_door_status_type arg)
  {
    msg_.lr_door_status = std::move(arg);
    return Init_Chassis_rr_door_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_rf_door_status
{
public:
  explicit Init_Chassis_rf_door_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_lr_door_status rf_door_status(::ros2_interface::msg::Chassis::_rf_door_status_type arg)
  {
    msg_.rf_door_status = std::move(arg);
    return Init_Chassis_lr_door_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_lf_door_status
{
public:
  explicit Init_Chassis_lf_door_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_rf_door_status lf_door_status(::ros2_interface::msg::Chassis::_lf_door_status_type arg)
  {
    msg_.lf_door_status = std::move(arg);
    return Init_Chassis_rf_door_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_alarm_lamp_status
{
public:
  explicit Init_Chassis_alarm_lamp_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_lf_door_status alarm_lamp_status(::ros2_interface::msg::Chassis::_alarm_lamp_status_type arg)
  {
    msg_.alarm_lamp_status = std::move(arg);
    return Init_Chassis_lf_door_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_brake_lamp_status
{
public:
  explicit Init_Chassis_brake_lamp_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_alarm_lamp_status brake_lamp_status(::ros2_interface::msg::Chassis::_brake_lamp_status_type arg)
  {
    msg_.brake_lamp_status = std::move(arg);
    return Init_Chassis_alarm_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_rear_fog_lamp_status
{
public:
  explicit Init_Chassis_rear_fog_lamp_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_brake_lamp_status rear_fog_lamp_status(::ros2_interface::msg::Chassis::_rear_fog_lamp_status_type arg)
  {
    msg_.rear_fog_lamp_status = std::move(arg);
    return Init_Chassis_brake_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_front_fog_lamp_status
{
public:
  explicit Init_Chassis_front_fog_lamp_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_rear_fog_lamp_status front_fog_lamp_status(::ros2_interface::msg::Chassis::_front_fog_lamp_status_type arg)
  {
    msg_.front_fog_lamp_status = std::move(arg);
    return Init_Chassis_rear_fog_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_position_lamp_status
{
public:
  explicit Init_Chassis_position_lamp_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_front_fog_lamp_status position_lamp_status(::ros2_interface::msg::Chassis::_position_lamp_status_type arg)
  {
    msg_.position_lamp_status = std::move(arg);
    return Init_Chassis_front_fog_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_rear_wiper_status
{
public:
  explicit Init_Chassis_rear_wiper_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_position_lamp_status rear_wiper_status(::ros2_interface::msg::Chassis::_rear_wiper_status_type arg)
  {
    msg_.rear_wiper_status = std::move(arg);
    return Init_Chassis_position_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_front_wiper_status
{
public:
  explicit Init_Chassis_front_wiper_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_rear_wiper_status front_wiper_status(::ros2_interface::msg::Chassis::_front_wiper_status_type arg)
  {
    msg_.front_wiper_status = std::move(arg);
    return Init_Chassis_rear_wiper_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_turn_lamp_status
{
public:
  explicit Init_Chassis_turn_lamp_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_front_wiper_status turn_lamp_status(::ros2_interface::msg::Chassis::_turn_lamp_status_type arg)
  {
    msg_.turn_lamp_status = std::move(arg);
    return Init_Chassis_front_wiper_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_horn_status
{
public:
  explicit Init_Chassis_horn_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_turn_lamp_status horn_status(::ros2_interface::msg::Chassis::_horn_status_type arg)
  {
    msg_.horn_status = std::move(arg);
    return Init_Chassis_turn_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_low_beam_status
{
public:
  explicit Init_Chassis_low_beam_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_horn_status low_beam_status(::ros2_interface::msg::Chassis::_low_beam_status_type arg)
  {
    msg_.low_beam_status = std::move(arg);
    return Init_Chassis_horn_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_high_beam_status
{
public:
  explicit Init_Chassis_high_beam_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_low_beam_status high_beam_status(::ros2_interface::msg::Chassis::_high_beam_status_type arg)
  {
    msg_.high_beam_status = std::move(arg);
    return Init_Chassis_low_beam_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_driver_seat_belt
{
public:
  explicit Init_Chassis_driver_seat_belt(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_high_beam_status driver_seat_belt(::ros2_interface::msg::Chassis::_driver_seat_belt_type arg)
  {
    msg_.driver_seat_belt = std::move(arg);
    return Init_Chassis_high_beam_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_gear_location
{
public:
  explicit Init_Chassis_gear_location(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_driver_seat_belt gear_location(::ros2_interface::msg::Chassis::_gear_location_type arg)
  {
    msg_.gear_location = std::move(arg);
    return Init_Chassis_driver_seat_belt(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_gear_status
{
public:
  explicit Init_Chassis_gear_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_gear_location gear_status(::ros2_interface::msg::Chassis::_gear_status_type arg)
  {
    msg_.gear_status = std::move(arg);
    return Init_Chassis_gear_location(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_gear_driving_mode
{
public:
  explicit Init_Chassis_gear_driving_mode(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_gear_status gear_driving_mode(::ros2_interface::msg::Chassis::_gear_driving_mode_type arg)
  {
    msg_.gear_driving_mode = std::move(arg);
    return Init_Chassis_gear_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_fuel_range_m
{
public:
  explicit Init_Chassis_fuel_range_m(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_gear_driving_mode fuel_range_m(::ros2_interface::msg::Chassis::_fuel_range_m_type arg)
  {
    msg_.fuel_range_m = std::move(arg);
    return Init_Chassis_gear_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_odometer_m
{
public:
  explicit Init_Chassis_odometer_m(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_fuel_range_m odometer_m(::ros2_interface::msg::Chassis::_odometer_m_type arg)
  {
    msg_.odometer_m = std::move(arg);
    return Init_Chassis_fuel_range_m(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_speed_mps
{
public:
  explicit Init_Chassis_speed_mps(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_odometer_m speed_mps(::ros2_interface::msg::Chassis::_speed_mps_type arg)
  {
    msg_.speed_mps = std::move(arg);
    return Init_Chassis_odometer_m(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_engine_torque
{
public:
  explicit Init_Chassis_engine_torque(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_speed_mps engine_torque(::ros2_interface::msg::Chassis::_engine_torque_type arg)
  {
    msg_.engine_torque = std::move(arg);
    return Init_Chassis_speed_mps(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_engine_rpm
{
public:
  explicit Init_Chassis_engine_rpm(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_engine_torque engine_rpm(::ros2_interface::msg::Chassis::_engine_rpm_type arg)
  {
    msg_.engine_rpm = std::move(arg);
    return Init_Chassis_engine_torque(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_engine_status
{
public:
  explicit Init_Chassis_engine_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_engine_rpm engine_status(::ros2_interface::msg::Chassis::_engine_status_type arg)
  {
    msg_.engine_status = std::move(arg);
    return Init_Chassis_engine_rpm(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_epb_level
{
public:
  explicit Init_Chassis_epb_level(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_engine_status epb_level(::ros2_interface::msg::Chassis::_epb_level_type arg)
  {
    msg_.epb_level = std::move(arg);
    return Init_Chassis_engine_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_epb_status
{
public:
  explicit Init_Chassis_epb_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_epb_level epb_status(::ros2_interface::msg::Chassis::_epb_status_type arg)
  {
    msg_.epb_status = std::move(arg);
    return Init_Chassis_epb_level(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_epb_driving_mode
{
public:
  explicit Init_Chassis_epb_driving_mode(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_epb_status epb_driving_mode(::ros2_interface::msg::Chassis::_epb_driving_mode_type arg)
  {
    msg_.epb_driving_mode = std::move(arg);
    return Init_Chassis_epb_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_backup_brake_value
{
public:
  explicit Init_Chassis_backup_brake_value(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_epb_driving_mode backup_brake_value(::ros2_interface::msg::Chassis::_backup_brake_value_type arg)
  {
    msg_.backup_brake_value = std::move(arg);
    return Init_Chassis_epb_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_backup_brake_status
{
public:
  explicit Init_Chassis_backup_brake_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_backup_brake_value backup_brake_status(::ros2_interface::msg::Chassis::_backup_brake_status_type arg)
  {
    msg_.backup_brake_status = std::move(arg);
    return Init_Chassis_backup_brake_value(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_backup_brake_driving_mode
{
public:
  explicit Init_Chassis_backup_brake_driving_mode(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_backup_brake_status backup_brake_driving_mode(::ros2_interface::msg::Chassis::_backup_brake_driving_mode_type arg)
  {
    msg_.backup_brake_driving_mode = std::move(arg);
    return Init_Chassis_backup_brake_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_brake_value
{
public:
  explicit Init_Chassis_brake_value(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_backup_brake_driving_mode brake_value(::ros2_interface::msg::Chassis::_brake_value_type arg)
  {
    msg_.brake_value = std::move(arg);
    return Init_Chassis_backup_brake_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_brake_status
{
public:
  explicit Init_Chassis_brake_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_brake_value brake_status(::ros2_interface::msg::Chassis::_brake_status_type arg)
  {
    msg_.brake_status = std::move(arg);
    return Init_Chassis_brake_value(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_brake_driving_mode
{
public:
  explicit Init_Chassis_brake_driving_mode(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_brake_status brake_driving_mode(::ros2_interface::msg::Chassis::_brake_driving_mode_type arg)
  {
    msg_.brake_driving_mode = std::move(arg);
    return Init_Chassis_brake_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_accel_value
{
public:
  explicit Init_Chassis_accel_value(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_brake_driving_mode accel_value(::ros2_interface::msg::Chassis::_accel_value_type arg)
  {
    msg_.accel_value = std::move(arg);
    return Init_Chassis_brake_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_accel_status
{
public:
  explicit Init_Chassis_accel_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_accel_value accel_status(::ros2_interface::msg::Chassis::_accel_status_type arg)
  {
    msg_.accel_status = std::move(arg);
    return Init_Chassis_accel_value(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_accel_driving_mode
{
public:
  explicit Init_Chassis_accel_driving_mode(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_accel_status accel_driving_mode(::ros2_interface::msg::Chassis::_accel_driving_mode_type arg)
  {
    msg_.accel_driving_mode = std::move(arg);
    return Init_Chassis_accel_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_rear_steering_rate_dps
{
public:
  explicit Init_Chassis_rear_steering_rate_dps(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_accel_driving_mode rear_steering_rate_dps(::ros2_interface::msg::Chassis::_rear_steering_rate_dps_type arg)
  {
    msg_.rear_steering_rate_dps = std::move(arg);
    return Init_Chassis_accel_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_front_steering_rate_dps
{
public:
  explicit Init_Chassis_front_steering_rate_dps(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_rear_steering_rate_dps front_steering_rate_dps(::ros2_interface::msg::Chassis::_front_steering_rate_dps_type arg)
  {
    msg_.front_steering_rate_dps = std::move(arg);
    return Init_Chassis_rear_steering_rate_dps(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_steering_torque_nm
{
public:
  explicit Init_Chassis_steering_torque_nm(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_front_steering_rate_dps steering_torque_nm(::ros2_interface::msg::Chassis::_steering_torque_nm_type arg)
  {
    msg_.steering_torque_nm = std::move(arg);
    return Init_Chassis_front_steering_rate_dps(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_rear_steering_value
{
public:
  explicit Init_Chassis_rear_steering_value(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_steering_torque_nm rear_steering_value(::ros2_interface::msg::Chassis::_rear_steering_value_type arg)
  {
    msg_.rear_steering_value = std::move(arg);
    return Init_Chassis_steering_torque_nm(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_front_steering_value
{
public:
  explicit Init_Chassis_front_steering_value(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_rear_steering_value front_steering_value(::ros2_interface::msg::Chassis::_front_steering_value_type arg)
  {
    msg_.front_steering_value = std::move(arg);
    return Init_Chassis_rear_steering_value(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_steering_status
{
public:
  explicit Init_Chassis_steering_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_front_steering_value steering_status(::ros2_interface::msg::Chassis::_steering_status_type arg)
  {
    msg_.steering_status = std::move(arg);
    return Init_Chassis_front_steering_value(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_steer_driving_mode
{
public:
  explicit Init_Chassis_steer_driving_mode(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_steering_status steer_driving_mode(::ros2_interface::msg::Chassis::_steer_driving_mode_type arg)
  {
    msg_.steer_driving_mode = std::move(arg);
    return Init_Chassis_steering_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_driving_mode
{
public:
  explicit Init_Chassis_driving_mode(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_steer_driving_mode driving_mode(::ros2_interface::msg::Chassis::_driving_mode_type arg)
  {
    msg_.driving_mode = std::move(arg);
    return Init_Chassis_steer_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_moving_status
{
public:
  explicit Init_Chassis_moving_status(::ros2_interface::msg::Chassis & msg)
  : msg_(msg)
  {}
  Init_Chassis_driving_mode moving_status(::ros2_interface::msg::Chassis::_moving_status_type arg)
  {
    msg_.moving_status = std::move(arg);
    return Init_Chassis_driving_mode(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

class Init_Chassis_header
{
public:
  Init_Chassis_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chassis_moving_status header(::ros2_interface::msg::Chassis::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Chassis_moving_status(msg_);
  }

private:
  ::ros2_interface::msg::Chassis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Chassis>()
{
  return ros2_interface::msg::builder::Init_Chassis_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CHASSIS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Vehicle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/vehicle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Vehicle_aux_brakes
{
public:
  explicit Init_Vehicle_aux_brakes(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Vehicle aux_brakes(::ros2_interface::msg::Vehicle::_aux_brakes_type arg)
  {
    msg_.aux_brakes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_brake_boost
{
public:
  explicit Init_Vehicle_brake_boost(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_aux_brakes brake_boost(::ros2_interface::msg::Vehicle::_brake_boost_type arg)
  {
    msg_.brake_boost = std::move(arg);
    return Init_Vehicle_aux_brakes(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_scs
{
public:
  explicit Init_Vehicle_scs(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_brake_boost scs(::ros2_interface::msg::Vehicle::_scs_type arg)
  {
    msg_.scs = std::move(arg);
    return Init_Vehicle_brake_boost(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_abs
{
public:
  explicit Init_Vehicle_abs(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_scs abs(::ros2_interface::msg::Vehicle::_abs_type arg)
  {
    msg_.abs = std::move(arg);
    return Init_Vehicle_scs(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_traction
{
public:
  explicit Init_Vehicle_traction(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_abs traction(::ros2_interface::msg::Vehicle::_traction_type arg)
  {
    msg_.traction = std::move(arg);
    return Init_Vehicle_abs(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_emergency_button_status
{
public:
  explicit Init_Vehicle_emergency_button_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_traction emergency_button_status(::ros2_interface::msg::Vehicle::_emergency_button_status_type arg)
  {
    msg_.emergency_button_status = std::move(arg);
    return Init_Vehicle_traction(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_bms_charge_status
{
public:
  explicit Init_Vehicle_bms_charge_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_emergency_button_status bms_charge_status(::ros2_interface::msg::Vehicle::_bms_charge_status_type arg)
  {
    msg_.bms_charge_status = std::move(arg);
    return Init_Vehicle_emergency_button_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_hmi_watering
{
public:
  explicit Init_Vehicle_hmi_watering(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_bms_charge_status hmi_watering(::ros2_interface::msg::Vehicle::_hmi_watering_type arg)
  {
    msg_.hmi_watering = std::move(arg);
    return Init_Vehicle_bms_charge_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_hmi_cleanup
{
public:
  explicit Init_Vehicle_hmi_cleanup(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_hmi_watering hmi_cleanup(::ros2_interface::msg::Vehicle::_hmi_cleanup_type arg)
  {
    msg_.hmi_cleanup = std::move(arg);
    return Init_Vehicle_hmi_watering(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_hmi_highbeam
{
public:
  explicit Init_Vehicle_hmi_highbeam(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_hmi_cleanup hmi_highbeam(::ros2_interface::msg::Vehicle::_hmi_highbeam_type arg)
  {
    msg_.hmi_highbeam = std::move(arg);
    return Init_Vehicle_hmi_cleanup(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_water_tank_level
{
public:
  explicit Init_Vehicle_water_tank_level(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_hmi_highbeam water_tank_level(::ros2_interface::msg::Vehicle::_water_tank_level_type arg)
  {
    msg_.water_tank_level = std::move(arg);
    return Init_Vehicle_hmi_highbeam(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_hatch_unlock_switch_status
{
public:
  explicit Init_Vehicle_hatch_unlock_switch_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_water_tank_level hatch_unlock_switch_status(::ros2_interface::msg::Vehicle::_hatch_unlock_switch_status_type arg)
  {
    msg_.hatch_unlock_switch_status = std::move(arg);
    return Init_Vehicle_water_tank_level(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_water_add_switch_status
{
public:
  explicit Init_Vehicle_water_add_switch_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_hatch_unlock_switch_status water_add_switch_status(::ros2_interface::msg::Vehicle::_water_add_switch_status_type arg)
  {
    msg_.water_add_switch_status = std::move(arg);
    return Init_Vehicle_hatch_unlock_switch_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_water_tank_status
{
public:
  explicit Init_Vehicle_water_tank_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_water_add_switch_status water_tank_status(::ros2_interface::msg::Vehicle::_water_tank_status_type arg)
  {
    msg_.water_tank_status = std::move(arg);
    return Init_Vehicle_water_add_switch_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_trash_can_status
{
public:
  explicit Init_Vehicle_trash_can_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_water_tank_status trash_can_status(::ros2_interface::msg::Vehicle::_trash_can_status_type arg)
  {
    msg_.trash_can_status = std::move(arg);
    return Init_Vehicle_water_tank_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_watering_switch_status
{
public:
  explicit Init_Vehicle_watering_switch_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_trash_can_status watering_switch_status(::ros2_interface::msg::Vehicle::_watering_switch_status_type arg)
  {
    msg_.watering_switch_status = std::move(arg);
    return Init_Vehicle_trash_can_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_cleanup_switch_status
{
public:
  explicit Init_Vehicle_cleanup_switch_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_watering_switch_status cleanup_switch_status(::ros2_interface::msg::Vehicle::_cleanup_switch_status_type arg)
  {
    msg_.cleanup_switch_status = std::move(arg);
    return Init_Vehicle_watering_switch_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_height
{
public:
  explicit Init_Vehicle_height(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_cleanup_switch_status height(::ros2_interface::msg::Vehicle::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Vehicle_cleanup_switch_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_width
{
public:
  explicit Init_Vehicle_width(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_height width(::ros2_interface::msg::Vehicle::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Vehicle_height(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_length
{
public:
  explicit Init_Vehicle_length(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_width length(::ros2_interface::msg::Vehicle::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Vehicle_width(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_horn_status
{
public:
  explicit Init_Vehicle_horn_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_length horn_status(::ros2_interface::msg::Vehicle::_horn_status_type arg)
  {
    msg_.horn_status = std::move(arg);
    return Init_Vehicle_length(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_rear_touch_status
{
public:
  explicit Init_Vehicle_rear_touch_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_horn_status rear_touch_status(::ros2_interface::msg::Vehicle::_rear_touch_status_type arg)
  {
    msg_.rear_touch_status = std::move(arg);
    return Init_Vehicle_horn_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_front_touch_status
{
public:
  explicit Init_Vehicle_front_touch_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_rear_touch_status front_touch_status(::ros2_interface::msg::Vehicle::_front_touch_status_type arg)
  {
    msg_.front_touch_status = std::move(arg);
    return Init_Vehicle_rear_touch_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_right_lamp_status
{
public:
  explicit Init_Vehicle_right_lamp_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_front_touch_status right_lamp_status(::ros2_interface::msg::Vehicle::_right_lamp_status_type arg)
  {
    msg_.right_lamp_status = std::move(arg);
    return Init_Vehicle_front_touch_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_left_lamp_status
{
public:
  explicit Init_Vehicle_left_lamp_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_right_lamp_status left_lamp_status(::ros2_interface::msg::Vehicle::_left_lamp_status_type arg)
  {
    msg_.left_lamp_status = std::move(arg);
    return Init_Vehicle_right_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_brakelamp_lamp_status
{
public:
  explicit Init_Vehicle_brakelamp_lamp_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_left_lamp_status brakelamp_lamp_status(::ros2_interface::msg::Vehicle::_brakelamp_lamp_status_type arg)
  {
    msg_.brakelamp_lamp_status = std::move(arg);
    return Init_Vehicle_left_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_backlight_lamp_status
{
public:
  explicit Init_Vehicle_backlight_lamp_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_brakelamp_lamp_status backlight_lamp_status(::ros2_interface::msg::Vehicle::_backlight_lamp_status_type arg)
  {
    msg_.backlight_lamp_status = std::move(arg);
    return Init_Vehicle_brakelamp_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_warning_lamp_status
{
public:
  explicit Init_Vehicle_warning_lamp_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_backlight_lamp_status warning_lamp_status(::ros2_interface::msg::Vehicle::_warning_lamp_status_type arg)
  {
    msg_.warning_lamp_status = std::move(arg);
    return Init_Vehicle_backlight_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_outline_lamp_status
{
public:
  explicit Init_Vehicle_outline_lamp_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_warning_lamp_status outline_lamp_status(::ros2_interface::msg::Vehicle::_outline_lamp_status_type arg)
  {
    msg_.outline_lamp_status = std::move(arg);
    return Init_Vehicle_warning_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_driving_motor_ammeter
{
public:
  explicit Init_Vehicle_driving_motor_ammeter(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_outline_lamp_status driving_motor_ammeter(::ros2_interface::msg::Vehicle::_driving_motor_ammeter_type arg)
  {
    msg_.driving_motor_ammeter = std::move(arg);
    return Init_Vehicle_outline_lamp_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_driving_motor_voltage
{
public:
  explicit Init_Vehicle_driving_motor_voltage(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_driving_motor_ammeter driving_motor_voltage(::ros2_interface::msg::Vehicle::_driving_motor_voltage_type arg)
  {
    msg_.driving_motor_voltage = std::move(arg);
    return Init_Vehicle_driving_motor_ammeter(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_driving_motor_etemp
{
public:
  explicit Init_Vehicle_driving_motor_etemp(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_driving_motor_voltage driving_motor_etemp(::ros2_interface::msg::Vehicle::_driving_motor_etemp_type arg)
  {
    msg_.driving_motor_etemp = std::move(arg);
    return Init_Vehicle_driving_motor_voltage(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_driving_motor_torque
{
public:
  explicit Init_Vehicle_driving_motor_torque(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_driving_motor_etemp driving_motor_torque(::ros2_interface::msg::Vehicle::_driving_motor_torque_type arg)
  {
    msg_.driving_motor_torque = std::move(arg);
    return Init_Vehicle_driving_motor_etemp(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_driving_motor_rspeed
{
public:
  explicit Init_Vehicle_driving_motor_rspeed(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_driving_motor_torque driving_motor_rspeed(::ros2_interface::msg::Vehicle::_driving_motor_rspeed_type arg)
  {
    msg_.driving_motor_rspeed = std::move(arg);
    return Init_Vehicle_driving_motor_torque(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_driving_motor_ctemp
{
public:
  explicit Init_Vehicle_driving_motor_ctemp(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_driving_motor_rspeed driving_motor_ctemp(::ros2_interface::msg::Vehicle::_driving_motor_ctemp_type arg)
  {
    msg_.driving_motor_ctemp = std::move(arg);
    return Init_Vehicle_driving_motor_rspeed(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_driving_motor_status
{
public:
  explicit Init_Vehicle_driving_motor_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_driving_motor_ctemp driving_motor_status(::ros2_interface::msg::Vehicle::_driving_motor_status_type arg)
  {
    msg_.driving_motor_status = std::move(arg);
    return Init_Vehicle_driving_motor_ctemp(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_driving_motor_idx
{
public:
  explicit Init_Vehicle_driving_motor_idx(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_driving_motor_status driving_motor_idx(::ros2_interface::msg::Vehicle::_driving_motor_idx_type arg)
  {
    msg_.driving_motor_idx = std::move(arg);
    return Init_Vehicle_driving_motor_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_refrigeration_ctemp
{
public:
  explicit Init_Vehicle_refrigeration_ctemp(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_driving_motor_idx refrigeration_ctemp(::ros2_interface::msg::Vehicle::_refrigeration_ctemp_type arg)
  {
    msg_.refrigeration_ctemp = std::move(arg);
    return Init_Vehicle_driving_motor_idx(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_refrigeration_stemp
{
public:
  explicit Init_Vehicle_refrigeration_stemp(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_refrigeration_ctemp refrigeration_stemp(::ros2_interface::msg::Vehicle::_refrigeration_stemp_type arg)
  {
    msg_.refrigeration_stemp = std::move(arg);
    return Init_Vehicle_refrigeration_ctemp(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_refrigeration_status
{
public:
  explicit Init_Vehicle_refrigeration_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_refrigeration_stemp refrigeration_status(::ros2_interface::msg::Vehicle::_refrigeration_status_type arg)
  {
    msg_.refrigeration_status = std::move(arg);
    return Init_Vehicle_refrigeration_stemp(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_refrigeration_idx
{
public:
  explicit Init_Vehicle_refrigeration_idx(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_refrigeration_status refrigeration_idx(::ros2_interface::msg::Vehicle::_refrigeration_idx_type arg)
  {
    msg_.refrigeration_idx = std::move(arg);
    return Init_Vehicle_refrigeration_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_delay
{
public:
  explicit Init_Vehicle_delay(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_refrigeration_idx delay(::ros2_interface::msg::Vehicle::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return Init_Vehicle_refrigeration_idx(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_loss
{
public:
  explicit Init_Vehicle_loss(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_delay loss(::ros2_interface::msg::Vehicle::_loss_type arg)
  {
    msg_.loss = std::move(arg);
    return Init_Vehicle_delay(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_dspeed
{
public:
  explicit Init_Vehicle_dspeed(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_loss dspeed(::ros2_interface::msg::Vehicle::_dspeed_type arg)
  {
    msg_.dspeed = std::move(arg);
    return Init_Vehicle_loss(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_uspeed
{
public:
  explicit Init_Vehicle_uspeed(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_dspeed uspeed(::ros2_interface::msg::Vehicle::_uspeed_type arg)
  {
    msg_.uspeed = std::move(arg);
    return Init_Vehicle_dspeed(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_sinr
{
public:
  explicit Init_Vehicle_sinr(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_uspeed sinr(::ros2_interface::msg::Vehicle::_sinr_type arg)
  {
    msg_.sinr = std::move(arg);
    return Init_Vehicle_uspeed(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_rsrp
{
public:
  explicit Init_Vehicle_rsrp(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_sinr rsrp(::ros2_interface::msg::Vehicle::_rsrp_type arg)
  {
    msg_.rsrp = std::move(arg);
    return Init_Vehicle_sinr(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_door_status
{
public:
  explicit Init_Vehicle_door_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_rsrp door_status(::ros2_interface::msg::Vehicle::_door_status_type arg)
  {
    msg_.door_status = std::move(arg);
    return Init_Vehicle_rsrp(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_airconditioning_defrost
{
public:
  explicit Init_Vehicle_airconditioning_defrost(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_door_status airconditioning_defrost(::ros2_interface::msg::Vehicle::_airconditioning_defrost_type arg)
  {
    msg_.airconditioning_defrost = std::move(arg);
    return Init_Vehicle_door_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_airconditioning_volume
{
public:
  explicit Init_Vehicle_airconditioning_volume(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_airconditioning_defrost airconditioning_volume(::ros2_interface::msg::Vehicle::_airconditioning_volume_type arg)
  {
    msg_.airconditioning_volume = std::move(arg);
    return Init_Vehicle_airconditioning_defrost(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_airconditioning_model
{
public:
  explicit Init_Vehicle_airconditioning_model(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_airconditioning_volume airconditioning_model(::ros2_interface::msg::Vehicle::_airconditioning_model_type arg)
  {
    msg_.airconditioning_model = std::move(arg);
    return Init_Vehicle_airconditioning_volume(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_airconditioning_status
{
public:
  explicit Init_Vehicle_airconditioning_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_airconditioning_model airconditioning_status(::ros2_interface::msg::Vehicle::_airconditioning_status_type arg)
  {
    msg_.airconditioning_status = std::move(arg);
    return Init_Vehicle_airconditioning_model(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_airconditioning_idx
{
public:
  explicit Init_Vehicle_airconditioning_idx(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_airconditioning_status airconditioning_idx(::ros2_interface::msg::Vehicle::_airconditioning_idx_type arg)
  {
    msg_.airconditioning_idx = std::move(arg);
    return Init_Vehicle_airconditioning_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_capacity
{
public:
  explicit Init_Vehicle_battery_capacity(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_airconditioning_idx battery_capacity(::ros2_interface::msg::Vehicle::_battery_capacity_type arg)
  {
    msg_.battery_capacity = std::move(arg);
    return Init_Vehicle_airconditioning_idx(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_h_dc_dc
{
public:
  explicit Init_Vehicle_battery_h_dc_dc(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_capacity battery_h_dc_dc(::ros2_interface::msg::Vehicle::_battery_h_dc_dc_type arg)
  {
    msg_.battery_h_dc_dc = std::move(arg);
    return Init_Vehicle_battery_capacity(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_s_sensor_code
{
public:
  explicit Init_Vehicle_battery_s_sensor_code(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_h_dc_dc battery_s_sensor_code(::ros2_interface::msg::Vehicle::_battery_s_sensor_code_type arg)
  {
    msg_.battery_s_sensor_code = std::move(arg);
    return Init_Vehicle_battery_h_dc_dc(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_stress
{
public:
  explicit Init_Vehicle_battery_stress(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_s_sensor_code battery_stress(::ros2_interface::msg::Vehicle::_battery_stress_type arg)
  {
    msg_.battery_stress = std::move(arg);
    return Init_Vehicle_battery_s_sensor_code(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_c_sensor_code
{
public:
  explicit Init_Vehicle_battery_c_sensor_code(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_stress battery_c_sensor_code(::ros2_interface::msg::Vehicle::_battery_c_sensor_code_type arg)
  {
    msg_.battery_c_sensor_code = std::move(arg);
    return Init_Vehicle_battery_stress(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_h_concentration
{
public:
  explicit Init_Vehicle_battery_h_concentration(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_c_sensor_code battery_h_concentration(::ros2_interface::msg::Vehicle::_battery_h_concentration_type arg)
  {
    msg_.battery_h_concentration = std::move(arg);
    return Init_Vehicle_battery_c_sensor_code(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_probe_code
{
public:
  explicit Init_Vehicle_battery_probe_code(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_h_concentration battery_probe_code(::ros2_interface::msg::Vehicle::_battery_probe_code_type arg)
  {
    msg_.battery_probe_code = std::move(arg);
    return Init_Vehicle_battery_h_concentration(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_ltepemperatures
{
public:
  explicit Init_Vehicle_battery_ltepemperatures(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_probe_code battery_ltepemperatures(::ros2_interface::msg::Vehicle::_battery_ltepemperatures_type arg)
  {
    msg_.battery_ltepemperatures = std::move(arg);
    return Init_Vehicle_battery_probe_code(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_h_tepemperatures
{
public:
  explicit Init_Vehicle_battery_h_tepemperatures(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_ltepemperatures battery_h_tepemperatures(::ros2_interface::msg::Vehicle::_battery_h_tepemperatures_type arg)
  {
    msg_.battery_h_tepemperatures = std::move(arg);
    return Init_Vehicle_battery_ltepemperatures(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_temperatures
{
public:
  explicit Init_Vehicle_battery_temperatures(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_h_tepemperatures battery_temperatures(::ros2_interface::msg::Vehicle::_battery_temperatures_type arg)
  {
    msg_.battery_temperatures = std::move(arg);
    return Init_Vehicle_battery_h_tepemperatures(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_probe
{
public:
  explicit Init_Vehicle_battery_probe(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_temperatures battery_probe(::ros2_interface::msg::Vehicle::_battery_probe_type arg)
  {
    msg_.battery_probe = std::move(arg);
    return Init_Vehicle_battery_temperatures(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_consumption
{
public:
  explicit Init_Vehicle_battery_consumption(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_probe battery_consumption(::ros2_interface::msg::Vehicle::_battery_consumption_type arg)
  {
    msg_.battery_consumption = std::move(arg);
    return Init_Vehicle_battery_probe(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_ammeter
{
public:
  explicit Init_Vehicle_battery_ammeter(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_consumption battery_ammeter(::ros2_interface::msg::Vehicle::_battery_ammeter_type arg)
  {
    msg_.battery_ammeter = std::move(arg);
    return Init_Vehicle_battery_consumption(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_battery_voltage
{
public:
  explicit Init_Vehicle_battery_voltage(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_ammeter battery_voltage(::ros2_interface::msg::Vehicle::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_Vehicle_battery_ammeter(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_engine_status
{
public:
  explicit Init_Vehicle_engine_status(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_battery_voltage engine_status(::ros2_interface::msg::Vehicle::_engine_status_type arg)
  {
    msg_.engine_status = std::move(arg);
    return Init_Vehicle_battery_voltage(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_seat_belt
{
public:
  explicit Init_Vehicle_seat_belt(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_engine_status seat_belt(::ros2_interface::msg::Vehicle::_seat_belt_type arg)
  {
    msg_.seat_belt = std::move(arg);
    return Init_Vehicle_engine_status(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_servicemode
{
public:
  explicit Init_Vehicle_servicemode(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_seat_belt servicemode(::ros2_interface::msg::Vehicle::_servicemode_type arg)
  {
    msg_.servicemode = std::move(arg);
    return Init_Vehicle_seat_belt(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_seats
{
public:
  explicit Init_Vehicle_seats(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_servicemode seats(::ros2_interface::msg::Vehicle::_seats_type arg)
  {
    msg_.seats = std::move(arg);
    return Init_Vehicle_servicemode(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_resistance
{
public:
  explicit Init_Vehicle_resistance(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_seats resistance(::ros2_interface::msg::Vehicle::_resistance_type arg)
  {
    msg_.resistance = std::move(arg);
    return Init_Vehicle_seats(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_dcdc
{
public:
  explicit Init_Vehicle_dcdc(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_resistance dcdc(::ros2_interface::msg::Vehicle::_dcdc_type arg)
  {
    msg_.dcdc = std::move(arg);
    return Init_Vehicle_resistance(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_recharge
{
public:
  explicit Init_Vehicle_recharge(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_dcdc recharge(::ros2_interface::msg::Vehicle::_recharge_type arg)
  {
    msg_.recharge = std::move(arg);
    return Init_Vehicle_dcdc(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_totalvoltage
{
public:
  explicit Init_Vehicle_totalvoltage(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_recharge totalvoltage(::ros2_interface::msg::Vehicle::_totalvoltage_type arg)
  {
    msg_.totalvoltage = std::move(arg);
    return Init_Vehicle_recharge(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_batterysoc
{
public:
  explicit Init_Vehicle_batterysoc(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_totalvoltage batterysoc(::ros2_interface::msg::Vehicle::_batterysoc_type arg)
  {
    msg_.batterysoc = std::move(arg);
    return Init_Vehicle_totalvoltage(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_totalcurrent
{
public:
  explicit Init_Vehicle_totalcurrent(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_batterysoc totalcurrent(::ros2_interface::msg::Vehicle::_totalcurrent_type arg)
  {
    msg_.totalcurrent = std::move(arg);
    return Init_Vehicle_batterysoc(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_operation
{
public:
  explicit Init_Vehicle_operation(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_totalcurrent operation(::ros2_interface::msg::Vehicle::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return Init_Vehicle_totalcurrent(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_oid
{
public:
  explicit Init_Vehicle_oid(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_operation oid(::ros2_interface::msg::Vehicle::_oid_type arg)
  {
    msg_.oid = std::move(arg);
    return Init_Vehicle_operation(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_vehicle_num
{
public:
  explicit Init_Vehicle_vehicle_num(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_oid vehicle_num(::ros2_interface::msg::Vehicle::_vehicle_num_type arg)
  {
    msg_.vehicle_num = std::move(arg);
    return Init_Vehicle_oid(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_vid
{
public:
  explicit Init_Vehicle_vid(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_vehicle_num vid(::ros2_interface::msg::Vehicle::_vid_type arg)
  {
    msg_.vid = std::move(arg);
    return Init_Vehicle_vehicle_num(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_vehicle_type
{
public:
  explicit Init_Vehicle_vehicle_type(::ros2_interface::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_vid vehicle_type(::ros2_interface::msg::Vehicle::_vehicle_type_type arg)
  {
    msg_.vehicle_type = std::move(arg);
    return Init_Vehicle_vid(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

class Init_Vehicle_header
{
public:
  Init_Vehicle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vehicle_vehicle_type header(::ros2_interface::msg::Vehicle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Vehicle_vehicle_type(msg_);
  }

private:
  ::ros2_interface::msg::Vehicle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Vehicle>()
{
  return ros2_interface::msg::builder::Init_Vehicle_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE__BUILDER_HPP_

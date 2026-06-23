// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Chassis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CHASSIS__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CHASSIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/chassis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Chassis & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: moving_status
  {
    out << "moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_status, out);
    out << ", ";
  }

  // member: driving_mode
  {
    out << "driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode, out);
    out << ", ";
  }

  // member: steer_driving_mode
  {
    out << "steer_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_driving_mode, out);
    out << ", ";
  }

  // member: steering_status
  {
    out << "steering_status: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_status, out);
    out << ", ";
  }

  // member: front_steering_value
  {
    out << "front_steering_value: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_value, out);
    out << ", ";
  }

  // member: rear_steering_value
  {
    out << "rear_steering_value: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_value, out);
    out << ", ";
  }

  // member: steering_torque_nm
  {
    out << "steering_torque_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_torque_nm, out);
    out << ", ";
  }

  // member: front_steering_rate_dps
  {
    out << "front_steering_rate_dps: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_rate_dps, out);
    out << ", ";
  }

  // member: rear_steering_rate_dps
  {
    out << "rear_steering_rate_dps: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_rate_dps, out);
    out << ", ";
  }

  // member: accel_driving_mode
  {
    out << "accel_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_driving_mode, out);
    out << ", ";
  }

  // member: accel_status
  {
    out << "accel_status: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_status, out);
    out << ", ";
  }

  // member: accel_value
  {
    out << "accel_value: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_value, out);
    out << ", ";
  }

  // member: brake_driving_mode
  {
    out << "brake_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_driving_mode, out);
    out << ", ";
  }

  // member: brake_status
  {
    out << "brake_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_status, out);
    out << ", ";
  }

  // member: brake_value
  {
    out << "brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value, out);
    out << ", ";
  }

  // member: backup_brake_driving_mode
  {
    out << "backup_brake_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.backup_brake_driving_mode, out);
    out << ", ";
  }

  // member: backup_brake_status
  {
    out << "backup_brake_status: ";
    rosidl_generator_traits::value_to_yaml(msg.backup_brake_status, out);
    out << ", ";
  }

  // member: backup_brake_value
  {
    out << "backup_brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.backup_brake_value, out);
    out << ", ";
  }

  // member: epb_driving_mode
  {
    out << "epb_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_driving_mode, out);
    out << ", ";
  }

  // member: epb_status
  {
    out << "epb_status: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_status, out);
    out << ", ";
  }

  // member: epb_level
  {
    out << "epb_level: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_level, out);
    out << ", ";
  }

  // member: engine_status
  {
    out << "engine_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_status, out);
    out << ", ";
  }

  // member: engine_rpm
  {
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << ", ";
  }

  // member: engine_torque
  {
    out << "engine_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_torque, out);
    out << ", ";
  }

  // member: speed_mps
  {
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << ", ";
  }

  // member: odometer_m
  {
    out << "odometer_m: ";
    rosidl_generator_traits::value_to_yaml(msg.odometer_m, out);
    out << ", ";
  }

  // member: fuel_range_m
  {
    out << "fuel_range_m: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_range_m, out);
    out << ", ";
  }

  // member: gear_driving_mode
  {
    out << "gear_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_driving_mode, out);
    out << ", ";
  }

  // member: gear_status
  {
    out << "gear_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_status, out);
    out << ", ";
  }

  // member: gear_location
  {
    out << "gear_location: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_location, out);
    out << ", ";
  }

  // member: driver_seat_belt
  {
    out << "driver_seat_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_seat_belt, out);
    out << ", ";
  }

  // member: high_beam_status
  {
    out << "high_beam_status: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam_status, out);
    out << ", ";
  }

  // member: low_beam_status
  {
    out << "low_beam_status: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam_status, out);
    out << ", ";
  }

  // member: horn_status
  {
    out << "horn_status: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_status, out);
    out << ", ";
  }

  // member: turn_lamp_status
  {
    out << "turn_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_status, out);
    out << ", ";
  }

  // member: front_wiper_status
  {
    out << "front_wiper_status: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wiper_status, out);
    out << ", ";
  }

  // member: rear_wiper_status
  {
    out << "rear_wiper_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_wiper_status, out);
    out << ", ";
  }

  // member: position_lamp_status
  {
    out << "position_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.position_lamp_status, out);
    out << ", ";
  }

  // member: front_fog_lamp_status
  {
    out << "front_fog_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.front_fog_lamp_status, out);
    out << ", ";
  }

  // member: rear_fog_lamp_status
  {
    out << "rear_fog_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_fog_lamp_status, out);
    out << ", ";
  }

  // member: brake_lamp_status
  {
    out << "brake_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_lamp_status, out);
    out << ", ";
  }

  // member: alarm_lamp_status
  {
    out << "alarm_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_lamp_status, out);
    out << ", ";
  }

  // member: lf_door_status
  {
    out << "lf_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lf_door_status, out);
    out << ", ";
  }

  // member: rf_door_status
  {
    out << "rf_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rf_door_status, out);
    out << ", ";
  }

  // member: lr_door_status
  {
    out << "lr_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_door_status, out);
    out << ", ";
  }

  // member: rr_door_status
  {
    out << "rr_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_door_status, out);
    out << ", ";
  }

  // member: rearview_mirror_status
  {
    out << "rearview_mirror_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rearview_mirror_status, out);
    out << ", ";
  }

  // member: trunk_status
  {
    out << "trunk_status: ";
    rosidl_generator_traits::value_to_yaml(msg.trunk_status, out);
    out << ", ";
  }

  // member: engine_bay_door_status
  {
    out << "engine_bay_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_bay_door_status, out);
    out << ", ";
  }

  // member: wheel_direction_rr
  {
    out << "wheel_direction_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_rr, out);
    out << ", ";
  }

  // member: wheel_spd_rr
  {
    out << "wheel_spd_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_rr, out);
    out << ", ";
  }

  // member: wheel_direction_rl
  {
    out << "wheel_direction_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_rl, out);
    out << ", ";
  }

  // member: wheel_spd_rl
  {
    out << "wheel_spd_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_rl, out);
    out << ", ";
  }

  // member: wheel_direction_fr
  {
    out << "wheel_direction_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_fr, out);
    out << ", ";
  }

  // member: wheel_spd_fr
  {
    out << "wheel_spd_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_fr, out);
    out << ", ";
  }

  // member: wheel_direction_fl
  {
    out << "wheel_direction_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_fl, out);
    out << ", ";
  }

  // member: wheel_spd_fl
  {
    out << "wheel_spd_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_fl, out);
    out << ", ";
  }

  // member: is_tire_pressure_ok
  {
    out << "is_tire_pressure_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_ok, out);
    out << ", ";
  }

  // member: is_tire_pressure_lf_valid
  {
    out << "is_tire_pressure_lf_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_lf_valid, out);
    out << ", ";
  }

  // member: tire_pressure_lf
  {
    out << "tire_pressure_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_pressure_lf, out);
    out << ", ";
  }

  // member: is_tire_pressure_rf_valid
  {
    out << "is_tire_pressure_rf_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_rf_valid, out);
    out << ", ";
  }

  // member: tire_pressure_rf
  {
    out << "tire_pressure_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_pressure_rf, out);
    out << ", ";
  }

  // member: is_tire_pressure_lr_valid
  {
    out << "is_tire_pressure_lr_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_lr_valid, out);
    out << ", ";
  }

  // member: tire_pressure_lr
  {
    out << "tire_pressure_lr: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_pressure_lr, out);
    out << ", ";
  }

  // member: is_tire_pressure_rr_valid
  {
    out << "is_tire_pressure_rr_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_rr_valid, out);
    out << ", ";
  }

  // member: tire_pressure_rr
  {
    out << "tire_pressure_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_pressure_rr, out);
    out << ", ";
  }

  // member: battery_power_percentage
  {
    out << "battery_power_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_power_percentage, out);
    out << ", ";
  }

  // member: air_bag_status
  {
    out << "air_bag_status: ";
    rosidl_generator_traits::value_to_yaml(msg.air_bag_status, out);
    out << ", ";
  }

  // member: charging_gun_status
  {
    out << "charging_gun_status: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_gun_status, out);
    out << ", ";
  }

  // member: vehicle_power_status
  {
    out << "vehicle_power_status: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_power_status, out);
    out << ", ";
  }

  // member: chassis_error_code
  {
    if (msg.chassis_error_code.size() == 0) {
      out << "chassis_error_code: []";
    } else {
      out << "chassis_error_code: [";
      size_t pending_items = msg.chassis_error_code.size();
      for (auto item : msg.chassis_error_code) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chassis & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: moving_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_status, out);
    out << "\n";
  }

  // member: driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode, out);
    out << "\n";
  }

  // member: steer_driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_driving_mode, out);
    out << "\n";
  }

  // member: steering_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_status: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_status, out);
    out << "\n";
  }

  // member: front_steering_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steering_value: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_value, out);
    out << "\n";
  }

  // member: rear_steering_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steering_value: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_value, out);
    out << "\n";
  }

  // member: steering_torque_nm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_torque_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_torque_nm, out);
    out << "\n";
  }

  // member: front_steering_rate_dps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steering_rate_dps: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_rate_dps, out);
    out << "\n";
  }

  // member: rear_steering_rate_dps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steering_rate_dps: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_rate_dps, out);
    out << "\n";
  }

  // member: accel_driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_driving_mode, out);
    out << "\n";
  }

  // member: accel_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_status: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_status, out);
    out << "\n";
  }

  // member: accel_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_value: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_value, out);
    out << "\n";
  }

  // member: brake_driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_driving_mode, out);
    out << "\n";
  }

  // member: brake_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_status, out);
    out << "\n";
  }

  // member: brake_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value, out);
    out << "\n";
  }

  // member: backup_brake_driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "backup_brake_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.backup_brake_driving_mode, out);
    out << "\n";
  }

  // member: backup_brake_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "backup_brake_status: ";
    rosidl_generator_traits::value_to_yaml(msg.backup_brake_status, out);
    out << "\n";
  }

  // member: backup_brake_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "backup_brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.backup_brake_value, out);
    out << "\n";
  }

  // member: epb_driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_driving_mode, out);
    out << "\n";
  }

  // member: epb_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_status: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_status, out);
    out << "\n";
  }

  // member: epb_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_level: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_level, out);
    out << "\n";
  }

  // member: engine_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_status, out);
    out << "\n";
  }

  // member: engine_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << "\n";
  }

  // member: engine_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_torque, out);
    out << "\n";
  }

  // member: speed_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << "\n";
  }

  // member: odometer_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odometer_m: ";
    rosidl_generator_traits::value_to_yaml(msg.odometer_m, out);
    out << "\n";
  }

  // member: fuel_range_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_range_m: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_range_m, out);
    out << "\n";
  }

  // member: gear_driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_driving_mode, out);
    out << "\n";
  }

  // member: gear_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_status, out);
    out << "\n";
  }

  // member: gear_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_location: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_location, out);
    out << "\n";
  }

  // member: driver_seat_belt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_seat_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_seat_belt, out);
    out << "\n";
  }

  // member: high_beam_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beam_status: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam_status, out);
    out << "\n";
  }

  // member: low_beam_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_beam_status: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam_status, out);
    out << "\n";
  }

  // member: horn_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn_status: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_status, out);
    out << "\n";
  }

  // member: turn_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_status, out);
    out << "\n";
  }

  // member: front_wiper_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_wiper_status: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wiper_status, out);
    out << "\n";
  }

  // member: rear_wiper_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_wiper_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_wiper_status, out);
    out << "\n";
  }

  // member: position_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.position_lamp_status, out);
    out << "\n";
  }

  // member: front_fog_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_fog_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.front_fog_lamp_status, out);
    out << "\n";
  }

  // member: rear_fog_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_fog_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_fog_lamp_status, out);
    out << "\n";
  }

  // member: brake_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_lamp_status, out);
    out << "\n";
  }

  // member: alarm_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_lamp_status, out);
    out << "\n";
  }

  // member: lf_door_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lf_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lf_door_status, out);
    out << "\n";
  }

  // member: rf_door_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rf_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rf_door_status, out);
    out << "\n";
  }

  // member: lr_door_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_door_status, out);
    out << "\n";
  }

  // member: rr_door_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_door_status, out);
    out << "\n";
  }

  // member: rearview_mirror_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rearview_mirror_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rearview_mirror_status, out);
    out << "\n";
  }

  // member: trunk_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trunk_status: ";
    rosidl_generator_traits::value_to_yaml(msg.trunk_status, out);
    out << "\n";
  }

  // member: engine_bay_door_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_bay_door_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_bay_door_status, out);
    out << "\n";
  }

  // member: wheel_direction_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_direction_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_rr, out);
    out << "\n";
  }

  // member: wheel_spd_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_rr, out);
    out << "\n";
  }

  // member: wheel_direction_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_direction_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_rl, out);
    out << "\n";
  }

  // member: wheel_spd_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_rl, out);
    out << "\n";
  }

  // member: wheel_direction_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_direction_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_fr, out);
    out << "\n";
  }

  // member: wheel_spd_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_fr, out);
    out << "\n";
  }

  // member: wheel_direction_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_direction_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_fl, out);
    out << "\n";
  }

  // member: wheel_spd_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_fl, out);
    out << "\n";
  }

  // member: is_tire_pressure_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_tire_pressure_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_ok, out);
    out << "\n";
  }

  // member: is_tire_pressure_lf_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_tire_pressure_lf_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_lf_valid, out);
    out << "\n";
  }

  // member: tire_pressure_lf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tire_pressure_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_pressure_lf, out);
    out << "\n";
  }

  // member: is_tire_pressure_rf_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_tire_pressure_rf_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_rf_valid, out);
    out << "\n";
  }

  // member: tire_pressure_rf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tire_pressure_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_pressure_rf, out);
    out << "\n";
  }

  // member: is_tire_pressure_lr_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_tire_pressure_lr_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_lr_valid, out);
    out << "\n";
  }

  // member: tire_pressure_lr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tire_pressure_lr: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_pressure_lr, out);
    out << "\n";
  }

  // member: is_tire_pressure_rr_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_tire_pressure_rr_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tire_pressure_rr_valid, out);
    out << "\n";
  }

  // member: tire_pressure_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tire_pressure_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_pressure_rr, out);
    out << "\n";
  }

  // member: battery_power_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_power_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_power_percentage, out);
    out << "\n";
  }

  // member: air_bag_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_bag_status: ";
    rosidl_generator_traits::value_to_yaml(msg.air_bag_status, out);
    out << "\n";
  }

  // member: charging_gun_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_gun_status: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_gun_status, out);
    out << "\n";
  }

  // member: vehicle_power_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_power_status: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_power_status, out);
    out << "\n";
  }

  // member: chassis_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.chassis_error_code.size() == 0) {
      out << "chassis_error_code: []\n";
    } else {
      out << "chassis_error_code:\n";
      for (auto item : msg.chassis_error_code) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chassis & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_interface::msg::Chassis & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Chassis & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Chassis>()
{
  return "ros2_interface::msg::Chassis";
}

template<>
inline const char * name<ros2_interface::msg::Chassis>()
{
  return "ros2_interface/msg/Chassis";
}

template<>
struct has_fixed_size<ros2_interface::msg::Chassis>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::Chassis>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::Chassis>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__CHASSIS__TRAITS_HPP_

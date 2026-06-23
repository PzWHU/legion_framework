// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/VehicleParam.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/vehicle_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleParam & msg,
  std::ostream & out)
{
  out << "{";
  // member: brand
  {
    out << "brand: ";
    rosidl_generator_traits::value_to_yaml(msg.brand, out);
    out << ", ";
  }

  // member: steer_mode
  {
    out << "steer_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_mode, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: mass_fl
  {
    out << "mass_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_fl, out);
    out << ", ";
  }

  // member: mass_fr
  {
    out << "mass_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_fr, out);
    out << ", ";
  }

  // member: mass_rl
  {
    out << "mass_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_rl, out);
    out << ", ";
  }

  // member: mass_rr
  {
    out << "mass_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_rr, out);
    out << ", ";
  }

  // member: wheel_radius
  {
    out << "wheel_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_radius, out);
    out << ", ";
  }

  // member: wheelbase
  {
    out << "wheelbase: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelbase, out);
    out << ", ";
  }

  // member: front_edge_to_center
  {
    out << "front_edge_to_center: ";
    rosidl_generator_traits::value_to_yaml(msg.front_edge_to_center, out);
    out << ", ";
  }

  // member: back_edge_to_center
  {
    out << "back_edge_to_center: ";
    rosidl_generator_traits::value_to_yaml(msg.back_edge_to_center, out);
    out << ", ";
  }

  // member: lf
  {
    out << "lf: ";
    rosidl_generator_traits::value_to_yaml(msg.lf, out);
    out << ", ";
  }

  // member: lr
  {
    out << "lr: ";
    rosidl_generator_traits::value_to_yaml(msg.lr, out);
    out << ", ";
  }

  // member: cf
  {
    out << "cf: ";
    rosidl_generator_traits::value_to_yaml(msg.cf, out);
    out << ", ";
  }

  // member: cr
  {
    out << "cr: ";
    rosidl_generator_traits::value_to_yaml(msg.cr, out);
    out << ", ";
  }

  // member: steer_ratio
  {
    out << "steer_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio, out);
    out << ", ";
  }

  // member: rolling_coefficient
  {
    out << "rolling_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_coefficient, out);
    out << ", ";
  }

  // member: air_density
  {
    out << "air_density: ";
    rosidl_generator_traits::value_to_yaml(msg.air_density, out);
    out << ", ";
  }

  // member: air_damping_coefficient
  {
    out << "air_damping_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.air_damping_coefficient, out);
    out << ", ";
  }

  // member: max_front_steer_angle
  {
    out << "max_front_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_front_steer_angle, out);
    out << ", ";
  }

  // member: min_front_steer_angle
  {
    out << "min_front_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.min_front_steer_angle, out);
    out << ", ";
  }

  // member: max_rear_steer_angle
  {
    out << "max_rear_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rear_steer_angle, out);
    out << ", ";
  }

  // member: min_rear_steer_angle
  {
    out << "min_rear_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.min_rear_steer_angle, out);
    out << ", ";
  }

  // member: speed_limit
  {
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
    out << ", ";
  }

  // member: max_brake_value
  {
    out << "max_brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_brake_value, out);
    out << ", ";
  }

  // member: min_brake_value
  {
    out << "min_brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_brake_value, out);
    out << ", ";
  }

  // member: max_accel_value
  {
    out << "max_accel_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_accel_value, out);
    out << ", ";
  }

  // member: min_accel_value
  {
    out << "min_accel_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_accel_value, out);
    out << ", ";
  }

  // member: speed_deadzone
  {
    out << "speed_deadzone: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_deadzone, out);
    out << ", ";
  }

  // member: standstill_acceleration
  {
    out << "standstill_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.standstill_acceleration, out);
    out << ", ";
  }

  // member: max_front_steer_angle_rate
  {
    out << "max_front_steer_angle_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_front_steer_angle_rate, out);
    out << ", ";
  }

  // member: max_rear_steer_angle_rate
  {
    out << "max_rear_steer_angle_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rear_steer_angle_rate, out);
    out << ", ";
  }

  // member: max_abs_speed_when_stopped
  {
    out << "max_abs_speed_when_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.max_abs_speed_when_stopped, out);
    out << ", ";
  }

  // member: max_abs_speed_when_stopped_duration
  {
    out << "max_abs_speed_when_stopped_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_abs_speed_when_stopped_duration, out);
    out << ", ";
  }

  // member: brake_value_when_gear_transitioning
  {
    out << "brake_value_when_gear_transitioning: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value_when_gear_transitioning, out);
    out << ", ";
  }

  // member: accel_deadzone
  {
    out << "accel_deadzone: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_deadzone, out);
    out << ", ";
  }

  // member: brake_deadzone
  {
    out << "brake_deadzone: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_deadzone, out);
    out << ", ";
  }

  // member: acceleration_in_idle
  {
    out << "acceleration_in_idle: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_in_idle, out);
    out << ", ";
  }

  // member: deceleration_in_idle
  {
    out << "deceleration_in_idle: ";
    rosidl_generator_traits::value_to_yaml(msg.deceleration_in_idle, out);
    out << ", ";
  }

  // member: max_acceleration_jerk
  {
    out << "max_acceleration_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration_jerk, out);
    out << ", ";
  }

  // member: max_acceleration
  {
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << ", ";
  }

  // member: max_deceleration
  {
    out << "max_deceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_deceleration, out);
    out << ", ";
  }

  // member: min_turning_radius
  {
    out << "min_turning_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.min_turning_radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brand: ";
    rosidl_generator_traits::value_to_yaml(msg.brand, out);
    out << "\n";
  }

  // member: steer_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_mode, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: mass_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_fl, out);
    out << "\n";
  }

  // member: mass_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_fr, out);
    out << "\n";
  }

  // member: mass_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_rl, out);
    out << "\n";
  }

  // member: mass_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_rr, out);
    out << "\n";
  }

  // member: wheel_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_radius, out);
    out << "\n";
  }

  // member: wheelbase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelbase: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelbase, out);
    out << "\n";
  }

  // member: front_edge_to_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_edge_to_center: ";
    rosidl_generator_traits::value_to_yaml(msg.front_edge_to_center, out);
    out << "\n";
  }

  // member: back_edge_to_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_edge_to_center: ";
    rosidl_generator_traits::value_to_yaml(msg.back_edge_to_center, out);
    out << "\n";
  }

  // member: lf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lf: ";
    rosidl_generator_traits::value_to_yaml(msg.lf, out);
    out << "\n";
  }

  // member: lr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr: ";
    rosidl_generator_traits::value_to_yaml(msg.lr, out);
    out << "\n";
  }

  // member: cf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cf: ";
    rosidl_generator_traits::value_to_yaml(msg.cf, out);
    out << "\n";
  }

  // member: cr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cr: ";
    rosidl_generator_traits::value_to_yaml(msg.cr, out);
    out << "\n";
  }

  // member: steer_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio, out);
    out << "\n";
  }

  // member: rolling_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_coefficient, out);
    out << "\n";
  }

  // member: air_density
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_density: ";
    rosidl_generator_traits::value_to_yaml(msg.air_density, out);
    out << "\n";
  }

  // member: air_damping_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_damping_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.air_damping_coefficient, out);
    out << "\n";
  }

  // member: max_front_steer_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_front_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_front_steer_angle, out);
    out << "\n";
  }

  // member: min_front_steer_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_front_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.min_front_steer_angle, out);
    out << "\n";
  }

  // member: max_rear_steer_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_rear_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rear_steer_angle, out);
    out << "\n";
  }

  // member: min_rear_steer_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_rear_steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.min_rear_steer_angle, out);
    out << "\n";
  }

  // member: speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
    out << "\n";
  }

  // member: max_brake_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_brake_value, out);
    out << "\n";
  }

  // member: min_brake_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_brake_value, out);
    out << "\n";
  }

  // member: max_accel_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_accel_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_accel_value, out);
    out << "\n";
  }

  // member: min_accel_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_accel_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_accel_value, out);
    out << "\n";
  }

  // member: speed_deadzone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_deadzone: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_deadzone, out);
    out << "\n";
  }

  // member: standstill_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standstill_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.standstill_acceleration, out);
    out << "\n";
  }

  // member: max_front_steer_angle_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_front_steer_angle_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_front_steer_angle_rate, out);
    out << "\n";
  }

  // member: max_rear_steer_angle_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_rear_steer_angle_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rear_steer_angle_rate, out);
    out << "\n";
  }

  // member: max_abs_speed_when_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_abs_speed_when_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.max_abs_speed_when_stopped, out);
    out << "\n";
  }

  // member: max_abs_speed_when_stopped_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_abs_speed_when_stopped_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_abs_speed_when_stopped_duration, out);
    out << "\n";
  }

  // member: brake_value_when_gear_transitioning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_value_when_gear_transitioning: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value_when_gear_transitioning, out);
    out << "\n";
  }

  // member: accel_deadzone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_deadzone: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_deadzone, out);
    out << "\n";
  }

  // member: brake_deadzone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_deadzone: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_deadzone, out);
    out << "\n";
  }

  // member: acceleration_in_idle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_in_idle: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_in_idle, out);
    out << "\n";
  }

  // member: deceleration_in_idle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deceleration_in_idle: ";
    rosidl_generator_traits::value_to_yaml(msg.deceleration_in_idle, out);
    out << "\n";
  }

  // member: max_acceleration_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration_jerk, out);
    out << "\n";
  }

  // member: max_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << "\n";
  }

  // member: max_deceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_deceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_deceleration, out);
    out << "\n";
  }

  // member: min_turning_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_turning_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.min_turning_radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleParam & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::VehicleParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::VehicleParam & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::VehicleParam>()
{
  return "ros2_interface::msg::VehicleParam";
}

template<>
inline const char * name<ros2_interface::msg::VehicleParam>()
{
  return "ros2_interface/msg/VehicleParam";
}

template<>
struct has_fixed_size<ros2_interface::msg::VehicleParam>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::VehicleParam>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::VehicleParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__TRAITS_HPP_

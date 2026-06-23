// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: steer_driving_mode
  {
    out << "steer_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_driving_mode, out);
    out << ", ";
  }

  // member: front_steering_target
  {
    out << "front_steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_target, out);
    out << ", ";
  }

  // member: rear_steering_target
  {
    out << "rear_steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_target, out);
    out << ", ";
  }

  // member: front_steering_rate
  {
    out << "front_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_rate, out);
    out << ", ";
  }

  // member: rear_steering_rate
  {
    out << "rear_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_rate, out);
    out << ", ";
  }

  // member: accel_driving_mode
  {
    out << "accel_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_driving_mode, out);
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

  // member: epb_level
  {
    out << "epb_level: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_level, out);
    out << ", ";
  }

  // member: gear_driving_mode
  {
    out << "gear_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_driving_mode, out);
    out << ", ";
  }

  // member: emergency_brake_enable
  {
    out << "emergency_brake_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_brake_enable, out);
    out << ", ";
  }

  // member: gear_location
  {
    out << "gear_location: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_location, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: turn_lamp_ctrl
  {
    out << "turn_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_ctrl, out);
    out << ", ";
  }

  // member: high_beam_ctrl
  {
    out << "high_beam_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam_ctrl, out);
    out << ", ";
  }

  // member: low_beam_ctrl
  {
    out << "low_beam_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam_ctrl, out);
    out << ", ";
  }

  // member: horn_ctrl
  {
    out << "horn_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_ctrl, out);
    out << ", ";
  }

  // member: front_wiper_ctrl
  {
    out << "front_wiper_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wiper_ctrl, out);
    out << ", ";
  }

  // member: rear_wiper_ctrl
  {
    out << "rear_wiper_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_wiper_ctrl, out);
    out << ", ";
  }

  // member: position_lamp_ctrl
  {
    out << "position_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.position_lamp_ctrl, out);
    out << ", ";
  }

  // member: front_fog_lamp_ctrl
  {
    out << "front_fog_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.front_fog_lamp_ctrl, out);
    out << ", ";
  }

  // member: rear_fog_lamp_ctrl
  {
    out << "rear_fog_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_fog_lamp_ctrl, out);
    out << ", ";
  }

  // member: brake_lamp_ctrl
  {
    out << "brake_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_lamp_ctrl, out);
    out << ", ";
  }

  // member: alarm_lamp_ctrl
  {
    out << "alarm_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_lamp_ctrl, out);
    out << ", ";
  }

  // member: lf_door_ctrl
  {
    out << "lf_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.lf_door_ctrl, out);
    out << ", ";
  }

  // member: rf_door_ctrl
  {
    out << "rf_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.rf_door_ctrl, out);
    out << ", ";
  }

  // member: lr_door_ctrl
  {
    out << "lr_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_door_ctrl, out);
    out << ", ";
  }

  // member: rr_door_ctrl
  {
    out << "rr_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_door_ctrl, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlCommand & msg,
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

  // member: steer_driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_driving_mode, out);
    out << "\n";
  }

  // member: front_steering_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_target, out);
    out << "\n";
  }

  // member: rear_steering_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_target, out);
    out << "\n";
  }

  // member: front_steering_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.front_steering_rate, out);
    out << "\n";
  }

  // member: rear_steering_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_steering_rate, out);
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

  // member: epb_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_level: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_level, out);
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

  // member: emergency_brake_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_brake_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_brake_enable, out);
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

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: turn_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_ctrl, out);
    out << "\n";
  }

  // member: high_beam_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beam_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam_ctrl, out);
    out << "\n";
  }

  // member: low_beam_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_beam_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam_ctrl, out);
    out << "\n";
  }

  // member: horn_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_ctrl, out);
    out << "\n";
  }

  // member: front_wiper_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_wiper_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wiper_ctrl, out);
    out << "\n";
  }

  // member: rear_wiper_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_wiper_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_wiper_ctrl, out);
    out << "\n";
  }

  // member: position_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.position_lamp_ctrl, out);
    out << "\n";
  }

  // member: front_fog_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_fog_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.front_fog_lamp_ctrl, out);
    out << "\n";
  }

  // member: rear_fog_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_fog_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_fog_lamp_ctrl, out);
    out << "\n";
  }

  // member: brake_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_lamp_ctrl, out);
    out << "\n";
  }

  // member: alarm_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_lamp_ctrl, out);
    out << "\n";
  }

  // member: lf_door_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lf_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.lf_door_ctrl, out);
    out << "\n";
  }

  // member: rf_door_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rf_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.rf_door_ctrl, out);
    out << "\n";
  }

  // member: lr_door_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_door_ctrl, out);
    out << "\n";
  }

  // member: rr_door_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_door_ctrl, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlCommand & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ControlCommand & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ControlCommand>()
{
  return "ros2_interface::msg::ControlCommand";
}

template<>
inline const char * name<ros2_interface::msg::ControlCommand>()
{
  return "ros2_interface/msg/ControlCommand";
}

template<>
struct has_fixed_size<ros2_interface::msg::ControlCommand>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::ControlCommand>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::ControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_

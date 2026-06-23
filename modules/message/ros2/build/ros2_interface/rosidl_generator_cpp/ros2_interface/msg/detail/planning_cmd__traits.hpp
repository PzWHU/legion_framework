// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/PlanningCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/planning_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
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
  const PlanningCmd & msg,
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

inline std::string to_yaml(const PlanningCmd & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::PlanningCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::PlanningCmd & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::PlanningCmd>()
{
  return "ros2_interface::msg::PlanningCmd";
}

template<>
inline const char * name<ros2_interface::msg::PlanningCmd>()
{
  return "ros2_interface/msg/PlanningCmd";
}

template<>
struct has_fixed_size<ros2_interface::msg::PlanningCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::PlanningCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::PlanningCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__TRAITS_HPP_

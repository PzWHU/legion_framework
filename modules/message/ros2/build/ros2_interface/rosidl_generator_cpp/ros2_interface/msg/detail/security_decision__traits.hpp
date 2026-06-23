// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/SecurityDecision.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/security_decision__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'warning_command'
#include "ros2_interface/msg/detail/warning_command__traits.hpp"
// Member 'trajectory_limit_command'
#include "ros2_interface/msg/detail/trajectory_limit_command__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const SecurityDecision & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: warning_command
  {
    out << "warning_command: ";
    to_flow_style_yaml(msg.warning_command, out);
    out << ", ";
  }

  // member: brake_report
  {
    out << "brake_report: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_report, out);
    out << ", ";
  }

  // member: change_lane_command
  {
    out << "change_lane_command: ";
    rosidl_generator_traits::value_to_yaml(msg.change_lane_command, out);
    out << ", ";
  }

  // member: trajectory_limit_command
  {
    out << "trajectory_limit_command: ";
    to_flow_style_yaml(msg.trajectory_limit_command, out);
    out << ", ";
  }

  // member: park_command
  {
    out << "park_command: ";
    rosidl_generator_traits::value_to_yaml(msg.park_command, out);
    out << ", ";
  }

  // member: drivingmode_report
  {
    out << "drivingmode_report: ";
    rosidl_generator_traits::value_to_yaml(msg.drivingmode_report, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SecurityDecision & msg,
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

  // member: warning_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_command:\n";
    to_block_style_yaml(msg.warning_command, out, indentation + 2);
  }

  // member: brake_report
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_report: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_report, out);
    out << "\n";
  }

  // member: change_lane_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_lane_command: ";
    rosidl_generator_traits::value_to_yaml(msg.change_lane_command, out);
    out << "\n";
  }

  // member: trajectory_limit_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_limit_command:\n";
    to_block_style_yaml(msg.trajectory_limit_command, out, indentation + 2);
  }

  // member: park_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_command: ";
    rosidl_generator_traits::value_to_yaml(msg.park_command, out);
    out << "\n";
  }

  // member: drivingmode_report
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drivingmode_report: ";
    rosidl_generator_traits::value_to_yaml(msg.drivingmode_report, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SecurityDecision & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::SecurityDecision & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::SecurityDecision & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::SecurityDecision>()
{
  return "ros2_interface::msg::SecurityDecision";
}

template<>
inline const char * name<ros2_interface::msg::SecurityDecision>()
{
  return "ros2_interface/msg/SecurityDecision";
}

template<>
struct has_fixed_size<ros2_interface::msg::SecurityDecision>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::TrajectoryLimitCommand>::value && has_fixed_size<ros2_interface::msg::WarningCommand>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::SecurityDecision>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::TrajectoryLimitCommand>::value && has_bounded_size<ros2_interface::msg::WarningCommand>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::SecurityDecision>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__TRAITS_HPP_

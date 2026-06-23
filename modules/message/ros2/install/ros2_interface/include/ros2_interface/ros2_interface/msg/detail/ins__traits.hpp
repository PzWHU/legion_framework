// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Ins.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__INS__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__INS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/ins__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'utm_position'
// Member 'attitude'
// Member 'linear_velocity'
// Member 'sd_position'
// Member 'sd_attitude'
// Member 'sd_velocity'
// Member 'attitude_dual'
// Member 'sd_angle_dual'
// Member 'angular_velocity'
// Member 'acceleration'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ins & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: utm_position
  {
    out << "utm_position: ";
    to_flow_style_yaml(msg.utm_position, out);
    out << ", ";
  }

  // member: utm_zone_mumber
  {
    out << "utm_zone_mumber: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_zone_mumber, out);
    out << ", ";
  }

  // member: utm_zone_char
  {
    out << "utm_zone_char: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_zone_char, out);
    out << ", ";
  }

  // member: attitude
  {
    out << "attitude: ";
    to_flow_style_yaml(msg.attitude, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: sd_position
  {
    out << "sd_position: ";
    to_flow_style_yaml(msg.sd_position, out);
    out << ", ";
  }

  // member: sd_attitude
  {
    out << "sd_attitude: ";
    to_flow_style_yaml(msg.sd_attitude, out);
    out << ", ";
  }

  // member: sd_velocity
  {
    out << "sd_velocity: ";
    to_flow_style_yaml(msg.sd_velocity, out);
    out << ", ";
  }

  // member: cep68
  {
    out << "cep68: ";
    rosidl_generator_traits::value_to_yaml(msg.cep68, out);
    out << ", ";
  }

  // member: cep95
  {
    out << "cep95: ";
    rosidl_generator_traits::value_to_yaml(msg.cep95, out);
    out << ", ";
  }

  // member: second
  {
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
    out << ", ";
  }

  // member: sat_use_num
  {
    out << "sat_use_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sat_use_num, out);
    out << ", ";
  }

  // member: sat_in_view_num
  {
    out << "sat_in_view_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sat_in_view_num, out);
    out << ", ";
  }

  // member: solution_status
  {
    out << "solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status, out);
    out << ", ";
  }

  // member: position_type
  {
    out << "position_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_type, out);
    out << ", ";
  }

  // member: p_dop
  {
    out << "p_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.p_dop, out);
    out << ", ";
  }

  // member: h_dop
  {
    out << "h_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.h_dop, out);
    out << ", ";
  }

  // member: v_dop
  {
    out << "v_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.v_dop, out);
    out << ", ";
  }

  // member: attitude_dual
  {
    out << "attitude_dual: ";
    to_flow_style_yaml(msg.attitude_dual, out);
    out << ", ";
  }

  // member: sd_angle_dual
  {
    out << "sd_angle_dual: ";
    to_flow_style_yaml(msg.sd_angle_dual, out);
    out << ", ";
  }

  // member: base_line_length_dual
  {
    out << "base_line_length_dual: ";
    rosidl_generator_traits::value_to_yaml(msg.base_line_length_dual, out);
    out << ", ";
  }

  // member: solution_status_dual
  {
    out << "solution_status_dual: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status_dual, out);
    out << ", ";
  }

  // member: position_type_dual
  {
    out << "position_type_dual: ";
    rosidl_generator_traits::value_to_yaml(msg.position_type_dual, out);
    out << ", ";
  }

  // member: solution_source_dual
  {
    out << "solution_source_dual: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_source_dual, out);
    out << ", ";
  }

  // member: aoc
  {
    out << "aoc: ";
    rosidl_generator_traits::value_to_yaml(msg.aoc, out);
    out << ", ";
  }

  // member: rtk_baseline
  {
    out << "rtk_baseline: ";
    rosidl_generator_traits::value_to_yaml(msg.rtk_baseline, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ins & msg,
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

  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: utm_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_position:\n";
    to_block_style_yaml(msg.utm_position, out, indentation + 2);
  }

  // member: utm_zone_mumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_zone_mumber: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_zone_mumber, out);
    out << "\n";
  }

  // member: utm_zone_char
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_zone_char: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_zone_char, out);
    out << "\n";
  }

  // member: attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude:\n";
    to_block_style_yaml(msg.attitude, out, indentation + 2);
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }

  // member: sd_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_position:\n";
    to_block_style_yaml(msg.sd_position, out, indentation + 2);
  }

  // member: sd_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_attitude:\n";
    to_block_style_yaml(msg.sd_attitude, out, indentation + 2);
  }

  // member: sd_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_velocity:\n";
    to_block_style_yaml(msg.sd_velocity, out, indentation + 2);
  }

  // member: cep68
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cep68: ";
    rosidl_generator_traits::value_to_yaml(msg.cep68, out);
    out << "\n";
  }

  // member: cep95
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cep95: ";
    rosidl_generator_traits::value_to_yaml(msg.cep95, out);
    out << "\n";
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
    out << "\n";
  }

  // member: sat_use_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sat_use_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sat_use_num, out);
    out << "\n";
  }

  // member: sat_in_view_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sat_in_view_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sat_in_view_num, out);
    out << "\n";
  }

  // member: solution_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status, out);
    out << "\n";
  }

  // member: position_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_type, out);
    out << "\n";
  }

  // member: p_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.p_dop, out);
    out << "\n";
  }

  // member: h_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.h_dop, out);
    out << "\n";
  }

  // member: v_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.v_dop, out);
    out << "\n";
  }

  // member: attitude_dual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude_dual:\n";
    to_block_style_yaml(msg.attitude_dual, out, indentation + 2);
  }

  // member: sd_angle_dual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_angle_dual:\n";
    to_block_style_yaml(msg.sd_angle_dual, out, indentation + 2);
  }

  // member: base_line_length_dual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_line_length_dual: ";
    rosidl_generator_traits::value_to_yaml(msg.base_line_length_dual, out);
    out << "\n";
  }

  // member: solution_status_dual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_status_dual: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status_dual, out);
    out << "\n";
  }

  // member: position_type_dual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_type_dual: ";
    rosidl_generator_traits::value_to_yaml(msg.position_type_dual, out);
    out << "\n";
  }

  // member: solution_source_dual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_source_dual: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_source_dual, out);
    out << "\n";
  }

  // member: aoc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoc: ";
    rosidl_generator_traits::value_to_yaml(msg.aoc, out);
    out << "\n";
  }

  // member: rtk_baseline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtk_baseline: ";
    rosidl_generator_traits::value_to_yaml(msg.rtk_baseline, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ins & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::Ins & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Ins & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Ins>()
{
  return "ros2_interface::msg::Ins";
}

template<>
inline const char * name<ros2_interface::msg::Ins>()
{
  return "ros2_interface/msg/Ins";
}

template<>
struct has_fixed_size<ros2_interface::msg::Ins>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point3D>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::Ins>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point3D>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::Ins>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__INS__TRAITS_HPP_

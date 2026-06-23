// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Uncertainty.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/uncertainty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position_std_dev'
// Member 'orientation_std_dev'
// Member 'linear_velocity_std_dev'
// Member 'linear_acceleration_std_dev'
// Member 'angular_velocity_std_dev'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Uncertainty & msg,
  std::ostream & out)
{
  out << "{";
  // member: position_std_dev
  {
    out << "position_std_dev: ";
    to_flow_style_yaml(msg.position_std_dev, out);
    out << ", ";
  }

  // member: orientation_std_dev
  {
    out << "orientation_std_dev: ";
    to_flow_style_yaml(msg.orientation_std_dev, out);
    out << ", ";
  }

  // member: linear_velocity_std_dev
  {
    out << "linear_velocity_std_dev: ";
    to_flow_style_yaml(msg.linear_velocity_std_dev, out);
    out << ", ";
  }

  // member: linear_acceleration_std_dev
  {
    out << "linear_acceleration_std_dev: ";
    to_flow_style_yaml(msg.linear_acceleration_std_dev, out);
    out << ", ";
  }

  // member: angular_velocity_std_dev
  {
    out << "angular_velocity_std_dev: ";
    to_flow_style_yaml(msg.angular_velocity_std_dev, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Uncertainty & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_std_dev:\n";
    to_block_style_yaml(msg.position_std_dev, out, indentation + 2);
  }

  // member: orientation_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_std_dev:\n";
    to_block_style_yaml(msg.orientation_std_dev, out, indentation + 2);
  }

  // member: linear_velocity_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity_std_dev:\n";
    to_block_style_yaml(msg.linear_velocity_std_dev, out, indentation + 2);
  }

  // member: linear_acceleration_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration_std_dev:\n";
    to_block_style_yaml(msg.linear_acceleration_std_dev, out, indentation + 2);
  }

  // member: angular_velocity_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_std_dev:\n";
    to_block_style_yaml(msg.angular_velocity_std_dev, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Uncertainty & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::Uncertainty & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Uncertainty & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Uncertainty>()
{
  return "ros2_interface::msg::Uncertainty";
}

template<>
inline const char * name<ros2_interface::msg::Uncertainty>()
{
  return "ros2_interface/msg/Uncertainty";
}

template<>
struct has_fixed_size<ros2_interface::msg::Uncertainty>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point3D>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::Uncertainty>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point3D>::value> {};

template<>
struct is_message<ros2_interface::msg::Uncertainty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__TRAITS_HPP_

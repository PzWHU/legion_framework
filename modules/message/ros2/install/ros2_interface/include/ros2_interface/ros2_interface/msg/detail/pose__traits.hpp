// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POSE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "ros2_interface/msg/detail/point_enu__traits.hpp"
// Member 'orientation'
#include "ros2_interface/msg/detail/quaternion__traits.hpp"
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'linear_acceleration_vrf'
// Member 'angular_velocity_vrf'
// Member 'euler_angles'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: linear_acceleration_vrf
  {
    out << "linear_acceleration_vrf: ";
    to_flow_style_yaml(msg.linear_acceleration_vrf, out);
    out << ", ";
  }

  // member: angular_velocity_vrf
  {
    out << "angular_velocity_vrf: ";
    to_flow_style_yaml(msg.angular_velocity_vrf, out);
    out << ", ";
  }

  // member: euler_angles
  {
    out << "euler_angles: ";
    to_flow_style_yaml(msg.euler_angles, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: linear_acceleration_vrf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration_vrf:\n";
    to_block_style_yaml(msg.linear_acceleration_vrf, out, indentation + 2);
  }

  // member: angular_velocity_vrf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_vrf:\n";
    to_block_style_yaml(msg.angular_velocity_vrf, out, indentation + 2);
  }

  // member: euler_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "euler_angles:\n";
    to_block_style_yaml(msg.euler_angles, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::Pose & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Pose & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Pose>()
{
  return "ros2_interface::msg::Pose";
}

template<>
inline const char * name<ros2_interface::msg::Pose>()
{
  return "ros2_interface/msg/Pose";
}

template<>
struct has_fixed_size<ros2_interface::msg::Pose>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point3D>::value && has_fixed_size<ros2_interface::msg::PointENU>::value && has_fixed_size<ros2_interface::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::Pose>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point3D>::value && has_bounded_size<ros2_interface::msg::PointENU>::value && has_bounded_size<ros2_interface::msg::Quaternion>::value> {};

template<>
struct is_message<ros2_interface::msg::Pose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__POSE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/VehicleMotionPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/vehicle_motion_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory_point'
#include "ros2_interface/msg/detail/trajectory_point__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleMotionPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectory_point
  {
    out << "trajectory_point: ";
    to_flow_style_yaml(msg.trajectory_point, out);
    out << ", ";
  }

  // member: steer
  {
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleMotionPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_point:\n";
    to_block_style_yaml(msg.trajectory_point, out, indentation + 2);
  }

  // member: steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleMotionPoint & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::VehicleMotionPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::VehicleMotionPoint & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::VehicleMotionPoint>()
{
  return "ros2_interface::msg::VehicleMotionPoint";
}

template<>
inline const char * name<ros2_interface::msg::VehicleMotionPoint>()
{
  return "ros2_interface/msg/VehicleMotionPoint";
}

template<>
struct has_fixed_size<ros2_interface::msg::VehicleMotionPoint>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::TrajectoryPoint>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::VehicleMotionPoint>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::TrajectoryPoint>::value> {};

template<>
struct is_message<ros2_interface::msg::VehicleMotionPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__TRAITS_HPP_

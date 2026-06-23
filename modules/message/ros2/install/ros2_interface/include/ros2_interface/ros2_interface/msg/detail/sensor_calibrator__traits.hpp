// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/SensorCalibrator.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/sensor_calibrator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
// Member 'angle'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorCalibrator & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    to_flow_style_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorCalibrator & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle:\n";
    to_block_style_yaml(msg.angle, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorCalibrator & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::SensorCalibrator & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::SensorCalibrator & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::SensorCalibrator>()
{
  return "ros2_interface::msg::SensorCalibrator";
}

template<>
inline const char * name<ros2_interface::msg::SensorCalibrator>()
{
  return "ros2_interface/msg/SensorCalibrator";
}

template<>
struct has_fixed_size<ros2_interface::msg::SensorCalibrator>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point3D>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::SensorCalibrator>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point3D>::value> {};

template<>
struct is_message<ros2_interface::msg::SensorCalibrator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__TRAITS_HPP_

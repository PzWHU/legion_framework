// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/TrajectoryPointInPrediction.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT_IN_PREDICTION__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT_IN_PREDICTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/trajectory_point_in_prediction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path_point'
#include "ros2_interface/msg/detail/path_point__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryPointInPrediction & msg,
  std::ostream & out)
{
  out << "{";
  // member: path_point
  {
    out << "path_point: ";
    to_flow_style_yaml(msg.path_point, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: relative_time
  {
    out << "relative_time: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryPointInPrediction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_point:\n";
    to_block_style_yaml(msg.path_point, out, indentation + 2);
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: relative_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_time: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryPointInPrediction & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::TrajectoryPointInPrediction & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::TrajectoryPointInPrediction & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::TrajectoryPointInPrediction>()
{
  return "ros2_interface::msg::TrajectoryPointInPrediction";
}

template<>
inline const char * name<ros2_interface::msg::TrajectoryPointInPrediction>()
{
  return "ros2_interface/msg/TrajectoryPointInPrediction";
}

template<>
struct has_fixed_size<ros2_interface::msg::TrajectoryPointInPrediction>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::PathPoint>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::TrajectoryPointInPrediction>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::PathPoint>::value> {};

template<>
struct is_message<ros2_interface::msg::TrajectoryPointInPrediction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT_IN_PREDICTION__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/LaneLineCubicCurve.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/lane_line_cubic_curve__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneLineCubicCurve & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_x
  {
    out << "start_x: ";
    rosidl_generator_traits::value_to_yaml(msg.start_x, out);
    out << ", ";
  }

  // member: end_x
  {
    out << "end_x: ";
    rosidl_generator_traits::value_to_yaml(msg.end_x, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneLineCubicCurve & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_x: ";
    rosidl_generator_traits::value_to_yaml(msg.start_x, out);
    out << "\n";
  }

  // member: end_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_x: ";
    rosidl_generator_traits::value_to_yaml(msg.end_x, out);
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

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneLineCubicCurve & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::LaneLineCubicCurve & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::LaneLineCubicCurve & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::LaneLineCubicCurve>()
{
  return "ros2_interface::msg::LaneLineCubicCurve";
}

template<>
inline const char * name<ros2_interface::msg::LaneLineCubicCurve>()
{
  return "ros2_interface/msg/LaneLineCubicCurve";
}

template<>
struct has_fixed_size<ros2_interface::msg::LaneLineCubicCurve>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::LaneLineCubicCurve>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::LaneLineCubicCurve>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__TRAITS_HPP_

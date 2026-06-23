// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/FrenetFramePoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/frenet_frame_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const FrenetFramePoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

  // member: l
  {
    out << "l: ";
    rosidl_generator_traits::value_to_yaml(msg.l, out);
    out << ", ";
  }

  // member: dl
  {
    out << "dl: ";
    rosidl_generator_traits::value_to_yaml(msg.dl, out);
    out << ", ";
  }

  // member: ddl
  {
    out << "ddl: ";
    rosidl_generator_traits::value_to_yaml(msg.ddl, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FrenetFramePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }

  // member: l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l: ";
    rosidl_generator_traits::value_to_yaml(msg.l, out);
    out << "\n";
  }

  // member: dl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dl: ";
    rosidl_generator_traits::value_to_yaml(msg.dl, out);
    out << "\n";
  }

  // member: ddl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddl: ";
    rosidl_generator_traits::value_to_yaml(msg.ddl, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FrenetFramePoint & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::FrenetFramePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::FrenetFramePoint & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::FrenetFramePoint>()
{
  return "ros2_interface::msg::FrenetFramePoint";
}

template<>
inline const char * name<ros2_interface::msg::FrenetFramePoint>()
{
  return "ros2_interface/msg/FrenetFramePoint";
}

template<>
struct has_fixed_size<ros2_interface::msg::FrenetFramePoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::FrenetFramePoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::FrenetFramePoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__TRAITS_HPP_

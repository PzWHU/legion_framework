// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ObstacleInteractiveTag.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTERACTIVE_TAG__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTERACTIVE_TAG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/obstacle_interactive_tag__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleInteractiveTag & msg,
  std::ostream & out)
{
  out << "{";
  // member: interactive_tag
  {
    out << "interactive_tag: ";
    rosidl_generator_traits::value_to_yaml(msg.interactive_tag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleInteractiveTag & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: interactive_tag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interactive_tag: ";
    rosidl_generator_traits::value_to_yaml(msg.interactive_tag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleInteractiveTag & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ObstacleInteractiveTag & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ObstacleInteractiveTag & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ObstacleInteractiveTag>()
{
  return "ros2_interface::msg::ObstacleInteractiveTag";
}

template<>
inline const char * name<ros2_interface::msg::ObstacleInteractiveTag>()
{
  return "ros2_interface/msg/ObstacleInteractiveTag";
}

template<>
struct has_fixed_size<ros2_interface::msg::ObstacleInteractiveTag>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::ObstacleInteractiveTag>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::ObstacleInteractiveTag>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTERACTIVE_TAG__TRAITS_HPP_

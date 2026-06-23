// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMMAND__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Command & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_module
  {
    out << "target_module: ";
    rosidl_generator_traits::value_to_yaml(msg.target_module, out);
    out << ", ";
  }

  // member: target_id
  {
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << ", ";
  }

  // member: target_switch
  {
    out << "target_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.target_switch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_module: ";
    rosidl_generator_traits::value_to_yaml(msg.target_module, out);
    out << "\n";
  }

  // member: target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << "\n";
  }

  // member: target_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.target_switch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Command & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Command>()
{
  return "ros2_interface::msg::Command";
}

template<>
inline const char * name<ros2_interface::msg::Command>()
{
  return "ros2_interface/msg/Command";
}

template<>
struct has_fixed_size<ros2_interface::msg::Command>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::Command>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::Command>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMMAND__TRAITS_HPP_

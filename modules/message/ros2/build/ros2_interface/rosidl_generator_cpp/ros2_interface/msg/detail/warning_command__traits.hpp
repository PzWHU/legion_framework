// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/WarningCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/warning_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const WarningCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: sound_alarm
  {
    out << "sound_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_alarm, out);
    out << ", ";
  }

  // member: light_alarm
  {
    out << "light_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.light_alarm, out);
    out << ", ";
  }

  // member: media_alarm
  {
    out << "media_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.media_alarm, out);
    out << ", ";
  }

  // member: motion_alarm
  {
    out << "motion_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_alarm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WarningCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sound_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_alarm, out);
    out << "\n";
  }

  // member: light_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.light_alarm, out);
    out << "\n";
  }

  // member: media_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "media_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.media_alarm, out);
    out << "\n";
  }

  // member: motion_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_alarm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WarningCommand & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::WarningCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::WarningCommand & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::WarningCommand>()
{
  return "ros2_interface::msg::WarningCommand";
}

template<>
inline const char * name<ros2_interface::msg::WarningCommand>()
{
  return "ros2_interface/msg/WarningCommand";
}

template<>
struct has_fixed_size<ros2_interface::msg::WarningCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::WarningCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::WarningCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__TRAITS_HPP_

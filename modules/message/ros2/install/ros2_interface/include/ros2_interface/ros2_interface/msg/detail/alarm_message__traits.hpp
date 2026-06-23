// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/AlarmMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/alarm_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const AlarmMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: alarm_proc
  {
    out << "alarm_proc: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_proc, out);
    out << ", ";
  }

  // member: alarm_level
  {
    out << "alarm_level: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_level, out);
    out << ", ";
  }

  // member: alarm_type
  {
    out << "alarm_type: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_type, out);
    out << ", ";
  }

  // member: alarm_id
  {
    out << "alarm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_id, out);
    out << ", ";
  }

  // member: alarm_display
  {
    out << "alarm_display: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_display, out);
    out << ", ";
  }

  // member: alarm_data
  {
    out << "alarm_data: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlarmMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: alarm_proc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_proc: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_proc, out);
    out << "\n";
  }

  // member: alarm_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_level: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_level, out);
    out << "\n";
  }

  // member: alarm_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_type: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_type, out);
    out << "\n";
  }

  // member: alarm_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_id, out);
    out << "\n";
  }

  // member: alarm_display
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_display: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_display, out);
    out << "\n";
  }

  // member: alarm_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_data: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlarmMessage & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::AlarmMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::AlarmMessage & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::AlarmMessage>()
{
  return "ros2_interface::msg::AlarmMessage";
}

template<>
inline const char * name<ros2_interface::msg::AlarmMessage>()
{
  return "ros2_interface/msg/AlarmMessage";
}

template<>
struct has_fixed_size<ros2_interface::msg::AlarmMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::AlarmMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::AlarmMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__TRAITS_HPP_

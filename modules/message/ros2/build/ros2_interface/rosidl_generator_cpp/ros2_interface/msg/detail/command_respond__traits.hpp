// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/CommandRespond.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/command_respond__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommandRespond & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: self_id
  {
    out << "self_id: ";
    rosidl_generator_traits::value_to_yaml(msg.self_id, out);
    out << ", ";
  }

  // member: respond_id
  {
    out << "respond_id: ";
    rosidl_generator_traits::value_to_yaml(msg.respond_id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: fail_code
  {
    out << "fail_code: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CommandRespond & msg,
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

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: self_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_id: ";
    rosidl_generator_traits::value_to_yaml(msg.self_id, out);
    out << "\n";
  }

  // member: respond_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "respond_id: ";
    rosidl_generator_traits::value_to_yaml(msg.respond_id, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: fail_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_code: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommandRespond & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::CommandRespond & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::CommandRespond & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::CommandRespond>()
{
  return "ros2_interface::msg::CommandRespond";
}

template<>
inline const char * name<ros2_interface::msg::CommandRespond>()
{
  return "ros2_interface/msg/CommandRespond";
}

template<>
struct has_fixed_size<ros2_interface::msg::CommandRespond>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::CommandRespond>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::CommandRespond>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__TRAITS_HPP_

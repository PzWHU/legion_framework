// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ObuCmdMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBU_CMD_MSG__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBU_CMD_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/obu_cmd_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'obu_cmd_list'
#include "ros2_interface/msg/detail/obu_cmd__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObuCmdMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: obu_cmd_list
  {
    if (msg.obu_cmd_list.size() == 0) {
      out << "obu_cmd_list: []";
    } else {
      out << "obu_cmd_list: [";
      size_t pending_items = msg.obu_cmd_list.size();
      for (auto item : msg.obu_cmd_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObuCmdMsg & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
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

  // member: obu_cmd_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obu_cmd_list.size() == 0) {
      out << "obu_cmd_list: []\n";
    } else {
      out << "obu_cmd_list:\n";
      for (auto item : msg.obu_cmd_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObuCmdMsg & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ObuCmdMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ObuCmdMsg & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ObuCmdMsg>()
{
  return "ros2_interface::msg::ObuCmdMsg";
}

template<>
inline const char * name<ros2_interface::msg::ObuCmdMsg>()
{
  return "ros2_interface/msg/ObuCmdMsg";
}

template<>
struct has_fixed_size<ros2_interface::msg::ObuCmdMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::ObuCmdMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::ObuCmdMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBU_CMD_MSG__TRAITS_HPP_

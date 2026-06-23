// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/StopInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STOP_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__STOP_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/stop_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'stop_points'
#include "ros2_interface/msg/detail/stop_point__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const StopInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: stop_points
  {
    if (msg.stop_points.size() == 0) {
      out << "stop_points: []";
    } else {
      out << "stop_points: [";
      size_t pending_items = msg.stop_points.size();
      for (auto item : msg.stop_points) {
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
  const StopInfo & msg,
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

  // member: stop_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_points.size() == 0) {
      out << "stop_points: []\n";
    } else {
      out << "stop_points:\n";
      for (auto item : msg.stop_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StopInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::StopInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::StopInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::StopInfo>()
{
  return "ros2_interface::msg::StopInfo";
}

template<>
inline const char * name<ros2_interface::msg::StopInfo>()
{
  return "ros2_interface/msg/StopInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::StopInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::StopInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::StopInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__STOP_INFO__TRAITS_HPP_

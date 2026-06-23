// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/SotifMonitorResult.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/sotif_monitor_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'region_value'
#include "ros2_interface/msg/detail/region__traits.hpp"
// Member 'grid_map'
#include "ros2_interface/msg/detail/grid__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const SotifMonitorResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: region_value
  {
    if (msg.region_value.size() == 0) {
      out << "region_value: []";
    } else {
      out << "region_value: [";
      size_t pending_items = msg.region_value.size();
      for (auto item : msg.region_value) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: grid_map
  {
    if (msg.grid_map.size() == 0) {
      out << "grid_map: []";
    } else {
      out << "grid_map: [";
      size_t pending_items = msg.grid_map.size();
      for (auto item : msg.grid_map) {
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
  const SotifMonitorResult & msg,
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

  // member: region_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.region_value.size() == 0) {
      out << "region_value: []\n";
    } else {
      out << "region_value:\n";
      for (auto item : msg.region_value) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: grid_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grid_map.size() == 0) {
      out << "grid_map: []\n";
    } else {
      out << "grid_map:\n";
      for (auto item : msg.grid_map) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SotifMonitorResult & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::SotifMonitorResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::SotifMonitorResult & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::SotifMonitorResult>()
{
  return "ros2_interface::msg::SotifMonitorResult";
}

template<>
inline const char * name<ros2_interface::msg::SotifMonitorResult>()
{
  return "ros2_interface/msg/SotifMonitorResult";
}

template<>
struct has_fixed_size<ros2_interface::msg::SotifMonitorResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::SotifMonitorResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::SotifMonitorResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__TRAITS_HPP_

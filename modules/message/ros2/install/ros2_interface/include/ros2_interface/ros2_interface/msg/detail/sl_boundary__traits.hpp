// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SL_BOUNDARY__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SL_BOUNDARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/sl_boundary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'boundary_point'
#include "ros2_interface/msg/detail/sl_point__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const SLBoundary & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_s
  {
    out << "start_s: ";
    rosidl_generator_traits::value_to_yaml(msg.start_s, out);
    out << ", ";
  }

  // member: end_s
  {
    out << "end_s: ";
    rosidl_generator_traits::value_to_yaml(msg.end_s, out);
    out << ", ";
  }

  // member: start_l
  {
    out << "start_l: ";
    rosidl_generator_traits::value_to_yaml(msg.start_l, out);
    out << ", ";
  }

  // member: end_l
  {
    out << "end_l: ";
    rosidl_generator_traits::value_to_yaml(msg.end_l, out);
    out << ", ";
  }

  // member: boundary_point
  {
    if (msg.boundary_point.size() == 0) {
      out << "boundary_point: []";
    } else {
      out << "boundary_point: [";
      size_t pending_items = msg.boundary_point.size();
      for (auto item : msg.boundary_point) {
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
  const SLBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_s: ";
    rosidl_generator_traits::value_to_yaml(msg.start_s, out);
    out << "\n";
  }

  // member: end_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_s: ";
    rosidl_generator_traits::value_to_yaml(msg.end_s, out);
    out << "\n";
  }

  // member: start_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_l: ";
    rosidl_generator_traits::value_to_yaml(msg.start_l, out);
    out << "\n";
  }

  // member: end_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_l: ";
    rosidl_generator_traits::value_to_yaml(msg.end_l, out);
    out << "\n";
  }

  // member: boundary_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.boundary_point.size() == 0) {
      out << "boundary_point: []\n";
    } else {
      out << "boundary_point:\n";
      for (auto item : msg.boundary_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SLBoundary & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::SLBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::SLBoundary & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::SLBoundary>()
{
  return "ros2_interface::msg::SLBoundary";
}

template<>
inline const char * name<ros2_interface::msg::SLBoundary>()
{
  return "ros2_interface/msg/SLBoundary";
}

template<>
struct has_fixed_size<ros2_interface::msg::SLBoundary>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::SLBoundary>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::SLBoundary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__SL_BOUNDARY__TRAITS_HPP_

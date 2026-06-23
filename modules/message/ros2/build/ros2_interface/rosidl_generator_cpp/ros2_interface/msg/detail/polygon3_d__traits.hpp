// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Polygon3D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POLYGON3_D__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POLYGON3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/polygon3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Polygon3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: coordinate_system
  {
    out << "coordinate_system: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinate_system, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
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
  const Polygon3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coordinate_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinate_system: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinate_system, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Polygon3D & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::Polygon3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Polygon3D & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Polygon3D>()
{
  return "ros2_interface::msg::Polygon3D";
}

template<>
inline const char * name<ros2_interface::msg::Polygon3D>()
{
  return "ros2_interface/msg/Polygon3D";
}

template<>
struct has_fixed_size<ros2_interface::msg::Polygon3D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::Polygon3D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::Polygon3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__POLYGON3_D__TRAITS_HPP_

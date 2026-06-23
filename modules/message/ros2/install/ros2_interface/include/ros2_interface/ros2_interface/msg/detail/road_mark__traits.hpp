// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/RoadMark.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/road_mark__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoadMark & msg,
  std::ostream & out)
{
  out << "{";
  // member: longitude_dist
  {
    out << "longitude_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_dist, out);
    out << ", ";
  }

  // member: lateral_dist
  {
    out << "lateral_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_dist, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoadMark & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: longitude_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_dist, out);
    out << "\n";
  }

  // member: lateral_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_dist, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoadMark & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::RoadMark & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::RoadMark & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::RoadMark>()
{
  return "ros2_interface::msg::RoadMark";
}

template<>
inline const char * name<ros2_interface::msg::RoadMark>()
{
  return "ros2_interface/msg/RoadMark";
}

template<>
struct has_fixed_size<ros2_interface::msg::RoadMark>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::RoadMark>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::RoadMark>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__TRAITS_HPP_

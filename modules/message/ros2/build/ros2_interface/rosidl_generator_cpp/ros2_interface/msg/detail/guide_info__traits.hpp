// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/GuideInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/guide_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'current_road'
// Member 'next_road'
#include "ros2_interface/msg/detail/guide_road__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const GuideInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: next_dis
  {
    out << "next_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.next_dis, out);
    out << ", ";
  }

  // member: current_road
  {
    out << "current_road: ";
    to_flow_style_yaml(msg.current_road, out);
    out << ", ";
  }

  // member: next_road
  {
    out << "next_road: ";
    to_flow_style_yaml(msg.next_road, out);
    out << ", ";
  }

  // member: round_status
  {
    out << "round_status: ";
    rosidl_generator_traits::value_to_yaml(msg.round_status, out);
    out << ", ";
  }

  // member: intersection_status
  {
    out << "intersection_status: ";
    rosidl_generator_traits::value_to_yaml(msg.intersection_status, out);
    out << ", ";
  }

  // member: roads_status
  {
    out << "roads_status: ";
    rosidl_generator_traits::value_to_yaml(msg.roads_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GuideInfo & msg,
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

  // member: next_dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.next_dis, out);
    out << "\n";
  }

  // member: current_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_road:\n";
    to_block_style_yaml(msg.current_road, out, indentation + 2);
  }

  // member: next_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_road:\n";
    to_block_style_yaml(msg.next_road, out, indentation + 2);
  }

  // member: round_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "round_status: ";
    rosidl_generator_traits::value_to_yaml(msg.round_status, out);
    out << "\n";
  }

  // member: intersection_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersection_status: ";
    rosidl_generator_traits::value_to_yaml(msg.intersection_status, out);
    out << "\n";
  }

  // member: roads_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roads_status: ";
    rosidl_generator_traits::value_to_yaml(msg.roads_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GuideInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::GuideInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::GuideInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::GuideInfo>()
{
  return "ros2_interface::msg::GuideInfo";
}

template<>
inline const char * name<ros2_interface::msg::GuideInfo>()
{
  return "ros2_interface/msg/GuideInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::GuideInfo>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::GuideRoad>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::GuideInfo>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::GuideRoad>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::GuideInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__GUIDE_INFO__TRAITS_HPP_

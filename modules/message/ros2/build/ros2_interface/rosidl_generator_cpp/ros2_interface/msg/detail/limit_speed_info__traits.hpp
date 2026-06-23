// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/LimitSpeedInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/limit_speed_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LimitSpeedInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: limitspeed_valid_flag
  {
    out << "limitspeed_valid_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.limitspeed_valid_flag, out);
    out << ", ";
  }

  // member: limit_speed
  {
    out << "limit_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_speed, out);
    out << ", ";
  }

  // member: limit_distance
  {
    out << "limit_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LimitSpeedInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: limitspeed_valid_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limitspeed_valid_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.limitspeed_valid_flag, out);
    out << "\n";
  }

  // member: limit_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_speed, out);
    out << "\n";
  }

  // member: limit_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LimitSpeedInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::LimitSpeedInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::LimitSpeedInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::LimitSpeedInfo>()
{
  return "ros2_interface::msg::LimitSpeedInfo";
}

template<>
inline const char * name<ros2_interface::msg::LimitSpeedInfo>()
{
  return "ros2_interface/msg/LimitSpeedInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::LimitSpeedInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::LimitSpeedInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::LimitSpeedInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__TRAITS_HPP_

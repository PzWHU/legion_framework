// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/TrafficEvents.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/traffic_events__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'route_fusion_info'
#include "ros2_interface/msg/detail/route_fusion_info__traits.hpp"
// Member 'junction_info'
#include "ros2_interface/msg/detail/junction_info__traits.hpp"
// Member 'limit_speed_info'
#include "ros2_interface/msg/detail/limit_speed_info__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficEvents & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: route_fusion_info
  {
    out << "route_fusion_info: ";
    to_flow_style_yaml(msg.route_fusion_info, out);
    out << ", ";
  }

  // member: junction_info
  {
    out << "junction_info: ";
    to_flow_style_yaml(msg.junction_info, out);
    out << ", ";
  }

  // member: limit_speed_info
  {
    out << "limit_speed_info: ";
    to_flow_style_yaml(msg.limit_speed_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficEvents & msg,
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

  // member: route_fusion_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_fusion_info:\n";
    to_block_style_yaml(msg.route_fusion_info, out, indentation + 2);
  }

  // member: junction_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "junction_info:\n";
    to_block_style_yaml(msg.junction_info, out, indentation + 2);
  }

  // member: limit_speed_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_speed_info:\n";
    to_block_style_yaml(msg.limit_speed_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficEvents & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::TrafficEvents & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::TrafficEvents & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::TrafficEvents>()
{
  return "ros2_interface::msg::TrafficEvents";
}

template<>
inline const char * name<ros2_interface::msg::TrafficEvents>()
{
  return "ros2_interface/msg/TrafficEvents";
}

template<>
struct has_fixed_size<ros2_interface::msg::TrafficEvents>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::JunctionInfo>::value && has_fixed_size<ros2_interface::msg::LimitSpeedInfo>::value && has_fixed_size<ros2_interface::msg::RouteFusionInfo>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::TrafficEvents>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::JunctionInfo>::value && has_bounded_size<ros2_interface::msg::LimitSpeedInfo>::value && has_bounded_size<ros2_interface::msg::RouteFusionInfo>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::TrafficEvents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/NaviInfoMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/navi_info_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const NaviInfoMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lane_type
  {
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << ", ";
  }

  // member: lane_count
  {
    out << "lane_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_count, out);
    out << ", ";
  }

  // member: lane_index
  {
    out << "lane_index: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_index, out);
    out << ", ";
  }

  // member: lane_target
  {
    out << "lane_target: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_target, out);
    out << ", ";
  }

  // member: road_speed
  {
    out << "road_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.road_speed, out);
    out << ", ";
  }

  // member: turning_speed
  {
    out << "turning_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.turning_speed, out);
    out << ", ";
  }

  // member: turning_deriction
  {
    out << "turning_deriction: ";
    rosidl_generator_traits::value_to_yaml(msg.turning_deriction, out);
    out << ", ";
  }

  // member: distance_to_cross
  {
    out << "distance_to_cross: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_cross, out);
    out << ", ";
  }

  // member: traffic_light_stop
  {
    out << "traffic_light_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_stop, out);
    out << ", ";
  }

  // member: crossing_behavior
  {
    out << "crossing_behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.crossing_behavior, out);
    out << ", ";
  }

  // member: distance_to_stop
  {
    out << "distance_to_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_stop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NaviInfoMsg & msg,
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

  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << "\n";
  }

  // member: lane_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_count, out);
    out << "\n";
  }

  // member: lane_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_index: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_index, out);
    out << "\n";
  }

  // member: lane_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_target: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_target, out);
    out << "\n";
  }

  // member: road_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.road_speed, out);
    out << "\n";
  }

  // member: turning_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turning_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.turning_speed, out);
    out << "\n";
  }

  // member: turning_deriction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turning_deriction: ";
    rosidl_generator_traits::value_to_yaml(msg.turning_deriction, out);
    out << "\n";
  }

  // member: distance_to_cross
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_cross: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_cross, out);
    out << "\n";
  }

  // member: traffic_light_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_stop, out);
    out << "\n";
  }

  // member: crossing_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crossing_behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.crossing_behavior, out);
    out << "\n";
  }

  // member: distance_to_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_stop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NaviInfoMsg & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::NaviInfoMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::NaviInfoMsg & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::NaviInfoMsg>()
{
  return "ros2_interface::msg::NaviInfoMsg";
}

template<>
inline const char * name<ros2_interface::msg::NaviInfoMsg>()
{
  return "ros2_interface/msg/NaviInfoMsg";
}

template<>
struct has_fixed_size<ros2_interface::msg::NaviInfoMsg>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::NaviInfoMsg>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::NaviInfoMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__TRAITS_HPP_

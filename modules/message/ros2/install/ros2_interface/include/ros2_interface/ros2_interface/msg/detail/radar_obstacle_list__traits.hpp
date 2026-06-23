// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/RadarObstacleList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/radar_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'radar_obstacle'
#include "ros2_interface/msg/detail/radar_obstacle__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarObstacleList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: radar_obstacle
  {
    if (msg.radar_obstacle.size() == 0) {
      out << "radar_obstacle: []";
    } else {
      out << "radar_obstacle: [";
      size_t pending_items = msg.radar_obstacle.size();
      for (auto item : msg.radar_obstacle) {
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
  const RadarObstacleList & msg,
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

  // member: radar_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.radar_obstacle.size() == 0) {
      out << "radar_obstacle: []\n";
    } else {
      out << "radar_obstacle:\n";
      for (auto item : msg.radar_obstacle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarObstacleList & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::RadarObstacleList & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::RadarObstacleList & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::RadarObstacleList>()
{
  return "ros2_interface::msg::RadarObstacleList";
}

template<>
inline const char * name<ros2_interface::msg::RadarObstacleList>()
{
  return "ros2_interface/msg/RadarObstacleList";
}

template<>
struct has_fixed_size<ros2_interface::msg::RadarObstacleList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::RadarObstacleList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::RadarObstacleList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE_LIST__TRAITS_HPP_

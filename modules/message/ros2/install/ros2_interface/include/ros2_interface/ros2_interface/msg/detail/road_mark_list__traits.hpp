// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/RoadMarkList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/road_mark_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'roadmarks'
#include "ros2_interface/msg/detail/road_mark__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoadMarkList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: roadmarks
  {
    if (msg.roadmarks.size() == 0) {
      out << "roadmarks: []";
    } else {
      out << "roadmarks: [";
      size_t pending_items = msg.roadmarks.size();
      for (auto item : msg.roadmarks) {
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
  const RoadMarkList & msg,
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

  // member: roadmarks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.roadmarks.size() == 0) {
      out << "roadmarks: []\n";
    } else {
      out << "roadmarks:\n";
      for (auto item : msg.roadmarks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoadMarkList & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::RoadMarkList & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::RoadMarkList & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::RoadMarkList>()
{
  return "ros2_interface::msg::RoadMarkList";
}

template<>
inline const char * name<ros2_interface::msg::RoadMarkList>()
{
  return "ros2_interface/msg/RoadMarkList";
}

template<>
struct has_fixed_size<ros2_interface::msg::RoadMarkList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::RoadMarkList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::RoadMarkList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK_LIST__TRAITS_HPP_

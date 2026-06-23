// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/LocalMap.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/local_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ego_point'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"
// Member 'lane_list'
#include "ros2_interface/msg/detail/lane_info_extend__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: seq
  {
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << ", ";
  }

  // member: ego_point
  {
    out << "ego_point: ";
    to_flow_style_yaml(msg.ego_point, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: lane_list
  {
    if (msg.lane_list.size() == 0) {
      out << "lane_list: []";
    } else {
      out << "lane_list: [";
      size_t pending_items = msg.lane_list.size();
      for (auto item : msg.lane_list) {
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
  const LocalMap & msg,
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

  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << "\n";
  }

  // member: ego_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_point:\n";
    to_block_style_yaml(msg.ego_point, out, indentation + 2);
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: lane_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_list.size() == 0) {
      out << "lane_list: []\n";
    } else {
      out << "lane_list:\n";
      for (auto item : msg.lane_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalMap & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::LocalMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::LocalMap & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::LocalMap>()
{
  return "ros2_interface::msg::LocalMap";
}

template<>
inline const char * name<ros2_interface::msg::LocalMap>()
{
  return "ros2_interface/msg/LocalMap";
}

template<>
struct has_fixed_size<ros2_interface::msg::LocalMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::LocalMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::LocalMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOCAL_MAP__TRAITS_HPP_

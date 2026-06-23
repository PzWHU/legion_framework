// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/TrafficLightList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_LIST__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/traffic_light_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'traffic_light'
#include "ros2_interface/msg/detail/traffic_light__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficLightList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: traffic_light
  {
    if (msg.traffic_light.size() == 0) {
      out << "traffic_light: []";
    } else {
      out << "traffic_light: [";
      size_t pending_items = msg.traffic_light.size();
      for (auto item : msg.traffic_light) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: camera_status
  {
    out << "camera_status: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_status, out);
    out << ", ";
  }

  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficLightList & msg,
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

  // member: traffic_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_light.size() == 0) {
      out << "traffic_light: []\n";
    } else {
      out << "traffic_light:\n";
      for (auto item : msg.traffic_light) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: camera_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_status: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_status, out);
    out << "\n";
  }

  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficLightList & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::TrafficLightList & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::TrafficLightList & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::TrafficLightList>()
{
  return "ros2_interface::msg::TrafficLightList";
}

template<>
inline const char * name<ros2_interface::msg::TrafficLightList>()
{
  return "ros2_interface/msg/TrafficLightList";
}

template<>
struct has_fixed_size<ros2_interface::msg::TrafficLightList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::TrafficLightList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::TrafficLightList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_LIST__TRAITS_HPP_

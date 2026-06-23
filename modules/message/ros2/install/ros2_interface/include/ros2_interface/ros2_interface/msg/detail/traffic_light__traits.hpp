// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'light_rect'
#include "ros2_interface/msg/detail/image_rect__traits.hpp"
// Member 'position'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"
// Member 'create_time'
#include "ros2_interface/msg/detail/time__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficLight & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: light_rect
  {
    out << "light_rect: ";
    to_flow_style_yaml(msg.light_rect, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: light_lanes
  {
    if (msg.light_lanes.size() == 0) {
      out << "light_lanes: []";
    } else {
      out << "light_lanes: [";
      size_t pending_items = msg.light_lanes.size();
      for (auto item : msg.light_lanes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tracking_time
  {
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << ", ";
  }

  // member: blink
  {
    out << "blink: ";
    rosidl_generator_traits::value_to_yaml(msg.blink, out);
    out << ", ";
  }

  // member: blinking_time
  {
    out << "blinking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.blinking_time, out);
    out << ", ";
  }

  // member: remaining_time
  {
    out << "remaining_time: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_time, out);
    out << ", ";
  }

  // member: create_time
  {
    out << "create_time: ";
    to_flow_style_yaml(msg.create_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
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

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: light_rect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_rect:\n";
    to_block_style_yaml(msg.light_rect, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: light_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.light_lanes.size() == 0) {
      out << "light_lanes: []\n";
    } else {
      out << "light_lanes:\n";
      for (auto item : msg.light_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tracking_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << "\n";
  }

  // member: blink
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blink: ";
    rosidl_generator_traits::value_to_yaml(msg.blink, out);
    out << "\n";
  }

  // member: blinking_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blinking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.blinking_time, out);
    out << "\n";
  }

  // member: remaining_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_time: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_time, out);
    out << "\n";
  }

  // member: create_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "create_time:\n";
    to_block_style_yaml(msg.create_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficLight & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::TrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::TrafficLight & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::TrafficLight>()
{
  return "ros2_interface::msg::TrafficLight";
}

template<>
inline const char * name<ros2_interface::msg::TrafficLight>()
{
  return "ros2_interface/msg/TrafficLight";
}

template<>
struct has_fixed_size<ros2_interface::msg::TrafficLight>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::TrafficLight>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::TrafficLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_

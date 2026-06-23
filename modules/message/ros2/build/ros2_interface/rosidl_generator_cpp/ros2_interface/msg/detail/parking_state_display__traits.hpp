// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ParkingStateDisplay.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_STATE_DISPLAY__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_STATE_DISPLAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/parking_state_display__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParkingStateDisplay & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: parking_type
  {
    out << "parking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_type, out);
    out << ", ";
  }

  // member: moves_counter
  {
    out << "moves_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.moves_counter, out);
    out << ", ";
  }

  // member: remian_distance
  {
    out << "remian_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remian_distance, out);
    out << ", ";
  }

  // member: display_info
  {
    out << "display_info: ";
    rosidl_generator_traits::value_to_yaml(msg.display_info, out);
    out << ", ";
  }

  // member: distance_to_leader_obj
  {
    out << "distance_to_leader_obj: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_leader_obj, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParkingStateDisplay & msg,
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

  // member: parking_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_type, out);
    out << "\n";
  }

  // member: moves_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moves_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.moves_counter, out);
    out << "\n";
  }

  // member: remian_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remian_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remian_distance, out);
    out << "\n";
  }

  // member: display_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "display_info: ";
    rosidl_generator_traits::value_to_yaml(msg.display_info, out);
    out << "\n";
  }

  // member: distance_to_leader_obj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_leader_obj: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_leader_obj, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingStateDisplay & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ParkingStateDisplay & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ParkingStateDisplay & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ParkingStateDisplay>()
{
  return "ros2_interface::msg::ParkingStateDisplay";
}

template<>
inline const char * name<ros2_interface::msg::ParkingStateDisplay>()
{
  return "ros2_interface/msg/ParkingStateDisplay";
}

template<>
struct has_fixed_size<ros2_interface::msg::ParkingStateDisplay>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::ParkingStateDisplay>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::ParkingStateDisplay>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_STATE_DISPLAY__TRAITS_HPP_

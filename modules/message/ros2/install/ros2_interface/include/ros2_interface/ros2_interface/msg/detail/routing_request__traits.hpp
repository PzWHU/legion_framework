// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/RoutingRequest.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/routing_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'key_point_list'
#include "ros2_interface/msg/detail/key_point__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoutingRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: request_source
  {
    out << "request_source: ";
    rosidl_generator_traits::value_to_yaml(msg.request_source, out);
    out << ", ";
  }

  // member: request_type
  {
    out << "request_type: ";
    rosidl_generator_traits::value_to_yaml(msg.request_type, out);
    out << ", ";
  }

  // member: num_of_kp
  {
    out << "num_of_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_kp, out);
    out << ", ";
  }

  // member: key_point_list
  {
    if (msg.key_point_list.size() == 0) {
      out << "key_point_list: []";
    } else {
      out << "key_point_list: [";
      size_t pending_items = msg.key_point_list.size();
      for (auto item : msg.key_point_list) {
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
  const RoutingRequest & msg,
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

  // member: request_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_source: ";
    rosidl_generator_traits::value_to_yaml(msg.request_source, out);
    out << "\n";
  }

  // member: request_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_type: ";
    rosidl_generator_traits::value_to_yaml(msg.request_type, out);
    out << "\n";
  }

  // member: num_of_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_kp, out);
    out << "\n";
  }

  // member: key_point_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.key_point_list.size() == 0) {
      out << "key_point_list: []\n";
    } else {
      out << "key_point_list:\n";
      for (auto item : msg.key_point_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoutingRequest & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::RoutingRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::RoutingRequest & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::RoutingRequest>()
{
  return "ros2_interface::msg::RoutingRequest";
}

template<>
inline const char * name<ros2_interface::msg::RoutingRequest>()
{
  return "ros2_interface/msg/RoutingRequest";
}

template<>
struct has_fixed_size<ros2_interface::msg::RoutingRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::RoutingRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::RoutingRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/GlobalRouteMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/global_route_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'route'
// Member 'current_lanelet'
// Member 'cur_slice'
#include "ros2_interface/msg/detail/lanelet_info__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const GlobalRouteMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: route
  {
    if (msg.route.size() == 0) {
      out << "route: []";
    } else {
      out << "route: [";
      size_t pending_items = msg.route.size();
      for (auto item : msg.route) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_lanelet
  {
    out << "current_lanelet: ";
    to_flow_style_yaml(msg.current_lanelet, out);
    out << ", ";
  }

  // member: total_mileage
  {
    out << "total_mileage: ";
    rosidl_generator_traits::value_to_yaml(msg.total_mileage, out);
    out << ", ";
  }

  // member: cur_mileage
  {
    out << "cur_mileage: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_mileage, out);
    out << ", ";
  }

  // member: cur_slice
  {
    if (msg.cur_slice.size() == 0) {
      out << "cur_slice: []";
    } else {
      out << "cur_slice: [";
      size_t pending_items = msg.cur_slice.size();
      for (auto item : msg.cur_slice) {
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
  const GlobalRouteMsg & msg,
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

  // member: route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.route.size() == 0) {
      out << "route: []\n";
    } else {
      out << "route:\n";
      for (auto item : msg.route) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: current_lanelet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_lanelet:\n";
    to_block_style_yaml(msg.current_lanelet, out, indentation + 2);
  }

  // member: total_mileage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_mileage: ";
    rosidl_generator_traits::value_to_yaml(msg.total_mileage, out);
    out << "\n";
  }

  // member: cur_mileage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_mileage: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_mileage, out);
    out << "\n";
  }

  // member: cur_slice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cur_slice.size() == 0) {
      out << "cur_slice: []\n";
    } else {
      out << "cur_slice:\n";
      for (auto item : msg.cur_slice) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalRouteMsg & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::GlobalRouteMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::GlobalRouteMsg & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::GlobalRouteMsg>()
{
  return "ros2_interface::msg::GlobalRouteMsg";
}

template<>
inline const char * name<ros2_interface::msg::GlobalRouteMsg>()
{
  return "ros2_interface/msg/GlobalRouteMsg";
}

template<>
struct has_fixed_size<ros2_interface::msg::GlobalRouteMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::GlobalRouteMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::GlobalRouteMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__GLOBAL_ROUTE_MSG__TRAITS_HPP_

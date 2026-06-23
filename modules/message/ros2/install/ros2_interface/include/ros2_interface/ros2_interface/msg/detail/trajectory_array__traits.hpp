// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/trajectory_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'spline_s'
// Member 'qp_smooth'
#include "ros2_interface/msg/detail/path__traits.hpp"
// Member 'trajectory_list'
#include "ros2_interface/msg/detail/trajectory__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: spline_s
  {
    if (msg.spline_s.size() == 0) {
      out << "spline_s: []";
    } else {
      out << "spline_s: [";
      size_t pending_items = msg.spline_s.size();
      for (auto item : msg.spline_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: qp_smooth
  {
    if (msg.qp_smooth.size() == 0) {
      out << "qp_smooth: []";
    } else {
      out << "qp_smooth: [";
      size_t pending_items = msg.qp_smooth.size();
      for (auto item : msg.qp_smooth) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: trajectory_list
  {
    if (msg.trajectory_list.size() == 0) {
      out << "trajectory_list: []";
    } else {
      out << "trajectory_list: [";
      size_t pending_items = msg.trajectory_list.size();
      for (auto item : msg.trajectory_list) {
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
  const TrajectoryArray & msg,
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

  // member: spline_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.spline_s.size() == 0) {
      out << "spline_s: []\n";
    } else {
      out << "spline_s:\n";
      for (auto item : msg.spline_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: qp_smooth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.qp_smooth.size() == 0) {
      out << "qp_smooth: []\n";
    } else {
      out << "qp_smooth:\n";
      for (auto item : msg.qp_smooth) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: trajectory_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_list.size() == 0) {
      out << "trajectory_list: []\n";
    } else {
      out << "trajectory_list:\n";
      for (auto item : msg.trajectory_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryArray & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::TrajectoryArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::TrajectoryArray & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::TrajectoryArray>()
{
  return "ros2_interface::msg::TrajectoryArray";
}

template<>
inline const char * name<ros2_interface::msg::TrajectoryArray>()
{
  return "ros2_interface/msg/TrajectoryArray";
}

template<>
struct has_fixed_size<ros2_interface::msg::TrajectoryArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::TrajectoryArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::TrajectoryArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__TRAITS_HPP_

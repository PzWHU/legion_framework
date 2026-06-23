// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/TrajectoryLimitCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/trajectory_limit_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryLimitCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_limit_enable
  {
    out << "speed_limit_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_enable, out);
    out << ", ";
  }

  // member: speed_limit
  {
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
    out << ", ";
  }

  // member: kappa_limit_enable
  {
    out << "kappa_limit_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa_limit_enable, out);
    out << ", ";
  }

  // member: kappa_limit
  {
    out << "kappa_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa_limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryLimitCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_limit_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_enable, out);
    out << "\n";
  }

  // member: speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
    out << "\n";
  }

  // member: kappa_limit_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kappa_limit_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa_limit_enable, out);
    out << "\n";
  }

  // member: kappa_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kappa_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryLimitCommand & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::TrajectoryLimitCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::TrajectoryLimitCommand & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::TrajectoryLimitCommand>()
{
  return "ros2_interface::msg::TrajectoryLimitCommand";
}

template<>
inline const char * name<ros2_interface::msg::TrajectoryLimitCommand>()
{
  return "ros2_interface/msg/TrajectoryLimitCommand";
}

template<>
struct has_fixed_size<ros2_interface::msg::TrajectoryLimitCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::TrajectoryLimitCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::TrajectoryLimitCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__TRAITS_HPP_

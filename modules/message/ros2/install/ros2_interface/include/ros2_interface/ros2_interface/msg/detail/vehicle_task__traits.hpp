// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/VehicleTask.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/vehicle_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleTask & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: clean_up_ctrl
  {
    out << "clean_up_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.clean_up_ctrl, out);
    out << ", ";
  }

  // member: watering_ctrl
  {
    out << "watering_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.watering_ctrl, out);
    out << ", ";
  }

  // member: water_add_ctrl
  {
    out << "water_add_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.water_add_ctrl, out);
    out << ", ";
  }

  // member: hatch_unlock_ctrl
  {
    out << "hatch_unlock_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.hatch_unlock_ctrl, out);
    out << ", ";
  }

  // member: decorative_light_ctrl
  {
    out << "decorative_light_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.decorative_light_ctrl, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleTask & msg,
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

  // member: clean_up_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clean_up_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.clean_up_ctrl, out);
    out << "\n";
  }

  // member: watering_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "watering_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.watering_ctrl, out);
    out << "\n";
  }

  // member: water_add_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "water_add_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.water_add_ctrl, out);
    out << "\n";
  }

  // member: hatch_unlock_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hatch_unlock_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.hatch_unlock_ctrl, out);
    out << "\n";
  }

  // member: decorative_light_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decorative_light_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.decorative_light_ctrl, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleTask & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::VehicleTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::VehicleTask & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::VehicleTask>()
{
  return "ros2_interface::msg::VehicleTask";
}

template<>
inline const char * name<ros2_interface::msg::VehicleTask>()
{
  return "ros2_interface/msg/VehicleTask";
}

template<>
struct has_fixed_size<ros2_interface::msg::VehicleTask>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::VehicleTask>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::VehicleTask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__TRAITS_HPP_

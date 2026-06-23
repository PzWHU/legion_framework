// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOCATION__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "ros2_interface/msg/detail/point_llh__traits.hpp"
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'position_std_dev'
// Member 'orientation_std_dev'
// Member 'linear_velocity_std_dev'
// Member 'linear_acceleration_std_dev'
// Member 'angular_velocity_std_dev'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"
// Member 'utm_position'
// Member 'utm_position_next'
#include "ros2_interface/msg/detail/point_enu__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Location & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: rtk_flag
  {
    out << "rtk_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rtk_flag, out);
    out << ", ";
  }

  // member: odom_type
  {
    out << "odom_type: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_type, out);
    out << ", ";
  }

  // member: auxiliary_type
  {
    out << "auxiliary_type: ";
    rosidl_generator_traits::value_to_yaml(msg.auxiliary_type, out);
    out << ", ";
  }

  // member: location_valid_flag
  {
    out << "location_valid_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.location_valid_flag, out);
    out << ", ";
  }

  // member: origin_lat
  {
    out << "origin_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_lat, out);
    out << ", ";
  }

  // member: origin_lon
  {
    out << "origin_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_lon, out);
    out << ", ";
  }

  // member: utm_position
  {
    out << "utm_position: ";
    to_flow_style_yaml(msg.utm_position, out);
    out << ", ";
  }

  // member: change_origin_flag
  {
    out << "change_origin_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.change_origin_flag, out);
    out << ", ";
  }

  // member: utm_position_next
  {
    out << "utm_position_next: ";
    to_flow_style_yaml(msg.utm_position_next, out);
    out << ", ";
  }

  // member: position_std_dev
  {
    out << "position_std_dev: ";
    to_flow_style_yaml(msg.position_std_dev, out);
    out << ", ";
  }

  // member: orientation_std_dev
  {
    out << "orientation_std_dev: ";
    to_flow_style_yaml(msg.orientation_std_dev, out);
    out << ", ";
  }

  // member: linear_velocity_std_dev
  {
    out << "linear_velocity_std_dev: ";
    to_flow_style_yaml(msg.linear_velocity_std_dev, out);
    out << ", ";
  }

  // member: linear_acceleration_std_dev
  {
    out << "linear_acceleration_std_dev: ";
    to_flow_style_yaml(msg.linear_acceleration_std_dev, out);
    out << ", ";
  }

  // member: angular_velocity_std_dev
  {
    out << "angular_velocity_std_dev: ";
    to_flow_style_yaml(msg.angular_velocity_std_dev, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Location & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: rtk_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtk_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rtk_flag, out);
    out << "\n";
  }

  // member: odom_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_type: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_type, out);
    out << "\n";
  }

  // member: auxiliary_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auxiliary_type: ";
    rosidl_generator_traits::value_to_yaml(msg.auxiliary_type, out);
    out << "\n";
  }

  // member: location_valid_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location_valid_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.location_valid_flag, out);
    out << "\n";
  }

  // member: origin_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_lat, out);
    out << "\n";
  }

  // member: origin_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_lon, out);
    out << "\n";
  }

  // member: utm_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_position:\n";
    to_block_style_yaml(msg.utm_position, out, indentation + 2);
  }

  // member: change_origin_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_origin_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.change_origin_flag, out);
    out << "\n";
  }

  // member: utm_position_next
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_position_next:\n";
    to_block_style_yaml(msg.utm_position_next, out, indentation + 2);
  }

  // member: position_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_std_dev:\n";
    to_block_style_yaml(msg.position_std_dev, out, indentation + 2);
  }

  // member: orientation_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_std_dev:\n";
    to_block_style_yaml(msg.orientation_std_dev, out, indentation + 2);
  }

  // member: linear_velocity_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity_std_dev:\n";
    to_block_style_yaml(msg.linear_velocity_std_dev, out, indentation + 2);
  }

  // member: linear_acceleration_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration_std_dev:\n";
    to_block_style_yaml(msg.linear_acceleration_std_dev, out, indentation + 2);
  }

  // member: angular_velocity_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_std_dev:\n";
    to_block_style_yaml(msg.angular_velocity_std_dev, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Location & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Location & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Location>()
{
  return "ros2_interface::msg::Location";
}

template<>
inline const char * name<ros2_interface::msg::Location>()
{
  return "ros2_interface/msg/Location";
}

template<>
struct has_fixed_size<ros2_interface::msg::Location>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point3D>::value && has_fixed_size<ros2_interface::msg::PointENU>::value && has_fixed_size<ros2_interface::msg::PointLLH>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::Location>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point3D>::value && has_bounded_size<ros2_interface::msg::PointENU>::value && has_bounded_size<ros2_interface::msg::PointLLH>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::Location>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOCATION__TRAITS_HPP_

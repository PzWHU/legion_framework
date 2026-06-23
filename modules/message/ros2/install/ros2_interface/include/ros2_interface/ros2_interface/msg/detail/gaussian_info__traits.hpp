// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/GaussianInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/gaussian_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const GaussianInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: sigma_x
  {
    out << "sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_x, out);
    out << ", ";
  }

  // member: sigma_y
  {
    out << "sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_y, out);
    out << ", ";
  }

  // member: correlation
  {
    out << "correlation: ";
    rosidl_generator_traits::value_to_yaml(msg.correlation, out);
    out << ", ";
  }

  // member: area_probability
  {
    out << "area_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.area_probability, out);
    out << ", ";
  }

  // member: ellipse_a
  {
    out << "ellipse_a: ";
    rosidl_generator_traits::value_to_yaml(msg.ellipse_a, out);
    out << ", ";
  }

  // member: ellipse_b
  {
    out << "ellipse_b: ";
    rosidl_generator_traits::value_to_yaml(msg.ellipse_b, out);
    out << ", ";
  }

  // member: theta_a
  {
    out << "theta_a: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_a, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GaussianInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sigma_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_x, out);
    out << "\n";
  }

  // member: sigma_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_y, out);
    out << "\n";
  }

  // member: correlation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "correlation: ";
    rosidl_generator_traits::value_to_yaml(msg.correlation, out);
    out << "\n";
  }

  // member: area_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.area_probability, out);
    out << "\n";
  }

  // member: ellipse_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ellipse_a: ";
    rosidl_generator_traits::value_to_yaml(msg.ellipse_a, out);
    out << "\n";
  }

  // member: ellipse_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ellipse_b: ";
    rosidl_generator_traits::value_to_yaml(msg.ellipse_b, out);
    out << "\n";
  }

  // member: theta_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_a: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_a, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GaussianInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::GaussianInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::GaussianInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::GaussianInfo>()
{
  return "ros2_interface::msg::GaussianInfo";
}

template<>
inline const char * name<ros2_interface::msg::GaussianInfo>()
{
  return "ros2_interface/msg/GaussianInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::GaussianInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::GaussianInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::GaussianInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__TRAITS_HPP_

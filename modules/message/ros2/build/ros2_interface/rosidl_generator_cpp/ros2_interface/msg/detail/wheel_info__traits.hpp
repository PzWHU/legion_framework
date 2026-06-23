// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/WheelInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/wheel_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: moving_status
  {
    out << "moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_status, out);
    out << ", ";
  }

  // member: steer_driving_mode
  {
    out << "steer_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_driving_mode, out);
    out << ", ";
  }

  // member: steering_value
  {
    out << "steering_value: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_value, out);
    out << ", ";
  }

  // member: steering_torque_nm
  {
    out << "steering_torque_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_torque_nm, out);
    out << ", ";
  }

  // member: steering_rate_dps
  {
    out << "steering_rate_dps: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_rate_dps, out);
    out << ", ";
  }

  // member: speed_mps
  {
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << ", ";
  }

  // member: veh_spd_vld
  {
    out << "veh_spd_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_vld, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: gear_vld
  {
    out << "gear_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_vld, out);
    out << ", ";
  }

  // member: wheel_direction_rr
  {
    out << "wheel_direction_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_rr, out);
    out << ", ";
  }

  // member: wheel_spd_rr
  {
    out << "wheel_spd_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_rr, out);
    out << ", ";
  }

  // member: wheel_direction_rl
  {
    out << "wheel_direction_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_rl, out);
    out << ", ";
  }

  // member: wheel_spd_rl
  {
    out << "wheel_spd_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_rl, out);
    out << ", ";
  }

  // member: wheel_direction_fr
  {
    out << "wheel_direction_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_fr, out);
    out << ", ";
  }

  // member: wheel_spd_fr
  {
    out << "wheel_spd_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_fr, out);
    out << ", ";
  }

  // member: wheel_direction_fl
  {
    out << "wheel_direction_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_fl, out);
    out << ", ";
  }

  // member: wheel_spd_fl
  {
    out << "wheel_spd_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_fl, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: wss_fl_edges_sum
  {
    out << "wss_fl_edges_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_fl_edges_sum, out);
    out << ", ";
  }

  // member: wss_fr_edges_sum
  {
    out << "wss_fr_edges_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_fr_edges_sum, out);
    out << ", ";
  }

  // member: wss_rl_edges_sum
  {
    out << "wss_rl_edges_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_rl_edges_sum, out);
    out << ", ";
  }

  // member: wss_rr_edges_sum
  {
    out << "wss_rr_edges_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_rr_edges_sum, out);
    out << ", ";
  }

  // member: wss_fl_edges_sum_vld
  {
    out << "wss_fl_edges_sum_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_fl_edges_sum_vld, out);
    out << ", ";
  }

  // member: wss_fr_edges_sum_vld
  {
    out << "wss_fr_edges_sum_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_fr_edges_sum_vld, out);
    out << ", ";
  }

  // member: wss_rl_edges_sum_vld
  {
    out << "wss_rl_edges_sum_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_rl_edges_sum_vld, out);
    out << ", ";
  }

  // member: wss_rr_edges_sum_vld
  {
    out << "wss_rr_edges_sum_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_rr_edges_sum_vld, out);
    out << ", ";
  }

  // member: veh_lat_accel
  {
    out << "veh_lat_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_lat_accel, out);
    out << ", ";
  }

  // member: veh_lgt_accel
  {
    out << "veh_lgt_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_lgt_accel, out);
    out << ", ";
  }

  // member: veh_lat_accel_vld
  {
    out << "veh_lat_accel_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_lat_accel_vld, out);
    out << ", ";
  }

  // member: veh_lgt_accel_vld
  {
    out << "veh_lgt_accel_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_lgt_accel_vld, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelInfo & msg,
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

  // member: moving_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_status, out);
    out << "\n";
  }

  // member: steer_driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_driving_mode, out);
    out << "\n";
  }

  // member: steering_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_value: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_value, out);
    out << "\n";
  }

  // member: steering_torque_nm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_torque_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_torque_nm, out);
    out << "\n";
  }

  // member: steering_rate_dps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_rate_dps: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_rate_dps, out);
    out << "\n";
  }

  // member: speed_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << "\n";
  }

  // member: veh_spd_vld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_spd_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_vld, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: gear_vld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_vld, out);
    out << "\n";
  }

  // member: wheel_direction_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_direction_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_rr, out);
    out << "\n";
  }

  // member: wheel_spd_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_rr, out);
    out << "\n";
  }

  // member: wheel_direction_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_direction_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_rl, out);
    out << "\n";
  }

  // member: wheel_spd_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_rl, out);
    out << "\n";
  }

  // member: wheel_direction_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_direction_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_fr, out);
    out << "\n";
  }

  // member: wheel_spd_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_fr, out);
    out << "\n";
  }

  // member: wheel_direction_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_direction_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_direction_fl, out);
    out << "\n";
  }

  // member: wheel_spd_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_spd_fl, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: wss_fl_edges_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wss_fl_edges_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_fl_edges_sum, out);
    out << "\n";
  }

  // member: wss_fr_edges_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wss_fr_edges_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_fr_edges_sum, out);
    out << "\n";
  }

  // member: wss_rl_edges_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wss_rl_edges_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_rl_edges_sum, out);
    out << "\n";
  }

  // member: wss_rr_edges_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wss_rr_edges_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_rr_edges_sum, out);
    out << "\n";
  }

  // member: wss_fl_edges_sum_vld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wss_fl_edges_sum_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_fl_edges_sum_vld, out);
    out << "\n";
  }

  // member: wss_fr_edges_sum_vld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wss_fr_edges_sum_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_fr_edges_sum_vld, out);
    out << "\n";
  }

  // member: wss_rl_edges_sum_vld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wss_rl_edges_sum_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_rl_edges_sum_vld, out);
    out << "\n";
  }

  // member: wss_rr_edges_sum_vld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wss_rr_edges_sum_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.wss_rr_edges_sum_vld, out);
    out << "\n";
  }

  // member: veh_lat_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_lat_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_lat_accel, out);
    out << "\n";
  }

  // member: veh_lgt_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_lgt_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_lgt_accel, out);
    out << "\n";
  }

  // member: veh_lat_accel_vld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_lat_accel_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_lat_accel_vld, out);
    out << "\n";
  }

  // member: veh_lgt_accel_vld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_lgt_accel_vld: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_lgt_accel_vld, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::WheelInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::WheelInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::WheelInfo>()
{
  return "ros2_interface::msg::WheelInfo";
}

template<>
inline const char * name<ros2_interface::msg::WheelInfo>()
{
  return "ros2_interface/msg/WheelInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::WheelInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::WheelInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::WheelInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__TRAITS_HPP_

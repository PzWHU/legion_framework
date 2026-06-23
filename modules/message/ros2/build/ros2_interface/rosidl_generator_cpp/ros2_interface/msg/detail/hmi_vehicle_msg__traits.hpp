// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/HMIVehicleMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/hmi_vehicle_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "ros2_interface/msg/detail/point_llh__traits.hpp"
// Member 'utm_position'
// Member 'mercator_position'
#include "ros2_interface/msg/detail/point_enu__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const HMIVehicleMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: driving_mode
  {
    out << "driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode, out);
    out << ", ";
  }

  // member: gear_location
  {
    out << "gear_location: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_location, out);
    out << ", ";
  }

  // member: steering_value
  {
    out << "steering_value: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_value, out);
    out << ", ";
  }

  // member: accel_value
  {
    out << "accel_value: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_value, out);
    out << ", ";
  }

  // member: brake_value
  {
    out << "brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value, out);
    out << ", ";
  }

  // member: speed_mps
  {
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: utm_position
  {
    out << "utm_position: ";
    to_flow_style_yaml(msg.utm_position, out);
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

  // member: rtk_flag
  {
    out << "rtk_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rtk_flag, out);
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

  // member: current_ins_yaw
  {
    out << "current_ins_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ins_yaw, out);
    out << ", ";
  }

  // member: auto_safe
  {
    out << "auto_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_safe, out);
    out << ", ";
  }

  // member: battery_power_percentage
  {
    out << "battery_power_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_power_percentage, out);
    out << ", ";
  }

  // member: charging_gun_status
  {
    out << "charging_gun_status: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_gun_status, out);
    out << ", ";
  }

  // member: chassis_error_code
  {
    if (msg.chassis_error_code.size() == 0) {
      out << "chassis_error_code: []";
    } else {
      out << "chassis_error_code: [";
      size_t pending_items = msg.chassis_error_code.size();
      for (auto item : msg.chassis_error_code) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: brake_lamp_status
  {
    out << "brake_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_lamp_status, out);
    out << ", ";
  }

  // member: turn_lamp_status
  {
    out << "turn_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_status, out);
    out << ", ";
  }

  // member: mercator_position
  {
    out << "mercator_position: ";
    to_flow_style_yaml(msg.mercator_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HMIVehicleMsg & msg,
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

  // member: driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode, out);
    out << "\n";
  }

  // member: gear_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_location: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_location, out);
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

  // member: accel_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_value: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_value, out);
    out << "\n";
  }

  // member: brake_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_value: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_value, out);
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: utm_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_position:\n";
    to_block_style_yaml(msg.utm_position, out, indentation + 2);
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

  // member: rtk_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtk_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rtk_flag, out);
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

  // member: current_ins_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_ins_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ins_yaw, out);
    out << "\n";
  }

  // member: auto_safe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_safe, out);
    out << "\n";
  }

  // member: battery_power_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_power_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_power_percentage, out);
    out << "\n";
  }

  // member: charging_gun_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_gun_status: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_gun_status, out);
    out << "\n";
  }

  // member: chassis_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.chassis_error_code.size() == 0) {
      out << "chassis_error_code: []\n";
    } else {
      out << "chassis_error_code:\n";
      for (auto item : msg.chassis_error_code) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: brake_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_lamp_status, out);
    out << "\n";
  }

  // member: turn_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_status, out);
    out << "\n";
  }

  // member: mercator_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mercator_position:\n";
    to_block_style_yaml(msg.mercator_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HMIVehicleMsg & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::HMIVehicleMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::HMIVehicleMsg & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::HMIVehicleMsg>()
{
  return "ros2_interface::msg::HMIVehicleMsg";
}

template<>
inline const char * name<ros2_interface::msg::HMIVehicleMsg>()
{
  return "ros2_interface/msg/HMIVehicleMsg";
}

template<>
struct has_fixed_size<ros2_interface::msg::HMIVehicleMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::HMIVehicleMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::HMIVehicleMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__TRAITS_HPP_

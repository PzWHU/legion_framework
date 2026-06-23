// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/TrafficLightDebug.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/traffic_light_debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cropbox'
// Member 'box'
// Member 'crop_roi'
// Member 'projected_roi'
// Member 'rectified_roi'
// Member 'debug_roi'
#include "ros2_interface/msg/detail/traffic_light_box__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficLightDebug & msg,
  std::ostream & out)
{
  out << "{";
  // member: cropbox
  {
    out << "cropbox: ";
    to_flow_style_yaml(msg.cropbox, out);
    out << ", ";
  }

  // member: box
  {
    if (msg.box.size() == 0) {
      out << "box: []";
    } else {
      out << "box: [";
      size_t pending_items = msg.box.size();
      for (auto item : msg.box) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: signal_num
  {
    out << "signal_num: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_num, out);
    out << ", ";
  }

  // member: valid_pos
  {
    out << "valid_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_pos, out);
    out << ", ";
  }

  // member: ts_diff_pos
  {
    out << "ts_diff_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_diff_pos, out);
    out << ", ";
  }

  // member: ts_diff_sys
  {
    out << "ts_diff_sys: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_diff_sys, out);
    out << ", ";
  }

  // member: project_error
  {
    out << "project_error: ";
    rosidl_generator_traits::value_to_yaml(msg.project_error, out);
    out << ", ";
  }

  // member: distance_to_stop_line
  {
    out << "distance_to_stop_line: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_stop_line, out);
    out << ", ";
  }

  // member: camera_id
  {
    out << "camera_id: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_id, out);
    out << ", ";
  }

  // member: crop_roi
  {
    if (msg.crop_roi.size() == 0) {
      out << "crop_roi: []";
    } else {
      out << "crop_roi: [";
      size_t pending_items = msg.crop_roi.size();
      for (auto item : msg.crop_roi) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: projected_roi
  {
    if (msg.projected_roi.size() == 0) {
      out << "projected_roi: []";
    } else {
      out << "projected_roi: [";
      size_t pending_items = msg.projected_roi.size();
      for (auto item : msg.projected_roi) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rectified_roi
  {
    if (msg.rectified_roi.size() == 0) {
      out << "rectified_roi: []";
    } else {
      out << "rectified_roi: [";
      size_t pending_items = msg.rectified_roi.size();
      for (auto item : msg.rectified_roi) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: debug_roi
  {
    if (msg.debug_roi.size() == 0) {
      out << "debug_roi: []";
    } else {
      out << "debug_roi: [";
      size_t pending_items = msg.debug_roi.size();
      for (auto item : msg.debug_roi) {
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
  const TrafficLightDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cropbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cropbox:\n";
    to_block_style_yaml(msg.cropbox, out, indentation + 2);
  }

  // member: box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.box.size() == 0) {
      out << "box: []\n";
    } else {
      out << "box:\n";
      for (auto item : msg.box) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: signal_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_num: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_num, out);
    out << "\n";
  }

  // member: valid_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_pos, out);
    out << "\n";
  }

  // member: ts_diff_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ts_diff_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_diff_pos, out);
    out << "\n";
  }

  // member: ts_diff_sys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ts_diff_sys: ";
    rosidl_generator_traits::value_to_yaml(msg.ts_diff_sys, out);
    out << "\n";
  }

  // member: project_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "project_error: ";
    rosidl_generator_traits::value_to_yaml(msg.project_error, out);
    out << "\n";
  }

  // member: distance_to_stop_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_stop_line: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_stop_line, out);
    out << "\n";
  }

  // member: camera_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_id: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_id, out);
    out << "\n";
  }

  // member: crop_roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.crop_roi.size() == 0) {
      out << "crop_roi: []\n";
    } else {
      out << "crop_roi:\n";
      for (auto item : msg.crop_roi) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: projected_roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.projected_roi.size() == 0) {
      out << "projected_roi: []\n";
    } else {
      out << "projected_roi:\n";
      for (auto item : msg.projected_roi) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: rectified_roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rectified_roi.size() == 0) {
      out << "rectified_roi: []\n";
    } else {
      out << "rectified_roi:\n";
      for (auto item : msg.rectified_roi) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: debug_roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.debug_roi.size() == 0) {
      out << "debug_roi: []\n";
    } else {
      out << "debug_roi:\n";
      for (auto item : msg.debug_roi) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficLightDebug & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::TrafficLightDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::TrafficLightDebug & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::TrafficLightDebug>()
{
  return "ros2_interface::msg::TrafficLightDebug";
}

template<>
inline const char * name<ros2_interface::msg::TrafficLightDebug>()
{
  return "ros2_interface/msg/TrafficLightDebug";
}

template<>
struct has_fixed_size<ros2_interface::msg::TrafficLightDebug>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::TrafficLightDebug>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::TrafficLightDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__TRAITS_HPP_

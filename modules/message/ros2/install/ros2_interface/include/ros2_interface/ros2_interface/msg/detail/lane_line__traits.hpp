// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/LaneLine.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/lane_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'curve_vehicle'
// Member 'curve_image'
// Member 'curve_abs'
#include "ros2_interface/msg/detail/lane_line_cubic_curve__traits.hpp"
// Member 'pts_vehicle'
// Member 'pts_abs'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"
// Member 'pts_image'
// Member 'pts_key'
#include "ros2_interface/msg/detail/point2_d__traits.hpp"
// Member 'image_end_point'
#include "ros2_interface/msg/detail/end_points__traits.hpp"
// Member 'create_time'
#include "ros2_interface/msg/detail/time__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_type
  {
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << ", ";
  }

  // member: lane_color
  {
    out << "lane_color: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_color, out);
    out << ", ";
  }

  // member: pos_type
  {
    out << "pos_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_type, out);
    out << ", ";
  }

  // member: curve_vehicle
  {
    out << "curve_vehicle: ";
    to_flow_style_yaml(msg.curve_vehicle, out);
    out << ", ";
  }

  // member: curve_image
  {
    out << "curve_image: ";
    to_flow_style_yaml(msg.curve_image, out);
    out << ", ";
  }

  // member: curve_abs
  {
    out << "curve_abs: ";
    to_flow_style_yaml(msg.curve_abs, out);
    out << ", ";
  }

  // member: pts_vehicle
  {
    if (msg.pts_vehicle.size() == 0) {
      out << "pts_vehicle: []";
    } else {
      out << "pts_vehicle: [";
      size_t pending_items = msg.pts_vehicle.size();
      for (auto item : msg.pts_vehicle) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pts_image
  {
    if (msg.pts_image.size() == 0) {
      out << "pts_image: []";
    } else {
      out << "pts_image: [";
      size_t pending_items = msg.pts_image.size();
      for (auto item : msg.pts_image) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pts_abs
  {
    if (msg.pts_abs.size() == 0) {
      out << "pts_abs: []";
    } else {
      out << "pts_abs: [";
      size_t pending_items = msg.pts_abs.size();
      for (auto item : msg.pts_abs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image_end_point
  {
    out << "image_end_point: ";
    to_flow_style_yaml(msg.image_end_point, out);
    out << ", ";
  }

  // member: pts_key
  {
    if (msg.pts_key.size() == 0) {
      out << "pts_key: []";
    } else {
      out << "pts_key: [";
      size_t pending_items = msg.pts_key.size();
      for (auto item : msg.pts_key) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hd_lane_id
  {
    out << "hd_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.hd_lane_id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: lane_quality
  {
    out << "lane_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_quality, out);
    out << ", ";
  }

  // member: fused_lane_type
  {
    out << "fused_lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fused_lane_type, out);
    out << ", ";
  }

  // member: homography_mat
  {
    if (msg.homography_mat.size() == 0) {
      out << "homography_mat: []";
    } else {
      out << "homography_mat: [";
      size_t pending_items = msg.homography_mat.size();
      for (auto item : msg.homography_mat) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: homography_mat_inv
  {
    if (msg.homography_mat_inv.size() == 0) {
      out << "homography_mat_inv: []";
    } else {
      out << "homography_mat_inv: [";
      size_t pending_items = msg.homography_mat_inv.size();
      for (auto item : msg.homography_mat_inv) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_coordinate_type
  {
    out << "lane_coordinate_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_coordinate_type, out);
    out << ", ";
  }

  // member: use_type
  {
    out << "use_type: ";
    rosidl_generator_traits::value_to_yaml(msg.use_type, out);
    out << ", ";
  }

  // member: create_time
  {
    out << "create_time: ";
    to_flow_style_yaml(msg.create_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << "\n";
  }

  // member: lane_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_color: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_color, out);
    out << "\n";
  }

  // member: pos_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_type, out);
    out << "\n";
  }

  // member: curve_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curve_vehicle:\n";
    to_block_style_yaml(msg.curve_vehicle, out, indentation + 2);
  }

  // member: curve_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curve_image:\n";
    to_block_style_yaml(msg.curve_image, out, indentation + 2);
  }

  // member: curve_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curve_abs:\n";
    to_block_style_yaml(msg.curve_abs, out, indentation + 2);
  }

  // member: pts_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pts_vehicle.size() == 0) {
      out << "pts_vehicle: []\n";
    } else {
      out << "pts_vehicle:\n";
      for (auto item : msg.pts_vehicle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pts_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pts_image.size() == 0) {
      out << "pts_image: []\n";
    } else {
      out << "pts_image:\n";
      for (auto item : msg.pts_image) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pts_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pts_abs.size() == 0) {
      out << "pts_abs: []\n";
    } else {
      out << "pts_abs:\n";
      for (auto item : msg.pts_abs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: image_end_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_end_point:\n";
    to_block_style_yaml(msg.image_end_point, out, indentation + 2);
  }

  // member: pts_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pts_key.size() == 0) {
      out << "pts_key: []\n";
    } else {
      out << "pts_key:\n";
      for (auto item : msg.pts_key) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: hd_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hd_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.hd_lane_id, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: lane_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_quality, out);
    out << "\n";
  }

  // member: fused_lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fused_lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fused_lane_type, out);
    out << "\n";
  }

  // member: homography_mat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.homography_mat.size() == 0) {
      out << "homography_mat: []\n";
    } else {
      out << "homography_mat:\n";
      for (auto item : msg.homography_mat) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: homography_mat_inv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.homography_mat_inv.size() == 0) {
      out << "homography_mat_inv: []\n";
    } else {
      out << "homography_mat_inv:\n";
      for (auto item : msg.homography_mat_inv) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lane_coordinate_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_coordinate_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_coordinate_type, out);
    out << "\n";
  }

  // member: use_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_type: ";
    rosidl_generator_traits::value_to_yaml(msg.use_type, out);
    out << "\n";
  }

  // member: create_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "create_time:\n";
    to_block_style_yaml(msg.create_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneLine & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::LaneLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::LaneLine & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::LaneLine>()
{
  return "ros2_interface::msg::LaneLine";
}

template<>
inline const char * name<ros2_interface::msg::LaneLine>()
{
  return "ros2_interface/msg/LaneLine";
}

template<>
struct has_fixed_size<ros2_interface::msg::LaneLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::LaneLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::LaneLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__TRAITS_HPP_

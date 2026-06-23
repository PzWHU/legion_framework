// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/LaneInfoExtend.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_INFO_EXTEND__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_INFO_EXTEND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/lane_info_extend__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lane_points'
#include "ros2_interface/msg/detail/lane_point__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneInfoExtend & msg,
  std::ostream & out)
{
  out << "{";
  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: global_id
  {
    out << "global_id: ";
    rosidl_generator_traits::value_to_yaml(msg.global_id, out);
    out << ", ";
  }

  // member: predecessor_ids
  {
    if (msg.predecessor_ids.size() == 0) {
      out << "predecessor_ids: []";
    } else {
      out << "predecessor_ids: [";
      size_t pending_items = msg.predecessor_ids.size();
      for (auto item : msg.predecessor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: successor_ids
  {
    if (msg.successor_ids.size() == 0) {
      out << "successor_ids: []";
    } else {
      out << "successor_ids: [";
      size_t pending_items = msg.successor_ids.size();
      for (auto item : msg.successor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_neighbor_id
  {
    out << "left_neighbor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_neighbor_id, out);
    out << ", ";
  }

  // member: right_neighbor_id
  {
    out << "right_neighbor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_neighbor_id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: lane_points
  {
    if (msg.lane_points.size() == 0) {
      out << "lane_points: []";
    } else {
      out << "lane_points: [";
      size_t pending_items = msg.lane_points.size();
      for (auto item : msg.lane_points) {
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
  const LaneInfoExtend & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: global_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_id: ";
    rosidl_generator_traits::value_to_yaml(msg.global_id, out);
    out << "\n";
  }

  // member: predecessor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predecessor_ids.size() == 0) {
      out << "predecessor_ids: []\n";
    } else {
      out << "predecessor_ids:\n";
      for (auto item : msg.predecessor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: successor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.successor_ids.size() == 0) {
      out << "successor_ids: []\n";
    } else {
      out << "successor_ids:\n";
      for (auto item : msg.successor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_neighbor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_neighbor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_neighbor_id, out);
    out << "\n";
  }

  // member: right_neighbor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_neighbor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_neighbor_id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: lane_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_points.size() == 0) {
      out << "lane_points: []\n";
    } else {
      out << "lane_points:\n";
      for (auto item : msg.lane_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneInfoExtend & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::LaneInfoExtend & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::LaneInfoExtend & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::LaneInfoExtend>()
{
  return "ros2_interface::msg::LaneInfoExtend";
}

template<>
inline const char * name<ros2_interface::msg::LaneInfoExtend>()
{
  return "ros2_interface/msg/LaneInfoExtend";
}

template<>
struct has_fixed_size<ros2_interface::msg::LaneInfoExtend>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::LaneInfoExtend>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::LaneInfoExtend>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_INFO_EXTEND__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/planning_parking_debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vehicle_preiew_polygon'
// Member 'obstacles_polygon'
#include "ros2_interface/msg/detail/polygon2_d__traits.hpp"
// Member 'path_points'
#include "ros2_interface/msg/detail/path_point__traits.hpp"
// Member 'obstacles_vec'
#include "ros2_interface/msg/detail/point2d_list__traits.hpp"
// Member 'warm_start_traj'
// Member 'smoothed_traj_stage1'
// Member 'smoothed_traj_stage2'
#include "ros2_interface/msg/detail/trajectory_point__traits.hpp"
// Member 'reference_line'
// Member 'trajectory_array'
// Member 'optimal_coarse_trajectory'
// Member 'optimal_smooth_trajectory'
#include "ros2_interface/msg/detail/trajectory__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningParkingDebug & msg,
  std::ostream & out)
{
  out << "{";
  // member: vehicle_preiew_polygon
  {
    if (msg.vehicle_preiew_polygon.size() == 0) {
      out << "vehicle_preiew_polygon: []";
    } else {
      out << "vehicle_preiew_polygon: [";
      size_t pending_items = msg.vehicle_preiew_polygon.size();
      for (auto item : msg.vehicle_preiew_polygon) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obstacles_polygon
  {
    if (msg.obstacles_polygon.size() == 0) {
      out << "obstacles_polygon: []";
    } else {
      out << "obstacles_polygon: [";
      size_t pending_items = msg.obstacles_polygon.size();
      for (auto item : msg.obstacles_polygon) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_points
  {
    if (msg.path_points.size() == 0) {
      out << "path_points: []";
    } else {
      out << "path_points: [";
      size_t pending_items = msg.path_points.size();
      for (auto item : msg.path_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lat_error
  {
    out << "lat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_error, out);
    out << ", ";
  }

  // member: lon_error
  {
    out << "lon_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_error, out);
    out << ", ";
  }

  // member: yaw_error
  {
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
    out << ", ";
  }

  // member: obstacles_vec
  {
    if (msg.obstacles_vec.size() == 0) {
      out << "obstacles_vec: []";
    } else {
      out << "obstacles_vec: [";
      size_t pending_items = msg.obstacles_vec.size();
      for (auto item : msg.obstacles_vec) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: warm_start_traj
  {
    if (msg.warm_start_traj.size() == 0) {
      out << "warm_start_traj: []";
    } else {
      out << "warm_start_traj: [";
      size_t pending_items = msg.warm_start_traj.size();
      for (auto item : msg.warm_start_traj) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: smoothed_traj_stage1
  {
    if (msg.smoothed_traj_stage1.size() == 0) {
      out << "smoothed_traj_stage1: []";
    } else {
      out << "smoothed_traj_stage1: [";
      size_t pending_items = msg.smoothed_traj_stage1.size();
      for (auto item : msg.smoothed_traj_stage1) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: smoothed_traj_stage2
  {
    if (msg.smoothed_traj_stage2.size() == 0) {
      out << "smoothed_traj_stage2: []";
    } else {
      out << "smoothed_traj_stage2: [";
      size_t pending_items = msg.smoothed_traj_stage2.size();
      for (auto item : msg.smoothed_traj_stage2) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reference_line
  {
    out << "reference_line: ";
    to_flow_style_yaml(msg.reference_line, out);
    out << ", ";
  }

  // member: trajectory_array
  {
    if (msg.trajectory_array.size() == 0) {
      out << "trajectory_array: []";
    } else {
      out << "trajectory_array: [";
      size_t pending_items = msg.trajectory_array.size();
      for (auto item : msg.trajectory_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: optimal_coarse_trajectory
  {
    out << "optimal_coarse_trajectory: ";
    to_flow_style_yaml(msg.optimal_coarse_trajectory, out);
    out << ", ";
  }

  // member: optimal_smooth_trajectory
  {
    out << "optimal_smooth_trajectory: ";
    to_flow_style_yaml(msg.optimal_smooth_trajectory, out);
    out << ", ";
  }

  // member: hybrid_a_star_map_time
  {
    out << "hybrid_a_star_map_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hybrid_a_star_map_time, out);
    out << ", ";
  }

  // member: hybrid_a_star_heuristic_time
  {
    out << "hybrid_a_star_heuristic_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hybrid_a_star_heuristic_time, out);
    out << ", ";
  }

  // member: hybrid_a_star_rs_time
  {
    out << "hybrid_a_star_rs_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hybrid_a_star_rs_time, out);
    out << ", ";
  }

  // member: hybrid_a_star_total_time
  {
    out << "hybrid_a_star_total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hybrid_a_star_total_time, out);
    out << ", ";
  }

  // member: ias_collision_avoidance_time
  {
    out << "ias_collision_avoidance_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ias_collision_avoidance_time, out);
    out << ", ";
  }

  // member: ias_path_smooth_time
  {
    out << "ias_path_smooth_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ias_path_smooth_time, out);
    out << ", ";
  }

  // member: ias_speed_smooth_time
  {
    out << "ias_speed_smooth_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ias_speed_smooth_time, out);
    out << ", ";
  }

  // member: ias_total_time
  {
    out << "ias_total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ias_total_time, out);
    out << ", ";
  }

  // member: samping_trajectory_time
  {
    out << "samping_trajectory_time: ";
    rosidl_generator_traits::value_to_yaml(msg.samping_trajectory_time, out);
    out << ", ";
  }

  // member: is_replan
  {
    out << "is_replan: ";
    rosidl_generator_traits::value_to_yaml(msg.is_replan, out);
    out << ", ";
  }

  // member: replan_reason
  {
    out << "replan_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_reason, out);
    out << ", ";
  }

  // member: replan_time
  {
    out << "replan_time: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_time, out);
    out << ", ";
  }

  // member: replan_num
  {
    out << "replan_num: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_num, out);
    out << ", ";
  }

  // member: optimizer_thread_counter
  {
    out << "optimizer_thread_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_thread_counter, out);
    out << ", ";
  }

  // member: replan_by_context_update_counter
  {
    out << "replan_by_context_update_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_by_context_update_counter, out);
    out << ", ";
  }

  // member: replan_by_large_error_counter
  {
    out << "replan_by_large_error_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_by_large_error_counter, out);
    out << ", ";
  }

  // member: parking_type
  {
    out << "parking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_type, out);
    out << ", ";
  }

  // member: moves_counter
  {
    out << "moves_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.moves_counter, out);
    out << ", ";
  }

  // member: remain_distance
  {
    out << "remain_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_distance, out);
    out << ", ";
  }

  // member: distance_to_leader_obj
  {
    out << "distance_to_leader_obj: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_leader_obj, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningParkingDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vehicle_preiew_polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicle_preiew_polygon.size() == 0) {
      out << "vehicle_preiew_polygon: []\n";
    } else {
      out << "vehicle_preiew_polygon:\n";
      for (auto item : msg.vehicle_preiew_polygon) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: obstacles_polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacles_polygon.size() == 0) {
      out << "obstacles_polygon: []\n";
    } else {
      out << "obstacles_polygon:\n";
      for (auto item : msg.obstacles_polygon) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: path_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_points.size() == 0) {
      out << "path_points: []\n";
    } else {
      out << "path_points:\n";
      for (auto item : msg.path_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lat_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_error, out);
    out << "\n";
  }

  // member: lon_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_error, out);
    out << "\n";
  }

  // member: yaw_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
    out << "\n";
  }

  // member: obstacles_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacles_vec.size() == 0) {
      out << "obstacles_vec: []\n";
    } else {
      out << "obstacles_vec:\n";
      for (auto item : msg.obstacles_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: warm_start_traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.warm_start_traj.size() == 0) {
      out << "warm_start_traj: []\n";
    } else {
      out << "warm_start_traj:\n";
      for (auto item : msg.warm_start_traj) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: smoothed_traj_stage1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.smoothed_traj_stage1.size() == 0) {
      out << "smoothed_traj_stage1: []\n";
    } else {
      out << "smoothed_traj_stage1:\n";
      for (auto item : msg.smoothed_traj_stage1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: smoothed_traj_stage2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.smoothed_traj_stage2.size() == 0) {
      out << "smoothed_traj_stage2: []\n";
    } else {
      out << "smoothed_traj_stage2:\n";
      for (auto item : msg.smoothed_traj_stage2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: reference_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_line:\n";
    to_block_style_yaml(msg.reference_line, out, indentation + 2);
  }

  // member: trajectory_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_array.size() == 0) {
      out << "trajectory_array: []\n";
    } else {
      out << "trajectory_array:\n";
      for (auto item : msg.trajectory_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: optimal_coarse_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimal_coarse_trajectory:\n";
    to_block_style_yaml(msg.optimal_coarse_trajectory, out, indentation + 2);
  }

  // member: optimal_smooth_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimal_smooth_trajectory:\n";
    to_block_style_yaml(msg.optimal_smooth_trajectory, out, indentation + 2);
  }

  // member: hybrid_a_star_map_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hybrid_a_star_map_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hybrid_a_star_map_time, out);
    out << "\n";
  }

  // member: hybrid_a_star_heuristic_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hybrid_a_star_heuristic_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hybrid_a_star_heuristic_time, out);
    out << "\n";
  }

  // member: hybrid_a_star_rs_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hybrid_a_star_rs_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hybrid_a_star_rs_time, out);
    out << "\n";
  }

  // member: hybrid_a_star_total_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hybrid_a_star_total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hybrid_a_star_total_time, out);
    out << "\n";
  }

  // member: ias_collision_avoidance_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ias_collision_avoidance_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ias_collision_avoidance_time, out);
    out << "\n";
  }

  // member: ias_path_smooth_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ias_path_smooth_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ias_path_smooth_time, out);
    out << "\n";
  }

  // member: ias_speed_smooth_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ias_speed_smooth_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ias_speed_smooth_time, out);
    out << "\n";
  }

  // member: ias_total_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ias_total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ias_total_time, out);
    out << "\n";
  }

  // member: samping_trajectory_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "samping_trajectory_time: ";
    rosidl_generator_traits::value_to_yaml(msg.samping_trajectory_time, out);
    out << "\n";
  }

  // member: is_replan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_replan: ";
    rosidl_generator_traits::value_to_yaml(msg.is_replan, out);
    out << "\n";
  }

  // member: replan_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_reason, out);
    out << "\n";
  }

  // member: replan_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_time: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_time, out);
    out << "\n";
  }

  // member: replan_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_num: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_num, out);
    out << "\n";
  }

  // member: optimizer_thread_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimizer_thread_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_thread_counter, out);
    out << "\n";
  }

  // member: replan_by_context_update_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_by_context_update_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_by_context_update_counter, out);
    out << "\n";
  }

  // member: replan_by_large_error_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_by_large_error_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_by_large_error_counter, out);
    out << "\n";
  }

  // member: parking_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_type, out);
    out << "\n";
  }

  // member: moves_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moves_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.moves_counter, out);
    out << "\n";
  }

  // member: remain_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_distance, out);
    out << "\n";
  }

  // member: distance_to_leader_obj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_leader_obj: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_leader_obj, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningParkingDebug & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::PlanningParkingDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::PlanningParkingDebug & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::PlanningParkingDebug>()
{
  return "ros2_interface::msg::PlanningParkingDebug";
}

template<>
inline const char * name<ros2_interface::msg::PlanningParkingDebug>()
{
  return "ros2_interface/msg/PlanningParkingDebug";
}

template<>
struct has_fixed_size<ros2_interface::msg::PlanningParkingDebug>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::PlanningParkingDebug>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::PlanningParkingDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__TRAITS_HPP_

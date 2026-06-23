// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicle_preiew_polygon'
// Member 'obstacles_polygon'
#include "ros2_interface/msg/detail/polygon2_d__struct.h"
// Member 'path_points'
#include "ros2_interface/msg/detail/path_point__struct.h"
// Member 'obstacles_vec'
#include "ros2_interface/msg/detail/point2d_list__struct.h"
// Member 'warm_start_traj'
// Member 'smoothed_traj_stage1'
// Member 'smoothed_traj_stage2'
#include "ros2_interface/msg/detail/trajectory_point__struct.h"
// Member 'reference_line'
// Member 'trajectory_array'
// Member 'optimal_coarse_trajectory'
// Member 'optimal_smooth_trajectory'
#include "ros2_interface/msg/detail/trajectory__struct.h"
// Member 'replan_reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PlanningParkingDebug in the package ros2_interface.
typedef struct ros2_interface__msg__PlanningParkingDebug
{
  /// 车辆预测多边形
  ros2_interface__msg__Polygon2D__Sequence vehicle_preiew_polygon;
  /// 障碍物多边形
  ros2_interface__msg__Polygon2D__Sequence obstacles_polygon;
  /// 轨迹点
  ros2_interface__msg__PathPoint__Sequence path_points;
  /// 横向误差
  double lat_error;
  /// 纵向误差
  double lon_error;
  /// 角度误差(度)
  double yaw_error;
  ros2_interface__msg__Point2dList__Sequence obstacles_vec;
  ros2_interface__msg__TrajectoryPoint__Sequence warm_start_traj;
  ros2_interface__msg__TrajectoryPoint__Sequence smoothed_traj_stage1;
  ros2_interface__msg__TrajectoryPoint__Sequence smoothed_traj_stage2;
  ros2_interface__msg__Trajectory reference_line;
  /// 轨迹簇
  ros2_interface__msg__Trajectory__Sequence trajectory_array;
  ros2_interface__msg__Trajectory optimal_coarse_trajectory;
  ros2_interface__msg__Trajectory optimal_smooth_trajectory;
  double hybrid_a_star_map_time;
  double hybrid_a_star_heuristic_time;
  double hybrid_a_star_rs_time;
  double hybrid_a_star_total_time;
  double ias_collision_avoidance_time;
  double ias_path_smooth_time;
  double ias_speed_smooth_time;
  double ias_total_time;
  double samping_trajectory_time;
  bool is_replan;
  rosidl_runtime_c__String replan_reason;
  double replan_time;
  int32_t replan_num;
  int32_t optimizer_thread_counter;
  int32_t replan_by_context_update_counter;
  int32_t replan_by_large_error_counter;
  int32_t parking_type;
  /// 揉库次数
  int32_t moves_counter;
  /// 剩余距离
  double remain_distance;
  /// 距离最近障碍物距离
  double distance_to_leader_obj;
  int32_t state;
} ros2_interface__msg__PlanningParkingDebug;

// Struct for a sequence of ros2_interface__msg__PlanningParkingDebug.
typedef struct ros2_interface__msg__PlanningParkingDebug__Sequence
{
  ros2_interface__msg__PlanningParkingDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PlanningParkingDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__STRUCT_H_

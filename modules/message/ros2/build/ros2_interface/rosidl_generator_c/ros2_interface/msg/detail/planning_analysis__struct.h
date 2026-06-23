// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PlanningAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'evaluator_time'
#include "ros2_interface/msg/detail/time_consume__struct.h"
// Member 'planning_parking_debug'
#include "ros2_interface/msg/detail/planning_parking_debug__struct.h"

/// Struct defined in msg/PlanningAnalysis in the package ros2_interface.
typedef struct ros2_interface__msg__PlanningAnalysis
{
  std_msgs__msg__Header header;
  /// frame update计算时间
  double frame_update_time;
  /// 轨迹生成 计算时间
  double generator_time;
  /// 轨迹评估计算时间
  ros2_interface__msg__TimeConsume__Sequence evaluator_time;
  /// 轨迹选择计算时间
  double selector_time;
  /// planning泊车调试消息
  ros2_interface__msg__PlanningParkingDebug planning_parking_debug;
  /// 车辆距离车道中心线的垂直距离
  double dis_to_center_line;
  /// 目标速度与规划速度之差
  double diff_to_velocity;
  /// 参考线曲率
  double referencline_kappa;
} ros2_interface__msg__PlanningAnalysis;

// Struct for a sequence of ros2_interface__msg__PlanningAnalysis.
typedef struct ros2_interface__msg__PlanningAnalysis__Sequence
{
  ros2_interface__msg__PlanningAnalysis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PlanningAnalysis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__STRUCT_H_

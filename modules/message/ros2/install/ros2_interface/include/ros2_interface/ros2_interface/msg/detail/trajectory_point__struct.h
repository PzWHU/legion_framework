// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path_point'
#include "ros2_interface/msg/detail/path_point__struct.h"

/// Struct defined in msg/TrajectoryPoint in the package ros2_interface.
typedef struct ros2_interface__msg__TrajectoryPoint
{
  /// path point
  ros2_interface__msg__PathPoint path_point;
  /// linear velocity
  double v;
  /// linear acceleration
  double a;
  /// relative time from beginning of the trajectory
  double relative_time;
  /// longitudinal jerk
  double da;
  /// 转向是否有效
  bool is_steer_valid;
  /// The angle between vehicle front wheel and vehicle longitudinal axis
  double front_steer;
  /// 后轮转角
  double rear_steer;
  /// 档位
  int32_t gear;
} ros2_interface__msg__TrajectoryPoint;

// Struct for a sequence of ros2_interface__msg__TrajectoryPoint.
typedef struct ros2_interface__msg__TrajectoryPoint__Sequence
{
  ros2_interface__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

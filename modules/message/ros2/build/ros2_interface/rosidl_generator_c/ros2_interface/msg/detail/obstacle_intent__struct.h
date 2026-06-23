// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ObstacleIntent.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTENT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ObstacleIntent in the package ros2_interface.
typedef struct ros2_interface__msg__ObstacleIntent
{
  /// 估计障碍物的意图        0-UNKNOWN, 1-STOP, 2-STATIONARY, 3-移动 MOVING, 4-HANGE_LANE, 5-LOW_ACCELERATION, 6-HIGH_ACCELERATION, 7-LOW_DECELERATION, 8-HIGH_DECELERATION,
  int32_t type;
} ros2_interface__msg__ObstacleIntent;

// Struct for a sequence of ros2_interface__msg__ObstacleIntent.
typedef struct ros2_interface__msg__ObstacleIntent__Sequence
{
  ros2_interface__msg__ObstacleIntent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ObstacleIntent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTENT__STRUCT_H_

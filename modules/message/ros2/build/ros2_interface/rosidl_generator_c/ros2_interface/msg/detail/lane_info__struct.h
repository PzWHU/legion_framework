// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_points'
#include "ros2_interface/msg/detail/lane_point__struct.h"

/// Struct defined in msg/LaneInfo in the package ros2_interface.
typedef struct ros2_interface__msg__LaneInfo
{
  /// 道路优先级：0（非推荐车道）1（推荐车道）
  int8_t priority;
  /// 道路全局id（从左至右，从0开始）
  int8_t global_id;
  /// 上一车道id
  int8_t predecessor_id;
  /// 下一车道id
  int8_t successor_id;
  /// 左边相邻车道id
  int8_t left_neighbor_id;
  /// 右边相邻车道id
  int8_t right_neighbor_id;
  /// 0：未知 1：左转道不可掉头 2：直行道 3：右转道 4：直行且可左转道 5：直行且可右转道 6：左转道且可掉头 7：不可左转仅可掉头
  int8_t type;
  /// 道路参考线（z）
  ros2_interface__msg__LanePoint__Sequence lane_points;
} ros2_interface__msg__LaneInfo;

// Struct for a sequence of ros2_interface__msg__LaneInfo.
typedef struct ros2_interface__msg__LaneInfo__Sequence
{
  ros2_interface__msg__LaneInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__LaneInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_INFO__STRUCT_H_

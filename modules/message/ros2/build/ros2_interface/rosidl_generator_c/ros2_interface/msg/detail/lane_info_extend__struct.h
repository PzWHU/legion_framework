// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/LaneInfoExtend.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_INFO_EXTEND__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_INFO_EXTEND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'predecessor_ids'
// Member 'successor_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'lane_points'
#include "ros2_interface/msg/detail/lane_point__struct.h"

/// Struct defined in msg/LaneInfoExtend in the package ros2_interface.
typedef struct ros2_interface__msg__LaneInfoExtend
{
  /// 道路优先级
  int8_t priority;
  /// 道路全局id（从左至右，从0开始）
  int64_t global_id;
  /// 所有的前继车道id数组
  rosidl_runtime_c__int64__Sequence predecessor_ids;
  /// 所有的后续车道id数组
  rosidl_runtime_c__int64__Sequence successor_ids;
  /// 左边相邻车道id
  int64_t left_neighbor_id;
  /// 右边相邻车道id
  int64_t right_neighbor_id;
  /// 类型（预留）
  int8_t type;
  /// 道路参考线（z）
  ros2_interface__msg__LanePoint__Sequence lane_points;
} ros2_interface__msg__LaneInfoExtend;

// Struct for a sequence of ros2_interface__msg__LaneInfoExtend.
typedef struct ros2_interface__msg__LaneInfoExtend__Sequence
{
  ros2_interface__msg__LaneInfoExtend * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__LaneInfoExtend__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_INFO_EXTEND__STRUCT_H_

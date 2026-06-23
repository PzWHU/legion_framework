// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Region.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__REGION__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__REGION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'region_polygon'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/Region in the package ros2_interface.
typedef struct ros2_interface__msg__Region
{
  /// 前后左右区域
  int32_t name_region;
  /// 车辆前后左右的区域打分获得的分值(0-100表示逐步危险程度)
  double score;
  /// 危险程度(0-3四级划分，不同分级对应不同驾驶处理策略)
  int32_t rank_risk;
  /// 世界坐标系下的区域多边形
  ros2_interface__msg__Point3D__Sequence region_polygon;
} ros2_interface__msg__Region;

// Struct for a sequence of ros2_interface__msg__Region.
typedef struct ros2_interface__msg__Region__Sequence
{
  ros2_interface__msg__Region * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Region__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__REGION__STRUCT_H_

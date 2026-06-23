// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/CurvatureInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CURVATURE_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__CURVATURE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CurvatureInfo in the package ros2_interface.
typedef struct ros2_interface__msg__CurvatureInfo
{
  /// 道路中心线上点位于该道路的位置（与道路起点的距离）
  double offset;
  /// 道路中心线上点的曲率值
  double value;
} ros2_interface__msg__CurvatureInfo;

// Struct for a sequence of ros2_interface__msg__CurvatureInfo.
typedef struct ros2_interface__msg__CurvatureInfo__Sequence
{
  ros2_interface__msg__CurvatureInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__CurvatureInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__CURVATURE_INFO__STRUCT_H_

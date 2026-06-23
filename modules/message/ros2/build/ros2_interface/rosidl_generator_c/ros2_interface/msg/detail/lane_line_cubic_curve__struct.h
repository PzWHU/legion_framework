// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/LaneLineCubicCurve.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LaneLineCubicCurve in the package ros2_interface.
typedef struct ros2_interface__msg__LaneLineCubicCurve
{
  /// 车道线起始位置
  double start_x;
  /// 车道线结束位置
  double end_x;
  /// 三次曲线系数
  double a;
  double b;
  double c;
  double d;
} ros2_interface__msg__LaneLineCubicCurve;

// Struct for a sequence of ros2_interface__msg__LaneLineCubicCurve.
typedef struct ros2_interface__msg__LaneLineCubicCurve__Sequence
{
  ros2_interface__msg__LaneLineCubicCurve * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__LaneLineCubicCurve__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__STRUCT_H_

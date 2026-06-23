// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/FrenetFramePoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FrenetFramePoint in the package ros2_interface.
typedef struct ros2_interface__msg__FrenetFramePoint
{
  /// 纵向位移
  double s;
  /// 横向位移
  double l;
  /// 横向位移变化率
  double dl;
  /// 横向位移变化率的变化率
  double ddl;
} ros2_interface__msg__FrenetFramePoint;

// Struct for a sequence of ros2_interface__msg__FrenetFramePoint.
typedef struct ros2_interface__msg__FrenetFramePoint__Sequence
{
  ros2_interface__msg__FrenetFramePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__FrenetFramePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__FRENET_FRAME_POINT__STRUCT_H_

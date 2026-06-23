// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ImageKeyPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__IMAGE_KEY_POINT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__IMAGE_KEY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ImageKeyPoint in the package ros2_interface.
typedef struct ros2_interface__msg__ImageKeyPoint
{
  /// 车位图像关键点x坐标
  double x;
  /// 车位图像关键点y坐标
  double y;
  /// 置信度
  double confidence;
} ros2_interface__msg__ImageKeyPoint;

// Struct for a sequence of ros2_interface__msg__ImageKeyPoint.
typedef struct ros2_interface__msg__ImageKeyPoint__Sequence
{
  ros2_interface__msg__ImageKeyPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ImageKeyPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__IMAGE_KEY_POINT__STRUCT_H_

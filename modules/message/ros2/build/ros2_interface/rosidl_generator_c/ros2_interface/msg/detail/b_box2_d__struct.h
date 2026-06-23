// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/BBox2D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__B_BOX2_D__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__B_BOX2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BBox2D in the package ros2_interface.
typedef struct ros2_interface__msg__BBox2D
{
  /// 图像框左上角的x坐标
  int16_t xmin;
  /// 图像框左上角的y坐标
  int16_t ymin;
  /// 图像框右下角的x坐标
  int16_t xmax;
  /// 图像框右下角的y坐标
  int16_t ymax;
} ros2_interface__msg__BBox2D;

// Struct for a sequence of ros2_interface__msg__BBox2D.
typedef struct ros2_interface__msg__BBox2D__Sequence
{
  ros2_interface__msg__BBox2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__BBox2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__B_BOX2_D__STRUCT_H_

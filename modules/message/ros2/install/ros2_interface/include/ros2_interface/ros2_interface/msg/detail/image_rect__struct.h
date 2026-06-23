// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ImageRect.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__IMAGE_RECT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__IMAGE_RECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ImageRect in the package ros2_interface.
typedef struct ros2_interface__msg__ImageRect
{
  /// coordinate x of left-top point of image rect
  int32_t x;
  /// coordinate y of left-top point of image rect
  int32_t y;
  /// width of image rect
  int32_t width;
  /// height of image rect
  int32_t height;
} ros2_interface__msg__ImageRect;

// Struct for a sequence of ros2_interface__msg__ImageRect.
typedef struct ros2_interface__msg__ImageRect__Sequence
{
  ros2_interface__msg__ImageRect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ImageRect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__IMAGE_RECT__STRUCT_H_

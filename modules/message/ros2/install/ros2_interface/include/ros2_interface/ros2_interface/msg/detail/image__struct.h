// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__IMAGE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'encoding'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Image in the package ros2_interface.
typedef struct ros2_interface__msg__Image
{
  /// 消息头
  std_msgs__msg__Header header;
  /// image height, that is, number of rows
  uint32_t height;
  /// image width, that is, number of columns
  uint32_t width;
  /// 图像编码方式
  rosidl_runtime_c__String encoding;
  /// is this data bigendian?
  uint8_t is_bigendian;
  /// Full row length in bytes
  uint32_t step;
  /// actual matrix data, size is (step * rows)
  rosidl_runtime_c__uint8__Sequence data;
} ros2_interface__msg__Image;

// Struct for a sequence of ros2_interface__msg__Image.
typedef struct ros2_interface__msg__Image__Sequence
{
  ros2_interface__msg__Image * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Image__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__IMAGE__STRUCT_H_

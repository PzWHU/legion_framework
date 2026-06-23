// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMPRESSED_IMAGE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__COMPRESSED_IMAGE__STRUCT_H_

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
// Member 'frame_id'
// Member 'format'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CompressedImage in the package ros2_interface.
typedef struct ros2_interface__msg__CompressedImage
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 图像帧id
  rosidl_runtime_c__String frame_id;
  /// Specifies the format of the data Acceptable values: jpeg, png
  rosidl_runtime_c__String format;
  /// Compressed image buffer
  rosidl_runtime_c__int8__Sequence data;
  /// 测量时间
  double measurement_time;
  /// 图像帧类型
  uint32_t frame_type;
} ros2_interface__msg__CompressedImage;

// Struct for a sequence of ros2_interface__msg__CompressedImage.
typedef struct ros2_interface__msg__CompressedImage__Sequence
{
  ros2_interface__msg__CompressedImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__CompressedImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMPRESSED_IMAGE__STRUCT_H_

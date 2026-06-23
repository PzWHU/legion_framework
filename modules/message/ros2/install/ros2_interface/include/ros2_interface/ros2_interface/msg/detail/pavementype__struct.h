// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Pavementype.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PAVEMENTYPE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PAVEMENTYPE__STRUCT_H_

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

/// Struct defined in msg/Pavementype in the package ros2_interface.
typedef struct ros2_interface__msg__Pavementype
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 0-沥青 1-水泥 2-雪地 3-草地 4-泥地 5-沙地
  int32_t type;
  /// 置信度
  double confidence;
} ros2_interface__msg__Pavementype;

// Struct for a sequence of ros2_interface__msg__Pavementype.
typedef struct ros2_interface__msg__Pavementype__Sequence
{
  ros2_interface__msg__Pavementype * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Pavementype__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PAVEMENTYPE__STRUCT_H_

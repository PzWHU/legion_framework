// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Stories.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STORIES__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__STORIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'note'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Stories in the package ros2_interface.
typedef struct ros2_interface__msg__Stories
{
  rosidl_runtime_c__String note;
} ros2_interface__msg__Stories;

// Struct for a sequence of ros2_interface__msg__Stories.
typedef struct ros2_interface__msg__Stories__Sequence
{
  ros2_interface__msg__Stories * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Stories__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__STORIES__STRUCT_H_

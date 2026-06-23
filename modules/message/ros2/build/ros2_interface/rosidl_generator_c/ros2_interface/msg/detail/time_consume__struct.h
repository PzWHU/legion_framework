// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TimeConsume.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TIME_CONSUME__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TIME_CONSUME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TimeConsume in the package ros2_interface.
typedef struct ros2_interface__msg__TimeConsume
{
  rosidl_runtime_c__String name;
  double time_consume;
} ros2_interface__msg__TimeConsume;

// Struct for a sequence of ros2_interface__msg__TimeConsume.
typedef struct ros2_interface__msg__TimeConsume__Sequence
{
  ros2_interface__msg__TimeConsume * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TimeConsume__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TIME_CONSUME__STRUCT_H_

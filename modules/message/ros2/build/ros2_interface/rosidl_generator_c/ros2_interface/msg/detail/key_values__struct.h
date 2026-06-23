// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/KeyValues.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__KEY_VALUES__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__KEY_VALUES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyValues in the package ros2_interface.
typedef struct ros2_interface__msg__KeyValues
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} ros2_interface__msg__KeyValues;

// Struct for a sequence of ros2_interface__msg__KeyValues.
typedef struct ros2_interface__msg__KeyValues__Sequence
{
  ros2_interface__msg__KeyValues * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__KeyValues__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__KEY_VALUES__STRUCT_H_

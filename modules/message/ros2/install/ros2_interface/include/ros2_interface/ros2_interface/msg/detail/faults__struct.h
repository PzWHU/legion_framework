// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Faults.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FAULTS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__FAULTS__STRUCT_H_

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
// Member 'version'
#include "rosidl_runtime_c/string.h"
// Member 'faults'
#include "ros2_interface/msg/detail/fault__struct.h"

/// Struct defined in msg/Faults in the package ros2_interface.
typedef struct ros2_interface__msg__Faults
{
  std_msgs__msg__Header header;
  /// obu的id身份
  int32_t id;
  /// 版本号
  rosidl_runtime_c__String version;
  ros2_interface__msg__Fault__Sequence faults;
} ros2_interface__msg__Faults;

// Struct for a sequence of ros2_interface__msg__Faults.
typedef struct ros2_interface__msg__Faults__Sequence
{
  ros2_interface__msg__Faults * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Faults__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__FAULTS__STRUCT_H_

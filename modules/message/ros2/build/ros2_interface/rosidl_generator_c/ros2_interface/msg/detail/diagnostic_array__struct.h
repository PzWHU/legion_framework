// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_ARRAY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_ARRAY__STRUCT_H_

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
// Member 'status'
#include "ros2_interface/msg/detail/diagnostic_status__struct.h"

/// Struct defined in msg/DiagnosticArray in the package ros2_interface.
typedef struct ros2_interface__msg__DiagnosticArray
{
  /// timestamp is  included in header
  std_msgs__msg__Header header;
  /// 诊断状态
  ros2_interface__msg__DiagnosticStatus__Sequence status;
} ros2_interface__msg__DiagnosticArray;

// Struct for a sequence of ros2_interface__msg__DiagnosticArray.
typedef struct ros2_interface__msg__DiagnosticArray__Sequence
{
  ros2_interface__msg__DiagnosticArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__DiagnosticArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_ARRAY__STRUCT_H_

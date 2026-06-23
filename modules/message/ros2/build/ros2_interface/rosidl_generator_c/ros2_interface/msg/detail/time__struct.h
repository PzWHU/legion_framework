// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TIME__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Time in the package ros2_interface.
typedef struct ros2_interface__msg__Time
{
  /// 秒
  uint32_t sec;
  /// 纳秒
  uint32_t nsec;
} ros2_interface__msg__Time;

// Struct for a sequence of ros2_interface__msg__Time.
typedef struct ros2_interface__msg__Time__Sequence
{
  ros2_interface__msg__Time * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Time__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TIME__STRUCT_H_

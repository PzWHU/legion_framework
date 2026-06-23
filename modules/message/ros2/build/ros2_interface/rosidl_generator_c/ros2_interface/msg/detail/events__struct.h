// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Events.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__EVENTS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__EVENTS__STRUCT_H_

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
// Member 'events'
#include "ros2_interface/msg/detail/event__struct.h"

/// Struct defined in msg/Events in the package ros2_interface.
typedef struct ros2_interface__msg__Events
{
  std_msgs__msg__Header header;
  /// 软件模块版本号
  int32_t version;
  /// 时间集
  ros2_interface__msg__Event__Sequence events;
} ros2_interface__msg__Events;

// Struct for a sequence of ros2_interface__msg__Events.
typedef struct ros2_interface__msg__Events__Sequence
{
  ros2_interface__msg__Events * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Events__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__EVENTS__STRUCT_H_

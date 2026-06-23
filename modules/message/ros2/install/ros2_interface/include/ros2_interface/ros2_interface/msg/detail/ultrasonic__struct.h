// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC__STRUCT_H_

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
// Member 'ranges'
#include "ros2_interface/msg/detail/ultrasonic_obstacle__struct.h"

/// Struct defined in msg/Ultrasonic in the package ros2_interface.
typedef struct ros2_interface__msg__Ultrasonic
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 超声波障碍物数组
  ros2_interface__msg__UltrasonicObstacle__Sequence ranges;
} ros2_interface__msg__Ultrasonic;

// Struct for a sequence of ros2_interface__msg__Ultrasonic.
typedef struct ros2_interface__msg__Ultrasonic__Sequence
{
  ros2_interface__msg__Ultrasonic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Ultrasonic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC__STRUCT_H_

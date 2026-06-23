// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/DrivableRegion.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__DRIVABLE_REGION__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__DRIVABLE_REGION__STRUCT_H_

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
// Member 'drivable_region'
#include "ros2_interface/msg/detail/polygon3_d__struct.h"

/// Struct defined in msg/DrivableRegion in the package ros2_interface.
typedef struct ros2_interface__msg__DrivableRegion
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 可行驶区域
  ros2_interface__msg__Polygon3D__Sequence drivable_region;
} ros2_interface__msg__DrivableRegion;

// Struct for a sequence of ros2_interface__msg__DrivableRegion.
typedef struct ros2_interface__msg__DrivableRegion__Sequence
{
  ros2_interface__msg__DrivableRegion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__DrivableRegion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__DRIVABLE_REGION__STRUCT_H_

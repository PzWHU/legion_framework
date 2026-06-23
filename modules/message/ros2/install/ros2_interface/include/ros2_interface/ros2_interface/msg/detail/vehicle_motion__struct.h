// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/VehicleMotion.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION__STRUCT_H_

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
// Member 'vehicle_motion_point'
#include "ros2_interface/msg/detail/vehicle_motion_point__struct.h"

/// Struct defined in msg/VehicleMotion in the package ros2_interface.
typedef struct ros2_interface__msg__VehicleMotion
{
  /// 名称
  rosidl_runtime_c__String name;
  ros2_interface__msg__VehicleMotionPoint__Sequence vehicle_motion_point;
} ros2_interface__msg__VehicleMotion;

// Struct for a sequence of ros2_interface__msg__VehicleMotion.
typedef struct ros2_interface__msg__VehicleMotion__Sequence
{
  ros2_interface__msg__VehicleMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__VehicleMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION__STRUCT_H_

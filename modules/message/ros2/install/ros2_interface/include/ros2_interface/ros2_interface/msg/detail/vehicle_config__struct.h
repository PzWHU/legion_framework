// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/VehicleConfig.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_CONFIG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_CONFIG__STRUCT_H_

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
// Member 'vehicle_param'
#include "ros2_interface/msg/detail/vehicle_param__struct.h"

/// Struct defined in msg/VehicleConfig in the package ros2_interface.
typedef struct ros2_interface__msg__VehicleConfig
{
  std_msgs__msg__Header header;
  /// 车辆参数表
  ros2_interface__msg__VehicleParam vehicle_param;
} ros2_interface__msg__VehicleConfig;

// Struct for a sequence of ros2_interface__msg__VehicleConfig.
typedef struct ros2_interface__msg__VehicleConfig__Sequence
{
  ros2_interface__msg__VehicleConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__VehicleConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_CONFIG__STRUCT_H_

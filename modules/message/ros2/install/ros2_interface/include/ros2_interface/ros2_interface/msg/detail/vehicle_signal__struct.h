// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/VehicleSignal.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleSignal in the package ros2_interface.
typedef struct ros2_interface__msg__VehicleSignal
{
  /// 转向信号
  int32_t turn_signal;
  /// high beam
  bool high_beam;
  /// low beam
  bool low_beam;
  /// horn
  bool horn;
  /// emergency light
  bool emergency_light;
} ros2_interface__msg__VehicleSignal;

// Struct for a sequence of ros2_interface__msg__VehicleSignal.
typedef struct ros2_interface__msg__VehicleSignal__Sequence
{
  ros2_interface__msg__VehicleSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__VehicleSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_H_

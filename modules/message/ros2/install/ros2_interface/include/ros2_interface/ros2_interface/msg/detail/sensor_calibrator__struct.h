// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/SensorCalibrator.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
// Member 'angle'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/SensorCalibrator in the package ros2_interface.
typedef struct ros2_interface__msg__SensorCalibrator
{
  /// 传感器安装位置(相对于后轴中心点)
  ros2_interface__msg__Point3D pose;
  /// 传感器安装角度(车体坐标系)
  ros2_interface__msg__Point3D angle;
} ros2_interface__msg__SensorCalibrator;

// Struct for a sequence of ros2_interface__msg__SensorCalibrator.
typedef struct ros2_interface__msg__SensorCalibrator__Sequence
{
  ros2_interface__msg__SensorCalibrator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__SensorCalibrator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__STRUCT_H_

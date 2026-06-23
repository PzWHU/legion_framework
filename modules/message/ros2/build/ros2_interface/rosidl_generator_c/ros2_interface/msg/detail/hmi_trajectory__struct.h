// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/HMITrajectory.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_TRAJECTORY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_TRAJECTORY__STRUCT_H_

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
// Member 'trajectory_points'
#include "ros2_interface/msg/detail/hmi_trajectory_point__struct.h"

/// Struct defined in msg/HMITrajectory in the package ros2_interface.
typedef struct ros2_interface__msg__HMITrajectory
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 抽稀用来显示的轨迹点数组
  ros2_interface__msg__HMITrajectoryPoint__Sequence trajectory_points;
} ros2_interface__msg__HMITrajectory;

// Struct for a sequence of ros2_interface__msg__HMITrajectory.
typedef struct ros2_interface__msg__HMITrajectory__Sequence
{
  ros2_interface__msg__HMITrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__HMITrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_TRAJECTORY__STRUCT_H_

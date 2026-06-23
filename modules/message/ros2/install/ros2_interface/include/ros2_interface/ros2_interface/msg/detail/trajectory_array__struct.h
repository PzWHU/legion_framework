// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_H_

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
// Member 'spline_s'
// Member 'qp_smooth'
#include "ros2_interface/msg/detail/path__struct.h"
// Member 'trajectory_list'
#include "ros2_interface/msg/detail/trajectory__struct.h"

/// Struct defined in msg/TrajectoryArray in the package ros2_interface.
typedef struct ros2_interface__msg__TrajectoryArray
{
  std_msgs__msg__Header header;
  /// 样条拟合曲线
  ros2_interface__msg__Path__Sequence spline_s;
  /// qp参考线拟合
  ros2_interface__msg__Path__Sequence qp_smooth;
  /// 轨迹簇
  ros2_interface__msg__Trajectory__Sequence trajectory_list;
} ros2_interface__msg__TrajectoryArray;

// Struct for a sequence of ros2_interface__msg__TrajectoryArray.
typedef struct ros2_interface__msg__TrajectoryArray__Sequence
{
  ros2_interface__msg__TrajectoryArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrajectoryArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_H_

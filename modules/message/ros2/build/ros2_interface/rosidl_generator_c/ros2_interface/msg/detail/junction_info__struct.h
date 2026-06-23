// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/JunctionInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stop_line'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/JunctionInfo in the package ros2_interface.
typedef struct ros2_interface__msg__JunctionInfo
{
  int32_t id;
  /// 是否有效，无效就可能是清除了，或者已经过路口了
  int32_t light_flag;
  /// 信号灯颜色，绿灯可通行，false红灯不能通行
  int32_t light_color;
  /// 信号灯剩余时间
  double light_remain_time;
  /// 停车距离，停止线
  double distance_to_stop;
  /// 是否有效，无效就可能是清除了，或者已经过路口了
  int32_t direction_flag;
  /// 路口通行方向，0：无效、1：左、2：前、3：右
  int32_t direction;
  /// 距路口距离
  double distance_to_junction;
  /// 路口停止线
  ros2_interface__msg__Point3D__Sequence stop_line;
} ros2_interface__msg__JunctionInfo;

// Struct for a sequence of ros2_interface__msg__JunctionInfo.
typedef struct ros2_interface__msg__JunctionInfo__Sequence
{
  ros2_interface__msg__JunctionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__JunctionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__STRUCT_H_

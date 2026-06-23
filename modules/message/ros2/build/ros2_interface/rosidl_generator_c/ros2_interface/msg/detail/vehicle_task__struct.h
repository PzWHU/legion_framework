// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/VehicleTask.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__STRUCT_H_

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

/// Struct defined in msg/VehicleTask in the package ros2_interface.
typedef struct ros2_interface__msg__VehicleTask
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 清扫功能控制  0 关闭 1 开启
  int32_t clean_up_ctrl;
  /// 洒水功能控制  0 关闭 1 开启
  int32_t watering_ctrl;
  /// 加水开关控制  0 关闭 1 开启
  int32_t water_add_ctrl;
  /// 舱盖解锁开关控制 0 关闭 1 开启
  int32_t hatch_unlock_ctrl;
  /// 灯带开关控制 0 关闭 1 开启
  int32_t decorative_light_ctrl;
} ros2_interface__msg__VehicleTask;

// Struct for a sequence of ros2_interface__msg__VehicleTask.
typedef struct ros2_interface__msg__VehicleTask__Sequence
{
  ros2_interface__msg__VehicleTask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__VehicleTask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__STRUCT_H_

// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/NaviInfoMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__STRUCT_H_

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

/// Struct defined in msg/NaviInfoMsg in the package ros2_interface.
typedef struct ros2_interface__msg__NaviInfoMsg
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 道路类型0: 常规道路; 1: 路口；
  uint32_t lane_type;
  /// 当前道路切面车道个数
  uint32_t lane_count;
  /// 当前车所在道路索引，最左侧为0
  uint32_t lane_index;
  /// 目标行驶车道索引，最左侧为0
  uint32_t lane_target;
  /// 地图限速，单位：米/秒
  float road_speed;
  /// 转弯建议速度，根据曲率计算，单位：米/秒
  float turning_speed;
  /// 转弯完成后，道路朝向，单位：角度
  float turning_deriction;
  /// 距离路口的距离，单位：米
  float distance_to_cross;
  /// 路口是否需要红绿灯停车
  bool traffic_light_stop;
  /// 路口决策行为：0: 直行; 1: 左转; 2: 右转; 3: 掉头
  uint32_t crossing_behavior;
  /// 全局剩余里程，单位：米
  float distance_to_stop;
} ros2_interface__msg__NaviInfoMsg;

// Struct for a sequence of ros2_interface__msg__NaviInfoMsg.
typedef struct ros2_interface__msg__NaviInfoMsg__Sequence
{
  ros2_interface__msg__NaviInfoMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__NaviInfoMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__STRUCT_H_

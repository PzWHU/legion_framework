// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RoutingResponse.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTING_RESPONSE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTING_RESPONSE__STRUCT_H_

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
// Member 'lane_list'
#include "ros2_interface/msg/detail/lane_info__struct.h"

/// Struct defined in msg/RoutingResponse in the package ros2_interface.
typedef struct ros2_interface__msg__RoutingResponse
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 规划结果状态
  int32_t plan_status;
  /// REPLAN_FLAG_NONE=0  //不需要重规划 REPLAN_FLAG_NAVI=1 //网络层重规划 REPLAN_FLAG_HUMAN=2 //人为重规划
  int32_t replan_flag;
  /// 规划原因 ROUTE_REASON_HMI = 0 //hmi上触发规划 ROUTE_REASON_PLATOON_HEADER = 1 //车队头车下发规划 ROUTE_REASON_PLATOON_OTHER = 2 //车队其他车辆下发规划
  int32_t route_reason;
  /// 分段路径规划结果
  ros2_interface__msg__LaneInfo__Sequence lane_list;
} ros2_interface__msg__RoutingResponse;

// Struct for a sequence of ros2_interface__msg__RoutingResponse.
typedef struct ros2_interface__msg__RoutingResponse__Sequence
{
  ros2_interface__msg__RoutingResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RoutingResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTING_RESPONSE__STRUCT_H_

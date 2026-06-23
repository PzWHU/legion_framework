// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RoutingRequest.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__STRUCT_H_

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
// Member 'request_source'
#include "rosidl_runtime_c/string.h"
// Member 'key_point_list'
#include "ros2_interface/msg/detail/key_point__struct.h"

/// Struct defined in msg/RoutingRequest in the package ros2_interface.
typedef struct ros2_interface__msg__RoutingRequest
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 发起请求的来源名称
  rosidl_runtime_c__String request_source;
  /// REQUEST_TYPE=0//无效 REQUEST_TYPE=1//正常路由 REQUEST_TYPE=2//泊车路由
  int8_t request_type;
  /// 关键点数量
  int16_t num_of_kp;
  /// 关键点列表，第一个为起点，最后一个为终点，中间为途经点
  ros2_interface__msg__KeyPoint__Sequence key_point_list;
} ros2_interface__msg__RoutingRequest;

// Struct for a sequence of ros2_interface__msg__RoutingRequest.
typedef struct ros2_interface__msg__RoutingRequest__Sequence
{
  ros2_interface__msg__RoutingRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RoutingRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTING_REQUEST__STRUCT_H_

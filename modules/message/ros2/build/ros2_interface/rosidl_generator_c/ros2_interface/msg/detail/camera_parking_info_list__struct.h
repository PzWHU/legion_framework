// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/CameraParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO_LIST__STRUCT_H_

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
// Member 'camera_parking'
#include "ros2_interface/msg/detail/camera_parking_info__struct.h"
// Member 'camera_parking_stoppers'
#include "ros2_interface/msg/detail/camera_parking_stopper__struct.h"

/// Struct defined in msg/CameraParkingInfoList in the package ros2_interface.
typedef struct ros2_interface__msg__CameraParkingInfoList
{
  /// 消息头，时间戳使用接收的图像的时间戳
  std_msgs__msg__Header header;
  /// 安装的传感器id(camera,lidar,radar) ' 相机id: 0-front_center相机 1-front_left相机 2-front_right相机 3-left_front相机 4-left_back右后相机 5-right_front相机 6-right_back相机 7-back相机'  8-相机融合
  int32_t sensor_id;
  /// 检测出的障碍物数组
  ros2_interface__msg__CameraParkingInfo__Sequence camera_parking;
  /// 检测出的限位器数组
  ros2_interface__msg__CameraParkingStopper__Sequence camera_parking_stoppers;
  /// 错误码（default = OK）
  int32_t error_code;
  /// 障碍物数据是否合法
  bool is_valid;
} ros2_interface__msg__CameraParkingInfoList;

// Struct for a sequence of ros2_interface__msg__CameraParkingInfoList.
typedef struct ros2_interface__msg__CameraParkingInfoList__Sequence
{
  ros2_interface__msg__CameraParkingInfoList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__CameraParkingInfoList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO_LIST__STRUCT_H_

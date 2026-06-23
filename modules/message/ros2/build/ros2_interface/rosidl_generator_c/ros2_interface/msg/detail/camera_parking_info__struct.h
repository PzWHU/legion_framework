// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/CameraParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO__STRUCT_H_

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
// Member 'center_point_of_parking'
#include "ros2_interface/msg/detail/point3_d__struct.h"
// Member 'parking_points_in_image'
#include "ros2_interface/msg/detail/image_key_point__struct.h"

/// Struct defined in msg/CameraParkingInfo in the package ros2_interface.
typedef struct ros2_interface__msg__CameraParkingInfo
{
  /// timestamp is  included in header
  std_msgs__msg__Header header;
  /// 停车位id
  int32_t parking_space_id;
  /// PARKING_TYPE=0//无效泊车 PARKING_TYPE=1//垂直泊车 PARKING_TYPE=2//水平泊车 PARKING_TYPE=3//倾斜泊车
  int32_t parking_type;
  /// PARKING_ENABLE=0//不可泊入 PARKING_ENABLE=1//可泊入
  bool is_parking_enable;
  /// 停车位置信度
  double confidence;
  /// 车辆坐标系的停车位中心点
  ros2_interface__msg__Point3D center_point_of_parking;
  /// 车辆坐标系下停车位的朝向
  double theta;
  /// 停车位宽
  double width;
  /// 停车位长
  double length;
  /// 停车位角度偏移量（倾斜车位），倾斜车位与道路边线夹角
  double yaw_offset;
  /// 图像坐标系下停车位关键点，顺时针方向
  ros2_interface__msg__ImageKeyPoint__Sequence parking_points_in_image;
} ros2_interface__msg__CameraParkingInfo;

// Struct for a sequence of ros2_interface__msg__CameraParkingInfo.
typedef struct ros2_interface__msg__CameraParkingInfo__Sequence
{
  ros2_interface__msg__CameraParkingInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__CameraParkingInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO__STRUCT_H_

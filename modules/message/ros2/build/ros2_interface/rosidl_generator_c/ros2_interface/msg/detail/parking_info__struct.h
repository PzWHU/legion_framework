// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__STRUCT_H_

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
// Member 'polygon'
#include "ros2_interface/msg/detail/polygon3_d__struct.h"
// Member 'parking_stoppers'
#include "ros2_interface/msg/detail/parking_stopper__struct.h"

/// Struct defined in msg/ParkingInfo in the package ros2_interface.
typedef struct ros2_interface__msg__ParkingInfo
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 停车位id
  int32_t parking_space_id;
  /// PARKING_TYPE=0//无效泊车 PARKING_TYPE=1//水平泊车 PARKING_TYPE=2//垂直泊车 PARKING_TYPE=3//倾斜泊车
  int32_t parking_type;
  /// PARKING_ENABLE=0//可泊 PARKING_DISENABLE=1//不可泊 PARKING_NONOPTIONAL=2//不可选
  int32_t parking_status;
  /// 车位置信度
  double confidence;
  /// 世界坐标系下停车位中心点
  ros2_interface__msg__Point3D center_point_of_parking;
  /// 世界坐标系下的夹角（单位rad），车位出口与正东方向夹角
  double theta;
  /// 停车位宽（单位m）
  double width;
  /// 停车位长单位m）
  double length;
  /// 停车位角度偏移量（倾斜车位），倾斜车位与道路边线夹角,(单位m）
  double yaw_offset;
  /// 世界坐标系下的车位多边形
  ros2_interface__msg__Polygon3D polygon;
  /// 车位数据来自相机id 0-front_center相机 1-front_left相机 2-front_right相机 3-left_front相机 4-left_back右后相机 5-right_front相机 6-right_back相机 7-back相机 8-相机融合
  int32_t sensor_id;
  /// 车道宽度是否有效
  bool is_lane_width_valid;
  /// 泊车可用(双)车道宽度
  double lane_width;
  /// 车位内部的限位器数组
  ros2_interface__msg__ParkingStopper__Sequence parking_stoppers;
  /// DIR_INVALID = 0,   LEFT = 1,   UP = 2,   RIGHT = 3,   DOWN = 4,
  int32_t parking_direction_type;
  /// 0-unknown 未知，1-empty 空闲，2-occupied 被占用
  int32_t left_occupied_status;
  /// 0-unknown 未知，1-empty 空闲，2-occupied 被占用
  int32_t right_occupied_status;
  /// 0-线车位， 1-空间车位， 2-融合车位
  int32_t parking_source_type;
} ros2_interface__msg__ParkingInfo;

// Struct for a sequence of ros2_interface__msg__ParkingInfo.
typedef struct ros2_interface__msg__ParkingInfo__Sequence
{
  ros2_interface__msg__ParkingInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ParkingInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__STRUCT_H_

// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/HMIObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center_pos_vehicle'
// Member 'center_pos_abs'
// Member 'points'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/HMIObstacle in the package ros2_interface.
typedef struct ros2_interface__msg__HMIObstacle
{
  /// 障碍物id
  int32_t id;
  /// 车辆坐标系下障碍物的中心位置
  ros2_interface__msg__Point3D center_pos_vehicle;
  /// 世界坐标系下障碍物的中心位置
  ros2_interface__msg__Point3D center_pos_abs;
  /// 车辆坐标系下障碍物的朝向
  double theta_vehicle;
  /// 世界坐标系下障碍物的朝向
  double theta_abs;
  /// 障碍物长度
  double length;
  /// 障碍物宽度
  double width;
  /// 障碍物高度
  double height;
  /// 障碍物类别： UNKNOWN = 0; UNKNOWN_MOVABLE = 1; UNKNOWN_UNMOVABLE = 2; PEDESTRIAN = 3; BICYCLE = 4; VEHICLE = 5;
  int32_t type;
  /// 障碍物类别置信度
  double confidence;
  /// 障碍物置信度类别： CONFIDENCE_UNKNOWN = 0; CONFIDENCE_CNN = 1; CONFIDENCE_RADAR = 2;
  int32_t confidence_type;
  /// 障碍物类别： ST_UNKNOWN = 0; ST_UNKNOWN_MOVABLE = 1; ST_UNKNOWN_UNMOVABLE = 2; ST_CAR = 3; ST_VAN = 4; ST_TRUCK = 5; ST_BUS = 6; ST_CYCLIST = 7; ST_MOTORCYCLIST = 8; ST_TRICYCLIST = 9; ST_PEDESTRIAN = 10; ST_TRAFFICCONE = 11; ST_PILLAR = 12; ST_SPEED_BUMP = 13;
  int32_t sub_type;
  ros2_interface__msg__Point3D__Sequence points;
  /// 障碍物状态标志（0-CIPV 1-CIPS 2-LPIHP 3-RPIHP 4-NONE）
  uint8_t cipv_flag;
  int32_t fusion_type;
} ros2_interface__msg__HMIObstacle;

// Struct for a sequence of ros2_interface__msg__HMIObstacle.
typedef struct ros2_interface__msg__HMIObstacle__Sequence
{
  ros2_interface__msg__HMIObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__HMIObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__STRUCT_H_

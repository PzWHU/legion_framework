// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Gnss.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GNSS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__GNSS__STRUCT_H_

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
// Member 'utm_position'
// Member 'attitude'
// Member 'sd_position'
// Member 'sd_velocity'
// Member 'sd_attitude'
// Member 'linear_velocity'
// Member 'attitude_dual'
// Member 'sd_angle_dual'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/Gnss in the package ros2_interface.
typedef struct ros2_interface__msg__Gnss
{
  /// 数据有效性标志位
  bool is_valid;
  /// 头部信息
  std_msgs__msg__Header header;
  /// 纬度信息
  double latitude;
  /// 经度信息
  double longitude;
  /// 海拔信息
  double elevation;
  /// UTM坐标位置
  ros2_interface__msg__Point3D utm_position;
  /// UTM区号
  int32_t utm_zone_num;
  /// UTM区号
  uint8_t utm_zone_char;
  /// 三轴姿态
  ros2_interface__msg__Point3D attitude;
  /// 位置标准差
  ros2_interface__msg__Point3D sd_position;
  /// 速度标准差
  ros2_interface__msg__Point3D sd_velocity;
  /// 姿态标准差
  ros2_interface__msg__Point3D sd_attitude;
  /// 时间
  double second;
  /// 使用卫星数
  int32_t sat_use_num;
  /// 可见卫星数
  int32_t sat_in_view_num;
  /// 求解状态
  uint16_t solution_status;
  /// 定位状态
  uint16_t position_type;
  /// 线速度信息
  ros2_interface__msg__Point3D linear_velocity;
  /// 双天线姿态
  ros2_interface__msg__Point3D attitude_dual;
  /// 双天线角度标准差
  ros2_interface__msg__Point3D sd_angle_dual;
  /// 双天线距离
  double base_line_length_dual;
  /// 双天线求解状态
  int32_t solution_status_dual;
  /// 双天线定位状态
  int32_t position_type_dual;
  /// 双天线求解源
  int32_t solution_source_dual;
  /// cep68数据位
  double cep68;
  /// cep95数据位
  double cep95;
  /// pDop数据位
  double p_dop;
  /// hDop数据位
  double h_dop;
  /// vDop数据位
  double v_dop;
} ros2_interface__msg__Gnss;

// Struct for a sequence of ros2_interface__msg__Gnss.
typedef struct ros2_interface__msg__Gnss__Sequence
{
  ros2_interface__msg__Gnss * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Gnss__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__GNSS__STRUCT_H_

// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOCATION__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LOCATION__STRUCT_H_

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
// Member 'position'
#include "ros2_interface/msg/detail/point_llh__struct.h"
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'position_std_dev'
// Member 'orientation_std_dev'
// Member 'linear_velocity_std_dev'
// Member 'linear_acceleration_std_dev'
// Member 'angular_velocity_std_dev'
#include "ros2_interface/msg/detail/point3_d__struct.h"
// Member 'utm_position'
// Member 'utm_position_next'
#include "ros2_interface/msg/detail/point_enu__struct.h"

/// Struct defined in msg/Location in the package ros2_interface.
typedef struct ros2_interface__msg__Location
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 经纬度高程
  ros2_interface__msg__PointLLH position;
  /// 方向(单位弧度，-π～π,正东:0, 逆时针。都满足右手定则)
  double pitch;
  double roll;
  double heading;
  /// 线速度（m/s，北东地坐标系）
  ros2_interface__msg__Point3D linear_velocity;
  /// 线加速度（m/s2，前右下坐标系）
  ros2_interface__msg__Point3D linear_acceleration;
  /// 角速度（度/s，前右下，满足右手定则）
  ros2_interface__msg__Point3D angular_velocity;
  /// RTK标志值
  int32_t rtk_flag;
  /// 融合标志:0-(纯ins) 1-(纯轮速) 2-(泊车递推) 3-(无) 4-(orb匹配定位)
  int32_t odom_type;
  /// 辅助方式:0-NULL(无辅助方式) 1-laneliine_map(车道线/标识牌)2-feature_map(lidar)3-feature_map(lidar_camera)
  int32_t auxiliary_type;
  /// Location有效性标志位0: invalid； 1: valid
  int32_t location_valid_flag;
  /// 参考点纬度 GCJ-02格式
  double origin_lat;
  /// 参考点经度 GCJ-02格式
  double origin_lon;
  /// 相对参考点xyz坐标
  ros2_interface__msg__PointENU utm_position;
  /// 0::无坐标系切换 1:坐标系切换成功2:坐标系切换中3:坐标系切换故障
  int32_t change_origin_flag;
  /// 相对参考点坐标(切换状态下，为新的原点坐标系下)
  ros2_interface__msg__PointENU utm_position_next;
  /// 位置标准差
  ros2_interface__msg__Point3D position_std_dev;
  /// 方向标准差
  ros2_interface__msg__Point3D orientation_std_dev;
  /// 速度标准差
  ros2_interface__msg__Point3D linear_velocity_std_dev;
  /// 加速度标准差
  ros2_interface__msg__Point3D linear_acceleration_std_dev;
  /// 角速度标准差
  ros2_interface__msg__Point3D angular_velocity_std_dev;
} ros2_interface__msg__Location;

// Struct for a sequence of ros2_interface__msg__Location.
typedef struct ros2_interface__msg__Location__Sequence
{
  ros2_interface__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOCATION__STRUCT_H_

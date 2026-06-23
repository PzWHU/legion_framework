// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ADCTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__STRUCT_H_

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
// Member 'trajectory_points'
#include "ros2_interface/msg/detail/trajectory_point__struct.h"
// Member 'estop'
#include "ros2_interface/msg/detail/e_stop__struct.h"
// Member 'replan_reason'
#include "rosidl_runtime_c/string.h"
// Member 'rss_info'
#include "ros2_interface/msg/detail/rss_info__struct.h"

/// Struct defined in msg/ADCTrajectory in the package ros2_interface.
typedef struct ros2_interface__msg__ADCTrajectory
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// unit meters(m)
  double total_path_length;
  /// unit seconds(s)
  double total_path_time;
  /// 规划轨迹点列
  ros2_interface__msg__TrajectoryPoint__Sequence trajectory_points;
  /// 车辆行为： CAR_ACTION_NONE=0  //无效值 CAR_ACTION_SINGLE=1 //单车 CAR_ACTION_PLATOON_HEAD=2 //车队头车 CAR_ACTION_PLATOON_OTHER=3 //车队其他车辆
  int32_t car_action;
  /// 自动驾驶状态（主要指横向状态）
  int32_t behaviour_lat_state;
  /// 自动驾驶状态（主要指纵向状态）
  int32_t behaviour_lon_state;
  /// 驾驶场景 0-UNKNOWN, 1-CRUISE, 2-CRUISE_URBAN 3-CRUISE_HIGHWAY, 2000-JUNCTION  2001-JUNCTION_TRAFFIC_LIGHT 2002-JUNCTION_STOP_SIGN
  int32_t scenario;
  /// 驾驶模式： 1：人工驾驶， 2：辅助驾驶， 3：自动驾驶
  int32_t driving_mode;
  /// 轨迹类型： TRAJECTORY_TYPE_ABSOLUTE=0 //绝对规划轨迹 TRAJECTORY_TYPE_RELATIVE=1 //相对规划轨迹 TRAJECTORY_TYPE_INVALID=2 //无效规划轨迹
  int32_t adc_trajectory_type;
  /// emergency stop
  ros2_interface__msg__EStop estop;
  /// is_replan == truemean replan triggered(default = false)
  bool is_replan;
  rosidl_runtime_c__String replan_reason;
  /// UNPROTECTED = 0;PROTECTED = 1;
  int32_t right_of_way_status;
  /// output related to RSS
  ros2_interface__msg__RSSInfo rss_info;
} ros2_interface__msg__ADCTrajectory;

// Struct for a sequence of ros2_interface__msg__ADCTrajectory.
typedef struct ros2_interface__msg__ADCTrajectory__Sequence
{
  ros2_interface__msg__ADCTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ADCTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__STRUCT_H_

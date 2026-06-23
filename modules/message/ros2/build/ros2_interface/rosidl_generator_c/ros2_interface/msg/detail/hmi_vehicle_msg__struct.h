// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/HMIVehicleMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__STRUCT_H_

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
// Member 'utm_position'
// Member 'mercator_position'
#include "ros2_interface/msg/detail/point_enu__struct.h"
// Member 'chassis_error_code'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/HMIVehicleMsg in the package ros2_interface.
typedef struct ros2_interface__msg__HMIVehicleMsg
{
  std_msgs__msg__Header header;
  /// 驾驶状态
  int32_t driving_mode;
  /// 档位值
  int32_t gear_location;
  /// 方向盘转角
  double steering_value;
  /// 线控驱动值（油门值）
  double accel_value;
  /// 线控制动值（刹车值）
  double brake_value;
  /// 车速（m/s）
  double speed_mps;
  /// 经纬度高程
  ros2_interface__msg__PointLLH position;
  /// 相对参考点xyz坐标
  ros2_interface__msg__PointENU utm_position;
  /// 方向(单位弧度，-π～π,正东:0, 逆时针。都满足右手定则)
  double pitch;
  double roll;
  double heading;
  /// RTK标志值
  int32_t rtk_flag;
  /// // 参考点纬度 GCJ-02格式
  double origin_lat;
  /// // 参考点经度 GCJ-02格式
  double origin_lon;
  double current_ins_yaw;
  /// //  安全驾驶0:正常 1:左前车门没关 2:右前车门没关 3:左后车门没关 4:右后车门没关 5:未系安全带 6: 未打开反观镜 7:车辆未静止
  int32_t auto_safe;
  /// 电池电量值
  double battery_power_percentage;
  /// 充电枪状态
  int32_t charging_gun_status;
  /// 底盘错误码
  rosidl_runtime_c__int32__Sequence chassis_error_code;
  /// 刹车灯状态
  int32_t brake_lamp_status;
  /// 转向灯状态
  int32_t turn_lamp_status;
  /// 转坐标系后的参考点
  ros2_interface__msg__PointENU mercator_position;
} ros2_interface__msg__HMIVehicleMsg;

// Struct for a sequence of ros2_interface__msg__HMIVehicleMsg.
typedef struct ros2_interface__msg__HMIVehicleMsg__Sequence
{
  ros2_interface__msg__HMIVehicleMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__HMIVehicleMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__STRUCT_H_

// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Vehicle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE__STRUCT_H_

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
// Member 'vid'
// Member 'vehicle_num'
// Member 'oid'
#include "rosidl_runtime_c/string.h"
// Member 'seats'
// Member 'seat_belt'
// Member 'battery_temperatures'
// Member 'door_status'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Vehicle in the package ros2_interface.
typedef struct ros2_interface__msg__Vehicle
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 车辆类型
  int32_t vehicle_type;
  /// 车辆 ID
  rosidl_runtime_c__String vid;
  /// 车牌号
  rosidl_runtime_c__String vehicle_num;
  /// OBU ID
  rosidl_runtime_c__String oid;
  /// 运行模式
  int32_t operation;
  /// 总电流， 单位： A  (0~20 000)
  double totalcurrent;
  /// 电池电量值（％）
  double batterysoc;
  /// 电池电压（单位：V）
  double totalvoltage;
  /// 续航里程，单位： Km
  double recharge;
  /// DC-DC 状态
  int32_t dcdc;
  /// 绝缘电阻，单位：kΩ(0~60 000)
  uint32_t resistance;
  /// 座椅状态数组： 0.未坐人， 1.坐人
  rosidl_runtime_c__uint8__Sequence seats;
  /// 车辆运营模式
  int32_t servicemode;
  /// 主驾驶位安全带状态
  rosidl_runtime_c__int32__Sequence seat_belt;
  /// 发动机状态
  int32_t engine_status;
  /// 电压 (V)
  double battery_voltage;
  /// 电流 (A)
  double battery_ammeter;
  /// 能耗 (W)
  double battery_consumption;
  /// 探针数
  double battery_probe;
  /// 温度数组，无则数组为空
  rosidl_runtime_c__double__Sequence battery_temperatures;
  /// 最高温度
  double battery_h_tepemperatures;
  /// 最低温度
  double battery_ltepemperatures;
  /// 最高温度探针代号
  double battery_probe_code;
  /// 最高浓度
  double battery_h_concentration;
  /// 最高浓度传感器代号
  double battery_c_sensor_code;
  /// 最高压力
  double battery_stress;
  /// 最高压力传感器代号
  double battery_s_sensor_code;
  /// 高压 DC/DC 状态
  double battery_h_dc_dc;
  /// 电池包额定容量(mAh )
  double battery_capacity;
  /// 电压 (V)
  double airconditioning_idx;
  /// 电流 (A)
  double airconditioning_status;
  /// 空调模式状态
  int32_t airconditioning_model;
  /// 风量状态
  int32_t airconditioning_volume;
  /// 除霜/除雾模式状态
  int32_t airconditioning_defrost;
  /// 车门状态
  rosidl_runtime_c__int32__Sequence door_status;
  /// 接收功率
  double rsrp;
  /// 信噪比
  double sinr;
  /// 上行速率，单位： Mbit/s
  double uspeed;
  /// 下行速率， 单位： Mbit/s
  double dspeed;
  /// 丢包率，单位：%
  double loss;
  /// 网络延时，单位： ms
  uint32_t delay;
  /// 序号
  uint8_t refrigeration_idx;
  /// 状态， 0.关， 1.开
  int32_t refrigeration_status;
  /// 设定温度
  double refrigeration_stemp;
  /// 实际温度
  double refrigeration_ctemp;
  /// 电机序号
  uint8_t driving_motor_idx;
  /// 电机状态： 0:异常； 1：正常
  uint8_t driving_motor_status;
  /// 控制器温度，单位：℃
  double driving_motor_ctemp;
  /// 转速 (r/min)
  uint8_t driving_motor_rspeed;
  /// 转矩 ( N.m)
  double driving_motor_torque;
  /// 电机温度 (℃)
  double driving_motor_etemp;
  /// 电压 (V)
  double driving_motor_voltage;
  /// 电流 (A)
  double driving_motor_ammeter;
  /// 示廊灯
  int32_t outline_lamp_status;
  /// 双闪灯状态
  int32_t warning_lamp_status;
  /// 照明灯状态
  int32_t backlight_lamp_status;
  /// 制动灯状态
  int32_t brakelamp_lamp_status;
  /// 左转向灯状态
  int32_t left_lamp_status;
  /// 右转向灯状态
  int32_t right_lamp_status;
  /// 前防撞条状态
  int32_t front_touch_status;
  /// 后防撞条状态
  int32_t rear_touch_status;
  /// 喇叭状态
  int32_t horn_status;
  /// 车长
  int8_t length;
  /// 车宽
  int8_t width;
  /// 车高
  int8_t height;
  /// 清扫功能开关状态
  int32_t cleanup_switch_status;
  /// 洒水功能开关状态
  int32_t watering_switch_status;
  /// 垃圾箱满状态指示
  int32_t trash_can_status;
  /// 水箱空状态指示
  int32_t water_tank_status;
  /// 加水开关状态指示
  int32_t water_add_switch_status;
  /// 舱盖解锁开关状态指示
  int32_t hatch_unlock_switch_status;
  /// 水箱液位状态
  double water_tank_level;
  /// HMI灯光指令
  int32_t hmi_highbeam;
  /// HMI清扫指令
  int32_t hmi_cleanup;
  /// HMI洒水指令
  int32_t hmi_watering;
  /// 充电状态
  int32_t bms_charge_status;
  /// 车辆急停按钮状态
  int32_t emergency_button_status;
  /// 牵引力控制系统作用状态  0-系统未装备或不可用 1-系统处于关闭状态 2-系统处于开启状态，但未触发3-系统被触发，处于作用状态
  int32_t traction;
  /// ABS作用状态 0-系统未装备或不可用  1-系统处于关闭状态 2-系统处于开启状态，但未触发 3-系统被触发，处于作用状态
  int32_t abs;
  /// 车身稳定控制系统作用状态  0-系统未装备或不可用 1-系统处于关闭状态 2-系统处于开启状态，但未触发3-系统被触发，处于作用状态
  int32_t scs;
  /// 刹车助力系统作用状态  0-系统未装备或不可用 1-系统处于关闭状态 2-系统处于开启状态，但未触发 3-系统被触发，处于作用状态
  int32_t brake_boost;
  /// 刹车辅助系统作用状态（通常为手刹）  0-未装备或不可用 1-系统处于关闭状态 2-系统处于开启状态，但未触发 3-保留
  int32_t aux_brakes;
} ros2_interface__msg__Vehicle;

// Struct for a sequence of ros2_interface__msg__Vehicle.
typedef struct ros2_interface__msg__Vehicle__Sequence
{
  ros2_interface__msg__Vehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Vehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE__STRUCT_H_

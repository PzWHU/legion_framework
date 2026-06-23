// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/Vehicle.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/vehicle__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace ros2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_serialize(
  const ros2_interface::msg::Vehicle & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: vehicle_type
  cdr << ros_message.vehicle_type;
  // Member: vid
  cdr << ros_message.vid;
  // Member: vehicle_num
  cdr << ros_message.vehicle_num;
  // Member: oid
  cdr << ros_message.oid;
  // Member: operation
  cdr << ros_message.operation;
  // Member: totalcurrent
  cdr << ros_message.totalcurrent;
  // Member: batterysoc
  cdr << ros_message.batterysoc;
  // Member: totalvoltage
  cdr << ros_message.totalvoltage;
  // Member: recharge
  cdr << ros_message.recharge;
  // Member: dcdc
  cdr << ros_message.dcdc;
  // Member: resistance
  cdr << ros_message.resistance;
  // Member: seats
  {
    cdr << ros_message.seats;
  }
  // Member: servicemode
  cdr << ros_message.servicemode;
  // Member: seat_belt
  {
    cdr << ros_message.seat_belt;
  }
  // Member: engine_status
  cdr << ros_message.engine_status;
  // Member: battery_voltage
  cdr << ros_message.battery_voltage;
  // Member: battery_ammeter
  cdr << ros_message.battery_ammeter;
  // Member: battery_consumption
  cdr << ros_message.battery_consumption;
  // Member: battery_probe
  cdr << ros_message.battery_probe;
  // Member: battery_temperatures
  {
    cdr << ros_message.battery_temperatures;
  }
  // Member: battery_h_tepemperatures
  cdr << ros_message.battery_h_tepemperatures;
  // Member: battery_ltepemperatures
  cdr << ros_message.battery_ltepemperatures;
  // Member: battery_probe_code
  cdr << ros_message.battery_probe_code;
  // Member: battery_h_concentration
  cdr << ros_message.battery_h_concentration;
  // Member: battery_c_sensor_code
  cdr << ros_message.battery_c_sensor_code;
  // Member: battery_stress
  cdr << ros_message.battery_stress;
  // Member: battery_s_sensor_code
  cdr << ros_message.battery_s_sensor_code;
  // Member: battery_h_dc_dc
  cdr << ros_message.battery_h_dc_dc;
  // Member: battery_capacity
  cdr << ros_message.battery_capacity;
  // Member: airconditioning_idx
  cdr << ros_message.airconditioning_idx;
  // Member: airconditioning_status
  cdr << ros_message.airconditioning_status;
  // Member: airconditioning_model
  cdr << ros_message.airconditioning_model;
  // Member: airconditioning_volume
  cdr << ros_message.airconditioning_volume;
  // Member: airconditioning_defrost
  cdr << ros_message.airconditioning_defrost;
  // Member: door_status
  {
    cdr << ros_message.door_status;
  }
  // Member: rsrp
  cdr << ros_message.rsrp;
  // Member: sinr
  cdr << ros_message.sinr;
  // Member: uspeed
  cdr << ros_message.uspeed;
  // Member: dspeed
  cdr << ros_message.dspeed;
  // Member: loss
  cdr << ros_message.loss;
  // Member: delay
  cdr << ros_message.delay;
  // Member: refrigeration_idx
  cdr << ros_message.refrigeration_idx;
  // Member: refrigeration_status
  cdr << ros_message.refrigeration_status;
  // Member: refrigeration_stemp
  cdr << ros_message.refrigeration_stemp;
  // Member: refrigeration_ctemp
  cdr << ros_message.refrigeration_ctemp;
  // Member: driving_motor_idx
  cdr << ros_message.driving_motor_idx;
  // Member: driving_motor_status
  cdr << ros_message.driving_motor_status;
  // Member: driving_motor_ctemp
  cdr << ros_message.driving_motor_ctemp;
  // Member: driving_motor_rspeed
  cdr << ros_message.driving_motor_rspeed;
  // Member: driving_motor_torque
  cdr << ros_message.driving_motor_torque;
  // Member: driving_motor_etemp
  cdr << ros_message.driving_motor_etemp;
  // Member: driving_motor_voltage
  cdr << ros_message.driving_motor_voltage;
  // Member: driving_motor_ammeter
  cdr << ros_message.driving_motor_ammeter;
  // Member: outline_lamp_status
  cdr << ros_message.outline_lamp_status;
  // Member: warning_lamp_status
  cdr << ros_message.warning_lamp_status;
  // Member: backlight_lamp_status
  cdr << ros_message.backlight_lamp_status;
  // Member: brakelamp_lamp_status
  cdr << ros_message.brakelamp_lamp_status;
  // Member: left_lamp_status
  cdr << ros_message.left_lamp_status;
  // Member: right_lamp_status
  cdr << ros_message.right_lamp_status;
  // Member: front_touch_status
  cdr << ros_message.front_touch_status;
  // Member: rear_touch_status
  cdr << ros_message.rear_touch_status;
  // Member: horn_status
  cdr << ros_message.horn_status;
  // Member: length
  cdr << ros_message.length;
  // Member: width
  cdr << ros_message.width;
  // Member: height
  cdr << ros_message.height;
  // Member: cleanup_switch_status
  cdr << ros_message.cleanup_switch_status;
  // Member: watering_switch_status
  cdr << ros_message.watering_switch_status;
  // Member: trash_can_status
  cdr << ros_message.trash_can_status;
  // Member: water_tank_status
  cdr << ros_message.water_tank_status;
  // Member: water_add_switch_status
  cdr << ros_message.water_add_switch_status;
  // Member: hatch_unlock_switch_status
  cdr << ros_message.hatch_unlock_switch_status;
  // Member: water_tank_level
  cdr << ros_message.water_tank_level;
  // Member: hmi_highbeam
  cdr << ros_message.hmi_highbeam;
  // Member: hmi_cleanup
  cdr << ros_message.hmi_cleanup;
  // Member: hmi_watering
  cdr << ros_message.hmi_watering;
  // Member: bms_charge_status
  cdr << ros_message.bms_charge_status;
  // Member: emergency_button_status
  cdr << ros_message.emergency_button_status;
  // Member: traction
  cdr << ros_message.traction;
  // Member: abs
  cdr << ros_message.abs;
  // Member: scs
  cdr << ros_message.scs;
  // Member: brake_boost
  cdr << ros_message.brake_boost;
  // Member: aux_brakes
  cdr << ros_message.aux_brakes;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::Vehicle & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: vehicle_type
  cdr >> ros_message.vehicle_type;

  // Member: vid
  cdr >> ros_message.vid;

  // Member: vehicle_num
  cdr >> ros_message.vehicle_num;

  // Member: oid
  cdr >> ros_message.oid;

  // Member: operation
  cdr >> ros_message.operation;

  // Member: totalcurrent
  cdr >> ros_message.totalcurrent;

  // Member: batterysoc
  cdr >> ros_message.batterysoc;

  // Member: totalvoltage
  cdr >> ros_message.totalvoltage;

  // Member: recharge
  cdr >> ros_message.recharge;

  // Member: dcdc
  cdr >> ros_message.dcdc;

  // Member: resistance
  cdr >> ros_message.resistance;

  // Member: seats
  {
    cdr >> ros_message.seats;
  }

  // Member: servicemode
  cdr >> ros_message.servicemode;

  // Member: seat_belt
  {
    cdr >> ros_message.seat_belt;
  }

  // Member: engine_status
  cdr >> ros_message.engine_status;

  // Member: battery_voltage
  cdr >> ros_message.battery_voltage;

  // Member: battery_ammeter
  cdr >> ros_message.battery_ammeter;

  // Member: battery_consumption
  cdr >> ros_message.battery_consumption;

  // Member: battery_probe
  cdr >> ros_message.battery_probe;

  // Member: battery_temperatures
  {
    cdr >> ros_message.battery_temperatures;
  }

  // Member: battery_h_tepemperatures
  cdr >> ros_message.battery_h_tepemperatures;

  // Member: battery_ltepemperatures
  cdr >> ros_message.battery_ltepemperatures;

  // Member: battery_probe_code
  cdr >> ros_message.battery_probe_code;

  // Member: battery_h_concentration
  cdr >> ros_message.battery_h_concentration;

  // Member: battery_c_sensor_code
  cdr >> ros_message.battery_c_sensor_code;

  // Member: battery_stress
  cdr >> ros_message.battery_stress;

  // Member: battery_s_sensor_code
  cdr >> ros_message.battery_s_sensor_code;

  // Member: battery_h_dc_dc
  cdr >> ros_message.battery_h_dc_dc;

  // Member: battery_capacity
  cdr >> ros_message.battery_capacity;

  // Member: airconditioning_idx
  cdr >> ros_message.airconditioning_idx;

  // Member: airconditioning_status
  cdr >> ros_message.airconditioning_status;

  // Member: airconditioning_model
  cdr >> ros_message.airconditioning_model;

  // Member: airconditioning_volume
  cdr >> ros_message.airconditioning_volume;

  // Member: airconditioning_defrost
  cdr >> ros_message.airconditioning_defrost;

  // Member: door_status
  {
    cdr >> ros_message.door_status;
  }

  // Member: rsrp
  cdr >> ros_message.rsrp;

  // Member: sinr
  cdr >> ros_message.sinr;

  // Member: uspeed
  cdr >> ros_message.uspeed;

  // Member: dspeed
  cdr >> ros_message.dspeed;

  // Member: loss
  cdr >> ros_message.loss;

  // Member: delay
  cdr >> ros_message.delay;

  // Member: refrigeration_idx
  cdr >> ros_message.refrigeration_idx;

  // Member: refrigeration_status
  cdr >> ros_message.refrigeration_status;

  // Member: refrigeration_stemp
  cdr >> ros_message.refrigeration_stemp;

  // Member: refrigeration_ctemp
  cdr >> ros_message.refrigeration_ctemp;

  // Member: driving_motor_idx
  cdr >> ros_message.driving_motor_idx;

  // Member: driving_motor_status
  cdr >> ros_message.driving_motor_status;

  // Member: driving_motor_ctemp
  cdr >> ros_message.driving_motor_ctemp;

  // Member: driving_motor_rspeed
  cdr >> ros_message.driving_motor_rspeed;

  // Member: driving_motor_torque
  cdr >> ros_message.driving_motor_torque;

  // Member: driving_motor_etemp
  cdr >> ros_message.driving_motor_etemp;

  // Member: driving_motor_voltage
  cdr >> ros_message.driving_motor_voltage;

  // Member: driving_motor_ammeter
  cdr >> ros_message.driving_motor_ammeter;

  // Member: outline_lamp_status
  cdr >> ros_message.outline_lamp_status;

  // Member: warning_lamp_status
  cdr >> ros_message.warning_lamp_status;

  // Member: backlight_lamp_status
  cdr >> ros_message.backlight_lamp_status;

  // Member: brakelamp_lamp_status
  cdr >> ros_message.brakelamp_lamp_status;

  // Member: left_lamp_status
  cdr >> ros_message.left_lamp_status;

  // Member: right_lamp_status
  cdr >> ros_message.right_lamp_status;

  // Member: front_touch_status
  cdr >> ros_message.front_touch_status;

  // Member: rear_touch_status
  cdr >> ros_message.rear_touch_status;

  // Member: horn_status
  cdr >> ros_message.horn_status;

  // Member: length
  cdr >> ros_message.length;

  // Member: width
  cdr >> ros_message.width;

  // Member: height
  cdr >> ros_message.height;

  // Member: cleanup_switch_status
  cdr >> ros_message.cleanup_switch_status;

  // Member: watering_switch_status
  cdr >> ros_message.watering_switch_status;

  // Member: trash_can_status
  cdr >> ros_message.trash_can_status;

  // Member: water_tank_status
  cdr >> ros_message.water_tank_status;

  // Member: water_add_switch_status
  cdr >> ros_message.water_add_switch_status;

  // Member: hatch_unlock_switch_status
  cdr >> ros_message.hatch_unlock_switch_status;

  // Member: water_tank_level
  cdr >> ros_message.water_tank_level;

  // Member: hmi_highbeam
  cdr >> ros_message.hmi_highbeam;

  // Member: hmi_cleanup
  cdr >> ros_message.hmi_cleanup;

  // Member: hmi_watering
  cdr >> ros_message.hmi_watering;

  // Member: bms_charge_status
  cdr >> ros_message.bms_charge_status;

  // Member: emergency_button_status
  cdr >> ros_message.emergency_button_status;

  // Member: traction
  cdr >> ros_message.traction;

  // Member: abs
  cdr >> ros_message.abs;

  // Member: scs
  cdr >> ros_message.scs;

  // Member: brake_boost
  cdr >> ros_message.brake_boost;

  // Member: aux_brakes
  cdr >> ros_message.aux_brakes;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::Vehicle & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: vehicle_type
  {
    size_t item_size = sizeof(ros_message.vehicle_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.vid.size() + 1);
  // Member: vehicle_num
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.vehicle_num.size() + 1);
  // Member: oid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.oid.size() + 1);
  // Member: operation
  {
    size_t item_size = sizeof(ros_message.operation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: totalcurrent
  {
    size_t item_size = sizeof(ros_message.totalcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batterysoc
  {
    size_t item_size = sizeof(ros_message.batterysoc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: totalvoltage
  {
    size_t item_size = sizeof(ros_message.totalvoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: recharge
  {
    size_t item_size = sizeof(ros_message.recharge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dcdc
  {
    size_t item_size = sizeof(ros_message.dcdc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: resistance
  {
    size_t item_size = sizeof(ros_message.resistance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seats
  {
    size_t array_size = ros_message.seats.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.seats[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servicemode
  {
    size_t item_size = sizeof(ros_message.servicemode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seat_belt
  {
    size_t array_size = ros_message.seat_belt.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.seat_belt[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_status
  {
    size_t item_size = sizeof(ros_message.engine_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_voltage
  {
    size_t item_size = sizeof(ros_message.battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_ammeter
  {
    size_t item_size = sizeof(ros_message.battery_ammeter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_consumption
  {
    size_t item_size = sizeof(ros_message.battery_consumption);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_probe
  {
    size_t item_size = sizeof(ros_message.battery_probe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_temperatures
  {
    size_t array_size = ros_message.battery_temperatures.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.battery_temperatures[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_h_tepemperatures
  {
    size_t item_size = sizeof(ros_message.battery_h_tepemperatures);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_ltepemperatures
  {
    size_t item_size = sizeof(ros_message.battery_ltepemperatures);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_probe_code
  {
    size_t item_size = sizeof(ros_message.battery_probe_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_h_concentration
  {
    size_t item_size = sizeof(ros_message.battery_h_concentration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_c_sensor_code
  {
    size_t item_size = sizeof(ros_message.battery_c_sensor_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_stress
  {
    size_t item_size = sizeof(ros_message.battery_stress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_s_sensor_code
  {
    size_t item_size = sizeof(ros_message.battery_s_sensor_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_h_dc_dc
  {
    size_t item_size = sizeof(ros_message.battery_h_dc_dc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_capacity
  {
    size_t item_size = sizeof(ros_message.battery_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: airconditioning_idx
  {
    size_t item_size = sizeof(ros_message.airconditioning_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: airconditioning_status
  {
    size_t item_size = sizeof(ros_message.airconditioning_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: airconditioning_model
  {
    size_t item_size = sizeof(ros_message.airconditioning_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: airconditioning_volume
  {
    size_t item_size = sizeof(ros_message.airconditioning_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: airconditioning_defrost
  {
    size_t item_size = sizeof(ros_message.airconditioning_defrost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_status
  {
    size_t array_size = ros_message.door_status.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.door_status[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rsrp
  {
    size_t item_size = sizeof(ros_message.rsrp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sinr
  {
    size_t item_size = sizeof(ros_message.sinr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uspeed
  {
    size_t item_size = sizeof(ros_message.uspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dspeed
  {
    size_t item_size = sizeof(ros_message.dspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loss
  {
    size_t item_size = sizeof(ros_message.loss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delay
  {
    size_t item_size = sizeof(ros_message.delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: refrigeration_idx
  {
    size_t item_size = sizeof(ros_message.refrigeration_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: refrigeration_status
  {
    size_t item_size = sizeof(ros_message.refrigeration_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: refrigeration_stemp
  {
    size_t item_size = sizeof(ros_message.refrigeration_stemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: refrigeration_ctemp
  {
    size_t item_size = sizeof(ros_message.refrigeration_ctemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_motor_idx
  {
    size_t item_size = sizeof(ros_message.driving_motor_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_motor_status
  {
    size_t item_size = sizeof(ros_message.driving_motor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_motor_ctemp
  {
    size_t item_size = sizeof(ros_message.driving_motor_ctemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_motor_rspeed
  {
    size_t item_size = sizeof(ros_message.driving_motor_rspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_motor_torque
  {
    size_t item_size = sizeof(ros_message.driving_motor_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_motor_etemp
  {
    size_t item_size = sizeof(ros_message.driving_motor_etemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_motor_voltage
  {
    size_t item_size = sizeof(ros_message.driving_motor_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_motor_ammeter
  {
    size_t item_size = sizeof(ros_message.driving_motor_ammeter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outline_lamp_status
  {
    size_t item_size = sizeof(ros_message.outline_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: warning_lamp_status
  {
    size_t item_size = sizeof(ros_message.warning_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: backlight_lamp_status
  {
    size_t item_size = sizeof(ros_message.backlight_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brakelamp_lamp_status
  {
    size_t item_size = sizeof(ros_message.brakelamp_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_lamp_status
  {
    size_t item_size = sizeof(ros_message.left_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_lamp_status
  {
    size_t item_size = sizeof(ros_message.right_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_touch_status
  {
    size_t item_size = sizeof(ros_message.front_touch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_touch_status
  {
    size_t item_size = sizeof(ros_message.rear_touch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horn_status
  {
    size_t item_size = sizeof(ros_message.horn_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: width
  {
    size_t item_size = sizeof(ros_message.width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height
  {
    size_t item_size = sizeof(ros_message.height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cleanup_switch_status
  {
    size_t item_size = sizeof(ros_message.cleanup_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: watering_switch_status
  {
    size_t item_size = sizeof(ros_message.watering_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trash_can_status
  {
    size_t item_size = sizeof(ros_message.trash_can_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: water_tank_status
  {
    size_t item_size = sizeof(ros_message.water_tank_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: water_add_switch_status
  {
    size_t item_size = sizeof(ros_message.water_add_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hatch_unlock_switch_status
  {
    size_t item_size = sizeof(ros_message.hatch_unlock_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: water_tank_level
  {
    size_t item_size = sizeof(ros_message.water_tank_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_highbeam
  {
    size_t item_size = sizeof(ros_message.hmi_highbeam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_cleanup
  {
    size_t item_size = sizeof(ros_message.hmi_cleanup);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_watering
  {
    size_t item_size = sizeof(ros_message.hmi_watering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_charge_status
  {
    size_t item_size = sizeof(ros_message.bms_charge_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emergency_button_status
  {
    size_t item_size = sizeof(ros_message.emergency_button_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: traction
  {
    size_t item_size = sizeof(ros_message.traction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: abs
  {
    size_t item_size = sizeof(ros_message.abs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scs
  {
    size_t item_size = sizeof(ros_message.scs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_boost
  {
    size_t item_size = sizeof(ros_message.brake_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux_brakes
  {
    size_t item_size = sizeof(ros_message.aux_brakes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_Vehicle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: vehicle_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vid
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: vehicle_num
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: oid
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: operation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: totalcurrent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: batterysoc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: totalvoltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: recharge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dcdc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: resistance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: seats
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: servicemode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: seat_belt
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_ammeter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_consumption
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_probe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_temperatures
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_h_tepemperatures
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_ltepemperatures
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_probe_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_h_concentration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_c_sensor_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_stress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_s_sensor_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_h_dc_dc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_capacity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: airconditioning_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: airconditioning_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: airconditioning_model
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: airconditioning_volume
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: airconditioning_defrost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: door_status
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rsrp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sinr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: refrigeration_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: refrigeration_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: refrigeration_stemp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: refrigeration_ctemp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driving_motor_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: driving_motor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: driving_motor_ctemp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driving_motor_rspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: driving_motor_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driving_motor_etemp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driving_motor_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driving_motor_ammeter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outline_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: warning_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: backlight_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brakelamp_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: front_touch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rear_touch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: horn_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cleanup_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: watering_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trash_can_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: water_tank_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: water_add_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hatch_unlock_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: water_tank_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: hmi_highbeam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hmi_cleanup
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hmi_watering
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bms_charge_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: emergency_button_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: traction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: abs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux_brakes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface::msg::Vehicle;
    is_plain =
      (
      offsetof(DataType, aux_brakes) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Vehicle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::Vehicle *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Vehicle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::Vehicle *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Vehicle__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::Vehicle *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Vehicle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Vehicle(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Vehicle__callbacks = {
  "ros2_interface::msg",
  "Vehicle",
  _Vehicle__cdr_serialize,
  _Vehicle__cdr_deserialize,
  _Vehicle__get_serialized_size,
  _Vehicle__max_serialized_size
};

static rosidl_message_type_support_t _Vehicle__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Vehicle__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_interface::msg::Vehicle>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_Vehicle__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, Vehicle)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_Vehicle__handle;
}

#ifdef __cplusplus
}
#endif

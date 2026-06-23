// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Vehicle.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vid`
// Member `vehicle_num`
// Member `oid`
#include "rosidl_runtime_c/string_functions.h"
// Member `seats`
// Member `seat_belt`
// Member `battery_temperatures`
// Member `door_status`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros2_interface__msg__Vehicle__init(ros2_interface__msg__Vehicle * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__Vehicle__fini(msg);
    return false;
  }
  // vehicle_type
  // vid
  if (!rosidl_runtime_c__String__init(&msg->vid)) {
    ros2_interface__msg__Vehicle__fini(msg);
    return false;
  }
  // vehicle_num
  if (!rosidl_runtime_c__String__init(&msg->vehicle_num)) {
    ros2_interface__msg__Vehicle__fini(msg);
    return false;
  }
  // oid
  if (!rosidl_runtime_c__String__init(&msg->oid)) {
    ros2_interface__msg__Vehicle__fini(msg);
    return false;
  }
  // operation
  // totalcurrent
  // batterysoc
  // totalvoltage
  // recharge
  // dcdc
  // resistance
  // seats
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->seats, 0)) {
    ros2_interface__msg__Vehicle__fini(msg);
    return false;
  }
  // servicemode
  // seat_belt
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->seat_belt, 0)) {
    ros2_interface__msg__Vehicle__fini(msg);
    return false;
  }
  // engine_status
  // battery_voltage
  // battery_ammeter
  // battery_consumption
  // battery_probe
  // battery_temperatures
  if (!rosidl_runtime_c__double__Sequence__init(&msg->battery_temperatures, 0)) {
    ros2_interface__msg__Vehicle__fini(msg);
    return false;
  }
  // battery_h_tepemperatures
  // battery_ltepemperatures
  // battery_probe_code
  // battery_h_concentration
  // battery_c_sensor_code
  // battery_stress
  // battery_s_sensor_code
  // battery_h_dc_dc
  // battery_capacity
  // airconditioning_idx
  // airconditioning_status
  // airconditioning_model
  // airconditioning_volume
  // airconditioning_defrost
  // door_status
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->door_status, 0)) {
    ros2_interface__msg__Vehicle__fini(msg);
    return false;
  }
  // rsrp
  // sinr
  // uspeed
  // dspeed
  // loss
  // delay
  // refrigeration_idx
  // refrigeration_status
  // refrigeration_stemp
  // refrigeration_ctemp
  // driving_motor_idx
  // driving_motor_status
  // driving_motor_ctemp
  // driving_motor_rspeed
  // driving_motor_torque
  // driving_motor_etemp
  // driving_motor_voltage
  // driving_motor_ammeter
  // outline_lamp_status
  // warning_lamp_status
  // backlight_lamp_status
  // brakelamp_lamp_status
  // left_lamp_status
  // right_lamp_status
  // front_touch_status
  // rear_touch_status
  // horn_status
  // length
  // width
  // height
  // cleanup_switch_status
  // watering_switch_status
  // trash_can_status
  // water_tank_status
  // water_add_switch_status
  // hatch_unlock_switch_status
  // water_tank_level
  // hmi_highbeam
  // hmi_cleanup
  // hmi_watering
  // bms_charge_status
  // emergency_button_status
  // traction
  // abs
  // scs
  // brake_boost
  // aux_brakes
  return true;
}

void
ros2_interface__msg__Vehicle__fini(ros2_interface__msg__Vehicle * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vehicle_type
  // vid
  rosidl_runtime_c__String__fini(&msg->vid);
  // vehicle_num
  rosidl_runtime_c__String__fini(&msg->vehicle_num);
  // oid
  rosidl_runtime_c__String__fini(&msg->oid);
  // operation
  // totalcurrent
  // batterysoc
  // totalvoltage
  // recharge
  // dcdc
  // resistance
  // seats
  rosidl_runtime_c__uint8__Sequence__fini(&msg->seats);
  // servicemode
  // seat_belt
  rosidl_runtime_c__int32__Sequence__fini(&msg->seat_belt);
  // engine_status
  // battery_voltage
  // battery_ammeter
  // battery_consumption
  // battery_probe
  // battery_temperatures
  rosidl_runtime_c__double__Sequence__fini(&msg->battery_temperatures);
  // battery_h_tepemperatures
  // battery_ltepemperatures
  // battery_probe_code
  // battery_h_concentration
  // battery_c_sensor_code
  // battery_stress
  // battery_s_sensor_code
  // battery_h_dc_dc
  // battery_capacity
  // airconditioning_idx
  // airconditioning_status
  // airconditioning_model
  // airconditioning_volume
  // airconditioning_defrost
  // door_status
  rosidl_runtime_c__int32__Sequence__fini(&msg->door_status);
  // rsrp
  // sinr
  // uspeed
  // dspeed
  // loss
  // delay
  // refrigeration_idx
  // refrigeration_status
  // refrigeration_stemp
  // refrigeration_ctemp
  // driving_motor_idx
  // driving_motor_status
  // driving_motor_ctemp
  // driving_motor_rspeed
  // driving_motor_torque
  // driving_motor_etemp
  // driving_motor_voltage
  // driving_motor_ammeter
  // outline_lamp_status
  // warning_lamp_status
  // backlight_lamp_status
  // brakelamp_lamp_status
  // left_lamp_status
  // right_lamp_status
  // front_touch_status
  // rear_touch_status
  // horn_status
  // length
  // width
  // height
  // cleanup_switch_status
  // watering_switch_status
  // trash_can_status
  // water_tank_status
  // water_add_switch_status
  // hatch_unlock_switch_status
  // water_tank_level
  // hmi_highbeam
  // hmi_cleanup
  // hmi_watering
  // bms_charge_status
  // emergency_button_status
  // traction
  // abs
  // scs
  // brake_boost
  // aux_brakes
}

bool
ros2_interface__msg__Vehicle__are_equal(const ros2_interface__msg__Vehicle * lhs, const ros2_interface__msg__Vehicle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // vehicle_type
  if (lhs->vehicle_type != rhs->vehicle_type) {
    return false;
  }
  // vid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vid), &(rhs->vid)))
  {
    return false;
  }
  // vehicle_num
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vehicle_num), &(rhs->vehicle_num)))
  {
    return false;
  }
  // oid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->oid), &(rhs->oid)))
  {
    return false;
  }
  // operation
  if (lhs->operation != rhs->operation) {
    return false;
  }
  // totalcurrent
  if (lhs->totalcurrent != rhs->totalcurrent) {
    return false;
  }
  // batterysoc
  if (lhs->batterysoc != rhs->batterysoc) {
    return false;
  }
  // totalvoltage
  if (lhs->totalvoltage != rhs->totalvoltage) {
    return false;
  }
  // recharge
  if (lhs->recharge != rhs->recharge) {
    return false;
  }
  // dcdc
  if (lhs->dcdc != rhs->dcdc) {
    return false;
  }
  // resistance
  if (lhs->resistance != rhs->resistance) {
    return false;
  }
  // seats
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->seats), &(rhs->seats)))
  {
    return false;
  }
  // servicemode
  if (lhs->servicemode != rhs->servicemode) {
    return false;
  }
  // seat_belt
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->seat_belt), &(rhs->seat_belt)))
  {
    return false;
  }
  // engine_status
  if (lhs->engine_status != rhs->engine_status) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // battery_ammeter
  if (lhs->battery_ammeter != rhs->battery_ammeter) {
    return false;
  }
  // battery_consumption
  if (lhs->battery_consumption != rhs->battery_consumption) {
    return false;
  }
  // battery_probe
  if (lhs->battery_probe != rhs->battery_probe) {
    return false;
  }
  // battery_temperatures
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->battery_temperatures), &(rhs->battery_temperatures)))
  {
    return false;
  }
  // battery_h_tepemperatures
  if (lhs->battery_h_tepemperatures != rhs->battery_h_tepemperatures) {
    return false;
  }
  // battery_ltepemperatures
  if (lhs->battery_ltepemperatures != rhs->battery_ltepemperatures) {
    return false;
  }
  // battery_probe_code
  if (lhs->battery_probe_code != rhs->battery_probe_code) {
    return false;
  }
  // battery_h_concentration
  if (lhs->battery_h_concentration != rhs->battery_h_concentration) {
    return false;
  }
  // battery_c_sensor_code
  if (lhs->battery_c_sensor_code != rhs->battery_c_sensor_code) {
    return false;
  }
  // battery_stress
  if (lhs->battery_stress != rhs->battery_stress) {
    return false;
  }
  // battery_s_sensor_code
  if (lhs->battery_s_sensor_code != rhs->battery_s_sensor_code) {
    return false;
  }
  // battery_h_dc_dc
  if (lhs->battery_h_dc_dc != rhs->battery_h_dc_dc) {
    return false;
  }
  // battery_capacity
  if (lhs->battery_capacity != rhs->battery_capacity) {
    return false;
  }
  // airconditioning_idx
  if (lhs->airconditioning_idx != rhs->airconditioning_idx) {
    return false;
  }
  // airconditioning_status
  if (lhs->airconditioning_status != rhs->airconditioning_status) {
    return false;
  }
  // airconditioning_model
  if (lhs->airconditioning_model != rhs->airconditioning_model) {
    return false;
  }
  // airconditioning_volume
  if (lhs->airconditioning_volume != rhs->airconditioning_volume) {
    return false;
  }
  // airconditioning_defrost
  if (lhs->airconditioning_defrost != rhs->airconditioning_defrost) {
    return false;
  }
  // door_status
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->door_status), &(rhs->door_status)))
  {
    return false;
  }
  // rsrp
  if (lhs->rsrp != rhs->rsrp) {
    return false;
  }
  // sinr
  if (lhs->sinr != rhs->sinr) {
    return false;
  }
  // uspeed
  if (lhs->uspeed != rhs->uspeed) {
    return false;
  }
  // dspeed
  if (lhs->dspeed != rhs->dspeed) {
    return false;
  }
  // loss
  if (lhs->loss != rhs->loss) {
    return false;
  }
  // delay
  if (lhs->delay != rhs->delay) {
    return false;
  }
  // refrigeration_idx
  if (lhs->refrigeration_idx != rhs->refrigeration_idx) {
    return false;
  }
  // refrigeration_status
  if (lhs->refrigeration_status != rhs->refrigeration_status) {
    return false;
  }
  // refrigeration_stemp
  if (lhs->refrigeration_stemp != rhs->refrigeration_stemp) {
    return false;
  }
  // refrigeration_ctemp
  if (lhs->refrigeration_ctemp != rhs->refrigeration_ctemp) {
    return false;
  }
  // driving_motor_idx
  if (lhs->driving_motor_idx != rhs->driving_motor_idx) {
    return false;
  }
  // driving_motor_status
  if (lhs->driving_motor_status != rhs->driving_motor_status) {
    return false;
  }
  // driving_motor_ctemp
  if (lhs->driving_motor_ctemp != rhs->driving_motor_ctemp) {
    return false;
  }
  // driving_motor_rspeed
  if (lhs->driving_motor_rspeed != rhs->driving_motor_rspeed) {
    return false;
  }
  // driving_motor_torque
  if (lhs->driving_motor_torque != rhs->driving_motor_torque) {
    return false;
  }
  // driving_motor_etemp
  if (lhs->driving_motor_etemp != rhs->driving_motor_etemp) {
    return false;
  }
  // driving_motor_voltage
  if (lhs->driving_motor_voltage != rhs->driving_motor_voltage) {
    return false;
  }
  // driving_motor_ammeter
  if (lhs->driving_motor_ammeter != rhs->driving_motor_ammeter) {
    return false;
  }
  // outline_lamp_status
  if (lhs->outline_lamp_status != rhs->outline_lamp_status) {
    return false;
  }
  // warning_lamp_status
  if (lhs->warning_lamp_status != rhs->warning_lamp_status) {
    return false;
  }
  // backlight_lamp_status
  if (lhs->backlight_lamp_status != rhs->backlight_lamp_status) {
    return false;
  }
  // brakelamp_lamp_status
  if (lhs->brakelamp_lamp_status != rhs->brakelamp_lamp_status) {
    return false;
  }
  // left_lamp_status
  if (lhs->left_lamp_status != rhs->left_lamp_status) {
    return false;
  }
  // right_lamp_status
  if (lhs->right_lamp_status != rhs->right_lamp_status) {
    return false;
  }
  // front_touch_status
  if (lhs->front_touch_status != rhs->front_touch_status) {
    return false;
  }
  // rear_touch_status
  if (lhs->rear_touch_status != rhs->rear_touch_status) {
    return false;
  }
  // horn_status
  if (lhs->horn_status != rhs->horn_status) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // cleanup_switch_status
  if (lhs->cleanup_switch_status != rhs->cleanup_switch_status) {
    return false;
  }
  // watering_switch_status
  if (lhs->watering_switch_status != rhs->watering_switch_status) {
    return false;
  }
  // trash_can_status
  if (lhs->trash_can_status != rhs->trash_can_status) {
    return false;
  }
  // water_tank_status
  if (lhs->water_tank_status != rhs->water_tank_status) {
    return false;
  }
  // water_add_switch_status
  if (lhs->water_add_switch_status != rhs->water_add_switch_status) {
    return false;
  }
  // hatch_unlock_switch_status
  if (lhs->hatch_unlock_switch_status != rhs->hatch_unlock_switch_status) {
    return false;
  }
  // water_tank_level
  if (lhs->water_tank_level != rhs->water_tank_level) {
    return false;
  }
  // hmi_highbeam
  if (lhs->hmi_highbeam != rhs->hmi_highbeam) {
    return false;
  }
  // hmi_cleanup
  if (lhs->hmi_cleanup != rhs->hmi_cleanup) {
    return false;
  }
  // hmi_watering
  if (lhs->hmi_watering != rhs->hmi_watering) {
    return false;
  }
  // bms_charge_status
  if (lhs->bms_charge_status != rhs->bms_charge_status) {
    return false;
  }
  // emergency_button_status
  if (lhs->emergency_button_status != rhs->emergency_button_status) {
    return false;
  }
  // traction
  if (lhs->traction != rhs->traction) {
    return false;
  }
  // abs
  if (lhs->abs != rhs->abs) {
    return false;
  }
  // scs
  if (lhs->scs != rhs->scs) {
    return false;
  }
  // brake_boost
  if (lhs->brake_boost != rhs->brake_boost) {
    return false;
  }
  // aux_brakes
  if (lhs->aux_brakes != rhs->aux_brakes) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Vehicle__copy(
  const ros2_interface__msg__Vehicle * input,
  ros2_interface__msg__Vehicle * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // vehicle_type
  output->vehicle_type = input->vehicle_type;
  // vid
  if (!rosidl_runtime_c__String__copy(
      &(input->vid), &(output->vid)))
  {
    return false;
  }
  // vehicle_num
  if (!rosidl_runtime_c__String__copy(
      &(input->vehicle_num), &(output->vehicle_num)))
  {
    return false;
  }
  // oid
  if (!rosidl_runtime_c__String__copy(
      &(input->oid), &(output->oid)))
  {
    return false;
  }
  // operation
  output->operation = input->operation;
  // totalcurrent
  output->totalcurrent = input->totalcurrent;
  // batterysoc
  output->batterysoc = input->batterysoc;
  // totalvoltage
  output->totalvoltage = input->totalvoltage;
  // recharge
  output->recharge = input->recharge;
  // dcdc
  output->dcdc = input->dcdc;
  // resistance
  output->resistance = input->resistance;
  // seats
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->seats), &(output->seats)))
  {
    return false;
  }
  // servicemode
  output->servicemode = input->servicemode;
  // seat_belt
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->seat_belt), &(output->seat_belt)))
  {
    return false;
  }
  // engine_status
  output->engine_status = input->engine_status;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // battery_ammeter
  output->battery_ammeter = input->battery_ammeter;
  // battery_consumption
  output->battery_consumption = input->battery_consumption;
  // battery_probe
  output->battery_probe = input->battery_probe;
  // battery_temperatures
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->battery_temperatures), &(output->battery_temperatures)))
  {
    return false;
  }
  // battery_h_tepemperatures
  output->battery_h_tepemperatures = input->battery_h_tepemperatures;
  // battery_ltepemperatures
  output->battery_ltepemperatures = input->battery_ltepemperatures;
  // battery_probe_code
  output->battery_probe_code = input->battery_probe_code;
  // battery_h_concentration
  output->battery_h_concentration = input->battery_h_concentration;
  // battery_c_sensor_code
  output->battery_c_sensor_code = input->battery_c_sensor_code;
  // battery_stress
  output->battery_stress = input->battery_stress;
  // battery_s_sensor_code
  output->battery_s_sensor_code = input->battery_s_sensor_code;
  // battery_h_dc_dc
  output->battery_h_dc_dc = input->battery_h_dc_dc;
  // battery_capacity
  output->battery_capacity = input->battery_capacity;
  // airconditioning_idx
  output->airconditioning_idx = input->airconditioning_idx;
  // airconditioning_status
  output->airconditioning_status = input->airconditioning_status;
  // airconditioning_model
  output->airconditioning_model = input->airconditioning_model;
  // airconditioning_volume
  output->airconditioning_volume = input->airconditioning_volume;
  // airconditioning_defrost
  output->airconditioning_defrost = input->airconditioning_defrost;
  // door_status
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->door_status), &(output->door_status)))
  {
    return false;
  }
  // rsrp
  output->rsrp = input->rsrp;
  // sinr
  output->sinr = input->sinr;
  // uspeed
  output->uspeed = input->uspeed;
  // dspeed
  output->dspeed = input->dspeed;
  // loss
  output->loss = input->loss;
  // delay
  output->delay = input->delay;
  // refrigeration_idx
  output->refrigeration_idx = input->refrigeration_idx;
  // refrigeration_status
  output->refrigeration_status = input->refrigeration_status;
  // refrigeration_stemp
  output->refrigeration_stemp = input->refrigeration_stemp;
  // refrigeration_ctemp
  output->refrigeration_ctemp = input->refrigeration_ctemp;
  // driving_motor_idx
  output->driving_motor_idx = input->driving_motor_idx;
  // driving_motor_status
  output->driving_motor_status = input->driving_motor_status;
  // driving_motor_ctemp
  output->driving_motor_ctemp = input->driving_motor_ctemp;
  // driving_motor_rspeed
  output->driving_motor_rspeed = input->driving_motor_rspeed;
  // driving_motor_torque
  output->driving_motor_torque = input->driving_motor_torque;
  // driving_motor_etemp
  output->driving_motor_etemp = input->driving_motor_etemp;
  // driving_motor_voltage
  output->driving_motor_voltage = input->driving_motor_voltage;
  // driving_motor_ammeter
  output->driving_motor_ammeter = input->driving_motor_ammeter;
  // outline_lamp_status
  output->outline_lamp_status = input->outline_lamp_status;
  // warning_lamp_status
  output->warning_lamp_status = input->warning_lamp_status;
  // backlight_lamp_status
  output->backlight_lamp_status = input->backlight_lamp_status;
  // brakelamp_lamp_status
  output->brakelamp_lamp_status = input->brakelamp_lamp_status;
  // left_lamp_status
  output->left_lamp_status = input->left_lamp_status;
  // right_lamp_status
  output->right_lamp_status = input->right_lamp_status;
  // front_touch_status
  output->front_touch_status = input->front_touch_status;
  // rear_touch_status
  output->rear_touch_status = input->rear_touch_status;
  // horn_status
  output->horn_status = input->horn_status;
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // cleanup_switch_status
  output->cleanup_switch_status = input->cleanup_switch_status;
  // watering_switch_status
  output->watering_switch_status = input->watering_switch_status;
  // trash_can_status
  output->trash_can_status = input->trash_can_status;
  // water_tank_status
  output->water_tank_status = input->water_tank_status;
  // water_add_switch_status
  output->water_add_switch_status = input->water_add_switch_status;
  // hatch_unlock_switch_status
  output->hatch_unlock_switch_status = input->hatch_unlock_switch_status;
  // water_tank_level
  output->water_tank_level = input->water_tank_level;
  // hmi_highbeam
  output->hmi_highbeam = input->hmi_highbeam;
  // hmi_cleanup
  output->hmi_cleanup = input->hmi_cleanup;
  // hmi_watering
  output->hmi_watering = input->hmi_watering;
  // bms_charge_status
  output->bms_charge_status = input->bms_charge_status;
  // emergency_button_status
  output->emergency_button_status = input->emergency_button_status;
  // traction
  output->traction = input->traction;
  // abs
  output->abs = input->abs;
  // scs
  output->scs = input->scs;
  // brake_boost
  output->brake_boost = input->brake_boost;
  // aux_brakes
  output->aux_brakes = input->aux_brakes;
  return true;
}

ros2_interface__msg__Vehicle *
ros2_interface__msg__Vehicle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Vehicle * msg = (ros2_interface__msg__Vehicle *)allocator.allocate(sizeof(ros2_interface__msg__Vehicle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Vehicle));
  bool success = ros2_interface__msg__Vehicle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Vehicle__destroy(ros2_interface__msg__Vehicle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Vehicle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Vehicle__Sequence__init(ros2_interface__msg__Vehicle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Vehicle * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Vehicle *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Vehicle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Vehicle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Vehicle__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_interface__msg__Vehicle__Sequence__fini(ros2_interface__msg__Vehicle__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_interface__msg__Vehicle__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_interface__msg__Vehicle__Sequence *
ros2_interface__msg__Vehicle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Vehicle__Sequence * array = (ros2_interface__msg__Vehicle__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Vehicle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Vehicle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Vehicle__Sequence__destroy(ros2_interface__msg__Vehicle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Vehicle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Vehicle__Sequence__are_equal(const ros2_interface__msg__Vehicle__Sequence * lhs, const ros2_interface__msg__Vehicle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Vehicle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Vehicle__Sequence__copy(
  const ros2_interface__msg__Vehicle__Sequence * input,
  ros2_interface__msg__Vehicle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Vehicle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Vehicle * data =
      (ros2_interface__msg__Vehicle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Vehicle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Vehicle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Vehicle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Chassis.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/chassis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `chassis_error_code`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros2_interface__msg__Chassis__init(ros2_interface__msg__Chassis * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__Chassis__fini(msg);
    return false;
  }
  // moving_status
  // driving_mode
  // steer_driving_mode
  // steering_status
  // front_steering_value
  // rear_steering_value
  // steering_torque_nm
  // front_steering_rate_dps
  // rear_steering_rate_dps
  // accel_driving_mode
  // accel_status
  // accel_value
  // brake_driving_mode
  // brake_status
  // brake_value
  // backup_brake_driving_mode
  // backup_brake_status
  // backup_brake_value
  // epb_driving_mode
  // epb_status
  // epb_level
  // engine_status
  // engine_rpm
  // engine_torque
  // speed_mps
  // odometer_m
  // fuel_range_m
  // gear_driving_mode
  // gear_status
  // gear_location
  // driver_seat_belt
  // high_beam_status
  // low_beam_status
  // horn_status
  // turn_lamp_status
  // front_wiper_status
  // rear_wiper_status
  // position_lamp_status
  // front_fog_lamp_status
  // rear_fog_lamp_status
  // brake_lamp_status
  // alarm_lamp_status
  // lf_door_status
  // rf_door_status
  // lr_door_status
  // rr_door_status
  // rearview_mirror_status
  // trunk_status
  // engine_bay_door_status
  // wheel_direction_rr
  // wheel_spd_rr
  // wheel_direction_rl
  // wheel_spd_rl
  // wheel_direction_fr
  // wheel_spd_fr
  // wheel_direction_fl
  // wheel_spd_fl
  // is_tire_pressure_ok
  // is_tire_pressure_lf_valid
  // tire_pressure_lf
  // is_tire_pressure_rf_valid
  // tire_pressure_rf
  // is_tire_pressure_lr_valid
  // tire_pressure_lr
  // is_tire_pressure_rr_valid
  // tire_pressure_rr
  // battery_power_percentage
  // air_bag_status
  // charging_gun_status
  // vehicle_power_status
  // chassis_error_code
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->chassis_error_code, 0)) {
    ros2_interface__msg__Chassis__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__Chassis__fini(ros2_interface__msg__Chassis * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // moving_status
  // driving_mode
  // steer_driving_mode
  // steering_status
  // front_steering_value
  // rear_steering_value
  // steering_torque_nm
  // front_steering_rate_dps
  // rear_steering_rate_dps
  // accel_driving_mode
  // accel_status
  // accel_value
  // brake_driving_mode
  // brake_status
  // brake_value
  // backup_brake_driving_mode
  // backup_brake_status
  // backup_brake_value
  // epb_driving_mode
  // epb_status
  // epb_level
  // engine_status
  // engine_rpm
  // engine_torque
  // speed_mps
  // odometer_m
  // fuel_range_m
  // gear_driving_mode
  // gear_status
  // gear_location
  // driver_seat_belt
  // high_beam_status
  // low_beam_status
  // horn_status
  // turn_lamp_status
  // front_wiper_status
  // rear_wiper_status
  // position_lamp_status
  // front_fog_lamp_status
  // rear_fog_lamp_status
  // brake_lamp_status
  // alarm_lamp_status
  // lf_door_status
  // rf_door_status
  // lr_door_status
  // rr_door_status
  // rearview_mirror_status
  // trunk_status
  // engine_bay_door_status
  // wheel_direction_rr
  // wheel_spd_rr
  // wheel_direction_rl
  // wheel_spd_rl
  // wheel_direction_fr
  // wheel_spd_fr
  // wheel_direction_fl
  // wheel_spd_fl
  // is_tire_pressure_ok
  // is_tire_pressure_lf_valid
  // tire_pressure_lf
  // is_tire_pressure_rf_valid
  // tire_pressure_rf
  // is_tire_pressure_lr_valid
  // tire_pressure_lr
  // is_tire_pressure_rr_valid
  // tire_pressure_rr
  // battery_power_percentage
  // air_bag_status
  // charging_gun_status
  // vehicle_power_status
  // chassis_error_code
  rosidl_runtime_c__int32__Sequence__fini(&msg->chassis_error_code);
}

bool
ros2_interface__msg__Chassis__are_equal(const ros2_interface__msg__Chassis * lhs, const ros2_interface__msg__Chassis * rhs)
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
  // moving_status
  if (lhs->moving_status != rhs->moving_status) {
    return false;
  }
  // driving_mode
  if (lhs->driving_mode != rhs->driving_mode) {
    return false;
  }
  // steer_driving_mode
  if (lhs->steer_driving_mode != rhs->steer_driving_mode) {
    return false;
  }
  // steering_status
  if (lhs->steering_status != rhs->steering_status) {
    return false;
  }
  // front_steering_value
  if (lhs->front_steering_value != rhs->front_steering_value) {
    return false;
  }
  // rear_steering_value
  if (lhs->rear_steering_value != rhs->rear_steering_value) {
    return false;
  }
  // steering_torque_nm
  if (lhs->steering_torque_nm != rhs->steering_torque_nm) {
    return false;
  }
  // front_steering_rate_dps
  if (lhs->front_steering_rate_dps != rhs->front_steering_rate_dps) {
    return false;
  }
  // rear_steering_rate_dps
  if (lhs->rear_steering_rate_dps != rhs->rear_steering_rate_dps) {
    return false;
  }
  // accel_driving_mode
  if (lhs->accel_driving_mode != rhs->accel_driving_mode) {
    return false;
  }
  // accel_status
  if (lhs->accel_status != rhs->accel_status) {
    return false;
  }
  // accel_value
  if (lhs->accel_value != rhs->accel_value) {
    return false;
  }
  // brake_driving_mode
  if (lhs->brake_driving_mode != rhs->brake_driving_mode) {
    return false;
  }
  // brake_status
  if (lhs->brake_status != rhs->brake_status) {
    return false;
  }
  // brake_value
  if (lhs->brake_value != rhs->brake_value) {
    return false;
  }
  // backup_brake_driving_mode
  if (lhs->backup_brake_driving_mode != rhs->backup_brake_driving_mode) {
    return false;
  }
  // backup_brake_status
  if (lhs->backup_brake_status != rhs->backup_brake_status) {
    return false;
  }
  // backup_brake_value
  if (lhs->backup_brake_value != rhs->backup_brake_value) {
    return false;
  }
  // epb_driving_mode
  if (lhs->epb_driving_mode != rhs->epb_driving_mode) {
    return false;
  }
  // epb_status
  if (lhs->epb_status != rhs->epb_status) {
    return false;
  }
  // epb_level
  if (lhs->epb_level != rhs->epb_level) {
    return false;
  }
  // engine_status
  if (lhs->engine_status != rhs->engine_status) {
    return false;
  }
  // engine_rpm
  if (lhs->engine_rpm != rhs->engine_rpm) {
    return false;
  }
  // engine_torque
  if (lhs->engine_torque != rhs->engine_torque) {
    return false;
  }
  // speed_mps
  if (lhs->speed_mps != rhs->speed_mps) {
    return false;
  }
  // odometer_m
  if (lhs->odometer_m != rhs->odometer_m) {
    return false;
  }
  // fuel_range_m
  if (lhs->fuel_range_m != rhs->fuel_range_m) {
    return false;
  }
  // gear_driving_mode
  if (lhs->gear_driving_mode != rhs->gear_driving_mode) {
    return false;
  }
  // gear_status
  if (lhs->gear_status != rhs->gear_status) {
    return false;
  }
  // gear_location
  if (lhs->gear_location != rhs->gear_location) {
    return false;
  }
  // driver_seat_belt
  if (lhs->driver_seat_belt != rhs->driver_seat_belt) {
    return false;
  }
  // high_beam_status
  if (lhs->high_beam_status != rhs->high_beam_status) {
    return false;
  }
  // low_beam_status
  if (lhs->low_beam_status != rhs->low_beam_status) {
    return false;
  }
  // horn_status
  if (lhs->horn_status != rhs->horn_status) {
    return false;
  }
  // turn_lamp_status
  if (lhs->turn_lamp_status != rhs->turn_lamp_status) {
    return false;
  }
  // front_wiper_status
  if (lhs->front_wiper_status != rhs->front_wiper_status) {
    return false;
  }
  // rear_wiper_status
  if (lhs->rear_wiper_status != rhs->rear_wiper_status) {
    return false;
  }
  // position_lamp_status
  if (lhs->position_lamp_status != rhs->position_lamp_status) {
    return false;
  }
  // front_fog_lamp_status
  if (lhs->front_fog_lamp_status != rhs->front_fog_lamp_status) {
    return false;
  }
  // rear_fog_lamp_status
  if (lhs->rear_fog_lamp_status != rhs->rear_fog_lamp_status) {
    return false;
  }
  // brake_lamp_status
  if (lhs->brake_lamp_status != rhs->brake_lamp_status) {
    return false;
  }
  // alarm_lamp_status
  if (lhs->alarm_lamp_status != rhs->alarm_lamp_status) {
    return false;
  }
  // lf_door_status
  if (lhs->lf_door_status != rhs->lf_door_status) {
    return false;
  }
  // rf_door_status
  if (lhs->rf_door_status != rhs->rf_door_status) {
    return false;
  }
  // lr_door_status
  if (lhs->lr_door_status != rhs->lr_door_status) {
    return false;
  }
  // rr_door_status
  if (lhs->rr_door_status != rhs->rr_door_status) {
    return false;
  }
  // rearview_mirror_status
  if (lhs->rearview_mirror_status != rhs->rearview_mirror_status) {
    return false;
  }
  // trunk_status
  if (lhs->trunk_status != rhs->trunk_status) {
    return false;
  }
  // engine_bay_door_status
  if (lhs->engine_bay_door_status != rhs->engine_bay_door_status) {
    return false;
  }
  // wheel_direction_rr
  if (lhs->wheel_direction_rr != rhs->wheel_direction_rr) {
    return false;
  }
  // wheel_spd_rr
  if (lhs->wheel_spd_rr != rhs->wheel_spd_rr) {
    return false;
  }
  // wheel_direction_rl
  if (lhs->wheel_direction_rl != rhs->wheel_direction_rl) {
    return false;
  }
  // wheel_spd_rl
  if (lhs->wheel_spd_rl != rhs->wheel_spd_rl) {
    return false;
  }
  // wheel_direction_fr
  if (lhs->wheel_direction_fr != rhs->wheel_direction_fr) {
    return false;
  }
  // wheel_spd_fr
  if (lhs->wheel_spd_fr != rhs->wheel_spd_fr) {
    return false;
  }
  // wheel_direction_fl
  if (lhs->wheel_direction_fl != rhs->wheel_direction_fl) {
    return false;
  }
  // wheel_spd_fl
  if (lhs->wheel_spd_fl != rhs->wheel_spd_fl) {
    return false;
  }
  // is_tire_pressure_ok
  if (lhs->is_tire_pressure_ok != rhs->is_tire_pressure_ok) {
    return false;
  }
  // is_tire_pressure_lf_valid
  if (lhs->is_tire_pressure_lf_valid != rhs->is_tire_pressure_lf_valid) {
    return false;
  }
  // tire_pressure_lf
  if (lhs->tire_pressure_lf != rhs->tire_pressure_lf) {
    return false;
  }
  // is_tire_pressure_rf_valid
  if (lhs->is_tire_pressure_rf_valid != rhs->is_tire_pressure_rf_valid) {
    return false;
  }
  // tire_pressure_rf
  if (lhs->tire_pressure_rf != rhs->tire_pressure_rf) {
    return false;
  }
  // is_tire_pressure_lr_valid
  if (lhs->is_tire_pressure_lr_valid != rhs->is_tire_pressure_lr_valid) {
    return false;
  }
  // tire_pressure_lr
  if (lhs->tire_pressure_lr != rhs->tire_pressure_lr) {
    return false;
  }
  // is_tire_pressure_rr_valid
  if (lhs->is_tire_pressure_rr_valid != rhs->is_tire_pressure_rr_valid) {
    return false;
  }
  // tire_pressure_rr
  if (lhs->tire_pressure_rr != rhs->tire_pressure_rr) {
    return false;
  }
  // battery_power_percentage
  if (lhs->battery_power_percentage != rhs->battery_power_percentage) {
    return false;
  }
  // air_bag_status
  if (lhs->air_bag_status != rhs->air_bag_status) {
    return false;
  }
  // charging_gun_status
  if (lhs->charging_gun_status != rhs->charging_gun_status) {
    return false;
  }
  // vehicle_power_status
  if (lhs->vehicle_power_status != rhs->vehicle_power_status) {
    return false;
  }
  // chassis_error_code
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->chassis_error_code), &(rhs->chassis_error_code)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Chassis__copy(
  const ros2_interface__msg__Chassis * input,
  ros2_interface__msg__Chassis * output)
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
  // moving_status
  output->moving_status = input->moving_status;
  // driving_mode
  output->driving_mode = input->driving_mode;
  // steer_driving_mode
  output->steer_driving_mode = input->steer_driving_mode;
  // steering_status
  output->steering_status = input->steering_status;
  // front_steering_value
  output->front_steering_value = input->front_steering_value;
  // rear_steering_value
  output->rear_steering_value = input->rear_steering_value;
  // steering_torque_nm
  output->steering_torque_nm = input->steering_torque_nm;
  // front_steering_rate_dps
  output->front_steering_rate_dps = input->front_steering_rate_dps;
  // rear_steering_rate_dps
  output->rear_steering_rate_dps = input->rear_steering_rate_dps;
  // accel_driving_mode
  output->accel_driving_mode = input->accel_driving_mode;
  // accel_status
  output->accel_status = input->accel_status;
  // accel_value
  output->accel_value = input->accel_value;
  // brake_driving_mode
  output->brake_driving_mode = input->brake_driving_mode;
  // brake_status
  output->brake_status = input->brake_status;
  // brake_value
  output->brake_value = input->brake_value;
  // backup_brake_driving_mode
  output->backup_brake_driving_mode = input->backup_brake_driving_mode;
  // backup_brake_status
  output->backup_brake_status = input->backup_brake_status;
  // backup_brake_value
  output->backup_brake_value = input->backup_brake_value;
  // epb_driving_mode
  output->epb_driving_mode = input->epb_driving_mode;
  // epb_status
  output->epb_status = input->epb_status;
  // epb_level
  output->epb_level = input->epb_level;
  // engine_status
  output->engine_status = input->engine_status;
  // engine_rpm
  output->engine_rpm = input->engine_rpm;
  // engine_torque
  output->engine_torque = input->engine_torque;
  // speed_mps
  output->speed_mps = input->speed_mps;
  // odometer_m
  output->odometer_m = input->odometer_m;
  // fuel_range_m
  output->fuel_range_m = input->fuel_range_m;
  // gear_driving_mode
  output->gear_driving_mode = input->gear_driving_mode;
  // gear_status
  output->gear_status = input->gear_status;
  // gear_location
  output->gear_location = input->gear_location;
  // driver_seat_belt
  output->driver_seat_belt = input->driver_seat_belt;
  // high_beam_status
  output->high_beam_status = input->high_beam_status;
  // low_beam_status
  output->low_beam_status = input->low_beam_status;
  // horn_status
  output->horn_status = input->horn_status;
  // turn_lamp_status
  output->turn_lamp_status = input->turn_lamp_status;
  // front_wiper_status
  output->front_wiper_status = input->front_wiper_status;
  // rear_wiper_status
  output->rear_wiper_status = input->rear_wiper_status;
  // position_lamp_status
  output->position_lamp_status = input->position_lamp_status;
  // front_fog_lamp_status
  output->front_fog_lamp_status = input->front_fog_lamp_status;
  // rear_fog_lamp_status
  output->rear_fog_lamp_status = input->rear_fog_lamp_status;
  // brake_lamp_status
  output->brake_lamp_status = input->brake_lamp_status;
  // alarm_lamp_status
  output->alarm_lamp_status = input->alarm_lamp_status;
  // lf_door_status
  output->lf_door_status = input->lf_door_status;
  // rf_door_status
  output->rf_door_status = input->rf_door_status;
  // lr_door_status
  output->lr_door_status = input->lr_door_status;
  // rr_door_status
  output->rr_door_status = input->rr_door_status;
  // rearview_mirror_status
  output->rearview_mirror_status = input->rearview_mirror_status;
  // trunk_status
  output->trunk_status = input->trunk_status;
  // engine_bay_door_status
  output->engine_bay_door_status = input->engine_bay_door_status;
  // wheel_direction_rr
  output->wheel_direction_rr = input->wheel_direction_rr;
  // wheel_spd_rr
  output->wheel_spd_rr = input->wheel_spd_rr;
  // wheel_direction_rl
  output->wheel_direction_rl = input->wheel_direction_rl;
  // wheel_spd_rl
  output->wheel_spd_rl = input->wheel_spd_rl;
  // wheel_direction_fr
  output->wheel_direction_fr = input->wheel_direction_fr;
  // wheel_spd_fr
  output->wheel_spd_fr = input->wheel_spd_fr;
  // wheel_direction_fl
  output->wheel_direction_fl = input->wheel_direction_fl;
  // wheel_spd_fl
  output->wheel_spd_fl = input->wheel_spd_fl;
  // is_tire_pressure_ok
  output->is_tire_pressure_ok = input->is_tire_pressure_ok;
  // is_tire_pressure_lf_valid
  output->is_tire_pressure_lf_valid = input->is_tire_pressure_lf_valid;
  // tire_pressure_lf
  output->tire_pressure_lf = input->tire_pressure_lf;
  // is_tire_pressure_rf_valid
  output->is_tire_pressure_rf_valid = input->is_tire_pressure_rf_valid;
  // tire_pressure_rf
  output->tire_pressure_rf = input->tire_pressure_rf;
  // is_tire_pressure_lr_valid
  output->is_tire_pressure_lr_valid = input->is_tire_pressure_lr_valid;
  // tire_pressure_lr
  output->tire_pressure_lr = input->tire_pressure_lr;
  // is_tire_pressure_rr_valid
  output->is_tire_pressure_rr_valid = input->is_tire_pressure_rr_valid;
  // tire_pressure_rr
  output->tire_pressure_rr = input->tire_pressure_rr;
  // battery_power_percentage
  output->battery_power_percentage = input->battery_power_percentage;
  // air_bag_status
  output->air_bag_status = input->air_bag_status;
  // charging_gun_status
  output->charging_gun_status = input->charging_gun_status;
  // vehicle_power_status
  output->vehicle_power_status = input->vehicle_power_status;
  // chassis_error_code
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->chassis_error_code), &(output->chassis_error_code)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__Chassis *
ros2_interface__msg__Chassis__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Chassis * msg = (ros2_interface__msg__Chassis *)allocator.allocate(sizeof(ros2_interface__msg__Chassis), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Chassis));
  bool success = ros2_interface__msg__Chassis__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Chassis__destroy(ros2_interface__msg__Chassis * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Chassis__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Chassis__Sequence__init(ros2_interface__msg__Chassis__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Chassis * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Chassis *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Chassis), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Chassis__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Chassis__fini(&data[i - 1]);
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
ros2_interface__msg__Chassis__Sequence__fini(ros2_interface__msg__Chassis__Sequence * array)
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
      ros2_interface__msg__Chassis__fini(&array->data[i]);
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

ros2_interface__msg__Chassis__Sequence *
ros2_interface__msg__Chassis__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Chassis__Sequence * array = (ros2_interface__msg__Chassis__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Chassis__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Chassis__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Chassis__Sequence__destroy(ros2_interface__msg__Chassis__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Chassis__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Chassis__Sequence__are_equal(const ros2_interface__msg__Chassis__Sequence * lhs, const ros2_interface__msg__Chassis__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Chassis__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Chassis__Sequence__copy(
  const ros2_interface__msg__Chassis__Sequence * input,
  ros2_interface__msg__Chassis__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Chassis);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Chassis * data =
      (ros2_interface__msg__Chassis *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Chassis__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Chassis__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Chassis__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

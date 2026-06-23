// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/HMIVehicleMsg.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/hmi_vehicle_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "ros2_interface/msg/detail/point_llh__functions.h"
// Member `utm_position`
// Member `mercator_position`
#include "ros2_interface/msg/detail/point_enu__functions.h"
// Member `chassis_error_code`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros2_interface__msg__HMIVehicleMsg__init(ros2_interface__msg__HMIVehicleMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__HMIVehicleMsg__fini(msg);
    return false;
  }
  // driving_mode
  // gear_location
  // steering_value
  // accel_value
  // brake_value
  // speed_mps
  // position
  if (!ros2_interface__msg__PointLLH__init(&msg->position)) {
    ros2_interface__msg__HMIVehicleMsg__fini(msg);
    return false;
  }
  // utm_position
  if (!ros2_interface__msg__PointENU__init(&msg->utm_position)) {
    ros2_interface__msg__HMIVehicleMsg__fini(msg);
    return false;
  }
  // pitch
  // roll
  // heading
  // rtk_flag
  // origin_lat
  // origin_lon
  // current_ins_yaw
  // auto_safe
  // battery_power_percentage
  // charging_gun_status
  // chassis_error_code
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->chassis_error_code, 0)) {
    ros2_interface__msg__HMIVehicleMsg__fini(msg);
    return false;
  }
  // brake_lamp_status
  // turn_lamp_status
  // mercator_position
  if (!ros2_interface__msg__PointENU__init(&msg->mercator_position)) {
    ros2_interface__msg__HMIVehicleMsg__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__HMIVehicleMsg__fini(ros2_interface__msg__HMIVehicleMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // driving_mode
  // gear_location
  // steering_value
  // accel_value
  // brake_value
  // speed_mps
  // position
  ros2_interface__msg__PointLLH__fini(&msg->position);
  // utm_position
  ros2_interface__msg__PointENU__fini(&msg->utm_position);
  // pitch
  // roll
  // heading
  // rtk_flag
  // origin_lat
  // origin_lon
  // current_ins_yaw
  // auto_safe
  // battery_power_percentage
  // charging_gun_status
  // chassis_error_code
  rosidl_runtime_c__int32__Sequence__fini(&msg->chassis_error_code);
  // brake_lamp_status
  // turn_lamp_status
  // mercator_position
  ros2_interface__msg__PointENU__fini(&msg->mercator_position);
}

bool
ros2_interface__msg__HMIVehicleMsg__are_equal(const ros2_interface__msg__HMIVehicleMsg * lhs, const ros2_interface__msg__HMIVehicleMsg * rhs)
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
  // driving_mode
  if (lhs->driving_mode != rhs->driving_mode) {
    return false;
  }
  // gear_location
  if (lhs->gear_location != rhs->gear_location) {
    return false;
  }
  // steering_value
  if (lhs->steering_value != rhs->steering_value) {
    return false;
  }
  // accel_value
  if (lhs->accel_value != rhs->accel_value) {
    return false;
  }
  // brake_value
  if (lhs->brake_value != rhs->brake_value) {
    return false;
  }
  // speed_mps
  if (lhs->speed_mps != rhs->speed_mps) {
    return false;
  }
  // position
  if (!ros2_interface__msg__PointLLH__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // utm_position
  if (!ros2_interface__msg__PointENU__are_equal(
      &(lhs->utm_position), &(rhs->utm_position)))
  {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // rtk_flag
  if (lhs->rtk_flag != rhs->rtk_flag) {
    return false;
  }
  // origin_lat
  if (lhs->origin_lat != rhs->origin_lat) {
    return false;
  }
  // origin_lon
  if (lhs->origin_lon != rhs->origin_lon) {
    return false;
  }
  // current_ins_yaw
  if (lhs->current_ins_yaw != rhs->current_ins_yaw) {
    return false;
  }
  // auto_safe
  if (lhs->auto_safe != rhs->auto_safe) {
    return false;
  }
  // battery_power_percentage
  if (lhs->battery_power_percentage != rhs->battery_power_percentage) {
    return false;
  }
  // charging_gun_status
  if (lhs->charging_gun_status != rhs->charging_gun_status) {
    return false;
  }
  // chassis_error_code
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->chassis_error_code), &(rhs->chassis_error_code)))
  {
    return false;
  }
  // brake_lamp_status
  if (lhs->brake_lamp_status != rhs->brake_lamp_status) {
    return false;
  }
  // turn_lamp_status
  if (lhs->turn_lamp_status != rhs->turn_lamp_status) {
    return false;
  }
  // mercator_position
  if (!ros2_interface__msg__PointENU__are_equal(
      &(lhs->mercator_position), &(rhs->mercator_position)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__HMIVehicleMsg__copy(
  const ros2_interface__msg__HMIVehicleMsg * input,
  ros2_interface__msg__HMIVehicleMsg * output)
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
  // driving_mode
  output->driving_mode = input->driving_mode;
  // gear_location
  output->gear_location = input->gear_location;
  // steering_value
  output->steering_value = input->steering_value;
  // accel_value
  output->accel_value = input->accel_value;
  // brake_value
  output->brake_value = input->brake_value;
  // speed_mps
  output->speed_mps = input->speed_mps;
  // position
  if (!ros2_interface__msg__PointLLH__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // utm_position
  if (!ros2_interface__msg__PointENU__copy(
      &(input->utm_position), &(output->utm_position)))
  {
    return false;
  }
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // heading
  output->heading = input->heading;
  // rtk_flag
  output->rtk_flag = input->rtk_flag;
  // origin_lat
  output->origin_lat = input->origin_lat;
  // origin_lon
  output->origin_lon = input->origin_lon;
  // current_ins_yaw
  output->current_ins_yaw = input->current_ins_yaw;
  // auto_safe
  output->auto_safe = input->auto_safe;
  // battery_power_percentage
  output->battery_power_percentage = input->battery_power_percentage;
  // charging_gun_status
  output->charging_gun_status = input->charging_gun_status;
  // chassis_error_code
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->chassis_error_code), &(output->chassis_error_code)))
  {
    return false;
  }
  // brake_lamp_status
  output->brake_lamp_status = input->brake_lamp_status;
  // turn_lamp_status
  output->turn_lamp_status = input->turn_lamp_status;
  // mercator_position
  if (!ros2_interface__msg__PointENU__copy(
      &(input->mercator_position), &(output->mercator_position)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__HMIVehicleMsg *
ros2_interface__msg__HMIVehicleMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIVehicleMsg * msg = (ros2_interface__msg__HMIVehicleMsg *)allocator.allocate(sizeof(ros2_interface__msg__HMIVehicleMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__HMIVehicleMsg));
  bool success = ros2_interface__msg__HMIVehicleMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__HMIVehicleMsg__destroy(ros2_interface__msg__HMIVehicleMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__HMIVehicleMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__HMIVehicleMsg__Sequence__init(ros2_interface__msg__HMIVehicleMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIVehicleMsg * data = NULL;

  if (size) {
    data = (ros2_interface__msg__HMIVehicleMsg *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__HMIVehicleMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__HMIVehicleMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__HMIVehicleMsg__fini(&data[i - 1]);
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
ros2_interface__msg__HMIVehicleMsg__Sequence__fini(ros2_interface__msg__HMIVehicleMsg__Sequence * array)
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
      ros2_interface__msg__HMIVehicleMsg__fini(&array->data[i]);
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

ros2_interface__msg__HMIVehicleMsg__Sequence *
ros2_interface__msg__HMIVehicleMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIVehicleMsg__Sequence * array = (ros2_interface__msg__HMIVehicleMsg__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__HMIVehicleMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__HMIVehicleMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__HMIVehicleMsg__Sequence__destroy(ros2_interface__msg__HMIVehicleMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__HMIVehicleMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__HMIVehicleMsg__Sequence__are_equal(const ros2_interface__msg__HMIVehicleMsg__Sequence * lhs, const ros2_interface__msg__HMIVehicleMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__HMIVehicleMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__HMIVehicleMsg__Sequence__copy(
  const ros2_interface__msg__HMIVehicleMsg__Sequence * input,
  ros2_interface__msg__HMIVehicleMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__HMIVehicleMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__HMIVehicleMsg * data =
      (ros2_interface__msg__HMIVehicleMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__HMIVehicleMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__HMIVehicleMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__HMIVehicleMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

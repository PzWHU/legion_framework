// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/WheelInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/wheel_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ros2_interface__msg__WheelInfo__init(ros2_interface__msg__WheelInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__WheelInfo__fini(msg);
    return false;
  }
  // moving_status
  // steer_driving_mode
  // steering_value
  // steering_torque_nm
  // steering_rate_dps
  // speed_mps
  // veh_spd_vld
  // gear
  // gear_vld
  // wheel_direction_rr
  // wheel_spd_rr
  // wheel_direction_rl
  // wheel_spd_rl
  // wheel_direction_fr
  // wheel_spd_fr
  // wheel_direction_fl
  // wheel_spd_fl
  // yaw_rate
  // wss_fl_edges_sum
  // wss_fr_edges_sum
  // wss_rl_edges_sum
  // wss_rr_edges_sum
  // wss_fl_edges_sum_vld
  // wss_fr_edges_sum_vld
  // wss_rl_edges_sum_vld
  // wss_rr_edges_sum_vld
  // veh_lat_accel
  // veh_lgt_accel
  // veh_lat_accel_vld
  // veh_lgt_accel_vld
  return true;
}

void
ros2_interface__msg__WheelInfo__fini(ros2_interface__msg__WheelInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // moving_status
  // steer_driving_mode
  // steering_value
  // steering_torque_nm
  // steering_rate_dps
  // speed_mps
  // veh_spd_vld
  // gear
  // gear_vld
  // wheel_direction_rr
  // wheel_spd_rr
  // wheel_direction_rl
  // wheel_spd_rl
  // wheel_direction_fr
  // wheel_spd_fr
  // wheel_direction_fl
  // wheel_spd_fl
  // yaw_rate
  // wss_fl_edges_sum
  // wss_fr_edges_sum
  // wss_rl_edges_sum
  // wss_rr_edges_sum
  // wss_fl_edges_sum_vld
  // wss_fr_edges_sum_vld
  // wss_rl_edges_sum_vld
  // wss_rr_edges_sum_vld
  // veh_lat_accel
  // veh_lgt_accel
  // veh_lat_accel_vld
  // veh_lgt_accel_vld
}

bool
ros2_interface__msg__WheelInfo__are_equal(const ros2_interface__msg__WheelInfo * lhs, const ros2_interface__msg__WheelInfo * rhs)
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
  // steer_driving_mode
  if (lhs->steer_driving_mode != rhs->steer_driving_mode) {
    return false;
  }
  // steering_value
  if (lhs->steering_value != rhs->steering_value) {
    return false;
  }
  // steering_torque_nm
  if (lhs->steering_torque_nm != rhs->steering_torque_nm) {
    return false;
  }
  // steering_rate_dps
  if (lhs->steering_rate_dps != rhs->steering_rate_dps) {
    return false;
  }
  // speed_mps
  if (lhs->speed_mps != rhs->speed_mps) {
    return false;
  }
  // veh_spd_vld
  if (lhs->veh_spd_vld != rhs->veh_spd_vld) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // gear_vld
  if (lhs->gear_vld != rhs->gear_vld) {
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
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // wss_fl_edges_sum
  if (lhs->wss_fl_edges_sum != rhs->wss_fl_edges_sum) {
    return false;
  }
  // wss_fr_edges_sum
  if (lhs->wss_fr_edges_sum != rhs->wss_fr_edges_sum) {
    return false;
  }
  // wss_rl_edges_sum
  if (lhs->wss_rl_edges_sum != rhs->wss_rl_edges_sum) {
    return false;
  }
  // wss_rr_edges_sum
  if (lhs->wss_rr_edges_sum != rhs->wss_rr_edges_sum) {
    return false;
  }
  // wss_fl_edges_sum_vld
  if (lhs->wss_fl_edges_sum_vld != rhs->wss_fl_edges_sum_vld) {
    return false;
  }
  // wss_fr_edges_sum_vld
  if (lhs->wss_fr_edges_sum_vld != rhs->wss_fr_edges_sum_vld) {
    return false;
  }
  // wss_rl_edges_sum_vld
  if (lhs->wss_rl_edges_sum_vld != rhs->wss_rl_edges_sum_vld) {
    return false;
  }
  // wss_rr_edges_sum_vld
  if (lhs->wss_rr_edges_sum_vld != rhs->wss_rr_edges_sum_vld) {
    return false;
  }
  // veh_lat_accel
  if (lhs->veh_lat_accel != rhs->veh_lat_accel) {
    return false;
  }
  // veh_lgt_accel
  if (lhs->veh_lgt_accel != rhs->veh_lgt_accel) {
    return false;
  }
  // veh_lat_accel_vld
  if (lhs->veh_lat_accel_vld != rhs->veh_lat_accel_vld) {
    return false;
  }
  // veh_lgt_accel_vld
  if (lhs->veh_lgt_accel_vld != rhs->veh_lgt_accel_vld) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__WheelInfo__copy(
  const ros2_interface__msg__WheelInfo * input,
  ros2_interface__msg__WheelInfo * output)
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
  // steer_driving_mode
  output->steer_driving_mode = input->steer_driving_mode;
  // steering_value
  output->steering_value = input->steering_value;
  // steering_torque_nm
  output->steering_torque_nm = input->steering_torque_nm;
  // steering_rate_dps
  output->steering_rate_dps = input->steering_rate_dps;
  // speed_mps
  output->speed_mps = input->speed_mps;
  // veh_spd_vld
  output->veh_spd_vld = input->veh_spd_vld;
  // gear
  output->gear = input->gear;
  // gear_vld
  output->gear_vld = input->gear_vld;
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
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // wss_fl_edges_sum
  output->wss_fl_edges_sum = input->wss_fl_edges_sum;
  // wss_fr_edges_sum
  output->wss_fr_edges_sum = input->wss_fr_edges_sum;
  // wss_rl_edges_sum
  output->wss_rl_edges_sum = input->wss_rl_edges_sum;
  // wss_rr_edges_sum
  output->wss_rr_edges_sum = input->wss_rr_edges_sum;
  // wss_fl_edges_sum_vld
  output->wss_fl_edges_sum_vld = input->wss_fl_edges_sum_vld;
  // wss_fr_edges_sum_vld
  output->wss_fr_edges_sum_vld = input->wss_fr_edges_sum_vld;
  // wss_rl_edges_sum_vld
  output->wss_rl_edges_sum_vld = input->wss_rl_edges_sum_vld;
  // wss_rr_edges_sum_vld
  output->wss_rr_edges_sum_vld = input->wss_rr_edges_sum_vld;
  // veh_lat_accel
  output->veh_lat_accel = input->veh_lat_accel;
  // veh_lgt_accel
  output->veh_lgt_accel = input->veh_lgt_accel;
  // veh_lat_accel_vld
  output->veh_lat_accel_vld = input->veh_lat_accel_vld;
  // veh_lgt_accel_vld
  output->veh_lgt_accel_vld = input->veh_lgt_accel_vld;
  return true;
}

ros2_interface__msg__WheelInfo *
ros2_interface__msg__WheelInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__WheelInfo * msg = (ros2_interface__msg__WheelInfo *)allocator.allocate(sizeof(ros2_interface__msg__WheelInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__WheelInfo));
  bool success = ros2_interface__msg__WheelInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__WheelInfo__destroy(ros2_interface__msg__WheelInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__WheelInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__WheelInfo__Sequence__init(ros2_interface__msg__WheelInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__WheelInfo * data = NULL;

  if (size) {
    data = (ros2_interface__msg__WheelInfo *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__WheelInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__WheelInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__WheelInfo__fini(&data[i - 1]);
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
ros2_interface__msg__WheelInfo__Sequence__fini(ros2_interface__msg__WheelInfo__Sequence * array)
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
      ros2_interface__msg__WheelInfo__fini(&array->data[i]);
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

ros2_interface__msg__WheelInfo__Sequence *
ros2_interface__msg__WheelInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__WheelInfo__Sequence * array = (ros2_interface__msg__WheelInfo__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__WheelInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__WheelInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__WheelInfo__Sequence__destroy(ros2_interface__msg__WheelInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__WheelInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__WheelInfo__Sequence__are_equal(const ros2_interface__msg__WheelInfo__Sequence * lhs, const ros2_interface__msg__WheelInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__WheelInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__WheelInfo__Sequence__copy(
  const ros2_interface__msg__WheelInfo__Sequence * input,
  ros2_interface__msg__WheelInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__WheelInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__WheelInfo * data =
      (ros2_interface__msg__WheelInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__WheelInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__WheelInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__WheelInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

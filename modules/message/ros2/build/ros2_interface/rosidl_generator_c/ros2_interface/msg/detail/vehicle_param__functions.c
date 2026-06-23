// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/VehicleParam.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `brand`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_interface__msg__VehicleParam__init(ros2_interface__msg__VehicleParam * msg)
{
  if (!msg) {
    return false;
  }
  // brand
  if (!rosidl_runtime_c__String__init(&msg->brand)) {
    ros2_interface__msg__VehicleParam__fini(msg);
    return false;
  }
  // steer_mode
  // length
  // width
  // height
  // mass_fl
  // mass_fr
  // mass_rl
  // mass_rr
  // wheel_radius
  // wheelbase
  // front_edge_to_center
  // back_edge_to_center
  // lf
  // lr
  // cf
  // cr
  // steer_ratio
  // rolling_coefficient
  // air_density
  // air_damping_coefficient
  // max_front_steer_angle
  // min_front_steer_angle
  // max_rear_steer_angle
  // min_rear_steer_angle
  // speed_limit
  // max_brake_value
  // min_brake_value
  // max_accel_value
  // min_accel_value
  // speed_deadzone
  // standstill_acceleration
  // max_front_steer_angle_rate
  // max_rear_steer_angle_rate
  // max_abs_speed_when_stopped
  // max_abs_speed_when_stopped_duration
  // brake_value_when_gear_transitioning
  // accel_deadzone
  // brake_deadzone
  // acceleration_in_idle
  // deceleration_in_idle
  // max_acceleration_jerk
  // max_acceleration
  // max_deceleration
  // min_turning_radius
  return true;
}

void
ros2_interface__msg__VehicleParam__fini(ros2_interface__msg__VehicleParam * msg)
{
  if (!msg) {
    return;
  }
  // brand
  rosidl_runtime_c__String__fini(&msg->brand);
  // steer_mode
  // length
  // width
  // height
  // mass_fl
  // mass_fr
  // mass_rl
  // mass_rr
  // wheel_radius
  // wheelbase
  // front_edge_to_center
  // back_edge_to_center
  // lf
  // lr
  // cf
  // cr
  // steer_ratio
  // rolling_coefficient
  // air_density
  // air_damping_coefficient
  // max_front_steer_angle
  // min_front_steer_angle
  // max_rear_steer_angle
  // min_rear_steer_angle
  // speed_limit
  // max_brake_value
  // min_brake_value
  // max_accel_value
  // min_accel_value
  // speed_deadzone
  // standstill_acceleration
  // max_front_steer_angle_rate
  // max_rear_steer_angle_rate
  // max_abs_speed_when_stopped
  // max_abs_speed_when_stopped_duration
  // brake_value_when_gear_transitioning
  // accel_deadzone
  // brake_deadzone
  // acceleration_in_idle
  // deceleration_in_idle
  // max_acceleration_jerk
  // max_acceleration
  // max_deceleration
  // min_turning_radius
}

bool
ros2_interface__msg__VehicleParam__are_equal(const ros2_interface__msg__VehicleParam * lhs, const ros2_interface__msg__VehicleParam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brand
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->brand), &(rhs->brand)))
  {
    return false;
  }
  // steer_mode
  if (lhs->steer_mode != rhs->steer_mode) {
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
  // mass_fl
  if (lhs->mass_fl != rhs->mass_fl) {
    return false;
  }
  // mass_fr
  if (lhs->mass_fr != rhs->mass_fr) {
    return false;
  }
  // mass_rl
  if (lhs->mass_rl != rhs->mass_rl) {
    return false;
  }
  // mass_rr
  if (lhs->mass_rr != rhs->mass_rr) {
    return false;
  }
  // wheel_radius
  if (lhs->wheel_radius != rhs->wheel_radius) {
    return false;
  }
  // wheelbase
  if (lhs->wheelbase != rhs->wheelbase) {
    return false;
  }
  // front_edge_to_center
  if (lhs->front_edge_to_center != rhs->front_edge_to_center) {
    return false;
  }
  // back_edge_to_center
  if (lhs->back_edge_to_center != rhs->back_edge_to_center) {
    return false;
  }
  // lf
  if (lhs->lf != rhs->lf) {
    return false;
  }
  // lr
  if (lhs->lr != rhs->lr) {
    return false;
  }
  // cf
  if (lhs->cf != rhs->cf) {
    return false;
  }
  // cr
  if (lhs->cr != rhs->cr) {
    return false;
  }
  // steer_ratio
  if (lhs->steer_ratio != rhs->steer_ratio) {
    return false;
  }
  // rolling_coefficient
  if (lhs->rolling_coefficient != rhs->rolling_coefficient) {
    return false;
  }
  // air_density
  if (lhs->air_density != rhs->air_density) {
    return false;
  }
  // air_damping_coefficient
  if (lhs->air_damping_coefficient != rhs->air_damping_coefficient) {
    return false;
  }
  // max_front_steer_angle
  if (lhs->max_front_steer_angle != rhs->max_front_steer_angle) {
    return false;
  }
  // min_front_steer_angle
  if (lhs->min_front_steer_angle != rhs->min_front_steer_angle) {
    return false;
  }
  // max_rear_steer_angle
  if (lhs->max_rear_steer_angle != rhs->max_rear_steer_angle) {
    return false;
  }
  // min_rear_steer_angle
  if (lhs->min_rear_steer_angle != rhs->min_rear_steer_angle) {
    return false;
  }
  // speed_limit
  if (lhs->speed_limit != rhs->speed_limit) {
    return false;
  }
  // max_brake_value
  if (lhs->max_brake_value != rhs->max_brake_value) {
    return false;
  }
  // min_brake_value
  if (lhs->min_brake_value != rhs->min_brake_value) {
    return false;
  }
  // max_accel_value
  if (lhs->max_accel_value != rhs->max_accel_value) {
    return false;
  }
  // min_accel_value
  if (lhs->min_accel_value != rhs->min_accel_value) {
    return false;
  }
  // speed_deadzone
  if (lhs->speed_deadzone != rhs->speed_deadzone) {
    return false;
  }
  // standstill_acceleration
  if (lhs->standstill_acceleration != rhs->standstill_acceleration) {
    return false;
  }
  // max_front_steer_angle_rate
  if (lhs->max_front_steer_angle_rate != rhs->max_front_steer_angle_rate) {
    return false;
  }
  // max_rear_steer_angle_rate
  if (lhs->max_rear_steer_angle_rate != rhs->max_rear_steer_angle_rate) {
    return false;
  }
  // max_abs_speed_when_stopped
  if (lhs->max_abs_speed_when_stopped != rhs->max_abs_speed_when_stopped) {
    return false;
  }
  // max_abs_speed_when_stopped_duration
  if (lhs->max_abs_speed_when_stopped_duration != rhs->max_abs_speed_when_stopped_duration) {
    return false;
  }
  // brake_value_when_gear_transitioning
  if (lhs->brake_value_when_gear_transitioning != rhs->brake_value_when_gear_transitioning) {
    return false;
  }
  // accel_deadzone
  if (lhs->accel_deadzone != rhs->accel_deadzone) {
    return false;
  }
  // brake_deadzone
  if (lhs->brake_deadzone != rhs->brake_deadzone) {
    return false;
  }
  // acceleration_in_idle
  if (lhs->acceleration_in_idle != rhs->acceleration_in_idle) {
    return false;
  }
  // deceleration_in_idle
  if (lhs->deceleration_in_idle != rhs->deceleration_in_idle) {
    return false;
  }
  // max_acceleration_jerk
  if (lhs->max_acceleration_jerk != rhs->max_acceleration_jerk) {
    return false;
  }
  // max_acceleration
  if (lhs->max_acceleration != rhs->max_acceleration) {
    return false;
  }
  // max_deceleration
  if (lhs->max_deceleration != rhs->max_deceleration) {
    return false;
  }
  // min_turning_radius
  if (lhs->min_turning_radius != rhs->min_turning_radius) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__VehicleParam__copy(
  const ros2_interface__msg__VehicleParam * input,
  ros2_interface__msg__VehicleParam * output)
{
  if (!input || !output) {
    return false;
  }
  // brand
  if (!rosidl_runtime_c__String__copy(
      &(input->brand), &(output->brand)))
  {
    return false;
  }
  // steer_mode
  output->steer_mode = input->steer_mode;
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // mass_fl
  output->mass_fl = input->mass_fl;
  // mass_fr
  output->mass_fr = input->mass_fr;
  // mass_rl
  output->mass_rl = input->mass_rl;
  // mass_rr
  output->mass_rr = input->mass_rr;
  // wheel_radius
  output->wheel_radius = input->wheel_radius;
  // wheelbase
  output->wheelbase = input->wheelbase;
  // front_edge_to_center
  output->front_edge_to_center = input->front_edge_to_center;
  // back_edge_to_center
  output->back_edge_to_center = input->back_edge_to_center;
  // lf
  output->lf = input->lf;
  // lr
  output->lr = input->lr;
  // cf
  output->cf = input->cf;
  // cr
  output->cr = input->cr;
  // steer_ratio
  output->steer_ratio = input->steer_ratio;
  // rolling_coefficient
  output->rolling_coefficient = input->rolling_coefficient;
  // air_density
  output->air_density = input->air_density;
  // air_damping_coefficient
  output->air_damping_coefficient = input->air_damping_coefficient;
  // max_front_steer_angle
  output->max_front_steer_angle = input->max_front_steer_angle;
  // min_front_steer_angle
  output->min_front_steer_angle = input->min_front_steer_angle;
  // max_rear_steer_angle
  output->max_rear_steer_angle = input->max_rear_steer_angle;
  // min_rear_steer_angle
  output->min_rear_steer_angle = input->min_rear_steer_angle;
  // speed_limit
  output->speed_limit = input->speed_limit;
  // max_brake_value
  output->max_brake_value = input->max_brake_value;
  // min_brake_value
  output->min_brake_value = input->min_brake_value;
  // max_accel_value
  output->max_accel_value = input->max_accel_value;
  // min_accel_value
  output->min_accel_value = input->min_accel_value;
  // speed_deadzone
  output->speed_deadzone = input->speed_deadzone;
  // standstill_acceleration
  output->standstill_acceleration = input->standstill_acceleration;
  // max_front_steer_angle_rate
  output->max_front_steer_angle_rate = input->max_front_steer_angle_rate;
  // max_rear_steer_angle_rate
  output->max_rear_steer_angle_rate = input->max_rear_steer_angle_rate;
  // max_abs_speed_when_stopped
  output->max_abs_speed_when_stopped = input->max_abs_speed_when_stopped;
  // max_abs_speed_when_stopped_duration
  output->max_abs_speed_when_stopped_duration = input->max_abs_speed_when_stopped_duration;
  // brake_value_when_gear_transitioning
  output->brake_value_when_gear_transitioning = input->brake_value_when_gear_transitioning;
  // accel_deadzone
  output->accel_deadzone = input->accel_deadzone;
  // brake_deadzone
  output->brake_deadzone = input->brake_deadzone;
  // acceleration_in_idle
  output->acceleration_in_idle = input->acceleration_in_idle;
  // deceleration_in_idle
  output->deceleration_in_idle = input->deceleration_in_idle;
  // max_acceleration_jerk
  output->max_acceleration_jerk = input->max_acceleration_jerk;
  // max_acceleration
  output->max_acceleration = input->max_acceleration;
  // max_deceleration
  output->max_deceleration = input->max_deceleration;
  // min_turning_radius
  output->min_turning_radius = input->min_turning_radius;
  return true;
}

ros2_interface__msg__VehicleParam *
ros2_interface__msg__VehicleParam__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleParam * msg = (ros2_interface__msg__VehicleParam *)allocator.allocate(sizeof(ros2_interface__msg__VehicleParam), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__VehicleParam));
  bool success = ros2_interface__msg__VehicleParam__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__VehicleParam__destroy(ros2_interface__msg__VehicleParam * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__VehicleParam__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__VehicleParam__Sequence__init(ros2_interface__msg__VehicleParam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleParam * data = NULL;

  if (size) {
    data = (ros2_interface__msg__VehicleParam *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__VehicleParam), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__VehicleParam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__VehicleParam__fini(&data[i - 1]);
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
ros2_interface__msg__VehicleParam__Sequence__fini(ros2_interface__msg__VehicleParam__Sequence * array)
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
      ros2_interface__msg__VehicleParam__fini(&array->data[i]);
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

ros2_interface__msg__VehicleParam__Sequence *
ros2_interface__msg__VehicleParam__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleParam__Sequence * array = (ros2_interface__msg__VehicleParam__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__VehicleParam__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__VehicleParam__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__VehicleParam__Sequence__destroy(ros2_interface__msg__VehicleParam__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__VehicleParam__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__VehicleParam__Sequence__are_equal(const ros2_interface__msg__VehicleParam__Sequence * lhs, const ros2_interface__msg__VehicleParam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__VehicleParam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__VehicleParam__Sequence__copy(
  const ros2_interface__msg__VehicleParam__Sequence * input,
  ros2_interface__msg__VehicleParam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__VehicleParam);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__VehicleParam * data =
      (ros2_interface__msg__VehicleParam *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__VehicleParam__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__VehicleParam__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__VehicleParam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

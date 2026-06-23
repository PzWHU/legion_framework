// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/ControlCommand.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/control_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ros2_interface__msg__ControlCommand__init(ros2_interface__msg__ControlCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__ControlCommand__fini(msg);
    return false;
  }
  // steer_driving_mode
  // front_steering_target
  // rear_steering_target
  // front_steering_rate
  // rear_steering_rate
  // accel_driving_mode
  // accel_value
  // brake_driving_mode
  // brake_value
  // backup_brake_driving_mode
  // backup_brake_value
  // epb_driving_mode
  // epb_level
  // gear_driving_mode
  // emergency_brake_enable
  // gear_location
  // speed
  // acceleration
  // turn_lamp_ctrl
  // high_beam_ctrl
  // low_beam_ctrl
  // horn_ctrl
  // front_wiper_ctrl
  // rear_wiper_ctrl
  // position_lamp_ctrl
  // front_fog_lamp_ctrl
  // rear_fog_lamp_ctrl
  // brake_lamp_ctrl
  // alarm_lamp_ctrl
  // lf_door_ctrl
  // rf_door_ctrl
  // lr_door_ctrl
  // rr_door_ctrl
  return true;
}

void
ros2_interface__msg__ControlCommand__fini(ros2_interface__msg__ControlCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // steer_driving_mode
  // front_steering_target
  // rear_steering_target
  // front_steering_rate
  // rear_steering_rate
  // accel_driving_mode
  // accel_value
  // brake_driving_mode
  // brake_value
  // backup_brake_driving_mode
  // backup_brake_value
  // epb_driving_mode
  // epb_level
  // gear_driving_mode
  // emergency_brake_enable
  // gear_location
  // speed
  // acceleration
  // turn_lamp_ctrl
  // high_beam_ctrl
  // low_beam_ctrl
  // horn_ctrl
  // front_wiper_ctrl
  // rear_wiper_ctrl
  // position_lamp_ctrl
  // front_fog_lamp_ctrl
  // rear_fog_lamp_ctrl
  // brake_lamp_ctrl
  // alarm_lamp_ctrl
  // lf_door_ctrl
  // rf_door_ctrl
  // lr_door_ctrl
  // rr_door_ctrl
}

bool
ros2_interface__msg__ControlCommand__are_equal(const ros2_interface__msg__ControlCommand * lhs, const ros2_interface__msg__ControlCommand * rhs)
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
  // steer_driving_mode
  if (lhs->steer_driving_mode != rhs->steer_driving_mode) {
    return false;
  }
  // front_steering_target
  if (lhs->front_steering_target != rhs->front_steering_target) {
    return false;
  }
  // rear_steering_target
  if (lhs->rear_steering_target != rhs->rear_steering_target) {
    return false;
  }
  // front_steering_rate
  if (lhs->front_steering_rate != rhs->front_steering_rate) {
    return false;
  }
  // rear_steering_rate
  if (lhs->rear_steering_rate != rhs->rear_steering_rate) {
    return false;
  }
  // accel_driving_mode
  if (lhs->accel_driving_mode != rhs->accel_driving_mode) {
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
  // brake_value
  if (lhs->brake_value != rhs->brake_value) {
    return false;
  }
  // backup_brake_driving_mode
  if (lhs->backup_brake_driving_mode != rhs->backup_brake_driving_mode) {
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
  // epb_level
  if (lhs->epb_level != rhs->epb_level) {
    return false;
  }
  // gear_driving_mode
  if (lhs->gear_driving_mode != rhs->gear_driving_mode) {
    return false;
  }
  // emergency_brake_enable
  if (lhs->emergency_brake_enable != rhs->emergency_brake_enable) {
    return false;
  }
  // gear_location
  if (lhs->gear_location != rhs->gear_location) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // turn_lamp_ctrl
  if (lhs->turn_lamp_ctrl != rhs->turn_lamp_ctrl) {
    return false;
  }
  // high_beam_ctrl
  if (lhs->high_beam_ctrl != rhs->high_beam_ctrl) {
    return false;
  }
  // low_beam_ctrl
  if (lhs->low_beam_ctrl != rhs->low_beam_ctrl) {
    return false;
  }
  // horn_ctrl
  if (lhs->horn_ctrl != rhs->horn_ctrl) {
    return false;
  }
  // front_wiper_ctrl
  if (lhs->front_wiper_ctrl != rhs->front_wiper_ctrl) {
    return false;
  }
  // rear_wiper_ctrl
  if (lhs->rear_wiper_ctrl != rhs->rear_wiper_ctrl) {
    return false;
  }
  // position_lamp_ctrl
  if (lhs->position_lamp_ctrl != rhs->position_lamp_ctrl) {
    return false;
  }
  // front_fog_lamp_ctrl
  if (lhs->front_fog_lamp_ctrl != rhs->front_fog_lamp_ctrl) {
    return false;
  }
  // rear_fog_lamp_ctrl
  if (lhs->rear_fog_lamp_ctrl != rhs->rear_fog_lamp_ctrl) {
    return false;
  }
  // brake_lamp_ctrl
  if (lhs->brake_lamp_ctrl != rhs->brake_lamp_ctrl) {
    return false;
  }
  // alarm_lamp_ctrl
  if (lhs->alarm_lamp_ctrl != rhs->alarm_lamp_ctrl) {
    return false;
  }
  // lf_door_ctrl
  if (lhs->lf_door_ctrl != rhs->lf_door_ctrl) {
    return false;
  }
  // rf_door_ctrl
  if (lhs->rf_door_ctrl != rhs->rf_door_ctrl) {
    return false;
  }
  // lr_door_ctrl
  if (lhs->lr_door_ctrl != rhs->lr_door_ctrl) {
    return false;
  }
  // rr_door_ctrl
  if (lhs->rr_door_ctrl != rhs->rr_door_ctrl) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__ControlCommand__copy(
  const ros2_interface__msg__ControlCommand * input,
  ros2_interface__msg__ControlCommand * output)
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
  // steer_driving_mode
  output->steer_driving_mode = input->steer_driving_mode;
  // front_steering_target
  output->front_steering_target = input->front_steering_target;
  // rear_steering_target
  output->rear_steering_target = input->rear_steering_target;
  // front_steering_rate
  output->front_steering_rate = input->front_steering_rate;
  // rear_steering_rate
  output->rear_steering_rate = input->rear_steering_rate;
  // accel_driving_mode
  output->accel_driving_mode = input->accel_driving_mode;
  // accel_value
  output->accel_value = input->accel_value;
  // brake_driving_mode
  output->brake_driving_mode = input->brake_driving_mode;
  // brake_value
  output->brake_value = input->brake_value;
  // backup_brake_driving_mode
  output->backup_brake_driving_mode = input->backup_brake_driving_mode;
  // backup_brake_value
  output->backup_brake_value = input->backup_brake_value;
  // epb_driving_mode
  output->epb_driving_mode = input->epb_driving_mode;
  // epb_level
  output->epb_level = input->epb_level;
  // gear_driving_mode
  output->gear_driving_mode = input->gear_driving_mode;
  // emergency_brake_enable
  output->emergency_brake_enable = input->emergency_brake_enable;
  // gear_location
  output->gear_location = input->gear_location;
  // speed
  output->speed = input->speed;
  // acceleration
  output->acceleration = input->acceleration;
  // turn_lamp_ctrl
  output->turn_lamp_ctrl = input->turn_lamp_ctrl;
  // high_beam_ctrl
  output->high_beam_ctrl = input->high_beam_ctrl;
  // low_beam_ctrl
  output->low_beam_ctrl = input->low_beam_ctrl;
  // horn_ctrl
  output->horn_ctrl = input->horn_ctrl;
  // front_wiper_ctrl
  output->front_wiper_ctrl = input->front_wiper_ctrl;
  // rear_wiper_ctrl
  output->rear_wiper_ctrl = input->rear_wiper_ctrl;
  // position_lamp_ctrl
  output->position_lamp_ctrl = input->position_lamp_ctrl;
  // front_fog_lamp_ctrl
  output->front_fog_lamp_ctrl = input->front_fog_lamp_ctrl;
  // rear_fog_lamp_ctrl
  output->rear_fog_lamp_ctrl = input->rear_fog_lamp_ctrl;
  // brake_lamp_ctrl
  output->brake_lamp_ctrl = input->brake_lamp_ctrl;
  // alarm_lamp_ctrl
  output->alarm_lamp_ctrl = input->alarm_lamp_ctrl;
  // lf_door_ctrl
  output->lf_door_ctrl = input->lf_door_ctrl;
  // rf_door_ctrl
  output->rf_door_ctrl = input->rf_door_ctrl;
  // lr_door_ctrl
  output->lr_door_ctrl = input->lr_door_ctrl;
  // rr_door_ctrl
  output->rr_door_ctrl = input->rr_door_ctrl;
  return true;
}

ros2_interface__msg__ControlCommand *
ros2_interface__msg__ControlCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ControlCommand * msg = (ros2_interface__msg__ControlCommand *)allocator.allocate(sizeof(ros2_interface__msg__ControlCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__ControlCommand));
  bool success = ros2_interface__msg__ControlCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__ControlCommand__destroy(ros2_interface__msg__ControlCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__ControlCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__ControlCommand__Sequence__init(ros2_interface__msg__ControlCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ControlCommand * data = NULL;

  if (size) {
    data = (ros2_interface__msg__ControlCommand *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__ControlCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__ControlCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__ControlCommand__fini(&data[i - 1]);
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
ros2_interface__msg__ControlCommand__Sequence__fini(ros2_interface__msg__ControlCommand__Sequence * array)
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
      ros2_interface__msg__ControlCommand__fini(&array->data[i]);
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

ros2_interface__msg__ControlCommand__Sequence *
ros2_interface__msg__ControlCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ControlCommand__Sequence * array = (ros2_interface__msg__ControlCommand__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__ControlCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__ControlCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__ControlCommand__Sequence__destroy(ros2_interface__msg__ControlCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__ControlCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__ControlCommand__Sequence__are_equal(const ros2_interface__msg__ControlCommand__Sequence * lhs, const ros2_interface__msg__ControlCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__ControlCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__ControlCommand__Sequence__copy(
  const ros2_interface__msg__ControlCommand__Sequence * input,
  ros2_interface__msg__ControlCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__ControlCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__ControlCommand * data =
      (ros2_interface__msg__ControlCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__ControlCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__ControlCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__ControlCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/PlanningCmd.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/planning_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ros2_interface__msg__PlanningCmd__init(ros2_interface__msg__PlanningCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__PlanningCmd__fini(msg);
    return false;
  }
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
ros2_interface__msg__PlanningCmd__fini(ros2_interface__msg__PlanningCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
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
ros2_interface__msg__PlanningCmd__are_equal(const ros2_interface__msg__PlanningCmd * lhs, const ros2_interface__msg__PlanningCmd * rhs)
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
ros2_interface__msg__PlanningCmd__copy(
  const ros2_interface__msg__PlanningCmd * input,
  ros2_interface__msg__PlanningCmd * output)
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

ros2_interface__msg__PlanningCmd *
ros2_interface__msg__PlanningCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PlanningCmd * msg = (ros2_interface__msg__PlanningCmd *)allocator.allocate(sizeof(ros2_interface__msg__PlanningCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__PlanningCmd));
  bool success = ros2_interface__msg__PlanningCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__PlanningCmd__destroy(ros2_interface__msg__PlanningCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__PlanningCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__PlanningCmd__Sequence__init(ros2_interface__msg__PlanningCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PlanningCmd * data = NULL;

  if (size) {
    data = (ros2_interface__msg__PlanningCmd *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__PlanningCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__PlanningCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__PlanningCmd__fini(&data[i - 1]);
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
ros2_interface__msg__PlanningCmd__Sequence__fini(ros2_interface__msg__PlanningCmd__Sequence * array)
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
      ros2_interface__msg__PlanningCmd__fini(&array->data[i]);
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

ros2_interface__msg__PlanningCmd__Sequence *
ros2_interface__msg__PlanningCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PlanningCmd__Sequence * array = (ros2_interface__msg__PlanningCmd__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__PlanningCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__PlanningCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__PlanningCmd__Sequence__destroy(ros2_interface__msg__PlanningCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__PlanningCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__PlanningCmd__Sequence__are_equal(const ros2_interface__msg__PlanningCmd__Sequence * lhs, const ros2_interface__msg__PlanningCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__PlanningCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__PlanningCmd__Sequence__copy(
  const ros2_interface__msg__PlanningCmd__Sequence * input,
  ros2_interface__msg__PlanningCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__PlanningCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__PlanningCmd * data =
      (ros2_interface__msg__PlanningCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__PlanningCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__PlanningCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__PlanningCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

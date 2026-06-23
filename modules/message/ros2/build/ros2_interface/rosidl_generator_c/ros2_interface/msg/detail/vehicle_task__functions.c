// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/VehicleTask.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ros2_interface__msg__VehicleTask__init(ros2_interface__msg__VehicleTask * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__VehicleTask__fini(msg);
    return false;
  }
  // clean_up_ctrl
  // watering_ctrl
  // water_add_ctrl
  // hatch_unlock_ctrl
  // decorative_light_ctrl
  return true;
}

void
ros2_interface__msg__VehicleTask__fini(ros2_interface__msg__VehicleTask * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // clean_up_ctrl
  // watering_ctrl
  // water_add_ctrl
  // hatch_unlock_ctrl
  // decorative_light_ctrl
}

bool
ros2_interface__msg__VehicleTask__are_equal(const ros2_interface__msg__VehicleTask * lhs, const ros2_interface__msg__VehicleTask * rhs)
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
  // clean_up_ctrl
  if (lhs->clean_up_ctrl != rhs->clean_up_ctrl) {
    return false;
  }
  // watering_ctrl
  if (lhs->watering_ctrl != rhs->watering_ctrl) {
    return false;
  }
  // water_add_ctrl
  if (lhs->water_add_ctrl != rhs->water_add_ctrl) {
    return false;
  }
  // hatch_unlock_ctrl
  if (lhs->hatch_unlock_ctrl != rhs->hatch_unlock_ctrl) {
    return false;
  }
  // decorative_light_ctrl
  if (lhs->decorative_light_ctrl != rhs->decorative_light_ctrl) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__VehicleTask__copy(
  const ros2_interface__msg__VehicleTask * input,
  ros2_interface__msg__VehicleTask * output)
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
  // clean_up_ctrl
  output->clean_up_ctrl = input->clean_up_ctrl;
  // watering_ctrl
  output->watering_ctrl = input->watering_ctrl;
  // water_add_ctrl
  output->water_add_ctrl = input->water_add_ctrl;
  // hatch_unlock_ctrl
  output->hatch_unlock_ctrl = input->hatch_unlock_ctrl;
  // decorative_light_ctrl
  output->decorative_light_ctrl = input->decorative_light_ctrl;
  return true;
}

ros2_interface__msg__VehicleTask *
ros2_interface__msg__VehicleTask__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleTask * msg = (ros2_interface__msg__VehicleTask *)allocator.allocate(sizeof(ros2_interface__msg__VehicleTask), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__VehicleTask));
  bool success = ros2_interface__msg__VehicleTask__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__VehicleTask__destroy(ros2_interface__msg__VehicleTask * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__VehicleTask__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__VehicleTask__Sequence__init(ros2_interface__msg__VehicleTask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleTask * data = NULL;

  if (size) {
    data = (ros2_interface__msg__VehicleTask *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__VehicleTask), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__VehicleTask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__VehicleTask__fini(&data[i - 1]);
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
ros2_interface__msg__VehicleTask__Sequence__fini(ros2_interface__msg__VehicleTask__Sequence * array)
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
      ros2_interface__msg__VehicleTask__fini(&array->data[i]);
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

ros2_interface__msg__VehicleTask__Sequence *
ros2_interface__msg__VehicleTask__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleTask__Sequence * array = (ros2_interface__msg__VehicleTask__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__VehicleTask__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__VehicleTask__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__VehicleTask__Sequence__destroy(ros2_interface__msg__VehicleTask__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__VehicleTask__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__VehicleTask__Sequence__are_equal(const ros2_interface__msg__VehicleTask__Sequence * lhs, const ros2_interface__msg__VehicleTask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__VehicleTask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__VehicleTask__Sequence__copy(
  const ros2_interface__msg__VehicleTask__Sequence * input,
  ros2_interface__msg__VehicleTask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__VehicleTask);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__VehicleTask * data =
      (ros2_interface__msg__VehicleTask *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__VehicleTask__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__VehicleTask__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__VehicleTask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

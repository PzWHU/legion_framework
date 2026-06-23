// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/JunctionInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/junction_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stop_line`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__JunctionInfo__init(ros2_interface__msg__JunctionInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // light_flag
  // light_color
  // light_remain_time
  // distance_to_stop
  // direction_flag
  // direction
  // distance_to_junction
  // stop_line
  if (!ros2_interface__msg__Point3D__Sequence__init(&msg->stop_line, 0)) {
    ros2_interface__msg__JunctionInfo__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__JunctionInfo__fini(ros2_interface__msg__JunctionInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  // light_flag
  // light_color
  // light_remain_time
  // distance_to_stop
  // direction_flag
  // direction
  // distance_to_junction
  // stop_line
  ros2_interface__msg__Point3D__Sequence__fini(&msg->stop_line);
}

bool
ros2_interface__msg__JunctionInfo__are_equal(const ros2_interface__msg__JunctionInfo * lhs, const ros2_interface__msg__JunctionInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // light_flag
  if (lhs->light_flag != rhs->light_flag) {
    return false;
  }
  // light_color
  if (lhs->light_color != rhs->light_color) {
    return false;
  }
  // light_remain_time
  if (lhs->light_remain_time != rhs->light_remain_time) {
    return false;
  }
  // distance_to_stop
  if (lhs->distance_to_stop != rhs->distance_to_stop) {
    return false;
  }
  // direction_flag
  if (lhs->direction_flag != rhs->direction_flag) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // distance_to_junction
  if (lhs->distance_to_junction != rhs->distance_to_junction) {
    return false;
  }
  // stop_line
  if (!ros2_interface__msg__Point3D__Sequence__are_equal(
      &(lhs->stop_line), &(rhs->stop_line)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__JunctionInfo__copy(
  const ros2_interface__msg__JunctionInfo * input,
  ros2_interface__msg__JunctionInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // light_flag
  output->light_flag = input->light_flag;
  // light_color
  output->light_color = input->light_color;
  // light_remain_time
  output->light_remain_time = input->light_remain_time;
  // distance_to_stop
  output->distance_to_stop = input->distance_to_stop;
  // direction_flag
  output->direction_flag = input->direction_flag;
  // direction
  output->direction = input->direction;
  // distance_to_junction
  output->distance_to_junction = input->distance_to_junction;
  // stop_line
  if (!ros2_interface__msg__Point3D__Sequence__copy(
      &(input->stop_line), &(output->stop_line)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__JunctionInfo *
ros2_interface__msg__JunctionInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__JunctionInfo * msg = (ros2_interface__msg__JunctionInfo *)allocator.allocate(sizeof(ros2_interface__msg__JunctionInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__JunctionInfo));
  bool success = ros2_interface__msg__JunctionInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__JunctionInfo__destroy(ros2_interface__msg__JunctionInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__JunctionInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__JunctionInfo__Sequence__init(ros2_interface__msg__JunctionInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__JunctionInfo * data = NULL;

  if (size) {
    data = (ros2_interface__msg__JunctionInfo *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__JunctionInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__JunctionInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__JunctionInfo__fini(&data[i - 1]);
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
ros2_interface__msg__JunctionInfo__Sequence__fini(ros2_interface__msg__JunctionInfo__Sequence * array)
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
      ros2_interface__msg__JunctionInfo__fini(&array->data[i]);
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

ros2_interface__msg__JunctionInfo__Sequence *
ros2_interface__msg__JunctionInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__JunctionInfo__Sequence * array = (ros2_interface__msg__JunctionInfo__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__JunctionInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__JunctionInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__JunctionInfo__Sequence__destroy(ros2_interface__msg__JunctionInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__JunctionInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__JunctionInfo__Sequence__are_equal(const ros2_interface__msg__JunctionInfo__Sequence * lhs, const ros2_interface__msg__JunctionInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__JunctionInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__JunctionInfo__Sequence__copy(
  const ros2_interface__msg__JunctionInfo__Sequence * input,
  ros2_interface__msg__JunctionInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__JunctionInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__JunctionInfo * data =
      (ros2_interface__msg__JunctionInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__JunctionInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__JunctionInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__JunctionInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

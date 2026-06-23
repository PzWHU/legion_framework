// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/LaneInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/lane_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_points`
#include "ros2_interface/msg/detail/lane_point__functions.h"

bool
ros2_interface__msg__LaneInfo__init(ros2_interface__msg__LaneInfo * msg)
{
  if (!msg) {
    return false;
  }
  // priority
  // global_id
  // predecessor_id
  // successor_id
  // left_neighbor_id
  // right_neighbor_id
  // type
  // lane_points
  if (!ros2_interface__msg__LanePoint__Sequence__init(&msg->lane_points, 0)) {
    ros2_interface__msg__LaneInfo__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__LaneInfo__fini(ros2_interface__msg__LaneInfo * msg)
{
  if (!msg) {
    return;
  }
  // priority
  // global_id
  // predecessor_id
  // successor_id
  // left_neighbor_id
  // right_neighbor_id
  // type
  // lane_points
  ros2_interface__msg__LanePoint__Sequence__fini(&msg->lane_points);
}

bool
ros2_interface__msg__LaneInfo__are_equal(const ros2_interface__msg__LaneInfo * lhs, const ros2_interface__msg__LaneInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // global_id
  if (lhs->global_id != rhs->global_id) {
    return false;
  }
  // predecessor_id
  if (lhs->predecessor_id != rhs->predecessor_id) {
    return false;
  }
  // successor_id
  if (lhs->successor_id != rhs->successor_id) {
    return false;
  }
  // left_neighbor_id
  if (lhs->left_neighbor_id != rhs->left_neighbor_id) {
    return false;
  }
  // right_neighbor_id
  if (lhs->right_neighbor_id != rhs->right_neighbor_id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // lane_points
  if (!ros2_interface__msg__LanePoint__Sequence__are_equal(
      &(lhs->lane_points), &(rhs->lane_points)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__LaneInfo__copy(
  const ros2_interface__msg__LaneInfo * input,
  ros2_interface__msg__LaneInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // priority
  output->priority = input->priority;
  // global_id
  output->global_id = input->global_id;
  // predecessor_id
  output->predecessor_id = input->predecessor_id;
  // successor_id
  output->successor_id = input->successor_id;
  // left_neighbor_id
  output->left_neighbor_id = input->left_neighbor_id;
  // right_neighbor_id
  output->right_neighbor_id = input->right_neighbor_id;
  // type
  output->type = input->type;
  // lane_points
  if (!ros2_interface__msg__LanePoint__Sequence__copy(
      &(input->lane_points), &(output->lane_points)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__LaneInfo *
ros2_interface__msg__LaneInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneInfo * msg = (ros2_interface__msg__LaneInfo *)allocator.allocate(sizeof(ros2_interface__msg__LaneInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__LaneInfo));
  bool success = ros2_interface__msg__LaneInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__LaneInfo__destroy(ros2_interface__msg__LaneInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__LaneInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__LaneInfo__Sequence__init(ros2_interface__msg__LaneInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneInfo * data = NULL;

  if (size) {
    data = (ros2_interface__msg__LaneInfo *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__LaneInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__LaneInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__LaneInfo__fini(&data[i - 1]);
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
ros2_interface__msg__LaneInfo__Sequence__fini(ros2_interface__msg__LaneInfo__Sequence * array)
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
      ros2_interface__msg__LaneInfo__fini(&array->data[i]);
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

ros2_interface__msg__LaneInfo__Sequence *
ros2_interface__msg__LaneInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneInfo__Sequence * array = (ros2_interface__msg__LaneInfo__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__LaneInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__LaneInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__LaneInfo__Sequence__destroy(ros2_interface__msg__LaneInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__LaneInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__LaneInfo__Sequence__are_equal(const ros2_interface__msg__LaneInfo__Sequence * lhs, const ros2_interface__msg__LaneInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__LaneInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__LaneInfo__Sequence__copy(
  const ros2_interface__msg__LaneInfo__Sequence * input,
  ros2_interface__msg__LaneInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__LaneInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__LaneInfo * data =
      (ros2_interface__msg__LaneInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__LaneInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__LaneInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__LaneInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

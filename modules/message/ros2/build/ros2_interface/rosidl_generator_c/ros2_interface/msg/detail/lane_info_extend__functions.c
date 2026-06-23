// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/LaneInfoExtend.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/lane_info_extend__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `predecessor_ids`
// Member `successor_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `lane_points`
#include "ros2_interface/msg/detail/lane_point__functions.h"

bool
ros2_interface__msg__LaneInfoExtend__init(ros2_interface__msg__LaneInfoExtend * msg)
{
  if (!msg) {
    return false;
  }
  // priority
  // global_id
  // predecessor_ids
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->predecessor_ids, 0)) {
    ros2_interface__msg__LaneInfoExtend__fini(msg);
    return false;
  }
  // successor_ids
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->successor_ids, 0)) {
    ros2_interface__msg__LaneInfoExtend__fini(msg);
    return false;
  }
  // left_neighbor_id
  // right_neighbor_id
  // type
  // lane_points
  if (!ros2_interface__msg__LanePoint__Sequence__init(&msg->lane_points, 0)) {
    ros2_interface__msg__LaneInfoExtend__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__LaneInfoExtend__fini(ros2_interface__msg__LaneInfoExtend * msg)
{
  if (!msg) {
    return;
  }
  // priority
  // global_id
  // predecessor_ids
  rosidl_runtime_c__int64__Sequence__fini(&msg->predecessor_ids);
  // successor_ids
  rosidl_runtime_c__int64__Sequence__fini(&msg->successor_ids);
  // left_neighbor_id
  // right_neighbor_id
  // type
  // lane_points
  ros2_interface__msg__LanePoint__Sequence__fini(&msg->lane_points);
}

bool
ros2_interface__msg__LaneInfoExtend__are_equal(const ros2_interface__msg__LaneInfoExtend * lhs, const ros2_interface__msg__LaneInfoExtend * rhs)
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
  // predecessor_ids
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->predecessor_ids), &(rhs->predecessor_ids)))
  {
    return false;
  }
  // successor_ids
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->successor_ids), &(rhs->successor_ids)))
  {
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
ros2_interface__msg__LaneInfoExtend__copy(
  const ros2_interface__msg__LaneInfoExtend * input,
  ros2_interface__msg__LaneInfoExtend * output)
{
  if (!input || !output) {
    return false;
  }
  // priority
  output->priority = input->priority;
  // global_id
  output->global_id = input->global_id;
  // predecessor_ids
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->predecessor_ids), &(output->predecessor_ids)))
  {
    return false;
  }
  // successor_ids
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->successor_ids), &(output->successor_ids)))
  {
    return false;
  }
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

ros2_interface__msg__LaneInfoExtend *
ros2_interface__msg__LaneInfoExtend__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneInfoExtend * msg = (ros2_interface__msg__LaneInfoExtend *)allocator.allocate(sizeof(ros2_interface__msg__LaneInfoExtend), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__LaneInfoExtend));
  bool success = ros2_interface__msg__LaneInfoExtend__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__LaneInfoExtend__destroy(ros2_interface__msg__LaneInfoExtend * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__LaneInfoExtend__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__LaneInfoExtend__Sequence__init(ros2_interface__msg__LaneInfoExtend__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneInfoExtend * data = NULL;

  if (size) {
    data = (ros2_interface__msg__LaneInfoExtend *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__LaneInfoExtend), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__LaneInfoExtend__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__LaneInfoExtend__fini(&data[i - 1]);
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
ros2_interface__msg__LaneInfoExtend__Sequence__fini(ros2_interface__msg__LaneInfoExtend__Sequence * array)
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
      ros2_interface__msg__LaneInfoExtend__fini(&array->data[i]);
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

ros2_interface__msg__LaneInfoExtend__Sequence *
ros2_interface__msg__LaneInfoExtend__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneInfoExtend__Sequence * array = (ros2_interface__msg__LaneInfoExtend__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__LaneInfoExtend__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__LaneInfoExtend__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__LaneInfoExtend__Sequence__destroy(ros2_interface__msg__LaneInfoExtend__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__LaneInfoExtend__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__LaneInfoExtend__Sequence__are_equal(const ros2_interface__msg__LaneInfoExtend__Sequence * lhs, const ros2_interface__msg__LaneInfoExtend__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__LaneInfoExtend__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__LaneInfoExtend__Sequence__copy(
  const ros2_interface__msg__LaneInfoExtend__Sequence * input,
  ros2_interface__msg__LaneInfoExtend__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__LaneInfoExtend);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__LaneInfoExtend * data =
      (ros2_interface__msg__LaneInfoExtend *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__LaneInfoExtend__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__LaneInfoExtend__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__LaneInfoExtend__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

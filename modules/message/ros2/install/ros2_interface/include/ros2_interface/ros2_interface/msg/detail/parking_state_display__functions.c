// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/ParkingStateDisplay.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/parking_state_display__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ros2_interface__msg__ParkingStateDisplay__init(ros2_interface__msg__ParkingStateDisplay * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__ParkingStateDisplay__fini(msg);
    return false;
  }
  // parking_type
  // moves_counter
  // remian_distance
  // display_info
  // distance_to_leader_obj
  // state
  return true;
}

void
ros2_interface__msg__ParkingStateDisplay__fini(ros2_interface__msg__ParkingStateDisplay * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // parking_type
  // moves_counter
  // remian_distance
  // display_info
  // distance_to_leader_obj
  // state
}

bool
ros2_interface__msg__ParkingStateDisplay__are_equal(const ros2_interface__msg__ParkingStateDisplay * lhs, const ros2_interface__msg__ParkingStateDisplay * rhs)
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
  // parking_type
  if (lhs->parking_type != rhs->parking_type) {
    return false;
  }
  // moves_counter
  if (lhs->moves_counter != rhs->moves_counter) {
    return false;
  }
  // remian_distance
  if (lhs->remian_distance != rhs->remian_distance) {
    return false;
  }
  // display_info
  if (lhs->display_info != rhs->display_info) {
    return false;
  }
  // distance_to_leader_obj
  if (lhs->distance_to_leader_obj != rhs->distance_to_leader_obj) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__ParkingStateDisplay__copy(
  const ros2_interface__msg__ParkingStateDisplay * input,
  ros2_interface__msg__ParkingStateDisplay * output)
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
  // parking_type
  output->parking_type = input->parking_type;
  // moves_counter
  output->moves_counter = input->moves_counter;
  // remian_distance
  output->remian_distance = input->remian_distance;
  // display_info
  output->display_info = input->display_info;
  // distance_to_leader_obj
  output->distance_to_leader_obj = input->distance_to_leader_obj;
  // state
  output->state = input->state;
  return true;
}

ros2_interface__msg__ParkingStateDisplay *
ros2_interface__msg__ParkingStateDisplay__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ParkingStateDisplay * msg = (ros2_interface__msg__ParkingStateDisplay *)allocator.allocate(sizeof(ros2_interface__msg__ParkingStateDisplay), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__ParkingStateDisplay));
  bool success = ros2_interface__msg__ParkingStateDisplay__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__ParkingStateDisplay__destroy(ros2_interface__msg__ParkingStateDisplay * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__ParkingStateDisplay__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__ParkingStateDisplay__Sequence__init(ros2_interface__msg__ParkingStateDisplay__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ParkingStateDisplay * data = NULL;

  if (size) {
    data = (ros2_interface__msg__ParkingStateDisplay *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__ParkingStateDisplay), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__ParkingStateDisplay__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__ParkingStateDisplay__fini(&data[i - 1]);
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
ros2_interface__msg__ParkingStateDisplay__Sequence__fini(ros2_interface__msg__ParkingStateDisplay__Sequence * array)
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
      ros2_interface__msg__ParkingStateDisplay__fini(&array->data[i]);
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

ros2_interface__msg__ParkingStateDisplay__Sequence *
ros2_interface__msg__ParkingStateDisplay__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__ParkingStateDisplay__Sequence * array = (ros2_interface__msg__ParkingStateDisplay__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__ParkingStateDisplay__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__ParkingStateDisplay__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__ParkingStateDisplay__Sequence__destroy(ros2_interface__msg__ParkingStateDisplay__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__ParkingStateDisplay__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__ParkingStateDisplay__Sequence__are_equal(const ros2_interface__msg__ParkingStateDisplay__Sequence * lhs, const ros2_interface__msg__ParkingStateDisplay__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__ParkingStateDisplay__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__ParkingStateDisplay__Sequence__copy(
  const ros2_interface__msg__ParkingStateDisplay__Sequence * input,
  ros2_interface__msg__ParkingStateDisplay__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__ParkingStateDisplay);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__ParkingStateDisplay * data =
      (ros2_interface__msg__ParkingStateDisplay *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__ParkingStateDisplay__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__ParkingStateDisplay__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__ParkingStateDisplay__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

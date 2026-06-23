// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/RSSInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/rss_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__RSSInfo__init(ros2_interface__msg__RSSInfo * msg)
{
  if (!msg) {
    return false;
  }
  // is_rss_safe
  // cur_dist_lon
  // rss_safe_dist_lon
  // acc_lon_range_minimum
  // acc_lon_range_maximum
  // acc_lat_left_range_minimum
  // acc_lat_left_range_maximum
  // acc_lat_right_range_minimum
  // acc_lat_right_range_maximum
  return true;
}

void
ros2_interface__msg__RSSInfo__fini(ros2_interface__msg__RSSInfo * msg)
{
  if (!msg) {
    return;
  }
  // is_rss_safe
  // cur_dist_lon
  // rss_safe_dist_lon
  // acc_lon_range_minimum
  // acc_lon_range_maximum
  // acc_lat_left_range_minimum
  // acc_lat_left_range_maximum
  // acc_lat_right_range_minimum
  // acc_lat_right_range_maximum
}

bool
ros2_interface__msg__RSSInfo__are_equal(const ros2_interface__msg__RSSInfo * lhs, const ros2_interface__msg__RSSInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_rss_safe
  if (lhs->is_rss_safe != rhs->is_rss_safe) {
    return false;
  }
  // cur_dist_lon
  if (lhs->cur_dist_lon != rhs->cur_dist_lon) {
    return false;
  }
  // rss_safe_dist_lon
  if (lhs->rss_safe_dist_lon != rhs->rss_safe_dist_lon) {
    return false;
  }
  // acc_lon_range_minimum
  if (lhs->acc_lon_range_minimum != rhs->acc_lon_range_minimum) {
    return false;
  }
  // acc_lon_range_maximum
  if (lhs->acc_lon_range_maximum != rhs->acc_lon_range_maximum) {
    return false;
  }
  // acc_lat_left_range_minimum
  if (lhs->acc_lat_left_range_minimum != rhs->acc_lat_left_range_minimum) {
    return false;
  }
  // acc_lat_left_range_maximum
  if (lhs->acc_lat_left_range_maximum != rhs->acc_lat_left_range_maximum) {
    return false;
  }
  // acc_lat_right_range_minimum
  if (lhs->acc_lat_right_range_minimum != rhs->acc_lat_right_range_minimum) {
    return false;
  }
  // acc_lat_right_range_maximum
  if (lhs->acc_lat_right_range_maximum != rhs->acc_lat_right_range_maximum) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__RSSInfo__copy(
  const ros2_interface__msg__RSSInfo * input,
  ros2_interface__msg__RSSInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // is_rss_safe
  output->is_rss_safe = input->is_rss_safe;
  // cur_dist_lon
  output->cur_dist_lon = input->cur_dist_lon;
  // rss_safe_dist_lon
  output->rss_safe_dist_lon = input->rss_safe_dist_lon;
  // acc_lon_range_minimum
  output->acc_lon_range_minimum = input->acc_lon_range_minimum;
  // acc_lon_range_maximum
  output->acc_lon_range_maximum = input->acc_lon_range_maximum;
  // acc_lat_left_range_minimum
  output->acc_lat_left_range_minimum = input->acc_lat_left_range_minimum;
  // acc_lat_left_range_maximum
  output->acc_lat_left_range_maximum = input->acc_lat_left_range_maximum;
  // acc_lat_right_range_minimum
  output->acc_lat_right_range_minimum = input->acc_lat_right_range_minimum;
  // acc_lat_right_range_maximum
  output->acc_lat_right_range_maximum = input->acc_lat_right_range_maximum;
  return true;
}

ros2_interface__msg__RSSInfo *
ros2_interface__msg__RSSInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RSSInfo * msg = (ros2_interface__msg__RSSInfo *)allocator.allocate(sizeof(ros2_interface__msg__RSSInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__RSSInfo));
  bool success = ros2_interface__msg__RSSInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__RSSInfo__destroy(ros2_interface__msg__RSSInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__RSSInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__RSSInfo__Sequence__init(ros2_interface__msg__RSSInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RSSInfo * data = NULL;

  if (size) {
    data = (ros2_interface__msg__RSSInfo *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__RSSInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__RSSInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__RSSInfo__fini(&data[i - 1]);
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
ros2_interface__msg__RSSInfo__Sequence__fini(ros2_interface__msg__RSSInfo__Sequence * array)
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
      ros2_interface__msg__RSSInfo__fini(&array->data[i]);
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

ros2_interface__msg__RSSInfo__Sequence *
ros2_interface__msg__RSSInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__RSSInfo__Sequence * array = (ros2_interface__msg__RSSInfo__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__RSSInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__RSSInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__RSSInfo__Sequence__destroy(ros2_interface__msg__RSSInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__RSSInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__RSSInfo__Sequence__are_equal(const ros2_interface__msg__RSSInfo__Sequence * lhs, const ros2_interface__msg__RSSInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__RSSInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__RSSInfo__Sequence__copy(
  const ros2_interface__msg__RSSInfo__Sequence * input,
  ros2_interface__msg__RSSInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__RSSInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__RSSInfo * data =
      (ros2_interface__msg__RSSInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__RSSInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__RSSInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__RSSInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

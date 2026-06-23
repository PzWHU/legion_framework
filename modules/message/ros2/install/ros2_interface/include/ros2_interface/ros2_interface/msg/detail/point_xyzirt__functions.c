// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/PointXYZIRT.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/point_xyzirt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_interface__msg__PointXYZIRT__init(ros2_interface__msg__PointXYZIRT * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // intensity
  // ring_id
  // timestamp
  return true;
}

void
ros2_interface__msg__PointXYZIRT__fini(ros2_interface__msg__PointXYZIRT * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // intensity
  // ring_id
  // timestamp
}

bool
ros2_interface__msg__PointXYZIRT__are_equal(const ros2_interface__msg__PointXYZIRT * lhs, const ros2_interface__msg__PointXYZIRT * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // intensity
  if (lhs->intensity != rhs->intensity) {
    return false;
  }
  // ring_id
  if (lhs->ring_id != rhs->ring_id) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__PointXYZIRT__copy(
  const ros2_interface__msg__PointXYZIRT * input,
  ros2_interface__msg__PointXYZIRT * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // intensity
  output->intensity = input->intensity;
  // ring_id
  output->ring_id = input->ring_id;
  // timestamp
  output->timestamp = input->timestamp;
  return true;
}

ros2_interface__msg__PointXYZIRT *
ros2_interface__msg__PointXYZIRT__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PointXYZIRT * msg = (ros2_interface__msg__PointXYZIRT *)allocator.allocate(sizeof(ros2_interface__msg__PointXYZIRT), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__PointXYZIRT));
  bool success = ros2_interface__msg__PointXYZIRT__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__PointXYZIRT__destroy(ros2_interface__msg__PointXYZIRT * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__PointXYZIRT__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__PointXYZIRT__Sequence__init(ros2_interface__msg__PointXYZIRT__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PointXYZIRT * data = NULL;

  if (size) {
    data = (ros2_interface__msg__PointXYZIRT *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__PointXYZIRT), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__PointXYZIRT__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__PointXYZIRT__fini(&data[i - 1]);
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
ros2_interface__msg__PointXYZIRT__Sequence__fini(ros2_interface__msg__PointXYZIRT__Sequence * array)
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
      ros2_interface__msg__PointXYZIRT__fini(&array->data[i]);
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

ros2_interface__msg__PointXYZIRT__Sequence *
ros2_interface__msg__PointXYZIRT__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PointXYZIRT__Sequence * array = (ros2_interface__msg__PointXYZIRT__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__PointXYZIRT__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__PointXYZIRT__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__PointXYZIRT__Sequence__destroy(ros2_interface__msg__PointXYZIRT__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__PointXYZIRT__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__PointXYZIRT__Sequence__are_equal(const ros2_interface__msg__PointXYZIRT__Sequence * lhs, const ros2_interface__msg__PointXYZIRT__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__PointXYZIRT__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__PointXYZIRT__Sequence__copy(
  const ros2_interface__msg__PointXYZIRT__Sequence * input,
  ros2_interface__msg__PointXYZIRT__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__PointXYZIRT);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__PointXYZIRT * data =
      (ros2_interface__msg__PointXYZIRT *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__PointXYZIRT__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__PointXYZIRT__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__PointXYZIRT__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/GuideRoad.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/guide_road__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `curvature`
#include "ros2_interface/msg/detail/curvature_info__functions.h"

bool
ros2_interface__msg__GuideRoad__init(ros2_interface__msg__GuideRoad * msg)
{
  if (!msg) {
    return false;
  }
  // road_id
  // road_type
  // turn_type
  // avg_curvature
  // curvature_size
  // curvature
  if (!ros2_interface__msg__CurvatureInfo__Sequence__init(&msg->curvature, 0)) {
    ros2_interface__msg__GuideRoad__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__GuideRoad__fini(ros2_interface__msg__GuideRoad * msg)
{
  if (!msg) {
    return;
  }
  // road_id
  // road_type
  // turn_type
  // avg_curvature
  // curvature_size
  // curvature
  ros2_interface__msg__CurvatureInfo__Sequence__fini(&msg->curvature);
}

bool
ros2_interface__msg__GuideRoad__are_equal(const ros2_interface__msg__GuideRoad * lhs, const ros2_interface__msg__GuideRoad * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // road_id
  if (lhs->road_id != rhs->road_id) {
    return false;
  }
  // road_type
  if (lhs->road_type != rhs->road_type) {
    return false;
  }
  // turn_type
  if (lhs->turn_type != rhs->turn_type) {
    return false;
  }
  // avg_curvature
  if (lhs->avg_curvature != rhs->avg_curvature) {
    return false;
  }
  // curvature_size
  if (lhs->curvature_size != rhs->curvature_size) {
    return false;
  }
  // curvature
  if (!ros2_interface__msg__CurvatureInfo__Sequence__are_equal(
      &(lhs->curvature), &(rhs->curvature)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__GuideRoad__copy(
  const ros2_interface__msg__GuideRoad * input,
  ros2_interface__msg__GuideRoad * output)
{
  if (!input || !output) {
    return false;
  }
  // road_id
  output->road_id = input->road_id;
  // road_type
  output->road_type = input->road_type;
  // turn_type
  output->turn_type = input->turn_type;
  // avg_curvature
  output->avg_curvature = input->avg_curvature;
  // curvature_size
  output->curvature_size = input->curvature_size;
  // curvature
  if (!ros2_interface__msg__CurvatureInfo__Sequence__copy(
      &(input->curvature), &(output->curvature)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__GuideRoad *
ros2_interface__msg__GuideRoad__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__GuideRoad * msg = (ros2_interface__msg__GuideRoad *)allocator.allocate(sizeof(ros2_interface__msg__GuideRoad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__GuideRoad));
  bool success = ros2_interface__msg__GuideRoad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__GuideRoad__destroy(ros2_interface__msg__GuideRoad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__GuideRoad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__GuideRoad__Sequence__init(ros2_interface__msg__GuideRoad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__GuideRoad * data = NULL;

  if (size) {
    data = (ros2_interface__msg__GuideRoad *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__GuideRoad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__GuideRoad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__GuideRoad__fini(&data[i - 1]);
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
ros2_interface__msg__GuideRoad__Sequence__fini(ros2_interface__msg__GuideRoad__Sequence * array)
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
      ros2_interface__msg__GuideRoad__fini(&array->data[i]);
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

ros2_interface__msg__GuideRoad__Sequence *
ros2_interface__msg__GuideRoad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__GuideRoad__Sequence * array = (ros2_interface__msg__GuideRoad__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__GuideRoad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__GuideRoad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__GuideRoad__Sequence__destroy(ros2_interface__msg__GuideRoad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__GuideRoad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__GuideRoad__Sequence__are_equal(const ros2_interface__msg__GuideRoad__Sequence * lhs, const ros2_interface__msg__GuideRoad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__GuideRoad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__GuideRoad__Sequence__copy(
  const ros2_interface__msg__GuideRoad__Sequence * input,
  ros2_interface__msg__GuideRoad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__GuideRoad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__GuideRoad * data =
      (ros2_interface__msg__GuideRoad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__GuideRoad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__GuideRoad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__GuideRoad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

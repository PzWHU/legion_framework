// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/LanePoint.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/lane_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__LanePoint__init(ros2_interface__msg__LanePoint * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!ros2_interface__msg__Point3D__init(&msg->point)) {
    ros2_interface__msg__LanePoint__fini(msg);
    return false;
  }
  // theta
  // mileage
  // limit_speed
  // left_road_width
  // right_road_width
  // left_line_type
  // right_line_type
  return true;
}

void
ros2_interface__msg__LanePoint__fini(ros2_interface__msg__LanePoint * msg)
{
  if (!msg) {
    return;
  }
  // point
  ros2_interface__msg__Point3D__fini(&msg->point);
  // theta
  // mileage
  // limit_speed
  // left_road_width
  // right_road_width
  // left_line_type
  // right_line_type
}

bool
ros2_interface__msg__LanePoint__are_equal(const ros2_interface__msg__LanePoint * lhs, const ros2_interface__msg__LanePoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // mileage
  if (lhs->mileage != rhs->mileage) {
    return false;
  }
  // limit_speed
  if (lhs->limit_speed != rhs->limit_speed) {
    return false;
  }
  // left_road_width
  if (lhs->left_road_width != rhs->left_road_width) {
    return false;
  }
  // right_road_width
  if (lhs->right_road_width != rhs->right_road_width) {
    return false;
  }
  // left_line_type
  if (lhs->left_line_type != rhs->left_line_type) {
    return false;
  }
  // right_line_type
  if (lhs->right_line_type != rhs->right_line_type) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__LanePoint__copy(
  const ros2_interface__msg__LanePoint * input,
  ros2_interface__msg__LanePoint * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!ros2_interface__msg__Point3D__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // theta
  output->theta = input->theta;
  // mileage
  output->mileage = input->mileage;
  // limit_speed
  output->limit_speed = input->limit_speed;
  // left_road_width
  output->left_road_width = input->left_road_width;
  // right_road_width
  output->right_road_width = input->right_road_width;
  // left_line_type
  output->left_line_type = input->left_line_type;
  // right_line_type
  output->right_line_type = input->right_line_type;
  return true;
}

ros2_interface__msg__LanePoint *
ros2_interface__msg__LanePoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LanePoint * msg = (ros2_interface__msg__LanePoint *)allocator.allocate(sizeof(ros2_interface__msg__LanePoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__LanePoint));
  bool success = ros2_interface__msg__LanePoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__LanePoint__destroy(ros2_interface__msg__LanePoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__LanePoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__LanePoint__Sequence__init(ros2_interface__msg__LanePoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LanePoint * data = NULL;

  if (size) {
    data = (ros2_interface__msg__LanePoint *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__LanePoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__LanePoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__LanePoint__fini(&data[i - 1]);
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
ros2_interface__msg__LanePoint__Sequence__fini(ros2_interface__msg__LanePoint__Sequence * array)
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
      ros2_interface__msg__LanePoint__fini(&array->data[i]);
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

ros2_interface__msg__LanePoint__Sequence *
ros2_interface__msg__LanePoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LanePoint__Sequence * array = (ros2_interface__msg__LanePoint__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__LanePoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__LanePoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__LanePoint__Sequence__destroy(ros2_interface__msg__LanePoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__LanePoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__LanePoint__Sequence__are_equal(const ros2_interface__msg__LanePoint__Sequence * lhs, const ros2_interface__msg__LanePoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__LanePoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__LanePoint__Sequence__copy(
  const ros2_interface__msg__LanePoint__Sequence * input,
  ros2_interface__msg__LanePoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__LanePoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__LanePoint * data =
      (ros2_interface__msg__LanePoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__LanePoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__LanePoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__LanePoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

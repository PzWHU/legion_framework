// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/PointCloud.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `point`
#include "ros2_interface/msg/detail/point_xyzirt__functions.h"

bool
ros2_interface__msg__PointCloud__init(ros2_interface__msg__PointCloud * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__PointCloud__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    ros2_interface__msg__PointCloud__fini(msg);
    return false;
  }
  // is_dense
  // point
  if (!ros2_interface__msg__PointXYZIRT__Sequence__init(&msg->point, 0)) {
    ros2_interface__msg__PointCloud__fini(msg);
    return false;
  }
  // measurement_time
  // width
  // height
  return true;
}

void
ros2_interface__msg__PointCloud__fini(ros2_interface__msg__PointCloud * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // is_dense
  // point
  ros2_interface__msg__PointXYZIRT__Sequence__fini(&msg->point);
  // measurement_time
  // width
  // height
}

bool
ros2_interface__msg__PointCloud__are_equal(const ros2_interface__msg__PointCloud * lhs, const ros2_interface__msg__PointCloud * rhs)
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
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // is_dense
  if (lhs->is_dense != rhs->is_dense) {
    return false;
  }
  // point
  if (!ros2_interface__msg__PointXYZIRT__Sequence__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // measurement_time
  if (lhs->measurement_time != rhs->measurement_time) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__PointCloud__copy(
  const ros2_interface__msg__PointCloud * input,
  ros2_interface__msg__PointCloud * output)
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
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // is_dense
  output->is_dense = input->is_dense;
  // point
  if (!ros2_interface__msg__PointXYZIRT__Sequence__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // measurement_time
  output->measurement_time = input->measurement_time;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  return true;
}

ros2_interface__msg__PointCloud *
ros2_interface__msg__PointCloud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PointCloud * msg = (ros2_interface__msg__PointCloud *)allocator.allocate(sizeof(ros2_interface__msg__PointCloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__PointCloud));
  bool success = ros2_interface__msg__PointCloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__PointCloud__destroy(ros2_interface__msg__PointCloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__PointCloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__PointCloud__Sequence__init(ros2_interface__msg__PointCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PointCloud * data = NULL;

  if (size) {
    data = (ros2_interface__msg__PointCloud *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__PointCloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__PointCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__PointCloud__fini(&data[i - 1]);
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
ros2_interface__msg__PointCloud__Sequence__fini(ros2_interface__msg__PointCloud__Sequence * array)
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
      ros2_interface__msg__PointCloud__fini(&array->data[i]);
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

ros2_interface__msg__PointCloud__Sequence *
ros2_interface__msg__PointCloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PointCloud__Sequence * array = (ros2_interface__msg__PointCloud__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__PointCloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__PointCloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__PointCloud__Sequence__destroy(ros2_interface__msg__PointCloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__PointCloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__PointCloud__Sequence__are_equal(const ros2_interface__msg__PointCloud__Sequence * lhs, const ros2_interface__msg__PointCloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__PointCloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__PointCloud__Sequence__copy(
  const ros2_interface__msg__PointCloud__Sequence * input,
  ros2_interface__msg__PointCloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__PointCloud);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__PointCloud * data =
      (ros2_interface__msg__PointCloud *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__PointCloud__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__PointCloud__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__PointCloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

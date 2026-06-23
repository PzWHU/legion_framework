// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/HMIParkingInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/hmi_parking_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `center_point_of_parking`
#include "ros2_interface/msg/detail/point3_d__functions.h"
// Member `polygon`
#include "ros2_interface/msg/detail/polygon3_d__functions.h"

bool
ros2_interface__msg__HMIParkingInfo__init(ros2_interface__msg__HMIParkingInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__HMIParkingInfo__fini(msg);
    return false;
  }
  // parking_space_id
  // parking_type
  // parking_status
  // center_point_of_parking
  if (!ros2_interface__msg__Point3D__init(&msg->center_point_of_parking)) {
    ros2_interface__msg__HMIParkingInfo__fini(msg);
    return false;
  }
  // theta
  // width
  // length
  // is_custom_parking
  // polygon
  if (!ros2_interface__msg__Polygon3D__init(&msg->polygon)) {
    ros2_interface__msg__HMIParkingInfo__fini(msg);
    return false;
  }
  // parking_source_type
  return true;
}

void
ros2_interface__msg__HMIParkingInfo__fini(ros2_interface__msg__HMIParkingInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // parking_space_id
  // parking_type
  // parking_status
  // center_point_of_parking
  ros2_interface__msg__Point3D__fini(&msg->center_point_of_parking);
  // theta
  // width
  // length
  // is_custom_parking
  // polygon
  ros2_interface__msg__Polygon3D__fini(&msg->polygon);
  // parking_source_type
}

bool
ros2_interface__msg__HMIParkingInfo__are_equal(const ros2_interface__msg__HMIParkingInfo * lhs, const ros2_interface__msg__HMIParkingInfo * rhs)
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
  // parking_space_id
  if (lhs->parking_space_id != rhs->parking_space_id) {
    return false;
  }
  // parking_type
  if (lhs->parking_type != rhs->parking_type) {
    return false;
  }
  // parking_status
  if (lhs->parking_status != rhs->parking_status) {
    return false;
  }
  // center_point_of_parking
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->center_point_of_parking), &(rhs->center_point_of_parking)))
  {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // is_custom_parking
  if (lhs->is_custom_parking != rhs->is_custom_parking) {
    return false;
  }
  // polygon
  if (!ros2_interface__msg__Polygon3D__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  // parking_source_type
  if (lhs->parking_source_type != rhs->parking_source_type) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__HMIParkingInfo__copy(
  const ros2_interface__msg__HMIParkingInfo * input,
  ros2_interface__msg__HMIParkingInfo * output)
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
  // parking_space_id
  output->parking_space_id = input->parking_space_id;
  // parking_type
  output->parking_type = input->parking_type;
  // parking_status
  output->parking_status = input->parking_status;
  // center_point_of_parking
  if (!ros2_interface__msg__Point3D__copy(
      &(input->center_point_of_parking), &(output->center_point_of_parking)))
  {
    return false;
  }
  // theta
  output->theta = input->theta;
  // width
  output->width = input->width;
  // length
  output->length = input->length;
  // is_custom_parking
  output->is_custom_parking = input->is_custom_parking;
  // polygon
  if (!ros2_interface__msg__Polygon3D__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  // parking_source_type
  output->parking_source_type = input->parking_source_type;
  return true;
}

ros2_interface__msg__HMIParkingInfo *
ros2_interface__msg__HMIParkingInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIParkingInfo * msg = (ros2_interface__msg__HMIParkingInfo *)allocator.allocate(sizeof(ros2_interface__msg__HMIParkingInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__HMIParkingInfo));
  bool success = ros2_interface__msg__HMIParkingInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__HMIParkingInfo__destroy(ros2_interface__msg__HMIParkingInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__HMIParkingInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__HMIParkingInfo__Sequence__init(ros2_interface__msg__HMIParkingInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIParkingInfo * data = NULL;

  if (size) {
    data = (ros2_interface__msg__HMIParkingInfo *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__HMIParkingInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__HMIParkingInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__HMIParkingInfo__fini(&data[i - 1]);
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
ros2_interface__msg__HMIParkingInfo__Sequence__fini(ros2_interface__msg__HMIParkingInfo__Sequence * array)
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
      ros2_interface__msg__HMIParkingInfo__fini(&array->data[i]);
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

ros2_interface__msg__HMIParkingInfo__Sequence *
ros2_interface__msg__HMIParkingInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIParkingInfo__Sequence * array = (ros2_interface__msg__HMIParkingInfo__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__HMIParkingInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__HMIParkingInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__HMIParkingInfo__Sequence__destroy(ros2_interface__msg__HMIParkingInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__HMIParkingInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__HMIParkingInfo__Sequence__are_equal(const ros2_interface__msg__HMIParkingInfo__Sequence * lhs, const ros2_interface__msg__HMIParkingInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__HMIParkingInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__HMIParkingInfo__Sequence__copy(
  const ros2_interface__msg__HMIParkingInfo__Sequence * input,
  ros2_interface__msg__HMIParkingInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__HMIParkingInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__HMIParkingInfo * data =
      (ros2_interface__msg__HMIParkingInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__HMIParkingInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__HMIParkingInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__HMIParkingInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

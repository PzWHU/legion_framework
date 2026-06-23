// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/HMIObstacle.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/hmi_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center_pos_vehicle`
// Member `center_pos_abs`
// Member `points`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__HMIObstacle__init(ros2_interface__msg__HMIObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // center_pos_vehicle
  if (!ros2_interface__msg__Point3D__init(&msg->center_pos_vehicle)) {
    ros2_interface__msg__HMIObstacle__fini(msg);
    return false;
  }
  // center_pos_abs
  if (!ros2_interface__msg__Point3D__init(&msg->center_pos_abs)) {
    ros2_interface__msg__HMIObstacle__fini(msg);
    return false;
  }
  // theta_vehicle
  // theta_abs
  // length
  // width
  // height
  // type
  // confidence
  // confidence_type
  // sub_type
  // points
  if (!ros2_interface__msg__Point3D__Sequence__init(&msg->points, 0)) {
    ros2_interface__msg__HMIObstacle__fini(msg);
    return false;
  }
  // cipv_flag
  // fusion_type
  return true;
}

void
ros2_interface__msg__HMIObstacle__fini(ros2_interface__msg__HMIObstacle * msg)
{
  if (!msg) {
    return;
  }
  // id
  // center_pos_vehicle
  ros2_interface__msg__Point3D__fini(&msg->center_pos_vehicle);
  // center_pos_abs
  ros2_interface__msg__Point3D__fini(&msg->center_pos_abs);
  // theta_vehicle
  // theta_abs
  // length
  // width
  // height
  // type
  // confidence
  // confidence_type
  // sub_type
  // points
  ros2_interface__msg__Point3D__Sequence__fini(&msg->points);
  // cipv_flag
  // fusion_type
}

bool
ros2_interface__msg__HMIObstacle__are_equal(const ros2_interface__msg__HMIObstacle * lhs, const ros2_interface__msg__HMIObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // center_pos_vehicle
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->center_pos_vehicle), &(rhs->center_pos_vehicle)))
  {
    return false;
  }
  // center_pos_abs
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->center_pos_abs), &(rhs->center_pos_abs)))
  {
    return false;
  }
  // theta_vehicle
  if (lhs->theta_vehicle != rhs->theta_vehicle) {
    return false;
  }
  // theta_abs
  if (lhs->theta_abs != rhs->theta_abs) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
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
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // confidence_type
  if (lhs->confidence_type != rhs->confidence_type) {
    return false;
  }
  // sub_type
  if (lhs->sub_type != rhs->sub_type) {
    return false;
  }
  // points
  if (!ros2_interface__msg__Point3D__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // cipv_flag
  if (lhs->cipv_flag != rhs->cipv_flag) {
    return false;
  }
  // fusion_type
  if (lhs->fusion_type != rhs->fusion_type) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__HMIObstacle__copy(
  const ros2_interface__msg__HMIObstacle * input,
  ros2_interface__msg__HMIObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // center_pos_vehicle
  if (!ros2_interface__msg__Point3D__copy(
      &(input->center_pos_vehicle), &(output->center_pos_vehicle)))
  {
    return false;
  }
  // center_pos_abs
  if (!ros2_interface__msg__Point3D__copy(
      &(input->center_pos_abs), &(output->center_pos_abs)))
  {
    return false;
  }
  // theta_vehicle
  output->theta_vehicle = input->theta_vehicle;
  // theta_abs
  output->theta_abs = input->theta_abs;
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // type
  output->type = input->type;
  // confidence
  output->confidence = input->confidence;
  // confidence_type
  output->confidence_type = input->confidence_type;
  // sub_type
  output->sub_type = input->sub_type;
  // points
  if (!ros2_interface__msg__Point3D__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // cipv_flag
  output->cipv_flag = input->cipv_flag;
  // fusion_type
  output->fusion_type = input->fusion_type;
  return true;
}

ros2_interface__msg__HMIObstacle *
ros2_interface__msg__HMIObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIObstacle * msg = (ros2_interface__msg__HMIObstacle *)allocator.allocate(sizeof(ros2_interface__msg__HMIObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__HMIObstacle));
  bool success = ros2_interface__msg__HMIObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__HMIObstacle__destroy(ros2_interface__msg__HMIObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__HMIObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__HMIObstacle__Sequence__init(ros2_interface__msg__HMIObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIObstacle * data = NULL;

  if (size) {
    data = (ros2_interface__msg__HMIObstacle *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__HMIObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__HMIObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__HMIObstacle__fini(&data[i - 1]);
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
ros2_interface__msg__HMIObstacle__Sequence__fini(ros2_interface__msg__HMIObstacle__Sequence * array)
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
      ros2_interface__msg__HMIObstacle__fini(&array->data[i]);
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

ros2_interface__msg__HMIObstacle__Sequence *
ros2_interface__msg__HMIObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__HMIObstacle__Sequence * array = (ros2_interface__msg__HMIObstacle__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__HMIObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__HMIObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__HMIObstacle__Sequence__destroy(ros2_interface__msg__HMIObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__HMIObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__HMIObstacle__Sequence__are_equal(const ros2_interface__msg__HMIObstacle__Sequence * lhs, const ros2_interface__msg__HMIObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__HMIObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__HMIObstacle__Sequence__copy(
  const ros2_interface__msg__HMIObstacle__Sequence * input,
  ros2_interface__msg__HMIObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__HMIObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__HMIObstacle * data =
      (ros2_interface__msg__HMIObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__HMIObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__HMIObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__HMIObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

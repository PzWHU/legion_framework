// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Imu.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `orientation`
#include "ros2_interface/msg/detail/quaternion__functions.h"
// Member `orientation_covariance`
// Member `angular_velocity_covariance`
// Member `linear_acceleration_covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__Imu__init(ros2_interface__msg__Imu * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__Imu__fini(msg);
    return false;
  }
  // is_valid
  // orientation
  if (!ros2_interface__msg__Quaternion__init(&msg->orientation)) {
    ros2_interface__msg__Imu__fini(msg);
    return false;
  }
  // orientation_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->orientation_covariance, 0)) {
    ros2_interface__msg__Imu__fini(msg);
    return false;
  }
  // angular_velocity
  if (!ros2_interface__msg__Point3D__init(&msg->angular_velocity)) {
    ros2_interface__msg__Imu__fini(msg);
    return false;
  }
  // angular_velocity_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->angular_velocity_covariance, 0)) {
    ros2_interface__msg__Imu__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!ros2_interface__msg__Point3D__init(&msg->linear_acceleration)) {
    ros2_interface__msg__Imu__fini(msg);
    return false;
  }
  // linear_acceleration_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->linear_acceleration_covariance, 0)) {
    ros2_interface__msg__Imu__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__Imu__fini(ros2_interface__msg__Imu * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_valid
  // orientation
  ros2_interface__msg__Quaternion__fini(&msg->orientation);
  // orientation_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->orientation_covariance);
  // angular_velocity
  ros2_interface__msg__Point3D__fini(&msg->angular_velocity);
  // angular_velocity_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->angular_velocity_covariance);
  // linear_acceleration
  ros2_interface__msg__Point3D__fini(&msg->linear_acceleration);
  // linear_acceleration_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->linear_acceleration_covariance);
}

bool
ros2_interface__msg__Imu__are_equal(const ros2_interface__msg__Imu * lhs, const ros2_interface__msg__Imu * rhs)
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
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  // orientation
  if (!ros2_interface__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // orientation_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->orientation_covariance), &(rhs->orientation_covariance)))
  {
    return false;
  }
  // angular_velocity
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // angular_velocity_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->angular_velocity_covariance), &(rhs->angular_velocity_covariance)))
  {
    return false;
  }
  // linear_acceleration
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // linear_acceleration_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->linear_acceleration_covariance), &(rhs->linear_acceleration_covariance)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Imu__copy(
  const ros2_interface__msg__Imu * input,
  ros2_interface__msg__Imu * output)
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
  // is_valid
  output->is_valid = input->is_valid;
  // orientation
  if (!ros2_interface__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // orientation_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->orientation_covariance), &(output->orientation_covariance)))
  {
    return false;
  }
  // angular_velocity
  if (!ros2_interface__msg__Point3D__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // angular_velocity_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->angular_velocity_covariance), &(output->angular_velocity_covariance)))
  {
    return false;
  }
  // linear_acceleration
  if (!ros2_interface__msg__Point3D__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // linear_acceleration_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->linear_acceleration_covariance), &(output->linear_acceleration_covariance)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__Imu *
ros2_interface__msg__Imu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Imu * msg = (ros2_interface__msg__Imu *)allocator.allocate(sizeof(ros2_interface__msg__Imu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Imu));
  bool success = ros2_interface__msg__Imu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Imu__destroy(ros2_interface__msg__Imu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Imu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Imu__Sequence__init(ros2_interface__msg__Imu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Imu * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Imu *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Imu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Imu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Imu__fini(&data[i - 1]);
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
ros2_interface__msg__Imu__Sequence__fini(ros2_interface__msg__Imu__Sequence * array)
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
      ros2_interface__msg__Imu__fini(&array->data[i]);
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

ros2_interface__msg__Imu__Sequence *
ros2_interface__msg__Imu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Imu__Sequence * array = (ros2_interface__msg__Imu__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Imu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Imu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Imu__Sequence__destroy(ros2_interface__msg__Imu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Imu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Imu__Sequence__are_equal(const ros2_interface__msg__Imu__Sequence * lhs, const ros2_interface__msg__Imu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Imu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Imu__Sequence__copy(
  const ros2_interface__msg__Imu__Sequence * input,
  ros2_interface__msg__Imu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Imu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Imu * data =
      (ros2_interface__msg__Imu *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Imu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Imu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Imu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

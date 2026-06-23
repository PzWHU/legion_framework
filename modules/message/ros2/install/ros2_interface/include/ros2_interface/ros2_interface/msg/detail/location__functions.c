// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Location.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "ros2_interface/msg/detail/point_llh__functions.h"
// Member `linear_velocity`
// Member `linear_acceleration`
// Member `angular_velocity`
// Member `position_std_dev`
// Member `orientation_std_dev`
// Member `linear_velocity_std_dev`
// Member `linear_acceleration_std_dev`
// Member `angular_velocity_std_dev`
#include "ros2_interface/msg/detail/point3_d__functions.h"
// Member `utm_position`
// Member `utm_position_next`
#include "ros2_interface/msg/detail/point_enu__functions.h"

bool
ros2_interface__msg__Location__init(ros2_interface__msg__Location * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // position
  if (!ros2_interface__msg__PointLLH__init(&msg->position)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // pitch
  // roll
  // heading
  // linear_velocity
  if (!ros2_interface__msg__Point3D__init(&msg->linear_velocity)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!ros2_interface__msg__Point3D__init(&msg->linear_acceleration)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // angular_velocity
  if (!ros2_interface__msg__Point3D__init(&msg->angular_velocity)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // rtk_flag
  // odom_type
  // auxiliary_type
  // location_valid_flag
  // origin_lat
  // origin_lon
  // utm_position
  if (!ros2_interface__msg__PointENU__init(&msg->utm_position)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // change_origin_flag
  // utm_position_next
  if (!ros2_interface__msg__PointENU__init(&msg->utm_position_next)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // position_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->position_std_dev)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // orientation_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->orientation_std_dev)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // linear_velocity_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->linear_velocity_std_dev)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // linear_acceleration_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->linear_acceleration_std_dev)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  // angular_velocity_std_dev
  if (!ros2_interface__msg__Point3D__init(&msg->angular_velocity_std_dev)) {
    ros2_interface__msg__Location__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__Location__fini(ros2_interface__msg__Location * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  ros2_interface__msg__PointLLH__fini(&msg->position);
  // pitch
  // roll
  // heading
  // linear_velocity
  ros2_interface__msg__Point3D__fini(&msg->linear_velocity);
  // linear_acceleration
  ros2_interface__msg__Point3D__fini(&msg->linear_acceleration);
  // angular_velocity
  ros2_interface__msg__Point3D__fini(&msg->angular_velocity);
  // rtk_flag
  // odom_type
  // auxiliary_type
  // location_valid_flag
  // origin_lat
  // origin_lon
  // utm_position
  ros2_interface__msg__PointENU__fini(&msg->utm_position);
  // change_origin_flag
  // utm_position_next
  ros2_interface__msg__PointENU__fini(&msg->utm_position_next);
  // position_std_dev
  ros2_interface__msg__Point3D__fini(&msg->position_std_dev);
  // orientation_std_dev
  ros2_interface__msg__Point3D__fini(&msg->orientation_std_dev);
  // linear_velocity_std_dev
  ros2_interface__msg__Point3D__fini(&msg->linear_velocity_std_dev);
  // linear_acceleration_std_dev
  ros2_interface__msg__Point3D__fini(&msg->linear_acceleration_std_dev);
  // angular_velocity_std_dev
  ros2_interface__msg__Point3D__fini(&msg->angular_velocity_std_dev);
}

bool
ros2_interface__msg__Location__are_equal(const ros2_interface__msg__Location * lhs, const ros2_interface__msg__Location * rhs)
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
  // position
  if (!ros2_interface__msg__PointLLH__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // linear_velocity
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->linear_velocity), &(rhs->linear_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // rtk_flag
  if (lhs->rtk_flag != rhs->rtk_flag) {
    return false;
  }
  // odom_type
  if (lhs->odom_type != rhs->odom_type) {
    return false;
  }
  // auxiliary_type
  if (lhs->auxiliary_type != rhs->auxiliary_type) {
    return false;
  }
  // location_valid_flag
  if (lhs->location_valid_flag != rhs->location_valid_flag) {
    return false;
  }
  // origin_lat
  if (lhs->origin_lat != rhs->origin_lat) {
    return false;
  }
  // origin_lon
  if (lhs->origin_lon != rhs->origin_lon) {
    return false;
  }
  // utm_position
  if (!ros2_interface__msg__PointENU__are_equal(
      &(lhs->utm_position), &(rhs->utm_position)))
  {
    return false;
  }
  // change_origin_flag
  if (lhs->change_origin_flag != rhs->change_origin_flag) {
    return false;
  }
  // utm_position_next
  if (!ros2_interface__msg__PointENU__are_equal(
      &(lhs->utm_position_next), &(rhs->utm_position_next)))
  {
    return false;
  }
  // position_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->position_std_dev), &(rhs->position_std_dev)))
  {
    return false;
  }
  // orientation_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->orientation_std_dev), &(rhs->orientation_std_dev)))
  {
    return false;
  }
  // linear_velocity_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->linear_velocity_std_dev), &(rhs->linear_velocity_std_dev)))
  {
    return false;
  }
  // linear_acceleration_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->linear_acceleration_std_dev), &(rhs->linear_acceleration_std_dev)))
  {
    return false;
  }
  // angular_velocity_std_dev
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->angular_velocity_std_dev), &(rhs->angular_velocity_std_dev)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Location__copy(
  const ros2_interface__msg__Location * input,
  ros2_interface__msg__Location * output)
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
  // position
  if (!ros2_interface__msg__PointLLH__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // heading
  output->heading = input->heading;
  // linear_velocity
  if (!ros2_interface__msg__Point3D__copy(
      &(input->linear_velocity), &(output->linear_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!ros2_interface__msg__Point3D__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!ros2_interface__msg__Point3D__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // rtk_flag
  output->rtk_flag = input->rtk_flag;
  // odom_type
  output->odom_type = input->odom_type;
  // auxiliary_type
  output->auxiliary_type = input->auxiliary_type;
  // location_valid_flag
  output->location_valid_flag = input->location_valid_flag;
  // origin_lat
  output->origin_lat = input->origin_lat;
  // origin_lon
  output->origin_lon = input->origin_lon;
  // utm_position
  if (!ros2_interface__msg__PointENU__copy(
      &(input->utm_position), &(output->utm_position)))
  {
    return false;
  }
  // change_origin_flag
  output->change_origin_flag = input->change_origin_flag;
  // utm_position_next
  if (!ros2_interface__msg__PointENU__copy(
      &(input->utm_position_next), &(output->utm_position_next)))
  {
    return false;
  }
  // position_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->position_std_dev), &(output->position_std_dev)))
  {
    return false;
  }
  // orientation_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->orientation_std_dev), &(output->orientation_std_dev)))
  {
    return false;
  }
  // linear_velocity_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->linear_velocity_std_dev), &(output->linear_velocity_std_dev)))
  {
    return false;
  }
  // linear_acceleration_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->linear_acceleration_std_dev), &(output->linear_acceleration_std_dev)))
  {
    return false;
  }
  // angular_velocity_std_dev
  if (!ros2_interface__msg__Point3D__copy(
      &(input->angular_velocity_std_dev), &(output->angular_velocity_std_dev)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__Location *
ros2_interface__msg__Location__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Location * msg = (ros2_interface__msg__Location *)allocator.allocate(sizeof(ros2_interface__msg__Location), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Location));
  bool success = ros2_interface__msg__Location__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Location__destroy(ros2_interface__msg__Location * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Location__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Location__Sequence__init(ros2_interface__msg__Location__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Location * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Location *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Location), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Location__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Location__fini(&data[i - 1]);
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
ros2_interface__msg__Location__Sequence__fini(ros2_interface__msg__Location__Sequence * array)
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
      ros2_interface__msg__Location__fini(&array->data[i]);
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

ros2_interface__msg__Location__Sequence *
ros2_interface__msg__Location__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Location__Sequence * array = (ros2_interface__msg__Location__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Location__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Location__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Location__Sequence__destroy(ros2_interface__msg__Location__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Location__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Location__Sequence__are_equal(const ros2_interface__msg__Location__Sequence * lhs, const ros2_interface__msg__Location__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Location__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Location__Sequence__copy(
  const ros2_interface__msg__Location__Sequence * input,
  ros2_interface__msg__Location__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Location);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Location * data =
      (ros2_interface__msg__Location *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Location__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Location__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Location__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

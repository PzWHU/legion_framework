// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Gnss.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/gnss__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `utm_position`
// Member `attitude`
// Member `sd_position`
// Member `sd_velocity`
// Member `sd_attitude`
// Member `linear_velocity`
// Member `attitude_dual`
// Member `sd_angle_dual`
#include "ros2_interface/msg/detail/point3_d__functions.h"

bool
ros2_interface__msg__Gnss__init(ros2_interface__msg__Gnss * msg)
{
  if (!msg) {
    return false;
  }
  // is_valid
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__Gnss__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // elevation
  // utm_position
  if (!ros2_interface__msg__Point3D__init(&msg->utm_position)) {
    ros2_interface__msg__Gnss__fini(msg);
    return false;
  }
  // utm_zone_num
  // utm_zone_char
  // attitude
  if (!ros2_interface__msg__Point3D__init(&msg->attitude)) {
    ros2_interface__msg__Gnss__fini(msg);
    return false;
  }
  // sd_position
  if (!ros2_interface__msg__Point3D__init(&msg->sd_position)) {
    ros2_interface__msg__Gnss__fini(msg);
    return false;
  }
  // sd_velocity
  if (!ros2_interface__msg__Point3D__init(&msg->sd_velocity)) {
    ros2_interface__msg__Gnss__fini(msg);
    return false;
  }
  // sd_attitude
  if (!ros2_interface__msg__Point3D__init(&msg->sd_attitude)) {
    ros2_interface__msg__Gnss__fini(msg);
    return false;
  }
  // second
  // sat_use_num
  // sat_in_view_num
  // solution_status
  // position_type
  // linear_velocity
  if (!ros2_interface__msg__Point3D__init(&msg->linear_velocity)) {
    ros2_interface__msg__Gnss__fini(msg);
    return false;
  }
  // attitude_dual
  if (!ros2_interface__msg__Point3D__init(&msg->attitude_dual)) {
    ros2_interface__msg__Gnss__fini(msg);
    return false;
  }
  // sd_angle_dual
  if (!ros2_interface__msg__Point3D__init(&msg->sd_angle_dual)) {
    ros2_interface__msg__Gnss__fini(msg);
    return false;
  }
  // base_line_length_dual
  // solution_status_dual
  // position_type_dual
  // solution_source_dual
  // cep68
  // cep95
  // p_dop
  // h_dop
  // v_dop
  return true;
}

void
ros2_interface__msg__Gnss__fini(ros2_interface__msg__Gnss * msg)
{
  if (!msg) {
    return;
  }
  // is_valid
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // latitude
  // longitude
  // elevation
  // utm_position
  ros2_interface__msg__Point3D__fini(&msg->utm_position);
  // utm_zone_num
  // utm_zone_char
  // attitude
  ros2_interface__msg__Point3D__fini(&msg->attitude);
  // sd_position
  ros2_interface__msg__Point3D__fini(&msg->sd_position);
  // sd_velocity
  ros2_interface__msg__Point3D__fini(&msg->sd_velocity);
  // sd_attitude
  ros2_interface__msg__Point3D__fini(&msg->sd_attitude);
  // second
  // sat_use_num
  // sat_in_view_num
  // solution_status
  // position_type
  // linear_velocity
  ros2_interface__msg__Point3D__fini(&msg->linear_velocity);
  // attitude_dual
  ros2_interface__msg__Point3D__fini(&msg->attitude_dual);
  // sd_angle_dual
  ros2_interface__msg__Point3D__fini(&msg->sd_angle_dual);
  // base_line_length_dual
  // solution_status_dual
  // position_type_dual
  // solution_source_dual
  // cep68
  // cep95
  // p_dop
  // h_dop
  // v_dop
}

bool
ros2_interface__msg__Gnss__are_equal(const ros2_interface__msg__Gnss * lhs, const ros2_interface__msg__Gnss * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // utm_position
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->utm_position), &(rhs->utm_position)))
  {
    return false;
  }
  // utm_zone_num
  if (lhs->utm_zone_num != rhs->utm_zone_num) {
    return false;
  }
  // utm_zone_char
  if (lhs->utm_zone_char != rhs->utm_zone_char) {
    return false;
  }
  // attitude
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->attitude), &(rhs->attitude)))
  {
    return false;
  }
  // sd_position
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->sd_position), &(rhs->sd_position)))
  {
    return false;
  }
  // sd_velocity
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->sd_velocity), &(rhs->sd_velocity)))
  {
    return false;
  }
  // sd_attitude
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->sd_attitude), &(rhs->sd_attitude)))
  {
    return false;
  }
  // second
  if (lhs->second != rhs->second) {
    return false;
  }
  // sat_use_num
  if (lhs->sat_use_num != rhs->sat_use_num) {
    return false;
  }
  // sat_in_view_num
  if (lhs->sat_in_view_num != rhs->sat_in_view_num) {
    return false;
  }
  // solution_status
  if (lhs->solution_status != rhs->solution_status) {
    return false;
  }
  // position_type
  if (lhs->position_type != rhs->position_type) {
    return false;
  }
  // linear_velocity
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->linear_velocity), &(rhs->linear_velocity)))
  {
    return false;
  }
  // attitude_dual
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->attitude_dual), &(rhs->attitude_dual)))
  {
    return false;
  }
  // sd_angle_dual
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->sd_angle_dual), &(rhs->sd_angle_dual)))
  {
    return false;
  }
  // base_line_length_dual
  if (lhs->base_line_length_dual != rhs->base_line_length_dual) {
    return false;
  }
  // solution_status_dual
  if (lhs->solution_status_dual != rhs->solution_status_dual) {
    return false;
  }
  // position_type_dual
  if (lhs->position_type_dual != rhs->position_type_dual) {
    return false;
  }
  // solution_source_dual
  if (lhs->solution_source_dual != rhs->solution_source_dual) {
    return false;
  }
  // cep68
  if (lhs->cep68 != rhs->cep68) {
    return false;
  }
  // cep95
  if (lhs->cep95 != rhs->cep95) {
    return false;
  }
  // p_dop
  if (lhs->p_dop != rhs->p_dop) {
    return false;
  }
  // h_dop
  if (lhs->h_dop != rhs->h_dop) {
    return false;
  }
  // v_dop
  if (lhs->v_dop != rhs->v_dop) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Gnss__copy(
  const ros2_interface__msg__Gnss * input,
  ros2_interface__msg__Gnss * output)
{
  if (!input || !output) {
    return false;
  }
  // is_valid
  output->is_valid = input->is_valid;
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // elevation
  output->elevation = input->elevation;
  // utm_position
  if (!ros2_interface__msg__Point3D__copy(
      &(input->utm_position), &(output->utm_position)))
  {
    return false;
  }
  // utm_zone_num
  output->utm_zone_num = input->utm_zone_num;
  // utm_zone_char
  output->utm_zone_char = input->utm_zone_char;
  // attitude
  if (!ros2_interface__msg__Point3D__copy(
      &(input->attitude), &(output->attitude)))
  {
    return false;
  }
  // sd_position
  if (!ros2_interface__msg__Point3D__copy(
      &(input->sd_position), &(output->sd_position)))
  {
    return false;
  }
  // sd_velocity
  if (!ros2_interface__msg__Point3D__copy(
      &(input->sd_velocity), &(output->sd_velocity)))
  {
    return false;
  }
  // sd_attitude
  if (!ros2_interface__msg__Point3D__copy(
      &(input->sd_attitude), &(output->sd_attitude)))
  {
    return false;
  }
  // second
  output->second = input->second;
  // sat_use_num
  output->sat_use_num = input->sat_use_num;
  // sat_in_view_num
  output->sat_in_view_num = input->sat_in_view_num;
  // solution_status
  output->solution_status = input->solution_status;
  // position_type
  output->position_type = input->position_type;
  // linear_velocity
  if (!ros2_interface__msg__Point3D__copy(
      &(input->linear_velocity), &(output->linear_velocity)))
  {
    return false;
  }
  // attitude_dual
  if (!ros2_interface__msg__Point3D__copy(
      &(input->attitude_dual), &(output->attitude_dual)))
  {
    return false;
  }
  // sd_angle_dual
  if (!ros2_interface__msg__Point3D__copy(
      &(input->sd_angle_dual), &(output->sd_angle_dual)))
  {
    return false;
  }
  // base_line_length_dual
  output->base_line_length_dual = input->base_line_length_dual;
  // solution_status_dual
  output->solution_status_dual = input->solution_status_dual;
  // position_type_dual
  output->position_type_dual = input->position_type_dual;
  // solution_source_dual
  output->solution_source_dual = input->solution_source_dual;
  // cep68
  output->cep68 = input->cep68;
  // cep95
  output->cep95 = input->cep95;
  // p_dop
  output->p_dop = input->p_dop;
  // h_dop
  output->h_dop = input->h_dop;
  // v_dop
  output->v_dop = input->v_dop;
  return true;
}

ros2_interface__msg__Gnss *
ros2_interface__msg__Gnss__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Gnss * msg = (ros2_interface__msg__Gnss *)allocator.allocate(sizeof(ros2_interface__msg__Gnss), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Gnss));
  bool success = ros2_interface__msg__Gnss__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Gnss__destroy(ros2_interface__msg__Gnss * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Gnss__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Gnss__Sequence__init(ros2_interface__msg__Gnss__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Gnss * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Gnss *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Gnss), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Gnss__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Gnss__fini(&data[i - 1]);
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
ros2_interface__msg__Gnss__Sequence__fini(ros2_interface__msg__Gnss__Sequence * array)
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
      ros2_interface__msg__Gnss__fini(&array->data[i]);
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

ros2_interface__msg__Gnss__Sequence *
ros2_interface__msg__Gnss__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Gnss__Sequence * array = (ros2_interface__msg__Gnss__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Gnss__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Gnss__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Gnss__Sequence__destroy(ros2_interface__msg__Gnss__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Gnss__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Gnss__Sequence__are_equal(const ros2_interface__msg__Gnss__Sequence * lhs, const ros2_interface__msg__Gnss__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Gnss__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Gnss__Sequence__copy(
  const ros2_interface__msg__Gnss__Sequence * input,
  ros2_interface__msg__Gnss__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Gnss);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Gnss * data =
      (ros2_interface__msg__Gnss *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Gnss__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Gnss__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Gnss__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

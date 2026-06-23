// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/PerceptionObstacle.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/perception_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
// Member `velocity`
// Member `polygon_point`
// Member `drops`
// Member `acceleration`
// Member `anchor_point`
// Member `bounding_box`
#include "ros2_interface/msg/detail/point3_d__functions.h"
// Member `position_covariance`
// Member `velocity_covariance`
// Member `acceleration_covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros2_interface__msg__PerceptionObstacle__init(ros2_interface__msg__PerceptionObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // position
  if (!ros2_interface__msg__Point3D__init(&msg->position)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // theta
  // velocity
  if (!ros2_interface__msg__Point3D__init(&msg->velocity)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // length
  // width
  // height
  // polygon_point
  if (!ros2_interface__msg__Point3D__Sequence__init(&msg->polygon_point, 0)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // tracking_time
  // type
  // lane_position
  // confidence
  // timestamp
  // confidence_type
  // drops
  if (!ros2_interface__msg__Point3D__init(&msg->drops)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // acceleration
  if (!ros2_interface__msg__Point3D__init(&msg->acceleration)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // anchor_point
  if (!ros2_interface__msg__Point3D__init(&msg->anchor_point)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // bounding_box
  if (!ros2_interface__msg__Point3D__Sequence__init(&msg->bounding_box, 0)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // sub_type
  // height_above_ground
  // position_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position_covariance, 0)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // velocity_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity_covariance, 0)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // acceleration_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration_covariance, 0)) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
    return false;
  }
  // light_status
  return true;
}

void
ros2_interface__msg__PerceptionObstacle__fini(ros2_interface__msg__PerceptionObstacle * msg)
{
  if (!msg) {
    return;
  }
  // id
  // position
  ros2_interface__msg__Point3D__fini(&msg->position);
  // theta
  // velocity
  ros2_interface__msg__Point3D__fini(&msg->velocity);
  // length
  // width
  // height
  // polygon_point
  ros2_interface__msg__Point3D__Sequence__fini(&msg->polygon_point);
  // tracking_time
  // type
  // lane_position
  // confidence
  // timestamp
  // confidence_type
  // drops
  ros2_interface__msg__Point3D__fini(&msg->drops);
  // acceleration
  ros2_interface__msg__Point3D__fini(&msg->acceleration);
  // anchor_point
  ros2_interface__msg__Point3D__fini(&msg->anchor_point);
  // bounding_box
  ros2_interface__msg__Point3D__Sequence__fini(&msg->bounding_box);
  // sub_type
  // height_above_ground
  // position_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->position_covariance);
  // velocity_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity_covariance);
  // acceleration_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration_covariance);
  // light_status
}

bool
ros2_interface__msg__PerceptionObstacle__are_equal(const ros2_interface__msg__PerceptionObstacle * lhs, const ros2_interface__msg__PerceptionObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // position
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // velocity
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
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
  // polygon_point
  if (!ros2_interface__msg__Point3D__Sequence__are_equal(
      &(lhs->polygon_point), &(rhs->polygon_point)))
  {
    return false;
  }
  // tracking_time
  if (lhs->tracking_time != rhs->tracking_time) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // lane_position
  if (lhs->lane_position != rhs->lane_position) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // confidence_type
  if (lhs->confidence_type != rhs->confidence_type) {
    return false;
  }
  // drops
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->drops), &(rhs->drops)))
  {
    return false;
  }
  // acceleration
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // anchor_point
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->anchor_point), &(rhs->anchor_point)))
  {
    return false;
  }
  // bounding_box
  if (!ros2_interface__msg__Point3D__Sequence__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  // sub_type
  if (lhs->sub_type != rhs->sub_type) {
    return false;
  }
  // height_above_ground
  if (lhs->height_above_ground != rhs->height_above_ground) {
    return false;
  }
  // position_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position_covariance), &(rhs->position_covariance)))
  {
    return false;
  }
  // velocity_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity_covariance), &(rhs->velocity_covariance)))
  {
    return false;
  }
  // acceleration_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acceleration_covariance), &(rhs->acceleration_covariance)))
  {
    return false;
  }
  // light_status
  if (lhs->light_status != rhs->light_status) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__PerceptionObstacle__copy(
  const ros2_interface__msg__PerceptionObstacle * input,
  ros2_interface__msg__PerceptionObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // position
  if (!ros2_interface__msg__Point3D__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // theta
  output->theta = input->theta;
  // velocity
  if (!ros2_interface__msg__Point3D__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // polygon_point
  if (!ros2_interface__msg__Point3D__Sequence__copy(
      &(input->polygon_point), &(output->polygon_point)))
  {
    return false;
  }
  // tracking_time
  output->tracking_time = input->tracking_time;
  // type
  output->type = input->type;
  // lane_position
  output->lane_position = input->lane_position;
  // confidence
  output->confidence = input->confidence;
  // timestamp
  output->timestamp = input->timestamp;
  // confidence_type
  output->confidence_type = input->confidence_type;
  // drops
  if (!ros2_interface__msg__Point3D__copy(
      &(input->drops), &(output->drops)))
  {
    return false;
  }
  // acceleration
  if (!ros2_interface__msg__Point3D__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // anchor_point
  if (!ros2_interface__msg__Point3D__copy(
      &(input->anchor_point), &(output->anchor_point)))
  {
    return false;
  }
  // bounding_box
  if (!ros2_interface__msg__Point3D__Sequence__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  // sub_type
  output->sub_type = input->sub_type;
  // height_above_ground
  output->height_above_ground = input->height_above_ground;
  // position_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position_covariance), &(output->position_covariance)))
  {
    return false;
  }
  // velocity_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity_covariance), &(output->velocity_covariance)))
  {
    return false;
  }
  // acceleration_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acceleration_covariance), &(output->acceleration_covariance)))
  {
    return false;
  }
  // light_status
  output->light_status = input->light_status;
  return true;
}

ros2_interface__msg__PerceptionObstacle *
ros2_interface__msg__PerceptionObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PerceptionObstacle * msg = (ros2_interface__msg__PerceptionObstacle *)allocator.allocate(sizeof(ros2_interface__msg__PerceptionObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__PerceptionObstacle));
  bool success = ros2_interface__msg__PerceptionObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__PerceptionObstacle__destroy(ros2_interface__msg__PerceptionObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__PerceptionObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__PerceptionObstacle__Sequence__init(ros2_interface__msg__PerceptionObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PerceptionObstacle * data = NULL;

  if (size) {
    data = (ros2_interface__msg__PerceptionObstacle *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__PerceptionObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__PerceptionObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__PerceptionObstacle__fini(&data[i - 1]);
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
ros2_interface__msg__PerceptionObstacle__Sequence__fini(ros2_interface__msg__PerceptionObstacle__Sequence * array)
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
      ros2_interface__msg__PerceptionObstacle__fini(&array->data[i]);
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

ros2_interface__msg__PerceptionObstacle__Sequence *
ros2_interface__msg__PerceptionObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PerceptionObstacle__Sequence * array = (ros2_interface__msg__PerceptionObstacle__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__PerceptionObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__PerceptionObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__PerceptionObstacle__Sequence__destroy(ros2_interface__msg__PerceptionObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__PerceptionObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__PerceptionObstacle__Sequence__are_equal(const ros2_interface__msg__PerceptionObstacle__Sequence * lhs, const ros2_interface__msg__PerceptionObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__PerceptionObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__PerceptionObstacle__Sequence__copy(
  const ros2_interface__msg__PerceptionObstacle__Sequence * input,
  ros2_interface__msg__PerceptionObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__PerceptionObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__PerceptionObstacle * data =
      (ros2_interface__msg__PerceptionObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__PerceptionObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__PerceptionObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__PerceptionObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

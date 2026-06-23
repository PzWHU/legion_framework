// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "ros2_interface/msg/detail/pose__functions.h"

bool
ros2_interface__msg__VehicleState__init(ros2_interface__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__VehicleState__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // timestamp
  // roll
  // pitch
  // yaw
  // heading
  // kappa
  // linear_velocity
  // angular_velocity
  // linear_acceleration
  // gear
  // driving_mode
  // pose
  if (!ros2_interface__msg__Pose__init(&msg->pose)) {
    ros2_interface__msg__VehicleState__fini(msg);
    return false;
  }
  // front_steering_value
  // rear_steering_value
  return true;
}

void
ros2_interface__msg__VehicleState__fini(ros2_interface__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  // y
  // z
  // timestamp
  // roll
  // pitch
  // yaw
  // heading
  // kappa
  // linear_velocity
  // angular_velocity
  // linear_acceleration
  // gear
  // driving_mode
  // pose
  ros2_interface__msg__Pose__fini(&msg->pose);
  // front_steering_value
  // rear_steering_value
}

bool
ros2_interface__msg__VehicleState__are_equal(const ros2_interface__msg__VehicleState * lhs, const ros2_interface__msg__VehicleState * rhs)
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
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // kappa
  if (lhs->kappa != rhs->kappa) {
    return false;
  }
  // linear_velocity
  if (lhs->linear_velocity != rhs->linear_velocity) {
    return false;
  }
  // angular_velocity
  if (lhs->angular_velocity != rhs->angular_velocity) {
    return false;
  }
  // linear_acceleration
  if (lhs->linear_acceleration != rhs->linear_acceleration) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // driving_mode
  if (lhs->driving_mode != rhs->driving_mode) {
    return false;
  }
  // pose
  if (!ros2_interface__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // front_steering_value
  if (lhs->front_steering_value != rhs->front_steering_value) {
    return false;
  }
  // rear_steering_value
  if (lhs->rear_steering_value != rhs->rear_steering_value) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__VehicleState__copy(
  const ros2_interface__msg__VehicleState * input,
  ros2_interface__msg__VehicleState * output)
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
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // timestamp
  output->timestamp = input->timestamp;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // heading
  output->heading = input->heading;
  // kappa
  output->kappa = input->kappa;
  // linear_velocity
  output->linear_velocity = input->linear_velocity;
  // angular_velocity
  output->angular_velocity = input->angular_velocity;
  // linear_acceleration
  output->linear_acceleration = input->linear_acceleration;
  // gear
  output->gear = input->gear;
  // driving_mode
  output->driving_mode = input->driving_mode;
  // pose
  if (!ros2_interface__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // front_steering_value
  output->front_steering_value = input->front_steering_value;
  // rear_steering_value
  output->rear_steering_value = input->rear_steering_value;
  return true;
}

ros2_interface__msg__VehicleState *
ros2_interface__msg__VehicleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleState * msg = (ros2_interface__msg__VehicleState *)allocator.allocate(sizeof(ros2_interface__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__VehicleState));
  bool success = ros2_interface__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__VehicleState__destroy(ros2_interface__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__VehicleState__Sequence__init(ros2_interface__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleState * data = NULL;

  if (size) {
    data = (ros2_interface__msg__VehicleState *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__VehicleState__fini(&data[i - 1]);
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
ros2_interface__msg__VehicleState__Sequence__fini(ros2_interface__msg__VehicleState__Sequence * array)
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
      ros2_interface__msg__VehicleState__fini(&array->data[i]);
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

ros2_interface__msg__VehicleState__Sequence *
ros2_interface__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__VehicleState__Sequence * array = (ros2_interface__msg__VehicleState__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__VehicleState__Sequence__destroy(ros2_interface__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__VehicleState__Sequence__are_equal(const ros2_interface__msg__VehicleState__Sequence * lhs, const ros2_interface__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__VehicleState__Sequence__copy(
  const ros2_interface__msg__VehicleState__Sequence * input,
  ros2_interface__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__VehicleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__VehicleState * data =
      (ros2_interface__msg__VehicleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__VehicleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__VehicleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

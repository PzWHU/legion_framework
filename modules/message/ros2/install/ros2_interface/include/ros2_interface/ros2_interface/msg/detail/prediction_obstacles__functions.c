// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/PredictionObstacles.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/prediction_obstacles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `prediction_obstacles`
#include "ros2_interface/msg/detail/prediction_obstacle__functions.h"

bool
ros2_interface__msg__PredictionObstacles__init(ros2_interface__msg__PredictionObstacles * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__PredictionObstacles__fini(msg);
    return false;
  }
  // prediction_obstacles
  if (!ros2_interface__msg__PredictionObstacle__Sequence__init(&msg->prediction_obstacles, 0)) {
    ros2_interface__msg__PredictionObstacles__fini(msg);
    return false;
  }
  // change_origin_flag
  // start_timestamp
  // end_timestamp
  // self_intent
  // scenario
  return true;
}

void
ros2_interface__msg__PredictionObstacles__fini(ros2_interface__msg__PredictionObstacles * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // prediction_obstacles
  ros2_interface__msg__PredictionObstacle__Sequence__fini(&msg->prediction_obstacles);
  // change_origin_flag
  // start_timestamp
  // end_timestamp
  // self_intent
  // scenario
}

bool
ros2_interface__msg__PredictionObstacles__are_equal(const ros2_interface__msg__PredictionObstacles * lhs, const ros2_interface__msg__PredictionObstacles * rhs)
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
  // prediction_obstacles
  if (!ros2_interface__msg__PredictionObstacle__Sequence__are_equal(
      &(lhs->prediction_obstacles), &(rhs->prediction_obstacles)))
  {
    return false;
  }
  // change_origin_flag
  if (lhs->change_origin_flag != rhs->change_origin_flag) {
    return false;
  }
  // start_timestamp
  if (lhs->start_timestamp != rhs->start_timestamp) {
    return false;
  }
  // end_timestamp
  if (lhs->end_timestamp != rhs->end_timestamp) {
    return false;
  }
  // self_intent
  if (lhs->self_intent != rhs->self_intent) {
    return false;
  }
  // scenario
  if (lhs->scenario != rhs->scenario) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__PredictionObstacles__copy(
  const ros2_interface__msg__PredictionObstacles * input,
  ros2_interface__msg__PredictionObstacles * output)
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
  // prediction_obstacles
  if (!ros2_interface__msg__PredictionObstacle__Sequence__copy(
      &(input->prediction_obstacles), &(output->prediction_obstacles)))
  {
    return false;
  }
  // change_origin_flag
  output->change_origin_flag = input->change_origin_flag;
  // start_timestamp
  output->start_timestamp = input->start_timestamp;
  // end_timestamp
  output->end_timestamp = input->end_timestamp;
  // self_intent
  output->self_intent = input->self_intent;
  // scenario
  output->scenario = input->scenario;
  return true;
}

ros2_interface__msg__PredictionObstacles *
ros2_interface__msg__PredictionObstacles__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PredictionObstacles * msg = (ros2_interface__msg__PredictionObstacles *)allocator.allocate(sizeof(ros2_interface__msg__PredictionObstacles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__PredictionObstacles));
  bool success = ros2_interface__msg__PredictionObstacles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__PredictionObstacles__destroy(ros2_interface__msg__PredictionObstacles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__PredictionObstacles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__PredictionObstacles__Sequence__init(ros2_interface__msg__PredictionObstacles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PredictionObstacles * data = NULL;

  if (size) {
    data = (ros2_interface__msg__PredictionObstacles *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__PredictionObstacles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__PredictionObstacles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__PredictionObstacles__fini(&data[i - 1]);
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
ros2_interface__msg__PredictionObstacles__Sequence__fini(ros2_interface__msg__PredictionObstacles__Sequence * array)
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
      ros2_interface__msg__PredictionObstacles__fini(&array->data[i]);
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

ros2_interface__msg__PredictionObstacles__Sequence *
ros2_interface__msg__PredictionObstacles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PredictionObstacles__Sequence * array = (ros2_interface__msg__PredictionObstacles__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__PredictionObstacles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__PredictionObstacles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__PredictionObstacles__Sequence__destroy(ros2_interface__msg__PredictionObstacles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__PredictionObstacles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__PredictionObstacles__Sequence__are_equal(const ros2_interface__msg__PredictionObstacles__Sequence * lhs, const ros2_interface__msg__PredictionObstacles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__PredictionObstacles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__PredictionObstacles__Sequence__copy(
  const ros2_interface__msg__PredictionObstacles__Sequence * input,
  ros2_interface__msg__PredictionObstacles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__PredictionObstacles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__PredictionObstacles * data =
      (ros2_interface__msg__PredictionObstacles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__PredictionObstacles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__PredictionObstacles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__PredictionObstacles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

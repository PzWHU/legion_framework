// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/LaneList.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/lane_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensor_calibrator`
#include "ros2_interface/msg/detail/sensor_calibrator__functions.h"
// Member `camera_laneline`
#include "ros2_interface/msg/detail/lane_line__functions.h"
// Member `hpp`
#include "ros2_interface/msg/detail/holistic_path_prediction__functions.h"
// Member `road_marks`
#include "ros2_interface/msg/detail/road_mark__functions.h"

bool
ros2_interface__msg__LaneList__init(ros2_interface__msg__LaneList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interface__msg__LaneList__fini(msg);
    return false;
  }
  // sensor_id
  // error_code
  // sensor_status
  // change_origin_flag
  // is_valid
  // sensor_calibrator
  if (!ros2_interface__msg__SensorCalibrator__init(&msg->sensor_calibrator)) {
    ros2_interface__msg__LaneList__fini(msg);
    return false;
  }
  // camera_laneline
  if (!ros2_interface__msg__LaneLine__Sequence__init(&msg->camera_laneline, 0)) {
    ros2_interface__msg__LaneList__fini(msg);
    return false;
  }
  // hpp
  if (!ros2_interface__msg__HolisticPathPrediction__init(&msg->hpp)) {
    ros2_interface__msg__LaneList__fini(msg);
    return false;
  }
  // road_marks
  if (!ros2_interface__msg__RoadMark__Sequence__init(&msg->road_marks, 0)) {
    ros2_interface__msg__LaneList__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__LaneList__fini(ros2_interface__msg__LaneList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_id
  // error_code
  // sensor_status
  // change_origin_flag
  // is_valid
  // sensor_calibrator
  ros2_interface__msg__SensorCalibrator__fini(&msg->sensor_calibrator);
  // camera_laneline
  ros2_interface__msg__LaneLine__Sequence__fini(&msg->camera_laneline);
  // hpp
  ros2_interface__msg__HolisticPathPrediction__fini(&msg->hpp);
  // road_marks
  ros2_interface__msg__RoadMark__Sequence__fini(&msg->road_marks);
}

bool
ros2_interface__msg__LaneList__are_equal(const ros2_interface__msg__LaneList * lhs, const ros2_interface__msg__LaneList * rhs)
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
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // sensor_status
  if (lhs->sensor_status != rhs->sensor_status) {
    return false;
  }
  // change_origin_flag
  if (lhs->change_origin_flag != rhs->change_origin_flag) {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  // sensor_calibrator
  if (!ros2_interface__msg__SensorCalibrator__are_equal(
      &(lhs->sensor_calibrator), &(rhs->sensor_calibrator)))
  {
    return false;
  }
  // camera_laneline
  if (!ros2_interface__msg__LaneLine__Sequence__are_equal(
      &(lhs->camera_laneline), &(rhs->camera_laneline)))
  {
    return false;
  }
  // hpp
  if (!ros2_interface__msg__HolisticPathPrediction__are_equal(
      &(lhs->hpp), &(rhs->hpp)))
  {
    return false;
  }
  // road_marks
  if (!ros2_interface__msg__RoadMark__Sequence__are_equal(
      &(lhs->road_marks), &(rhs->road_marks)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__LaneList__copy(
  const ros2_interface__msg__LaneList * input,
  ros2_interface__msg__LaneList * output)
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
  // sensor_id
  output->sensor_id = input->sensor_id;
  // error_code
  output->error_code = input->error_code;
  // sensor_status
  output->sensor_status = input->sensor_status;
  // change_origin_flag
  output->change_origin_flag = input->change_origin_flag;
  // is_valid
  output->is_valid = input->is_valid;
  // sensor_calibrator
  if (!ros2_interface__msg__SensorCalibrator__copy(
      &(input->sensor_calibrator), &(output->sensor_calibrator)))
  {
    return false;
  }
  // camera_laneline
  if (!ros2_interface__msg__LaneLine__Sequence__copy(
      &(input->camera_laneline), &(output->camera_laneline)))
  {
    return false;
  }
  // hpp
  if (!ros2_interface__msg__HolisticPathPrediction__copy(
      &(input->hpp), &(output->hpp)))
  {
    return false;
  }
  // road_marks
  if (!ros2_interface__msg__RoadMark__Sequence__copy(
      &(input->road_marks), &(output->road_marks)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__LaneList *
ros2_interface__msg__LaneList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneList * msg = (ros2_interface__msg__LaneList *)allocator.allocate(sizeof(ros2_interface__msg__LaneList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__LaneList));
  bool success = ros2_interface__msg__LaneList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__LaneList__destroy(ros2_interface__msg__LaneList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__LaneList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__LaneList__Sequence__init(ros2_interface__msg__LaneList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneList * data = NULL;

  if (size) {
    data = (ros2_interface__msg__LaneList *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__LaneList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__LaneList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__LaneList__fini(&data[i - 1]);
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
ros2_interface__msg__LaneList__Sequence__fini(ros2_interface__msg__LaneList__Sequence * array)
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
      ros2_interface__msg__LaneList__fini(&array->data[i]);
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

ros2_interface__msg__LaneList__Sequence *
ros2_interface__msg__LaneList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneList__Sequence * array = (ros2_interface__msg__LaneList__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__LaneList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__LaneList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__LaneList__Sequence__destroy(ros2_interface__msg__LaneList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__LaneList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__LaneList__Sequence__are_equal(const ros2_interface__msg__LaneList__Sequence * lhs, const ros2_interface__msg__LaneList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__LaneList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__LaneList__Sequence__copy(
  const ros2_interface__msg__LaneList__Sequence * input,
  ros2_interface__msg__LaneList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__LaneList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__LaneList * data =
      (ros2_interface__msg__LaneList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__LaneList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__LaneList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__LaneList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

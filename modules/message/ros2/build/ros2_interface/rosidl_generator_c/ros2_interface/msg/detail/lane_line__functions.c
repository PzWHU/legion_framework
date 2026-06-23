// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/LaneLine.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/lane_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `curve_vehicle`
// Member `curve_image`
// Member `curve_abs`
#include "ros2_interface/msg/detail/lane_line_cubic_curve__functions.h"
// Member `pts_vehicle`
// Member `pts_abs`
#include "ros2_interface/msg/detail/point3_d__functions.h"
// Member `pts_image`
// Member `pts_key`
#include "ros2_interface/msg/detail/point2_d__functions.h"
// Member `image_end_point`
#include "ros2_interface/msg/detail/end_points__functions.h"
// Member `homography_mat`
// Member `homography_mat_inv`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `create_time`
#include "ros2_interface/msg/detail/time__functions.h"

bool
ros2_interface__msg__LaneLine__init(ros2_interface__msg__LaneLine * msg)
{
  if (!msg) {
    return false;
  }
  // lane_type
  // lane_color
  // pos_type
  // curve_vehicle
  if (!ros2_interface__msg__LaneLineCubicCurve__init(&msg->curve_vehicle)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // curve_image
  if (!ros2_interface__msg__LaneLineCubicCurve__init(&msg->curve_image)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // curve_abs
  if (!ros2_interface__msg__LaneLineCubicCurve__init(&msg->curve_abs)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // pts_vehicle
  if (!ros2_interface__msg__Point3D__Sequence__init(&msg->pts_vehicle, 0)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // pts_image
  if (!ros2_interface__msg__Point2D__Sequence__init(&msg->pts_image, 0)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // pts_abs
  if (!ros2_interface__msg__Point3D__Sequence__init(&msg->pts_abs, 0)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // image_end_point
  if (!ros2_interface__msg__EndPoints__init(&msg->image_end_point)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // pts_key
  if (!ros2_interface__msg__Point2D__Sequence__init(&msg->pts_key, 0)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // hd_lane_id
  // confidence
  // lane_quality
  // fused_lane_type
  // homography_mat
  if (!rosidl_runtime_c__double__Sequence__init(&msg->homography_mat, 0)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // homography_mat_inv
  if (!rosidl_runtime_c__double__Sequence__init(&msg->homography_mat_inv, 0)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  // lane_coordinate_type
  // use_type
  // create_time
  if (!ros2_interface__msg__Time__init(&msg->create_time)) {
    ros2_interface__msg__LaneLine__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interface__msg__LaneLine__fini(ros2_interface__msg__LaneLine * msg)
{
  if (!msg) {
    return;
  }
  // lane_type
  // lane_color
  // pos_type
  // curve_vehicle
  ros2_interface__msg__LaneLineCubicCurve__fini(&msg->curve_vehicle);
  // curve_image
  ros2_interface__msg__LaneLineCubicCurve__fini(&msg->curve_image);
  // curve_abs
  ros2_interface__msg__LaneLineCubicCurve__fini(&msg->curve_abs);
  // pts_vehicle
  ros2_interface__msg__Point3D__Sequence__fini(&msg->pts_vehicle);
  // pts_image
  ros2_interface__msg__Point2D__Sequence__fini(&msg->pts_image);
  // pts_abs
  ros2_interface__msg__Point3D__Sequence__fini(&msg->pts_abs);
  // image_end_point
  ros2_interface__msg__EndPoints__fini(&msg->image_end_point);
  // pts_key
  ros2_interface__msg__Point2D__Sequence__fini(&msg->pts_key);
  // hd_lane_id
  // confidence
  // lane_quality
  // fused_lane_type
  // homography_mat
  rosidl_runtime_c__double__Sequence__fini(&msg->homography_mat);
  // homography_mat_inv
  rosidl_runtime_c__double__Sequence__fini(&msg->homography_mat_inv);
  // lane_coordinate_type
  // use_type
  // create_time
  ros2_interface__msg__Time__fini(&msg->create_time);
}

bool
ros2_interface__msg__LaneLine__are_equal(const ros2_interface__msg__LaneLine * lhs, const ros2_interface__msg__LaneLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_type
  if (lhs->lane_type != rhs->lane_type) {
    return false;
  }
  // lane_color
  if (lhs->lane_color != rhs->lane_color) {
    return false;
  }
  // pos_type
  if (lhs->pos_type != rhs->pos_type) {
    return false;
  }
  // curve_vehicle
  if (!ros2_interface__msg__LaneLineCubicCurve__are_equal(
      &(lhs->curve_vehicle), &(rhs->curve_vehicle)))
  {
    return false;
  }
  // curve_image
  if (!ros2_interface__msg__LaneLineCubicCurve__are_equal(
      &(lhs->curve_image), &(rhs->curve_image)))
  {
    return false;
  }
  // curve_abs
  if (!ros2_interface__msg__LaneLineCubicCurve__are_equal(
      &(lhs->curve_abs), &(rhs->curve_abs)))
  {
    return false;
  }
  // pts_vehicle
  if (!ros2_interface__msg__Point3D__Sequence__are_equal(
      &(lhs->pts_vehicle), &(rhs->pts_vehicle)))
  {
    return false;
  }
  // pts_image
  if (!ros2_interface__msg__Point2D__Sequence__are_equal(
      &(lhs->pts_image), &(rhs->pts_image)))
  {
    return false;
  }
  // pts_abs
  if (!ros2_interface__msg__Point3D__Sequence__are_equal(
      &(lhs->pts_abs), &(rhs->pts_abs)))
  {
    return false;
  }
  // image_end_point
  if (!ros2_interface__msg__EndPoints__are_equal(
      &(lhs->image_end_point), &(rhs->image_end_point)))
  {
    return false;
  }
  // pts_key
  if (!ros2_interface__msg__Point2D__Sequence__are_equal(
      &(lhs->pts_key), &(rhs->pts_key)))
  {
    return false;
  }
  // hd_lane_id
  if (lhs->hd_lane_id != rhs->hd_lane_id) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // lane_quality
  if (lhs->lane_quality != rhs->lane_quality) {
    return false;
  }
  // fused_lane_type
  if (lhs->fused_lane_type != rhs->fused_lane_type) {
    return false;
  }
  // homography_mat
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->homography_mat), &(rhs->homography_mat)))
  {
    return false;
  }
  // homography_mat_inv
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->homography_mat_inv), &(rhs->homography_mat_inv)))
  {
    return false;
  }
  // lane_coordinate_type
  if (lhs->lane_coordinate_type != rhs->lane_coordinate_type) {
    return false;
  }
  // use_type
  if (lhs->use_type != rhs->use_type) {
    return false;
  }
  // create_time
  if (!ros2_interface__msg__Time__are_equal(
      &(lhs->create_time), &(rhs->create_time)))
  {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__LaneLine__copy(
  const ros2_interface__msg__LaneLine * input,
  ros2_interface__msg__LaneLine * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_type
  output->lane_type = input->lane_type;
  // lane_color
  output->lane_color = input->lane_color;
  // pos_type
  output->pos_type = input->pos_type;
  // curve_vehicle
  if (!ros2_interface__msg__LaneLineCubicCurve__copy(
      &(input->curve_vehicle), &(output->curve_vehicle)))
  {
    return false;
  }
  // curve_image
  if (!ros2_interface__msg__LaneLineCubicCurve__copy(
      &(input->curve_image), &(output->curve_image)))
  {
    return false;
  }
  // curve_abs
  if (!ros2_interface__msg__LaneLineCubicCurve__copy(
      &(input->curve_abs), &(output->curve_abs)))
  {
    return false;
  }
  // pts_vehicle
  if (!ros2_interface__msg__Point3D__Sequence__copy(
      &(input->pts_vehicle), &(output->pts_vehicle)))
  {
    return false;
  }
  // pts_image
  if (!ros2_interface__msg__Point2D__Sequence__copy(
      &(input->pts_image), &(output->pts_image)))
  {
    return false;
  }
  // pts_abs
  if (!ros2_interface__msg__Point3D__Sequence__copy(
      &(input->pts_abs), &(output->pts_abs)))
  {
    return false;
  }
  // image_end_point
  if (!ros2_interface__msg__EndPoints__copy(
      &(input->image_end_point), &(output->image_end_point)))
  {
    return false;
  }
  // pts_key
  if (!ros2_interface__msg__Point2D__Sequence__copy(
      &(input->pts_key), &(output->pts_key)))
  {
    return false;
  }
  // hd_lane_id
  output->hd_lane_id = input->hd_lane_id;
  // confidence
  output->confidence = input->confidence;
  // lane_quality
  output->lane_quality = input->lane_quality;
  // fused_lane_type
  output->fused_lane_type = input->fused_lane_type;
  // homography_mat
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->homography_mat), &(output->homography_mat)))
  {
    return false;
  }
  // homography_mat_inv
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->homography_mat_inv), &(output->homography_mat_inv)))
  {
    return false;
  }
  // lane_coordinate_type
  output->lane_coordinate_type = input->lane_coordinate_type;
  // use_type
  output->use_type = input->use_type;
  // create_time
  if (!ros2_interface__msg__Time__copy(
      &(input->create_time), &(output->create_time)))
  {
    return false;
  }
  return true;
}

ros2_interface__msg__LaneLine *
ros2_interface__msg__LaneLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneLine * msg = (ros2_interface__msg__LaneLine *)allocator.allocate(sizeof(ros2_interface__msg__LaneLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__LaneLine));
  bool success = ros2_interface__msg__LaneLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__LaneLine__destroy(ros2_interface__msg__LaneLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__LaneLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__LaneLine__Sequence__init(ros2_interface__msg__LaneLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneLine * data = NULL;

  if (size) {
    data = (ros2_interface__msg__LaneLine *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__LaneLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__LaneLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__LaneLine__fini(&data[i - 1]);
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
ros2_interface__msg__LaneLine__Sequence__fini(ros2_interface__msg__LaneLine__Sequence * array)
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
      ros2_interface__msg__LaneLine__fini(&array->data[i]);
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

ros2_interface__msg__LaneLine__Sequence *
ros2_interface__msg__LaneLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__LaneLine__Sequence * array = (ros2_interface__msg__LaneLine__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__LaneLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__LaneLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__LaneLine__Sequence__destroy(ros2_interface__msg__LaneLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__LaneLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__LaneLine__Sequence__are_equal(const ros2_interface__msg__LaneLine__Sequence * lhs, const ros2_interface__msg__LaneLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__LaneLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__LaneLine__Sequence__copy(
  const ros2_interface__msg__LaneLine__Sequence * input,
  ros2_interface__msg__LaneLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__LaneLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__LaneLine * data =
      (ros2_interface__msg__LaneLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__LaneLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__LaneLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__LaneLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/Obstacle.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
// Member `create_time`
// Member `last_updated_time`
#include "ros2_interface/msg/detail/time__functions.h"
// Member `center_pos_vehicle`
// Member `center_pos_abs`
// Member `velocity_vehicle`
// Member `velocity_abs`
// Member `polygon_point_abs`
// Member `polygon_point_vehicle`
// Member `drops`
// Member `acceleration_vehicle`
// Member `acceleration_abs`
// Member `anchor_point_vehicle`
// Member `anchor_point_abs`
#include "ros2_interface/msg/detail/point3_d__functions.h"
// Member `image_key_points`
#include "ros2_interface/msg/detail/image_key_point__functions.h"
// Member `anchor_point_image`
#include "ros2_interface/msg/detail/point2_d__functions.h"
// Member `bbox2d`
// Member `bbox2d_rear`
#include "ros2_interface/msg/detail/b_box2_d__functions.h"
// Member `position_abs_covariance`
// Member `velocity_abs_covariance`
// Member `acceleration_abs_covariance`
// Member `position_vehicle_covariance`
// Member `velocity_vehicle_covariance`
// Member `acceleration_vehicle_covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `sensor_calibrator`
#include "ros2_interface/msg/detail/sensor_calibrator__functions.h"

bool
ros2_interface__msg__Obstacle__init(ros2_interface__msg__Obstacle * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!ros2_interface__msg__Time__init(&msg->timestamp)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // id
  // existence_prob
  // create_time
  if (!ros2_interface__msg__Time__init(&msg->create_time)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // last_updated_time
  if (!ros2_interface__msg__Time__init(&msg->last_updated_time)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // center_pos_vehicle
  if (!ros2_interface__msg__Point3D__init(&msg->center_pos_vehicle)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // center_pos_abs
  if (!ros2_interface__msg__Point3D__init(&msg->center_pos_abs)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // theta_vehicle
  // theta_abs
  // velocity_vehicle
  if (!ros2_interface__msg__Point3D__init(&msg->velocity_vehicle)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // velocity_abs
  if (!ros2_interface__msg__Point3D__init(&msg->velocity_abs)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // length
  // width
  // height
  // image_key_points
  if (!ros2_interface__msg__ImageKeyPoint__Sequence__init(&msg->image_key_points, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // polygon_point_abs
  if (!ros2_interface__msg__Point3D__Sequence__init(&msg->polygon_point_abs, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // polygon_point_vehicle
  if (!ros2_interface__msg__Point3D__Sequence__init(&msg->polygon_point_vehicle, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // tracking_time
  // type
  // confidence
  // confidence_type
  // drops
  if (!ros2_interface__msg__Point3D__Sequence__init(&msg->drops, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // acceleration_vehicle
  if (!ros2_interface__msg__Point3D__init(&msg->acceleration_vehicle)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // acceleration_abs
  if (!ros2_interface__msg__Point3D__init(&msg->acceleration_abs)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // anchor_point_image
  if (!ros2_interface__msg__Point2D__init(&msg->anchor_point_image)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // anchor_point_vehicle
  if (!ros2_interface__msg__Point3D__init(&msg->anchor_point_vehicle)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // anchor_point_abs
  if (!ros2_interface__msg__Point3D__init(&msg->anchor_point_abs)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // bbox2d
  if (!ros2_interface__msg__BBox2D__init(&msg->bbox2d)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // bbox2d_rear
  if (!ros2_interface__msg__BBox2D__init(&msg->bbox2d_rear)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // sub_type
  // height_above_ground
  // position_abs_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position_abs_covariance, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // velocity_abs_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity_abs_covariance, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // acceleration_abs_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration_abs_covariance, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // theta_abs_covariance
  // position_vehicle_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position_vehicle_covariance, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // velocity_vehicle_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity_vehicle_covariance, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // acceleration_vehicle_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration_vehicle_covariance, 0)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // theta_vehicle_covariance
  // sensor_calibrator
  if (!ros2_interface__msg__SensorCalibrator__init(&msg->sensor_calibrator)) {
    ros2_interface__msg__Obstacle__fini(msg);
    return false;
  }
  // cipv_flag
  // lane_position
  // pihp_percentage
  // blinker_flag
  // fusion_type
  return true;
}

void
ros2_interface__msg__Obstacle__fini(ros2_interface__msg__Obstacle * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  ros2_interface__msg__Time__fini(&msg->timestamp);
  // id
  // existence_prob
  // create_time
  ros2_interface__msg__Time__fini(&msg->create_time);
  // last_updated_time
  ros2_interface__msg__Time__fini(&msg->last_updated_time);
  // center_pos_vehicle
  ros2_interface__msg__Point3D__fini(&msg->center_pos_vehicle);
  // center_pos_abs
  ros2_interface__msg__Point3D__fini(&msg->center_pos_abs);
  // theta_vehicle
  // theta_abs
  // velocity_vehicle
  ros2_interface__msg__Point3D__fini(&msg->velocity_vehicle);
  // velocity_abs
  ros2_interface__msg__Point3D__fini(&msg->velocity_abs);
  // length
  // width
  // height
  // image_key_points
  ros2_interface__msg__ImageKeyPoint__Sequence__fini(&msg->image_key_points);
  // polygon_point_abs
  ros2_interface__msg__Point3D__Sequence__fini(&msg->polygon_point_abs);
  // polygon_point_vehicle
  ros2_interface__msg__Point3D__Sequence__fini(&msg->polygon_point_vehicle);
  // tracking_time
  // type
  // confidence
  // confidence_type
  // drops
  ros2_interface__msg__Point3D__Sequence__fini(&msg->drops);
  // acceleration_vehicle
  ros2_interface__msg__Point3D__fini(&msg->acceleration_vehicle);
  // acceleration_abs
  ros2_interface__msg__Point3D__fini(&msg->acceleration_abs);
  // anchor_point_image
  ros2_interface__msg__Point2D__fini(&msg->anchor_point_image);
  // anchor_point_vehicle
  ros2_interface__msg__Point3D__fini(&msg->anchor_point_vehicle);
  // anchor_point_abs
  ros2_interface__msg__Point3D__fini(&msg->anchor_point_abs);
  // bbox2d
  ros2_interface__msg__BBox2D__fini(&msg->bbox2d);
  // bbox2d_rear
  ros2_interface__msg__BBox2D__fini(&msg->bbox2d_rear);
  // sub_type
  // height_above_ground
  // position_abs_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->position_abs_covariance);
  // velocity_abs_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity_abs_covariance);
  // acceleration_abs_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration_abs_covariance);
  // theta_abs_covariance
  // position_vehicle_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->position_vehicle_covariance);
  // velocity_vehicle_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity_vehicle_covariance);
  // acceleration_vehicle_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration_vehicle_covariance);
  // theta_vehicle_covariance
  // sensor_calibrator
  ros2_interface__msg__SensorCalibrator__fini(&msg->sensor_calibrator);
  // cipv_flag
  // lane_position
  // pihp_percentage
  // blinker_flag
  // fusion_type
}

bool
ros2_interface__msg__Obstacle__are_equal(const ros2_interface__msg__Obstacle * lhs, const ros2_interface__msg__Obstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!ros2_interface__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // existence_prob
  if (lhs->existence_prob != rhs->existence_prob) {
    return false;
  }
  // create_time
  if (!ros2_interface__msg__Time__are_equal(
      &(lhs->create_time), &(rhs->create_time)))
  {
    return false;
  }
  // last_updated_time
  if (!ros2_interface__msg__Time__are_equal(
      &(lhs->last_updated_time), &(rhs->last_updated_time)))
  {
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
  // velocity_vehicle
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->velocity_vehicle), &(rhs->velocity_vehicle)))
  {
    return false;
  }
  // velocity_abs
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->velocity_abs), &(rhs->velocity_abs)))
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
  // image_key_points
  if (!ros2_interface__msg__ImageKeyPoint__Sequence__are_equal(
      &(lhs->image_key_points), &(rhs->image_key_points)))
  {
    return false;
  }
  // polygon_point_abs
  if (!ros2_interface__msg__Point3D__Sequence__are_equal(
      &(lhs->polygon_point_abs), &(rhs->polygon_point_abs)))
  {
    return false;
  }
  // polygon_point_vehicle
  if (!ros2_interface__msg__Point3D__Sequence__are_equal(
      &(lhs->polygon_point_vehicle), &(rhs->polygon_point_vehicle)))
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
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // confidence_type
  if (lhs->confidence_type != rhs->confidence_type) {
    return false;
  }
  // drops
  if (!ros2_interface__msg__Point3D__Sequence__are_equal(
      &(lhs->drops), &(rhs->drops)))
  {
    return false;
  }
  // acceleration_vehicle
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->acceleration_vehicle), &(rhs->acceleration_vehicle)))
  {
    return false;
  }
  // acceleration_abs
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->acceleration_abs), &(rhs->acceleration_abs)))
  {
    return false;
  }
  // anchor_point_image
  if (!ros2_interface__msg__Point2D__are_equal(
      &(lhs->anchor_point_image), &(rhs->anchor_point_image)))
  {
    return false;
  }
  // anchor_point_vehicle
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->anchor_point_vehicle), &(rhs->anchor_point_vehicle)))
  {
    return false;
  }
  // anchor_point_abs
  if (!ros2_interface__msg__Point3D__are_equal(
      &(lhs->anchor_point_abs), &(rhs->anchor_point_abs)))
  {
    return false;
  }
  // bbox2d
  if (!ros2_interface__msg__BBox2D__are_equal(
      &(lhs->bbox2d), &(rhs->bbox2d)))
  {
    return false;
  }
  // bbox2d_rear
  if (!ros2_interface__msg__BBox2D__are_equal(
      &(lhs->bbox2d_rear), &(rhs->bbox2d_rear)))
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
  // position_abs_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position_abs_covariance), &(rhs->position_abs_covariance)))
  {
    return false;
  }
  // velocity_abs_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity_abs_covariance), &(rhs->velocity_abs_covariance)))
  {
    return false;
  }
  // acceleration_abs_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acceleration_abs_covariance), &(rhs->acceleration_abs_covariance)))
  {
    return false;
  }
  // theta_abs_covariance
  if (lhs->theta_abs_covariance != rhs->theta_abs_covariance) {
    return false;
  }
  // position_vehicle_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position_vehicle_covariance), &(rhs->position_vehicle_covariance)))
  {
    return false;
  }
  // velocity_vehicle_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity_vehicle_covariance), &(rhs->velocity_vehicle_covariance)))
  {
    return false;
  }
  // acceleration_vehicle_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acceleration_vehicle_covariance), &(rhs->acceleration_vehicle_covariance)))
  {
    return false;
  }
  // theta_vehicle_covariance
  if (lhs->theta_vehicle_covariance != rhs->theta_vehicle_covariance) {
    return false;
  }
  // sensor_calibrator
  if (!ros2_interface__msg__SensorCalibrator__are_equal(
      &(lhs->sensor_calibrator), &(rhs->sensor_calibrator)))
  {
    return false;
  }
  // cipv_flag
  if (lhs->cipv_flag != rhs->cipv_flag) {
    return false;
  }
  // lane_position
  if (lhs->lane_position != rhs->lane_position) {
    return false;
  }
  // pihp_percentage
  if (lhs->pihp_percentage != rhs->pihp_percentage) {
    return false;
  }
  // blinker_flag
  if (lhs->blinker_flag != rhs->blinker_flag) {
    return false;
  }
  // fusion_type
  if (lhs->fusion_type != rhs->fusion_type) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__Obstacle__copy(
  const ros2_interface__msg__Obstacle * input,
  ros2_interface__msg__Obstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!ros2_interface__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // existence_prob
  output->existence_prob = input->existence_prob;
  // create_time
  if (!ros2_interface__msg__Time__copy(
      &(input->create_time), &(output->create_time)))
  {
    return false;
  }
  // last_updated_time
  if (!ros2_interface__msg__Time__copy(
      &(input->last_updated_time), &(output->last_updated_time)))
  {
    return false;
  }
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
  // velocity_vehicle
  if (!ros2_interface__msg__Point3D__copy(
      &(input->velocity_vehicle), &(output->velocity_vehicle)))
  {
    return false;
  }
  // velocity_abs
  if (!ros2_interface__msg__Point3D__copy(
      &(input->velocity_abs), &(output->velocity_abs)))
  {
    return false;
  }
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // image_key_points
  if (!ros2_interface__msg__ImageKeyPoint__Sequence__copy(
      &(input->image_key_points), &(output->image_key_points)))
  {
    return false;
  }
  // polygon_point_abs
  if (!ros2_interface__msg__Point3D__Sequence__copy(
      &(input->polygon_point_abs), &(output->polygon_point_abs)))
  {
    return false;
  }
  // polygon_point_vehicle
  if (!ros2_interface__msg__Point3D__Sequence__copy(
      &(input->polygon_point_vehicle), &(output->polygon_point_vehicle)))
  {
    return false;
  }
  // tracking_time
  output->tracking_time = input->tracking_time;
  // type
  output->type = input->type;
  // confidence
  output->confidence = input->confidence;
  // confidence_type
  output->confidence_type = input->confidence_type;
  // drops
  if (!ros2_interface__msg__Point3D__Sequence__copy(
      &(input->drops), &(output->drops)))
  {
    return false;
  }
  // acceleration_vehicle
  if (!ros2_interface__msg__Point3D__copy(
      &(input->acceleration_vehicle), &(output->acceleration_vehicle)))
  {
    return false;
  }
  // acceleration_abs
  if (!ros2_interface__msg__Point3D__copy(
      &(input->acceleration_abs), &(output->acceleration_abs)))
  {
    return false;
  }
  // anchor_point_image
  if (!ros2_interface__msg__Point2D__copy(
      &(input->anchor_point_image), &(output->anchor_point_image)))
  {
    return false;
  }
  // anchor_point_vehicle
  if (!ros2_interface__msg__Point3D__copy(
      &(input->anchor_point_vehicle), &(output->anchor_point_vehicle)))
  {
    return false;
  }
  // anchor_point_abs
  if (!ros2_interface__msg__Point3D__copy(
      &(input->anchor_point_abs), &(output->anchor_point_abs)))
  {
    return false;
  }
  // bbox2d
  if (!ros2_interface__msg__BBox2D__copy(
      &(input->bbox2d), &(output->bbox2d)))
  {
    return false;
  }
  // bbox2d_rear
  if (!ros2_interface__msg__BBox2D__copy(
      &(input->bbox2d_rear), &(output->bbox2d_rear)))
  {
    return false;
  }
  // sub_type
  output->sub_type = input->sub_type;
  // height_above_ground
  output->height_above_ground = input->height_above_ground;
  // position_abs_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position_abs_covariance), &(output->position_abs_covariance)))
  {
    return false;
  }
  // velocity_abs_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity_abs_covariance), &(output->velocity_abs_covariance)))
  {
    return false;
  }
  // acceleration_abs_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acceleration_abs_covariance), &(output->acceleration_abs_covariance)))
  {
    return false;
  }
  // theta_abs_covariance
  output->theta_abs_covariance = input->theta_abs_covariance;
  // position_vehicle_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position_vehicle_covariance), &(output->position_vehicle_covariance)))
  {
    return false;
  }
  // velocity_vehicle_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity_vehicle_covariance), &(output->velocity_vehicle_covariance)))
  {
    return false;
  }
  // acceleration_vehicle_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acceleration_vehicle_covariance), &(output->acceleration_vehicle_covariance)))
  {
    return false;
  }
  // theta_vehicle_covariance
  output->theta_vehicle_covariance = input->theta_vehicle_covariance;
  // sensor_calibrator
  if (!ros2_interface__msg__SensorCalibrator__copy(
      &(input->sensor_calibrator), &(output->sensor_calibrator)))
  {
    return false;
  }
  // cipv_flag
  output->cipv_flag = input->cipv_flag;
  // lane_position
  output->lane_position = input->lane_position;
  // pihp_percentage
  output->pihp_percentage = input->pihp_percentage;
  // blinker_flag
  output->blinker_flag = input->blinker_flag;
  // fusion_type
  output->fusion_type = input->fusion_type;
  return true;
}

ros2_interface__msg__Obstacle *
ros2_interface__msg__Obstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Obstacle * msg = (ros2_interface__msg__Obstacle *)allocator.allocate(sizeof(ros2_interface__msg__Obstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__Obstacle));
  bool success = ros2_interface__msg__Obstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__Obstacle__destroy(ros2_interface__msg__Obstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__Obstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__Obstacle__Sequence__init(ros2_interface__msg__Obstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Obstacle * data = NULL;

  if (size) {
    data = (ros2_interface__msg__Obstacle *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__Obstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__Obstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__Obstacle__fini(&data[i - 1]);
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
ros2_interface__msg__Obstacle__Sequence__fini(ros2_interface__msg__Obstacle__Sequence * array)
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
      ros2_interface__msg__Obstacle__fini(&array->data[i]);
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

ros2_interface__msg__Obstacle__Sequence *
ros2_interface__msg__Obstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__Obstacle__Sequence * array = (ros2_interface__msg__Obstacle__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__Obstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__Obstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__Obstacle__Sequence__destroy(ros2_interface__msg__Obstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__Obstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__Obstacle__Sequence__are_equal(const ros2_interface__msg__Obstacle__Sequence * lhs, const ros2_interface__msg__Obstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__Obstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__Obstacle__Sequence__copy(
  const ros2_interface__msg__Obstacle__Sequence * input,
  ros2_interface__msg__Obstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__Obstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__Obstacle * data =
      (ros2_interface__msg__Obstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__Obstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__Obstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__Obstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

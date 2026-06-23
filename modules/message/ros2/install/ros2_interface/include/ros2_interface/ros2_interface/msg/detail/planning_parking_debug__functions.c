// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/planning_parking_debug__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_preiew_polygon`
// Member `obstacles_polygon`
#include "ros2_interface/msg/detail/polygon2_d__functions.h"
// Member `path_points`
#include "ros2_interface/msg/detail/path_point__functions.h"
// Member `obstacles_vec`
#include "ros2_interface/msg/detail/point2d_list__functions.h"
// Member `warm_start_traj`
// Member `smoothed_traj_stage1`
// Member `smoothed_traj_stage2`
#include "ros2_interface/msg/detail/trajectory_point__functions.h"
// Member `reference_line`
// Member `trajectory_array`
// Member `optimal_coarse_trajectory`
// Member `optimal_smooth_trajectory`
#include "ros2_interface/msg/detail/trajectory__functions.h"
// Member `replan_reason`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_interface__msg__PlanningParkingDebug__init(ros2_interface__msg__PlanningParkingDebug * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_preiew_polygon
  if (!ros2_interface__msg__Polygon2D__Sequence__init(&msg->vehicle_preiew_polygon, 0)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // obstacles_polygon
  if (!ros2_interface__msg__Polygon2D__Sequence__init(&msg->obstacles_polygon, 0)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // path_points
  if (!ros2_interface__msg__PathPoint__Sequence__init(&msg->path_points, 0)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // lat_error
  // lon_error
  // yaw_error
  // obstacles_vec
  if (!ros2_interface__msg__Point2dList__Sequence__init(&msg->obstacles_vec, 0)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // warm_start_traj
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&msg->warm_start_traj, 0)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // smoothed_traj_stage1
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&msg->smoothed_traj_stage1, 0)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // smoothed_traj_stage2
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&msg->smoothed_traj_stage2, 0)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // reference_line
  if (!ros2_interface__msg__Trajectory__init(&msg->reference_line)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // trajectory_array
  if (!ros2_interface__msg__Trajectory__Sequence__init(&msg->trajectory_array, 0)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // optimal_coarse_trajectory
  if (!ros2_interface__msg__Trajectory__init(&msg->optimal_coarse_trajectory)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // optimal_smooth_trajectory
  if (!ros2_interface__msg__Trajectory__init(&msg->optimal_smooth_trajectory)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // hybrid_a_star_map_time
  // hybrid_a_star_heuristic_time
  // hybrid_a_star_rs_time
  // hybrid_a_star_total_time
  // ias_collision_avoidance_time
  // ias_path_smooth_time
  // ias_speed_smooth_time
  // ias_total_time
  // samping_trajectory_time
  // is_replan
  // replan_reason
  if (!rosidl_runtime_c__String__init(&msg->replan_reason)) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
    return false;
  }
  // replan_time
  // replan_num
  // optimizer_thread_counter
  // replan_by_context_update_counter
  // replan_by_large_error_counter
  // parking_type
  // moves_counter
  // remain_distance
  // distance_to_leader_obj
  // state
  return true;
}

void
ros2_interface__msg__PlanningParkingDebug__fini(ros2_interface__msg__PlanningParkingDebug * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_preiew_polygon
  ros2_interface__msg__Polygon2D__Sequence__fini(&msg->vehicle_preiew_polygon);
  // obstacles_polygon
  ros2_interface__msg__Polygon2D__Sequence__fini(&msg->obstacles_polygon);
  // path_points
  ros2_interface__msg__PathPoint__Sequence__fini(&msg->path_points);
  // lat_error
  // lon_error
  // yaw_error
  // obstacles_vec
  ros2_interface__msg__Point2dList__Sequence__fini(&msg->obstacles_vec);
  // warm_start_traj
  ros2_interface__msg__TrajectoryPoint__Sequence__fini(&msg->warm_start_traj);
  // smoothed_traj_stage1
  ros2_interface__msg__TrajectoryPoint__Sequence__fini(&msg->smoothed_traj_stage1);
  // smoothed_traj_stage2
  ros2_interface__msg__TrajectoryPoint__Sequence__fini(&msg->smoothed_traj_stage2);
  // reference_line
  ros2_interface__msg__Trajectory__fini(&msg->reference_line);
  // trajectory_array
  ros2_interface__msg__Trajectory__Sequence__fini(&msg->trajectory_array);
  // optimal_coarse_trajectory
  ros2_interface__msg__Trajectory__fini(&msg->optimal_coarse_trajectory);
  // optimal_smooth_trajectory
  ros2_interface__msg__Trajectory__fini(&msg->optimal_smooth_trajectory);
  // hybrid_a_star_map_time
  // hybrid_a_star_heuristic_time
  // hybrid_a_star_rs_time
  // hybrid_a_star_total_time
  // ias_collision_avoidance_time
  // ias_path_smooth_time
  // ias_speed_smooth_time
  // ias_total_time
  // samping_trajectory_time
  // is_replan
  // replan_reason
  rosidl_runtime_c__String__fini(&msg->replan_reason);
  // replan_time
  // replan_num
  // optimizer_thread_counter
  // replan_by_context_update_counter
  // replan_by_large_error_counter
  // parking_type
  // moves_counter
  // remain_distance
  // distance_to_leader_obj
  // state
}

bool
ros2_interface__msg__PlanningParkingDebug__are_equal(const ros2_interface__msg__PlanningParkingDebug * lhs, const ros2_interface__msg__PlanningParkingDebug * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_preiew_polygon
  if (!ros2_interface__msg__Polygon2D__Sequence__are_equal(
      &(lhs->vehicle_preiew_polygon), &(rhs->vehicle_preiew_polygon)))
  {
    return false;
  }
  // obstacles_polygon
  if (!ros2_interface__msg__Polygon2D__Sequence__are_equal(
      &(lhs->obstacles_polygon), &(rhs->obstacles_polygon)))
  {
    return false;
  }
  // path_points
  if (!ros2_interface__msg__PathPoint__Sequence__are_equal(
      &(lhs->path_points), &(rhs->path_points)))
  {
    return false;
  }
  // lat_error
  if (lhs->lat_error != rhs->lat_error) {
    return false;
  }
  // lon_error
  if (lhs->lon_error != rhs->lon_error) {
    return false;
  }
  // yaw_error
  if (lhs->yaw_error != rhs->yaw_error) {
    return false;
  }
  // obstacles_vec
  if (!ros2_interface__msg__Point2dList__Sequence__are_equal(
      &(lhs->obstacles_vec), &(rhs->obstacles_vec)))
  {
    return false;
  }
  // warm_start_traj
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->warm_start_traj), &(rhs->warm_start_traj)))
  {
    return false;
  }
  // smoothed_traj_stage1
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->smoothed_traj_stage1), &(rhs->smoothed_traj_stage1)))
  {
    return false;
  }
  // smoothed_traj_stage2
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->smoothed_traj_stage2), &(rhs->smoothed_traj_stage2)))
  {
    return false;
  }
  // reference_line
  if (!ros2_interface__msg__Trajectory__are_equal(
      &(lhs->reference_line), &(rhs->reference_line)))
  {
    return false;
  }
  // trajectory_array
  if (!ros2_interface__msg__Trajectory__Sequence__are_equal(
      &(lhs->trajectory_array), &(rhs->trajectory_array)))
  {
    return false;
  }
  // optimal_coarse_trajectory
  if (!ros2_interface__msg__Trajectory__are_equal(
      &(lhs->optimal_coarse_trajectory), &(rhs->optimal_coarse_trajectory)))
  {
    return false;
  }
  // optimal_smooth_trajectory
  if (!ros2_interface__msg__Trajectory__are_equal(
      &(lhs->optimal_smooth_trajectory), &(rhs->optimal_smooth_trajectory)))
  {
    return false;
  }
  // hybrid_a_star_map_time
  if (lhs->hybrid_a_star_map_time != rhs->hybrid_a_star_map_time) {
    return false;
  }
  // hybrid_a_star_heuristic_time
  if (lhs->hybrid_a_star_heuristic_time != rhs->hybrid_a_star_heuristic_time) {
    return false;
  }
  // hybrid_a_star_rs_time
  if (lhs->hybrid_a_star_rs_time != rhs->hybrid_a_star_rs_time) {
    return false;
  }
  // hybrid_a_star_total_time
  if (lhs->hybrid_a_star_total_time != rhs->hybrid_a_star_total_time) {
    return false;
  }
  // ias_collision_avoidance_time
  if (lhs->ias_collision_avoidance_time != rhs->ias_collision_avoidance_time) {
    return false;
  }
  // ias_path_smooth_time
  if (lhs->ias_path_smooth_time != rhs->ias_path_smooth_time) {
    return false;
  }
  // ias_speed_smooth_time
  if (lhs->ias_speed_smooth_time != rhs->ias_speed_smooth_time) {
    return false;
  }
  // ias_total_time
  if (lhs->ias_total_time != rhs->ias_total_time) {
    return false;
  }
  // samping_trajectory_time
  if (lhs->samping_trajectory_time != rhs->samping_trajectory_time) {
    return false;
  }
  // is_replan
  if (lhs->is_replan != rhs->is_replan) {
    return false;
  }
  // replan_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->replan_reason), &(rhs->replan_reason)))
  {
    return false;
  }
  // replan_time
  if (lhs->replan_time != rhs->replan_time) {
    return false;
  }
  // replan_num
  if (lhs->replan_num != rhs->replan_num) {
    return false;
  }
  // optimizer_thread_counter
  if (lhs->optimizer_thread_counter != rhs->optimizer_thread_counter) {
    return false;
  }
  // replan_by_context_update_counter
  if (lhs->replan_by_context_update_counter != rhs->replan_by_context_update_counter) {
    return false;
  }
  // replan_by_large_error_counter
  if (lhs->replan_by_large_error_counter != rhs->replan_by_large_error_counter) {
    return false;
  }
  // parking_type
  if (lhs->parking_type != rhs->parking_type) {
    return false;
  }
  // moves_counter
  if (lhs->moves_counter != rhs->moves_counter) {
    return false;
  }
  // remain_distance
  if (lhs->remain_distance != rhs->remain_distance) {
    return false;
  }
  // distance_to_leader_obj
  if (lhs->distance_to_leader_obj != rhs->distance_to_leader_obj) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
ros2_interface__msg__PlanningParkingDebug__copy(
  const ros2_interface__msg__PlanningParkingDebug * input,
  ros2_interface__msg__PlanningParkingDebug * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_preiew_polygon
  if (!ros2_interface__msg__Polygon2D__Sequence__copy(
      &(input->vehicle_preiew_polygon), &(output->vehicle_preiew_polygon)))
  {
    return false;
  }
  // obstacles_polygon
  if (!ros2_interface__msg__Polygon2D__Sequence__copy(
      &(input->obstacles_polygon), &(output->obstacles_polygon)))
  {
    return false;
  }
  // path_points
  if (!ros2_interface__msg__PathPoint__Sequence__copy(
      &(input->path_points), &(output->path_points)))
  {
    return false;
  }
  // lat_error
  output->lat_error = input->lat_error;
  // lon_error
  output->lon_error = input->lon_error;
  // yaw_error
  output->yaw_error = input->yaw_error;
  // obstacles_vec
  if (!ros2_interface__msg__Point2dList__Sequence__copy(
      &(input->obstacles_vec), &(output->obstacles_vec)))
  {
    return false;
  }
  // warm_start_traj
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__copy(
      &(input->warm_start_traj), &(output->warm_start_traj)))
  {
    return false;
  }
  // smoothed_traj_stage1
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__copy(
      &(input->smoothed_traj_stage1), &(output->smoothed_traj_stage1)))
  {
    return false;
  }
  // smoothed_traj_stage2
  if (!ros2_interface__msg__TrajectoryPoint__Sequence__copy(
      &(input->smoothed_traj_stage2), &(output->smoothed_traj_stage2)))
  {
    return false;
  }
  // reference_line
  if (!ros2_interface__msg__Trajectory__copy(
      &(input->reference_line), &(output->reference_line)))
  {
    return false;
  }
  // trajectory_array
  if (!ros2_interface__msg__Trajectory__Sequence__copy(
      &(input->trajectory_array), &(output->trajectory_array)))
  {
    return false;
  }
  // optimal_coarse_trajectory
  if (!ros2_interface__msg__Trajectory__copy(
      &(input->optimal_coarse_trajectory), &(output->optimal_coarse_trajectory)))
  {
    return false;
  }
  // optimal_smooth_trajectory
  if (!ros2_interface__msg__Trajectory__copy(
      &(input->optimal_smooth_trajectory), &(output->optimal_smooth_trajectory)))
  {
    return false;
  }
  // hybrid_a_star_map_time
  output->hybrid_a_star_map_time = input->hybrid_a_star_map_time;
  // hybrid_a_star_heuristic_time
  output->hybrid_a_star_heuristic_time = input->hybrid_a_star_heuristic_time;
  // hybrid_a_star_rs_time
  output->hybrid_a_star_rs_time = input->hybrid_a_star_rs_time;
  // hybrid_a_star_total_time
  output->hybrid_a_star_total_time = input->hybrid_a_star_total_time;
  // ias_collision_avoidance_time
  output->ias_collision_avoidance_time = input->ias_collision_avoidance_time;
  // ias_path_smooth_time
  output->ias_path_smooth_time = input->ias_path_smooth_time;
  // ias_speed_smooth_time
  output->ias_speed_smooth_time = input->ias_speed_smooth_time;
  // ias_total_time
  output->ias_total_time = input->ias_total_time;
  // samping_trajectory_time
  output->samping_trajectory_time = input->samping_trajectory_time;
  // is_replan
  output->is_replan = input->is_replan;
  // replan_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->replan_reason), &(output->replan_reason)))
  {
    return false;
  }
  // replan_time
  output->replan_time = input->replan_time;
  // replan_num
  output->replan_num = input->replan_num;
  // optimizer_thread_counter
  output->optimizer_thread_counter = input->optimizer_thread_counter;
  // replan_by_context_update_counter
  output->replan_by_context_update_counter = input->replan_by_context_update_counter;
  // replan_by_large_error_counter
  output->replan_by_large_error_counter = input->replan_by_large_error_counter;
  // parking_type
  output->parking_type = input->parking_type;
  // moves_counter
  output->moves_counter = input->moves_counter;
  // remain_distance
  output->remain_distance = input->remain_distance;
  // distance_to_leader_obj
  output->distance_to_leader_obj = input->distance_to_leader_obj;
  // state
  output->state = input->state;
  return true;
}

ros2_interface__msg__PlanningParkingDebug *
ros2_interface__msg__PlanningParkingDebug__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PlanningParkingDebug * msg = (ros2_interface__msg__PlanningParkingDebug *)allocator.allocate(sizeof(ros2_interface__msg__PlanningParkingDebug), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interface__msg__PlanningParkingDebug));
  bool success = ros2_interface__msg__PlanningParkingDebug__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interface__msg__PlanningParkingDebug__destroy(ros2_interface__msg__PlanningParkingDebug * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interface__msg__PlanningParkingDebug__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interface__msg__PlanningParkingDebug__Sequence__init(ros2_interface__msg__PlanningParkingDebug__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PlanningParkingDebug * data = NULL;

  if (size) {
    data = (ros2_interface__msg__PlanningParkingDebug *)allocator.zero_allocate(size, sizeof(ros2_interface__msg__PlanningParkingDebug), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interface__msg__PlanningParkingDebug__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interface__msg__PlanningParkingDebug__fini(&data[i - 1]);
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
ros2_interface__msg__PlanningParkingDebug__Sequence__fini(ros2_interface__msg__PlanningParkingDebug__Sequence * array)
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
      ros2_interface__msg__PlanningParkingDebug__fini(&array->data[i]);
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

ros2_interface__msg__PlanningParkingDebug__Sequence *
ros2_interface__msg__PlanningParkingDebug__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interface__msg__PlanningParkingDebug__Sequence * array = (ros2_interface__msg__PlanningParkingDebug__Sequence *)allocator.allocate(sizeof(ros2_interface__msg__PlanningParkingDebug__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interface__msg__PlanningParkingDebug__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interface__msg__PlanningParkingDebug__Sequence__destroy(ros2_interface__msg__PlanningParkingDebug__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interface__msg__PlanningParkingDebug__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interface__msg__PlanningParkingDebug__Sequence__are_equal(const ros2_interface__msg__PlanningParkingDebug__Sequence * lhs, const ros2_interface__msg__PlanningParkingDebug__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interface__msg__PlanningParkingDebug__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interface__msg__PlanningParkingDebug__Sequence__copy(
  const ros2_interface__msg__PlanningParkingDebug__Sequence * input,
  ros2_interface__msg__PlanningParkingDebug__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interface__msg__PlanningParkingDebug);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interface__msg__PlanningParkingDebug * data =
      (ros2_interface__msg__PlanningParkingDebug *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interface__msg__PlanningParkingDebug__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interface__msg__PlanningParkingDebug__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interface__msg__PlanningParkingDebug__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

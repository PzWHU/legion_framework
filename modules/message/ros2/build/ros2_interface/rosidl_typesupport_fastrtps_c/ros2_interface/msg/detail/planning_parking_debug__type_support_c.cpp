// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/planning_parking_debug__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/planning_parking_debug__struct.h"
#include "ros2_interface/msg/detail/planning_parking_debug__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ros2_interface/msg/detail/path_point__functions.h"  // path_points
#include "ros2_interface/msg/detail/point2d_list__functions.h"  // obstacles_vec
#include "ros2_interface/msg/detail/polygon2_d__functions.h"  // obstacles_polygon, vehicle_preiew_polygon
#include "ros2_interface/msg/detail/trajectory__functions.h"  // optimal_coarse_trajectory, optimal_smooth_trajectory, reference_line, trajectory_array
#include "ros2_interface/msg/detail/trajectory_point__functions.h"  // smoothed_traj_stage1, smoothed_traj_stage2, warm_start_traj
#include "rosidl_runtime_c/string.h"  // replan_reason
#include "rosidl_runtime_c/string_functions.h"  // replan_reason

// forward declare type support functions
size_t get_serialized_size_ros2_interface__msg__PathPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__PathPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, PathPoint)();
size_t get_serialized_size_ros2_interface__msg__Point2dList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__Point2dList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, Point2dList)();
size_t get_serialized_size_ros2_interface__msg__Polygon2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__Polygon2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, Polygon2D)();
size_t get_serialized_size_ros2_interface__msg__Trajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__Trajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, Trajectory)();
size_t get_serialized_size_ros2_interface__msg__TrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__TrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint)();


using _PlanningParkingDebug__ros_msg_type = ros2_interface__msg__PlanningParkingDebug;

static bool _PlanningParkingDebug__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanningParkingDebug__ros_msg_type * ros_message = static_cast<const _PlanningParkingDebug__ros_msg_type *>(untyped_ros_message);
  // Field name: vehicle_preiew_polygon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Polygon2D
      )()->data);
    size_t size = ros_message->vehicle_preiew_polygon.size;
    auto array_ptr = ros_message->vehicle_preiew_polygon.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: obstacles_polygon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Polygon2D
      )()->data);
    size_t size = ros_message->obstacles_polygon.size;
    auto array_ptr = ros_message->obstacles_polygon.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: path_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, PathPoint
      )()->data);
    size_t size = ros_message->path_points.size;
    auto array_ptr = ros_message->path_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lat_error
  {
    cdr << ros_message->lat_error;
  }

  // Field name: lon_error
  {
    cdr << ros_message->lon_error;
  }

  // Field name: yaw_error
  {
    cdr << ros_message->yaw_error;
  }

  // Field name: obstacles_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Point2dList
      )()->data);
    size_t size = ros_message->obstacles_vec.size;
    auto array_ptr = ros_message->obstacles_vec.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: warm_start_traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint
      )()->data);
    size_t size = ros_message->warm_start_traj.size;
    auto array_ptr = ros_message->warm_start_traj.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: smoothed_traj_stage1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint
      )()->data);
    size_t size = ros_message->smoothed_traj_stage1.size;
    auto array_ptr = ros_message->smoothed_traj_stage1.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: smoothed_traj_stage2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint
      )()->data);
    size_t size = ros_message->smoothed_traj_stage2.size;
    auto array_ptr = ros_message->smoothed_traj_stage2.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: reference_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->reference_line, cdr))
    {
      return false;
    }
  }

  // Field name: trajectory_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Trajectory
      )()->data);
    size_t size = ros_message->trajectory_array.size;
    auto array_ptr = ros_message->trajectory_array.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: optimal_coarse_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->optimal_coarse_trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: optimal_smooth_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->optimal_smooth_trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: hybrid_a_star_map_time
  {
    cdr << ros_message->hybrid_a_star_map_time;
  }

  // Field name: hybrid_a_star_heuristic_time
  {
    cdr << ros_message->hybrid_a_star_heuristic_time;
  }

  // Field name: hybrid_a_star_rs_time
  {
    cdr << ros_message->hybrid_a_star_rs_time;
  }

  // Field name: hybrid_a_star_total_time
  {
    cdr << ros_message->hybrid_a_star_total_time;
  }

  // Field name: ias_collision_avoidance_time
  {
    cdr << ros_message->ias_collision_avoidance_time;
  }

  // Field name: ias_path_smooth_time
  {
    cdr << ros_message->ias_path_smooth_time;
  }

  // Field name: ias_speed_smooth_time
  {
    cdr << ros_message->ias_speed_smooth_time;
  }

  // Field name: ias_total_time
  {
    cdr << ros_message->ias_total_time;
  }

  // Field name: samping_trajectory_time
  {
    cdr << ros_message->samping_trajectory_time;
  }

  // Field name: is_replan
  {
    cdr << (ros_message->is_replan ? true : false);
  }

  // Field name: replan_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->replan_reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: replan_time
  {
    cdr << ros_message->replan_time;
  }

  // Field name: replan_num
  {
    cdr << ros_message->replan_num;
  }

  // Field name: optimizer_thread_counter
  {
    cdr << ros_message->optimizer_thread_counter;
  }

  // Field name: replan_by_context_update_counter
  {
    cdr << ros_message->replan_by_context_update_counter;
  }

  // Field name: replan_by_large_error_counter
  {
    cdr << ros_message->replan_by_large_error_counter;
  }

  // Field name: parking_type
  {
    cdr << ros_message->parking_type;
  }

  // Field name: moves_counter
  {
    cdr << ros_message->moves_counter;
  }

  // Field name: remain_distance
  {
    cdr << ros_message->remain_distance;
  }

  // Field name: distance_to_leader_obj
  {
    cdr << ros_message->distance_to_leader_obj;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  return true;
}

static bool _PlanningParkingDebug__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanningParkingDebug__ros_msg_type * ros_message = static_cast<_PlanningParkingDebug__ros_msg_type *>(untyped_ros_message);
  // Field name: vehicle_preiew_polygon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Polygon2D
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->vehicle_preiew_polygon.data) {
      ros2_interface__msg__Polygon2D__Sequence__fini(&ros_message->vehicle_preiew_polygon);
    }
    if (!ros2_interface__msg__Polygon2D__Sequence__init(&ros_message->vehicle_preiew_polygon, size)) {
      fprintf(stderr, "failed to create array for field 'vehicle_preiew_polygon'");
      return false;
    }
    auto array_ptr = ros_message->vehicle_preiew_polygon.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: obstacles_polygon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Polygon2D
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->obstacles_polygon.data) {
      ros2_interface__msg__Polygon2D__Sequence__fini(&ros_message->obstacles_polygon);
    }
    if (!ros2_interface__msg__Polygon2D__Sequence__init(&ros_message->obstacles_polygon, size)) {
      fprintf(stderr, "failed to create array for field 'obstacles_polygon'");
      return false;
    }
    auto array_ptr = ros_message->obstacles_polygon.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: path_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, PathPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->path_points.data) {
      ros2_interface__msg__PathPoint__Sequence__fini(&ros_message->path_points);
    }
    if (!ros2_interface__msg__PathPoint__Sequence__init(&ros_message->path_points, size)) {
      fprintf(stderr, "failed to create array for field 'path_points'");
      return false;
    }
    auto array_ptr = ros_message->path_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lat_error
  {
    cdr >> ros_message->lat_error;
  }

  // Field name: lon_error
  {
    cdr >> ros_message->lon_error;
  }

  // Field name: yaw_error
  {
    cdr >> ros_message->yaw_error;
  }

  // Field name: obstacles_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Point2dList
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->obstacles_vec.data) {
      ros2_interface__msg__Point2dList__Sequence__fini(&ros_message->obstacles_vec);
    }
    if (!ros2_interface__msg__Point2dList__Sequence__init(&ros_message->obstacles_vec, size)) {
      fprintf(stderr, "failed to create array for field 'obstacles_vec'");
      return false;
    }
    auto array_ptr = ros_message->obstacles_vec.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: warm_start_traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->warm_start_traj.data) {
      ros2_interface__msg__TrajectoryPoint__Sequence__fini(&ros_message->warm_start_traj);
    }
    if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&ros_message->warm_start_traj, size)) {
      fprintf(stderr, "failed to create array for field 'warm_start_traj'");
      return false;
    }
    auto array_ptr = ros_message->warm_start_traj.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: smoothed_traj_stage1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->smoothed_traj_stage1.data) {
      ros2_interface__msg__TrajectoryPoint__Sequence__fini(&ros_message->smoothed_traj_stage1);
    }
    if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&ros_message->smoothed_traj_stage1, size)) {
      fprintf(stderr, "failed to create array for field 'smoothed_traj_stage1'");
      return false;
    }
    auto array_ptr = ros_message->smoothed_traj_stage1.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: smoothed_traj_stage2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->smoothed_traj_stage2.data) {
      ros2_interface__msg__TrajectoryPoint__Sequence__fini(&ros_message->smoothed_traj_stage2);
    }
    if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&ros_message->smoothed_traj_stage2, size)) {
      fprintf(stderr, "failed to create array for field 'smoothed_traj_stage2'");
      return false;
    }
    auto array_ptr = ros_message->smoothed_traj_stage2.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: reference_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->reference_line))
    {
      return false;
    }
  }

  // Field name: trajectory_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Trajectory
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->trajectory_array.data) {
      ros2_interface__msg__Trajectory__Sequence__fini(&ros_message->trajectory_array);
    }
    if (!ros2_interface__msg__Trajectory__Sequence__init(&ros_message->trajectory_array, size)) {
      fprintf(stderr, "failed to create array for field 'trajectory_array'");
      return false;
    }
    auto array_ptr = ros_message->trajectory_array.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: optimal_coarse_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->optimal_coarse_trajectory))
    {
      return false;
    }
  }

  // Field name: optimal_smooth_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->optimal_smooth_trajectory))
    {
      return false;
    }
  }

  // Field name: hybrid_a_star_map_time
  {
    cdr >> ros_message->hybrid_a_star_map_time;
  }

  // Field name: hybrid_a_star_heuristic_time
  {
    cdr >> ros_message->hybrid_a_star_heuristic_time;
  }

  // Field name: hybrid_a_star_rs_time
  {
    cdr >> ros_message->hybrid_a_star_rs_time;
  }

  // Field name: hybrid_a_star_total_time
  {
    cdr >> ros_message->hybrid_a_star_total_time;
  }

  // Field name: ias_collision_avoidance_time
  {
    cdr >> ros_message->ias_collision_avoidance_time;
  }

  // Field name: ias_path_smooth_time
  {
    cdr >> ros_message->ias_path_smooth_time;
  }

  // Field name: ias_speed_smooth_time
  {
    cdr >> ros_message->ias_speed_smooth_time;
  }

  // Field name: ias_total_time
  {
    cdr >> ros_message->ias_total_time;
  }

  // Field name: samping_trajectory_time
  {
    cdr >> ros_message->samping_trajectory_time;
  }

  // Field name: is_replan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_replan = tmp ? true : false;
  }

  // Field name: replan_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->replan_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->replan_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->replan_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'replan_reason'\n");
      return false;
    }
  }

  // Field name: replan_time
  {
    cdr >> ros_message->replan_time;
  }

  // Field name: replan_num
  {
    cdr >> ros_message->replan_num;
  }

  // Field name: optimizer_thread_counter
  {
    cdr >> ros_message->optimizer_thread_counter;
  }

  // Field name: replan_by_context_update_counter
  {
    cdr >> ros_message->replan_by_context_update_counter;
  }

  // Field name: replan_by_large_error_counter
  {
    cdr >> ros_message->replan_by_large_error_counter;
  }

  // Field name: parking_type
  {
    cdr >> ros_message->parking_type;
  }

  // Field name: moves_counter
  {
    cdr >> ros_message->moves_counter;
  }

  // Field name: remain_distance
  {
    cdr >> ros_message->remain_distance;
  }

  // Field name: distance_to_leader_obj
  {
    cdr >> ros_message->distance_to_leader_obj;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__PlanningParkingDebug(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningParkingDebug__ros_msg_type * ros_message = static_cast<const _PlanningParkingDebug__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vehicle_preiew_polygon
  {
    size_t array_size = ros_message->vehicle_preiew_polygon.size;
    auto array_ptr = ros_message->vehicle_preiew_polygon.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__Polygon2D(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name obstacles_polygon
  {
    size_t array_size = ros_message->obstacles_polygon.size;
    auto array_ptr = ros_message->obstacles_polygon.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__Polygon2D(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name path_points
  {
    size_t array_size = ros_message->path_points.size;
    auto array_ptr = ros_message->path_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__PathPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lat_error
  {
    size_t item_size = sizeof(ros_message->lat_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon_error
  {
    size_t item_size = sizeof(ros_message->lon_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_error
  {
    size_t item_size = sizeof(ros_message->yaw_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacles_vec
  {
    size_t array_size = ros_message->obstacles_vec.size;
    auto array_ptr = ros_message->obstacles_vec.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__Point2dList(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name warm_start_traj
  {
    size_t array_size = ros_message->warm_start_traj.size;
    auto array_ptr = ros_message->warm_start_traj.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__TrajectoryPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name smoothed_traj_stage1
  {
    size_t array_size = ros_message->smoothed_traj_stage1.size;
    auto array_ptr = ros_message->smoothed_traj_stage1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__TrajectoryPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name smoothed_traj_stage2
  {
    size_t array_size = ros_message->smoothed_traj_stage2.size;
    auto array_ptr = ros_message->smoothed_traj_stage2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__TrajectoryPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name reference_line

  current_alignment += get_serialized_size_ros2_interface__msg__Trajectory(
    &(ros_message->reference_line), current_alignment);
  // field.name trajectory_array
  {
    size_t array_size = ros_message->trajectory_array.size;
    auto array_ptr = ros_message->trajectory_array.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__Trajectory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name optimal_coarse_trajectory

  current_alignment += get_serialized_size_ros2_interface__msg__Trajectory(
    &(ros_message->optimal_coarse_trajectory), current_alignment);
  // field.name optimal_smooth_trajectory

  current_alignment += get_serialized_size_ros2_interface__msg__Trajectory(
    &(ros_message->optimal_smooth_trajectory), current_alignment);
  // field.name hybrid_a_star_map_time
  {
    size_t item_size = sizeof(ros_message->hybrid_a_star_map_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hybrid_a_star_heuristic_time
  {
    size_t item_size = sizeof(ros_message->hybrid_a_star_heuristic_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hybrid_a_star_rs_time
  {
    size_t item_size = sizeof(ros_message->hybrid_a_star_rs_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hybrid_a_star_total_time
  {
    size_t item_size = sizeof(ros_message->hybrid_a_star_total_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ias_collision_avoidance_time
  {
    size_t item_size = sizeof(ros_message->ias_collision_avoidance_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ias_path_smooth_time
  {
    size_t item_size = sizeof(ros_message->ias_path_smooth_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ias_speed_smooth_time
  {
    size_t item_size = sizeof(ros_message->ias_speed_smooth_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ias_total_time
  {
    size_t item_size = sizeof(ros_message->ias_total_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name samping_trajectory_time
  {
    size_t item_size = sizeof(ros_message->samping_trajectory_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_replan
  {
    size_t item_size = sizeof(ros_message->is_replan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replan_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->replan_reason.size + 1);
  // field.name replan_time
  {
    size_t item_size = sizeof(ros_message->replan_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replan_num
  {
    size_t item_size = sizeof(ros_message->replan_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optimizer_thread_counter
  {
    size_t item_size = sizeof(ros_message->optimizer_thread_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replan_by_context_update_counter
  {
    size_t item_size = sizeof(ros_message->replan_by_context_update_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replan_by_large_error_counter
  {
    size_t item_size = sizeof(ros_message->replan_by_large_error_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parking_type
  {
    size_t item_size = sizeof(ros_message->parking_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name moves_counter
  {
    size_t item_size = sizeof(ros_message->moves_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_distance
  {
    size_t item_size = sizeof(ros_message->remain_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_to_leader_obj
  {
    size_t item_size = sizeof(ros_message->distance_to_leader_obj);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanningParkingDebug__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__PlanningParkingDebug(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__PlanningParkingDebug(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: vehicle_preiew_polygon
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__Polygon2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: obstacles_polygon
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__Polygon2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: path_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__PathPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lat_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: obstacles_vec
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__Point2dList(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: warm_start_traj
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: smoothed_traj_stage1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: smoothed_traj_stage2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: reference_line
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__Trajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: trajectory_array
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__Trajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: optimal_coarse_trajectory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__Trajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: optimal_smooth_trajectory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__Trajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: hybrid_a_star_map_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hybrid_a_star_heuristic_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hybrid_a_star_rs_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hybrid_a_star_total_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ias_collision_avoidance_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ias_path_smooth_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ias_speed_smooth_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ias_total_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: samping_trajectory_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_replan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: replan_reason
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: replan_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: replan_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: optimizer_thread_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: replan_by_context_update_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: replan_by_large_error_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: parking_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: moves_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: remain_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distance_to_leader_obj
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface__msg__PlanningParkingDebug;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlanningParkingDebug__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__PlanningParkingDebug(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanningParkingDebug = {
  "ros2_interface::msg",
  "PlanningParkingDebug",
  _PlanningParkingDebug__cdr_serialize,
  _PlanningParkingDebug__cdr_deserialize,
  _PlanningParkingDebug__get_serialized_size,
  _PlanningParkingDebug__max_serialized_size
};

static rosidl_message_type_support_t _PlanningParkingDebug__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanningParkingDebug,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, PlanningParkingDebug)() {
  return &_PlanningParkingDebug__type_support;
}

#if defined(__cplusplus)
}
#endif

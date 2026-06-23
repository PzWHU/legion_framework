// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/planning_parking_debug__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/planning_parking_debug__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::Polygon2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::Polygon2D &);
size_t get_serialized_size(
  const ros2_interface::msg::Polygon2D &,
  size_t current_alignment);
size_t
max_serialized_size_Polygon2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface

// functions for ros2_interface::msg::Polygon2D already declared above

namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::PathPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::PathPoint &);
size_t get_serialized_size(
  const ros2_interface::msg::PathPoint &,
  size_t current_alignment);
size_t
max_serialized_size_PathPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface

namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::Point2dList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::Point2dList &);
size_t get_serialized_size(
  const ros2_interface::msg::Point2dList &,
  size_t current_alignment);
size_t
max_serialized_size_Point2dList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface

namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::TrajectoryPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::TrajectoryPoint &);
size_t get_serialized_size(
  const ros2_interface::msg::TrajectoryPoint &,
  size_t current_alignment);
size_t
max_serialized_size_TrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface

// functions for ros2_interface::msg::TrajectoryPoint already declared above

// functions for ros2_interface::msg::TrajectoryPoint already declared above

namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::Trajectory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::Trajectory &);
size_t get_serialized_size(
  const ros2_interface::msg::Trajectory &,
  size_t current_alignment);
size_t
max_serialized_size_Trajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface

// functions for ros2_interface::msg::Trajectory already declared above

// functions for ros2_interface::msg::Trajectory already declared above

// functions for ros2_interface::msg::Trajectory already declared above


namespace ros2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_serialize(
  const ros2_interface::msg::PlanningParkingDebug & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vehicle_preiew_polygon
  {
    size_t size = ros_message.vehicle_preiew_polygon.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.vehicle_preiew_polygon[i],
        cdr);
    }
  }
  // Member: obstacles_polygon
  {
    size_t size = ros_message.obstacles_polygon.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.obstacles_polygon[i],
        cdr);
    }
  }
  // Member: path_points
  {
    size_t size = ros_message.path_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.path_points[i],
        cdr);
    }
  }
  // Member: lat_error
  cdr << ros_message.lat_error;
  // Member: lon_error
  cdr << ros_message.lon_error;
  // Member: yaw_error
  cdr << ros_message.yaw_error;
  // Member: obstacles_vec
  {
    size_t size = ros_message.obstacles_vec.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.obstacles_vec[i],
        cdr);
    }
  }
  // Member: warm_start_traj
  {
    size_t size = ros_message.warm_start_traj.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.warm_start_traj[i],
        cdr);
    }
  }
  // Member: smoothed_traj_stage1
  {
    size_t size = ros_message.smoothed_traj_stage1.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.smoothed_traj_stage1[i],
        cdr);
    }
  }
  // Member: smoothed_traj_stage2
  {
    size_t size = ros_message.smoothed_traj_stage2.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.smoothed_traj_stage2[i],
        cdr);
    }
  }
  // Member: reference_line
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.reference_line,
    cdr);
  // Member: trajectory_array
  {
    size_t size = ros_message.trajectory_array.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.trajectory_array[i],
        cdr);
    }
  }
  // Member: optimal_coarse_trajectory
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.optimal_coarse_trajectory,
    cdr);
  // Member: optimal_smooth_trajectory
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.optimal_smooth_trajectory,
    cdr);
  // Member: hybrid_a_star_map_time
  cdr << ros_message.hybrid_a_star_map_time;
  // Member: hybrid_a_star_heuristic_time
  cdr << ros_message.hybrid_a_star_heuristic_time;
  // Member: hybrid_a_star_rs_time
  cdr << ros_message.hybrid_a_star_rs_time;
  // Member: hybrid_a_star_total_time
  cdr << ros_message.hybrid_a_star_total_time;
  // Member: ias_collision_avoidance_time
  cdr << ros_message.ias_collision_avoidance_time;
  // Member: ias_path_smooth_time
  cdr << ros_message.ias_path_smooth_time;
  // Member: ias_speed_smooth_time
  cdr << ros_message.ias_speed_smooth_time;
  // Member: ias_total_time
  cdr << ros_message.ias_total_time;
  // Member: samping_trajectory_time
  cdr << ros_message.samping_trajectory_time;
  // Member: is_replan
  cdr << (ros_message.is_replan ? true : false);
  // Member: replan_reason
  cdr << ros_message.replan_reason;
  // Member: replan_time
  cdr << ros_message.replan_time;
  // Member: replan_num
  cdr << ros_message.replan_num;
  // Member: optimizer_thread_counter
  cdr << ros_message.optimizer_thread_counter;
  // Member: replan_by_context_update_counter
  cdr << ros_message.replan_by_context_update_counter;
  // Member: replan_by_large_error_counter
  cdr << ros_message.replan_by_large_error_counter;
  // Member: parking_type
  cdr << ros_message.parking_type;
  // Member: moves_counter
  cdr << ros_message.moves_counter;
  // Member: remain_distance
  cdr << ros_message.remain_distance;
  // Member: distance_to_leader_obj
  cdr << ros_message.distance_to_leader_obj;
  // Member: state
  cdr << ros_message.state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::PlanningParkingDebug & ros_message)
{
  // Member: vehicle_preiew_polygon
  {
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

    ros_message.vehicle_preiew_polygon.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.vehicle_preiew_polygon[i]);
    }
  }

  // Member: obstacles_polygon
  {
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

    ros_message.obstacles_polygon.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.obstacles_polygon[i]);
    }
  }

  // Member: path_points
  {
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

    ros_message.path_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.path_points[i]);
    }
  }

  // Member: lat_error
  cdr >> ros_message.lat_error;

  // Member: lon_error
  cdr >> ros_message.lon_error;

  // Member: yaw_error
  cdr >> ros_message.yaw_error;

  // Member: obstacles_vec
  {
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

    ros_message.obstacles_vec.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.obstacles_vec[i]);
    }
  }

  // Member: warm_start_traj
  {
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

    ros_message.warm_start_traj.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.warm_start_traj[i]);
    }
  }

  // Member: smoothed_traj_stage1
  {
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

    ros_message.smoothed_traj_stage1.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.smoothed_traj_stage1[i]);
    }
  }

  // Member: smoothed_traj_stage2
  {
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

    ros_message.smoothed_traj_stage2.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.smoothed_traj_stage2[i]);
    }
  }

  // Member: reference_line
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.reference_line);

  // Member: trajectory_array
  {
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

    ros_message.trajectory_array.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.trajectory_array[i]);
    }
  }

  // Member: optimal_coarse_trajectory
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.optimal_coarse_trajectory);

  // Member: optimal_smooth_trajectory
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.optimal_smooth_trajectory);

  // Member: hybrid_a_star_map_time
  cdr >> ros_message.hybrid_a_star_map_time;

  // Member: hybrid_a_star_heuristic_time
  cdr >> ros_message.hybrid_a_star_heuristic_time;

  // Member: hybrid_a_star_rs_time
  cdr >> ros_message.hybrid_a_star_rs_time;

  // Member: hybrid_a_star_total_time
  cdr >> ros_message.hybrid_a_star_total_time;

  // Member: ias_collision_avoidance_time
  cdr >> ros_message.ias_collision_avoidance_time;

  // Member: ias_path_smooth_time
  cdr >> ros_message.ias_path_smooth_time;

  // Member: ias_speed_smooth_time
  cdr >> ros_message.ias_speed_smooth_time;

  // Member: ias_total_time
  cdr >> ros_message.ias_total_time;

  // Member: samping_trajectory_time
  cdr >> ros_message.samping_trajectory_time;

  // Member: is_replan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_replan = tmp ? true : false;
  }

  // Member: replan_reason
  cdr >> ros_message.replan_reason;

  // Member: replan_time
  cdr >> ros_message.replan_time;

  // Member: replan_num
  cdr >> ros_message.replan_num;

  // Member: optimizer_thread_counter
  cdr >> ros_message.optimizer_thread_counter;

  // Member: replan_by_context_update_counter
  cdr >> ros_message.replan_by_context_update_counter;

  // Member: replan_by_large_error_counter
  cdr >> ros_message.replan_by_large_error_counter;

  // Member: parking_type
  cdr >> ros_message.parking_type;

  // Member: moves_counter
  cdr >> ros_message.moves_counter;

  // Member: remain_distance
  cdr >> ros_message.remain_distance;

  // Member: distance_to_leader_obj
  cdr >> ros_message.distance_to_leader_obj;

  // Member: state
  cdr >> ros_message.state;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::PlanningParkingDebug & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vehicle_preiew_polygon
  {
    size_t array_size = ros_message.vehicle_preiew_polygon.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.vehicle_preiew_polygon[index], current_alignment);
    }
  }
  // Member: obstacles_polygon
  {
    size_t array_size = ros_message.obstacles_polygon.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.obstacles_polygon[index], current_alignment);
    }
  }
  // Member: path_points
  {
    size_t array_size = ros_message.path_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.path_points[index], current_alignment);
    }
  }
  // Member: lat_error
  {
    size_t item_size = sizeof(ros_message.lat_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lon_error
  {
    size_t item_size = sizeof(ros_message.lon_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_error
  {
    size_t item_size = sizeof(ros_message.yaw_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacles_vec
  {
    size_t array_size = ros_message.obstacles_vec.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.obstacles_vec[index], current_alignment);
    }
  }
  // Member: warm_start_traj
  {
    size_t array_size = ros_message.warm_start_traj.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.warm_start_traj[index], current_alignment);
    }
  }
  // Member: smoothed_traj_stage1
  {
    size_t array_size = ros_message.smoothed_traj_stage1.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.smoothed_traj_stage1[index], current_alignment);
    }
  }
  // Member: smoothed_traj_stage2
  {
    size_t array_size = ros_message.smoothed_traj_stage2.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.smoothed_traj_stage2[index], current_alignment);
    }
  }
  // Member: reference_line

  current_alignment +=
    ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.reference_line, current_alignment);
  // Member: trajectory_array
  {
    size_t array_size = ros_message.trajectory_array.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.trajectory_array[index], current_alignment);
    }
  }
  // Member: optimal_coarse_trajectory

  current_alignment +=
    ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.optimal_coarse_trajectory, current_alignment);
  // Member: optimal_smooth_trajectory

  current_alignment +=
    ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.optimal_smooth_trajectory, current_alignment);
  // Member: hybrid_a_star_map_time
  {
    size_t item_size = sizeof(ros_message.hybrid_a_star_map_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hybrid_a_star_heuristic_time
  {
    size_t item_size = sizeof(ros_message.hybrid_a_star_heuristic_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hybrid_a_star_rs_time
  {
    size_t item_size = sizeof(ros_message.hybrid_a_star_rs_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hybrid_a_star_total_time
  {
    size_t item_size = sizeof(ros_message.hybrid_a_star_total_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ias_collision_avoidance_time
  {
    size_t item_size = sizeof(ros_message.ias_collision_avoidance_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ias_path_smooth_time
  {
    size_t item_size = sizeof(ros_message.ias_path_smooth_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ias_speed_smooth_time
  {
    size_t item_size = sizeof(ros_message.ias_speed_smooth_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ias_total_time
  {
    size_t item_size = sizeof(ros_message.ias_total_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: samping_trajectory_time
  {
    size_t item_size = sizeof(ros_message.samping_trajectory_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_replan
  {
    size_t item_size = sizeof(ros_message.is_replan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: replan_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.replan_reason.size() + 1);
  // Member: replan_time
  {
    size_t item_size = sizeof(ros_message.replan_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: replan_num
  {
    size_t item_size = sizeof(ros_message.replan_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: optimizer_thread_counter
  {
    size_t item_size = sizeof(ros_message.optimizer_thread_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: replan_by_context_update_counter
  {
    size_t item_size = sizeof(ros_message.replan_by_context_update_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: replan_by_large_error_counter
  {
    size_t item_size = sizeof(ros_message.replan_by_large_error_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parking_type
  {
    size_t item_size = sizeof(ros_message.parking_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moves_counter
  {
    size_t item_size = sizeof(ros_message.moves_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_distance
  {
    size_t item_size = sizeof(ros_message.remain_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_to_leader_obj
  {
    size_t item_size = sizeof(ros_message.distance_to_leader_obj);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_PlanningParkingDebug(
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


  // Member: vehicle_preiew_polygon
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
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Polygon2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: obstacles_polygon
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
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Polygon2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: path_points
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
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_PathPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: lat_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lon_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: obstacles_vec
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
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2dList(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: warm_start_traj
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
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: smoothed_traj_stage1
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
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: smoothed_traj_stage2
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
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: reference_line
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Trajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: trajectory_array
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
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Trajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: optimal_coarse_trajectory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Trajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: optimal_smooth_trajectory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Trajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: hybrid_a_star_map_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: hybrid_a_star_heuristic_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: hybrid_a_star_rs_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: hybrid_a_star_total_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ias_collision_avoidance_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ias_path_smooth_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ias_speed_smooth_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ias_total_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: samping_trajectory_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_replan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: replan_reason
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

  // Member: replan_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: replan_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: optimizer_thread_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: replan_by_context_update_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: replan_by_large_error_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: parking_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: moves_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: remain_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: distance_to_leader_obj
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: state
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
    using DataType = ros2_interface::msg::PlanningParkingDebug;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PlanningParkingDebug__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::PlanningParkingDebug *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanningParkingDebug__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::PlanningParkingDebug *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanningParkingDebug__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::PlanningParkingDebug *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanningParkingDebug__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlanningParkingDebug(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlanningParkingDebug__callbacks = {
  "ros2_interface::msg",
  "PlanningParkingDebug",
  _PlanningParkingDebug__cdr_serialize,
  _PlanningParkingDebug__cdr_deserialize,
  _PlanningParkingDebug__get_serialized_size,
  _PlanningParkingDebug__max_serialized_size
};

static rosidl_message_type_support_t _PlanningParkingDebug__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanningParkingDebug__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_interface::msg::PlanningParkingDebug>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_PlanningParkingDebug__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, PlanningParkingDebug)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_PlanningParkingDebug__handle;
}

#ifdef __cplusplus
}
#endif

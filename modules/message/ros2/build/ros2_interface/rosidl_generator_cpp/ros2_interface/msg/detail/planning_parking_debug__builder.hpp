// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/planning_parking_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PlanningParkingDebug_state
{
public:
  explicit Init_PlanningParkingDebug_state(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PlanningParkingDebug state(::ros2_interface::msg::PlanningParkingDebug::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_distance_to_leader_obj
{
public:
  explicit Init_PlanningParkingDebug_distance_to_leader_obj(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_state distance_to_leader_obj(::ros2_interface::msg::PlanningParkingDebug::_distance_to_leader_obj_type arg)
  {
    msg_.distance_to_leader_obj = std::move(arg);
    return Init_PlanningParkingDebug_state(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_remain_distance
{
public:
  explicit Init_PlanningParkingDebug_remain_distance(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_distance_to_leader_obj remain_distance(::ros2_interface::msg::PlanningParkingDebug::_remain_distance_type arg)
  {
    msg_.remain_distance = std::move(arg);
    return Init_PlanningParkingDebug_distance_to_leader_obj(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_moves_counter
{
public:
  explicit Init_PlanningParkingDebug_moves_counter(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_remain_distance moves_counter(::ros2_interface::msg::PlanningParkingDebug::_moves_counter_type arg)
  {
    msg_.moves_counter = std::move(arg);
    return Init_PlanningParkingDebug_remain_distance(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_parking_type
{
public:
  explicit Init_PlanningParkingDebug_parking_type(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_moves_counter parking_type(::ros2_interface::msg::PlanningParkingDebug::_parking_type_type arg)
  {
    msg_.parking_type = std::move(arg);
    return Init_PlanningParkingDebug_moves_counter(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_replan_by_large_error_counter
{
public:
  explicit Init_PlanningParkingDebug_replan_by_large_error_counter(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_parking_type replan_by_large_error_counter(::ros2_interface::msg::PlanningParkingDebug::_replan_by_large_error_counter_type arg)
  {
    msg_.replan_by_large_error_counter = std::move(arg);
    return Init_PlanningParkingDebug_parking_type(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_replan_by_context_update_counter
{
public:
  explicit Init_PlanningParkingDebug_replan_by_context_update_counter(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_replan_by_large_error_counter replan_by_context_update_counter(::ros2_interface::msg::PlanningParkingDebug::_replan_by_context_update_counter_type arg)
  {
    msg_.replan_by_context_update_counter = std::move(arg);
    return Init_PlanningParkingDebug_replan_by_large_error_counter(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_optimizer_thread_counter
{
public:
  explicit Init_PlanningParkingDebug_optimizer_thread_counter(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_replan_by_context_update_counter optimizer_thread_counter(::ros2_interface::msg::PlanningParkingDebug::_optimizer_thread_counter_type arg)
  {
    msg_.optimizer_thread_counter = std::move(arg);
    return Init_PlanningParkingDebug_replan_by_context_update_counter(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_replan_num
{
public:
  explicit Init_PlanningParkingDebug_replan_num(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_optimizer_thread_counter replan_num(::ros2_interface::msg::PlanningParkingDebug::_replan_num_type arg)
  {
    msg_.replan_num = std::move(arg);
    return Init_PlanningParkingDebug_optimizer_thread_counter(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_replan_time
{
public:
  explicit Init_PlanningParkingDebug_replan_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_replan_num replan_time(::ros2_interface::msg::PlanningParkingDebug::_replan_time_type arg)
  {
    msg_.replan_time = std::move(arg);
    return Init_PlanningParkingDebug_replan_num(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_replan_reason
{
public:
  explicit Init_PlanningParkingDebug_replan_reason(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_replan_time replan_reason(::ros2_interface::msg::PlanningParkingDebug::_replan_reason_type arg)
  {
    msg_.replan_reason = std::move(arg);
    return Init_PlanningParkingDebug_replan_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_is_replan
{
public:
  explicit Init_PlanningParkingDebug_is_replan(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_replan_reason is_replan(::ros2_interface::msg::PlanningParkingDebug::_is_replan_type arg)
  {
    msg_.is_replan = std::move(arg);
    return Init_PlanningParkingDebug_replan_reason(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_samping_trajectory_time
{
public:
  explicit Init_PlanningParkingDebug_samping_trajectory_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_is_replan samping_trajectory_time(::ros2_interface::msg::PlanningParkingDebug::_samping_trajectory_time_type arg)
  {
    msg_.samping_trajectory_time = std::move(arg);
    return Init_PlanningParkingDebug_is_replan(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_ias_total_time
{
public:
  explicit Init_PlanningParkingDebug_ias_total_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_samping_trajectory_time ias_total_time(::ros2_interface::msg::PlanningParkingDebug::_ias_total_time_type arg)
  {
    msg_.ias_total_time = std::move(arg);
    return Init_PlanningParkingDebug_samping_trajectory_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_ias_speed_smooth_time
{
public:
  explicit Init_PlanningParkingDebug_ias_speed_smooth_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_ias_total_time ias_speed_smooth_time(::ros2_interface::msg::PlanningParkingDebug::_ias_speed_smooth_time_type arg)
  {
    msg_.ias_speed_smooth_time = std::move(arg);
    return Init_PlanningParkingDebug_ias_total_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_ias_path_smooth_time
{
public:
  explicit Init_PlanningParkingDebug_ias_path_smooth_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_ias_speed_smooth_time ias_path_smooth_time(::ros2_interface::msg::PlanningParkingDebug::_ias_path_smooth_time_type arg)
  {
    msg_.ias_path_smooth_time = std::move(arg);
    return Init_PlanningParkingDebug_ias_speed_smooth_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_ias_collision_avoidance_time
{
public:
  explicit Init_PlanningParkingDebug_ias_collision_avoidance_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_ias_path_smooth_time ias_collision_avoidance_time(::ros2_interface::msg::PlanningParkingDebug::_ias_collision_avoidance_time_type arg)
  {
    msg_.ias_collision_avoidance_time = std::move(arg);
    return Init_PlanningParkingDebug_ias_path_smooth_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_hybrid_a_star_total_time
{
public:
  explicit Init_PlanningParkingDebug_hybrid_a_star_total_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_ias_collision_avoidance_time hybrid_a_star_total_time(::ros2_interface::msg::PlanningParkingDebug::_hybrid_a_star_total_time_type arg)
  {
    msg_.hybrid_a_star_total_time = std::move(arg);
    return Init_PlanningParkingDebug_ias_collision_avoidance_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_hybrid_a_star_rs_time
{
public:
  explicit Init_PlanningParkingDebug_hybrid_a_star_rs_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_hybrid_a_star_total_time hybrid_a_star_rs_time(::ros2_interface::msg::PlanningParkingDebug::_hybrid_a_star_rs_time_type arg)
  {
    msg_.hybrid_a_star_rs_time = std::move(arg);
    return Init_PlanningParkingDebug_hybrid_a_star_total_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_hybrid_a_star_heuristic_time
{
public:
  explicit Init_PlanningParkingDebug_hybrid_a_star_heuristic_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_hybrid_a_star_rs_time hybrid_a_star_heuristic_time(::ros2_interface::msg::PlanningParkingDebug::_hybrid_a_star_heuristic_time_type arg)
  {
    msg_.hybrid_a_star_heuristic_time = std::move(arg);
    return Init_PlanningParkingDebug_hybrid_a_star_rs_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_hybrid_a_star_map_time
{
public:
  explicit Init_PlanningParkingDebug_hybrid_a_star_map_time(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_hybrid_a_star_heuristic_time hybrid_a_star_map_time(::ros2_interface::msg::PlanningParkingDebug::_hybrid_a_star_map_time_type arg)
  {
    msg_.hybrid_a_star_map_time = std::move(arg);
    return Init_PlanningParkingDebug_hybrid_a_star_heuristic_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_optimal_smooth_trajectory
{
public:
  explicit Init_PlanningParkingDebug_optimal_smooth_trajectory(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_hybrid_a_star_map_time optimal_smooth_trajectory(::ros2_interface::msg::PlanningParkingDebug::_optimal_smooth_trajectory_type arg)
  {
    msg_.optimal_smooth_trajectory = std::move(arg);
    return Init_PlanningParkingDebug_hybrid_a_star_map_time(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_optimal_coarse_trajectory
{
public:
  explicit Init_PlanningParkingDebug_optimal_coarse_trajectory(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_optimal_smooth_trajectory optimal_coarse_trajectory(::ros2_interface::msg::PlanningParkingDebug::_optimal_coarse_trajectory_type arg)
  {
    msg_.optimal_coarse_trajectory = std::move(arg);
    return Init_PlanningParkingDebug_optimal_smooth_trajectory(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_trajectory_array
{
public:
  explicit Init_PlanningParkingDebug_trajectory_array(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_optimal_coarse_trajectory trajectory_array(::ros2_interface::msg::PlanningParkingDebug::_trajectory_array_type arg)
  {
    msg_.trajectory_array = std::move(arg);
    return Init_PlanningParkingDebug_optimal_coarse_trajectory(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_reference_line
{
public:
  explicit Init_PlanningParkingDebug_reference_line(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_trajectory_array reference_line(::ros2_interface::msg::PlanningParkingDebug::_reference_line_type arg)
  {
    msg_.reference_line = std::move(arg);
    return Init_PlanningParkingDebug_trajectory_array(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_smoothed_traj_stage2
{
public:
  explicit Init_PlanningParkingDebug_smoothed_traj_stage2(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_reference_line smoothed_traj_stage2(::ros2_interface::msg::PlanningParkingDebug::_smoothed_traj_stage2_type arg)
  {
    msg_.smoothed_traj_stage2 = std::move(arg);
    return Init_PlanningParkingDebug_reference_line(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_smoothed_traj_stage1
{
public:
  explicit Init_PlanningParkingDebug_smoothed_traj_stage1(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_smoothed_traj_stage2 smoothed_traj_stage1(::ros2_interface::msg::PlanningParkingDebug::_smoothed_traj_stage1_type arg)
  {
    msg_.smoothed_traj_stage1 = std::move(arg);
    return Init_PlanningParkingDebug_smoothed_traj_stage2(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_warm_start_traj
{
public:
  explicit Init_PlanningParkingDebug_warm_start_traj(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_smoothed_traj_stage1 warm_start_traj(::ros2_interface::msg::PlanningParkingDebug::_warm_start_traj_type arg)
  {
    msg_.warm_start_traj = std::move(arg);
    return Init_PlanningParkingDebug_smoothed_traj_stage1(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_obstacles_vec
{
public:
  explicit Init_PlanningParkingDebug_obstacles_vec(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_warm_start_traj obstacles_vec(::ros2_interface::msg::PlanningParkingDebug::_obstacles_vec_type arg)
  {
    msg_.obstacles_vec = std::move(arg);
    return Init_PlanningParkingDebug_warm_start_traj(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_yaw_error
{
public:
  explicit Init_PlanningParkingDebug_yaw_error(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_obstacles_vec yaw_error(::ros2_interface::msg::PlanningParkingDebug::_yaw_error_type arg)
  {
    msg_.yaw_error = std::move(arg);
    return Init_PlanningParkingDebug_obstacles_vec(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_lon_error
{
public:
  explicit Init_PlanningParkingDebug_lon_error(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_yaw_error lon_error(::ros2_interface::msg::PlanningParkingDebug::_lon_error_type arg)
  {
    msg_.lon_error = std::move(arg);
    return Init_PlanningParkingDebug_yaw_error(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_lat_error
{
public:
  explicit Init_PlanningParkingDebug_lat_error(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_lon_error lat_error(::ros2_interface::msg::PlanningParkingDebug::_lat_error_type arg)
  {
    msg_.lat_error = std::move(arg);
    return Init_PlanningParkingDebug_lon_error(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_path_points
{
public:
  explicit Init_PlanningParkingDebug_path_points(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_lat_error path_points(::ros2_interface::msg::PlanningParkingDebug::_path_points_type arg)
  {
    msg_.path_points = std::move(arg);
    return Init_PlanningParkingDebug_lat_error(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_obstacles_polygon
{
public:
  explicit Init_PlanningParkingDebug_obstacles_polygon(::ros2_interface::msg::PlanningParkingDebug & msg)
  : msg_(msg)
  {}
  Init_PlanningParkingDebug_path_points obstacles_polygon(::ros2_interface::msg::PlanningParkingDebug::_obstacles_polygon_type arg)
  {
    msg_.obstacles_polygon = std::move(arg);
    return Init_PlanningParkingDebug_path_points(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

class Init_PlanningParkingDebug_vehicle_preiew_polygon
{
public:
  Init_PlanningParkingDebug_vehicle_preiew_polygon()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningParkingDebug_obstacles_polygon vehicle_preiew_polygon(::ros2_interface::msg::PlanningParkingDebug::_vehicle_preiew_polygon_type arg)
  {
    msg_.vehicle_preiew_polygon = std::move(arg);
    return Init_PlanningParkingDebug_obstacles_polygon(msg_);
  }

private:
  ::ros2_interface::msg::PlanningParkingDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PlanningParkingDebug>()
{
  return ros2_interface::msg::builder::Init_PlanningParkingDebug_vehicle_preiew_polygon();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__BUILDER_HPP_

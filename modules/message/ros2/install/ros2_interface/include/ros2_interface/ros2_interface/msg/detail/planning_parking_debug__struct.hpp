// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vehicle_preiew_polygon'
// Member 'obstacles_polygon'
#include "ros2_interface/msg/detail/polygon2_d__struct.hpp"
// Member 'path_points'
#include "ros2_interface/msg/detail/path_point__struct.hpp"
// Member 'obstacles_vec'
#include "ros2_interface/msg/detail/point2d_list__struct.hpp"
// Member 'warm_start_traj'
// Member 'smoothed_traj_stage1'
// Member 'smoothed_traj_stage2'
#include "ros2_interface/msg/detail/trajectory_point__struct.hpp"
// Member 'reference_line'
// Member 'trajectory_array'
// Member 'optimal_coarse_trajectory'
// Member 'optimal_smooth_trajectory'
#include "ros2_interface/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__PlanningParkingDebug __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__PlanningParkingDebug __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningParkingDebug_
{
  using Type = PlanningParkingDebug_<ContainerAllocator>;

  explicit PlanningParkingDebug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_line(_init),
    optimal_coarse_trajectory(_init),
    optimal_smooth_trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat_error = 0.0;
      this->lon_error = 0.0;
      this->yaw_error = 0.0;
      this->hybrid_a_star_map_time = 0.0;
      this->hybrid_a_star_heuristic_time = 0.0;
      this->hybrid_a_star_rs_time = 0.0;
      this->hybrid_a_star_total_time = 0.0;
      this->ias_collision_avoidance_time = 0.0;
      this->ias_path_smooth_time = 0.0;
      this->ias_speed_smooth_time = 0.0;
      this->ias_total_time = 0.0;
      this->samping_trajectory_time = 0.0;
      this->is_replan = false;
      this->replan_reason = "";
      this->replan_time = 0.0;
      this->replan_num = 0l;
      this->optimizer_thread_counter = 0l;
      this->replan_by_context_update_counter = 0l;
      this->replan_by_large_error_counter = 0l;
      this->parking_type = 0l;
      this->moves_counter = 0l;
      this->remain_distance = 0.0;
      this->distance_to_leader_obj = 0.0;
      this->state = 0l;
    }
  }

  explicit PlanningParkingDebug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_line(_alloc, _init),
    optimal_coarse_trajectory(_alloc, _init),
    optimal_smooth_trajectory(_alloc, _init),
    replan_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat_error = 0.0;
      this->lon_error = 0.0;
      this->yaw_error = 0.0;
      this->hybrid_a_star_map_time = 0.0;
      this->hybrid_a_star_heuristic_time = 0.0;
      this->hybrid_a_star_rs_time = 0.0;
      this->hybrid_a_star_total_time = 0.0;
      this->ias_collision_avoidance_time = 0.0;
      this->ias_path_smooth_time = 0.0;
      this->ias_speed_smooth_time = 0.0;
      this->ias_total_time = 0.0;
      this->samping_trajectory_time = 0.0;
      this->is_replan = false;
      this->replan_reason = "";
      this->replan_time = 0.0;
      this->replan_num = 0l;
      this->optimizer_thread_counter = 0l;
      this->replan_by_context_update_counter = 0l;
      this->replan_by_large_error_counter = 0l;
      this->parking_type = 0l;
      this->moves_counter = 0l;
      this->remain_distance = 0.0;
      this->distance_to_leader_obj = 0.0;
      this->state = 0l;
    }
  }

  // field types and members
  using _vehicle_preiew_polygon_type =
    std::vector<ros2_interface::msg::Polygon2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Polygon2D_<ContainerAllocator>>>;
  _vehicle_preiew_polygon_type vehicle_preiew_polygon;
  using _obstacles_polygon_type =
    std::vector<ros2_interface::msg::Polygon2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Polygon2D_<ContainerAllocator>>>;
  _obstacles_polygon_type obstacles_polygon;
  using _path_points_type =
    std::vector<ros2_interface::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::PathPoint_<ContainerAllocator>>>;
  _path_points_type path_points;
  using _lat_error_type =
    double;
  _lat_error_type lat_error;
  using _lon_error_type =
    double;
  _lon_error_type lon_error;
  using _yaw_error_type =
    double;
  _yaw_error_type yaw_error;
  using _obstacles_vec_type =
    std::vector<ros2_interface::msg::Point2dList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2dList_<ContainerAllocator>>>;
  _obstacles_vec_type obstacles_vec;
  using _warm_start_traj_type =
    std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _warm_start_traj_type warm_start_traj;
  using _smoothed_traj_stage1_type =
    std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _smoothed_traj_stage1_type smoothed_traj_stage1;
  using _smoothed_traj_stage2_type =
    std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _smoothed_traj_stage2_type smoothed_traj_stage2;
  using _reference_line_type =
    ros2_interface::msg::Trajectory_<ContainerAllocator>;
  _reference_line_type reference_line;
  using _trajectory_array_type =
    std::vector<ros2_interface::msg::Trajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Trajectory_<ContainerAllocator>>>;
  _trajectory_array_type trajectory_array;
  using _optimal_coarse_trajectory_type =
    ros2_interface::msg::Trajectory_<ContainerAllocator>;
  _optimal_coarse_trajectory_type optimal_coarse_trajectory;
  using _optimal_smooth_trajectory_type =
    ros2_interface::msg::Trajectory_<ContainerAllocator>;
  _optimal_smooth_trajectory_type optimal_smooth_trajectory;
  using _hybrid_a_star_map_time_type =
    double;
  _hybrid_a_star_map_time_type hybrid_a_star_map_time;
  using _hybrid_a_star_heuristic_time_type =
    double;
  _hybrid_a_star_heuristic_time_type hybrid_a_star_heuristic_time;
  using _hybrid_a_star_rs_time_type =
    double;
  _hybrid_a_star_rs_time_type hybrid_a_star_rs_time;
  using _hybrid_a_star_total_time_type =
    double;
  _hybrid_a_star_total_time_type hybrid_a_star_total_time;
  using _ias_collision_avoidance_time_type =
    double;
  _ias_collision_avoidance_time_type ias_collision_avoidance_time;
  using _ias_path_smooth_time_type =
    double;
  _ias_path_smooth_time_type ias_path_smooth_time;
  using _ias_speed_smooth_time_type =
    double;
  _ias_speed_smooth_time_type ias_speed_smooth_time;
  using _ias_total_time_type =
    double;
  _ias_total_time_type ias_total_time;
  using _samping_trajectory_time_type =
    double;
  _samping_trajectory_time_type samping_trajectory_time;
  using _is_replan_type =
    bool;
  _is_replan_type is_replan;
  using _replan_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _replan_reason_type replan_reason;
  using _replan_time_type =
    double;
  _replan_time_type replan_time;
  using _replan_num_type =
    int32_t;
  _replan_num_type replan_num;
  using _optimizer_thread_counter_type =
    int32_t;
  _optimizer_thread_counter_type optimizer_thread_counter;
  using _replan_by_context_update_counter_type =
    int32_t;
  _replan_by_context_update_counter_type replan_by_context_update_counter;
  using _replan_by_large_error_counter_type =
    int32_t;
  _replan_by_large_error_counter_type replan_by_large_error_counter;
  using _parking_type_type =
    int32_t;
  _parking_type_type parking_type;
  using _moves_counter_type =
    int32_t;
  _moves_counter_type moves_counter;
  using _remain_distance_type =
    double;
  _remain_distance_type remain_distance;
  using _distance_to_leader_obj_type =
    double;
  _distance_to_leader_obj_type distance_to_leader_obj;
  using _state_type =
    int32_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__vehicle_preiew_polygon(
    const std::vector<ros2_interface::msg::Polygon2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Polygon2D_<ContainerAllocator>>> & _arg)
  {
    this->vehicle_preiew_polygon = _arg;
    return *this;
  }
  Type & set__obstacles_polygon(
    const std::vector<ros2_interface::msg::Polygon2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Polygon2D_<ContainerAllocator>>> & _arg)
  {
    this->obstacles_polygon = _arg;
    return *this;
  }
  Type & set__path_points(
    const std::vector<ros2_interface::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::PathPoint_<ContainerAllocator>>> & _arg)
  {
    this->path_points = _arg;
    return *this;
  }
  Type & set__lat_error(
    const double & _arg)
  {
    this->lat_error = _arg;
    return *this;
  }
  Type & set__lon_error(
    const double & _arg)
  {
    this->lon_error = _arg;
    return *this;
  }
  Type & set__yaw_error(
    const double & _arg)
  {
    this->yaw_error = _arg;
    return *this;
  }
  Type & set__obstacles_vec(
    const std::vector<ros2_interface::msg::Point2dList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point2dList_<ContainerAllocator>>> & _arg)
  {
    this->obstacles_vec = _arg;
    return *this;
  }
  Type & set__warm_start_traj(
    const std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->warm_start_traj = _arg;
    return *this;
  }
  Type & set__smoothed_traj_stage1(
    const std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->smoothed_traj_stage1 = _arg;
    return *this;
  }
  Type & set__smoothed_traj_stage2(
    const std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->smoothed_traj_stage2 = _arg;
    return *this;
  }
  Type & set__reference_line(
    const ros2_interface::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->reference_line = _arg;
    return *this;
  }
  Type & set__trajectory_array(
    const std::vector<ros2_interface::msg::Trajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Trajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_array = _arg;
    return *this;
  }
  Type & set__optimal_coarse_trajectory(
    const ros2_interface::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->optimal_coarse_trajectory = _arg;
    return *this;
  }
  Type & set__optimal_smooth_trajectory(
    const ros2_interface::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->optimal_smooth_trajectory = _arg;
    return *this;
  }
  Type & set__hybrid_a_star_map_time(
    const double & _arg)
  {
    this->hybrid_a_star_map_time = _arg;
    return *this;
  }
  Type & set__hybrid_a_star_heuristic_time(
    const double & _arg)
  {
    this->hybrid_a_star_heuristic_time = _arg;
    return *this;
  }
  Type & set__hybrid_a_star_rs_time(
    const double & _arg)
  {
    this->hybrid_a_star_rs_time = _arg;
    return *this;
  }
  Type & set__hybrid_a_star_total_time(
    const double & _arg)
  {
    this->hybrid_a_star_total_time = _arg;
    return *this;
  }
  Type & set__ias_collision_avoidance_time(
    const double & _arg)
  {
    this->ias_collision_avoidance_time = _arg;
    return *this;
  }
  Type & set__ias_path_smooth_time(
    const double & _arg)
  {
    this->ias_path_smooth_time = _arg;
    return *this;
  }
  Type & set__ias_speed_smooth_time(
    const double & _arg)
  {
    this->ias_speed_smooth_time = _arg;
    return *this;
  }
  Type & set__ias_total_time(
    const double & _arg)
  {
    this->ias_total_time = _arg;
    return *this;
  }
  Type & set__samping_trajectory_time(
    const double & _arg)
  {
    this->samping_trajectory_time = _arg;
    return *this;
  }
  Type & set__is_replan(
    const bool & _arg)
  {
    this->is_replan = _arg;
    return *this;
  }
  Type & set__replan_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->replan_reason = _arg;
    return *this;
  }
  Type & set__replan_time(
    const double & _arg)
  {
    this->replan_time = _arg;
    return *this;
  }
  Type & set__replan_num(
    const int32_t & _arg)
  {
    this->replan_num = _arg;
    return *this;
  }
  Type & set__optimizer_thread_counter(
    const int32_t & _arg)
  {
    this->optimizer_thread_counter = _arg;
    return *this;
  }
  Type & set__replan_by_context_update_counter(
    const int32_t & _arg)
  {
    this->replan_by_context_update_counter = _arg;
    return *this;
  }
  Type & set__replan_by_large_error_counter(
    const int32_t & _arg)
  {
    this->replan_by_large_error_counter = _arg;
    return *this;
  }
  Type & set__parking_type(
    const int32_t & _arg)
  {
    this->parking_type = _arg;
    return *this;
  }
  Type & set__moves_counter(
    const int32_t & _arg)
  {
    this->moves_counter = _arg;
    return *this;
  }
  Type & set__remain_distance(
    const double & _arg)
  {
    this->remain_distance = _arg;
    return *this;
  }
  Type & set__distance_to_leader_obj(
    const double & _arg)
  {
    this->distance_to_leader_obj = _arg;
    return *this;
  }
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__PlanningParkingDebug
    std::shared_ptr<ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__PlanningParkingDebug
    std::shared_ptr<ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningParkingDebug_ & other) const
  {
    if (this->vehicle_preiew_polygon != other.vehicle_preiew_polygon) {
      return false;
    }
    if (this->obstacles_polygon != other.obstacles_polygon) {
      return false;
    }
    if (this->path_points != other.path_points) {
      return false;
    }
    if (this->lat_error != other.lat_error) {
      return false;
    }
    if (this->lon_error != other.lon_error) {
      return false;
    }
    if (this->yaw_error != other.yaw_error) {
      return false;
    }
    if (this->obstacles_vec != other.obstacles_vec) {
      return false;
    }
    if (this->warm_start_traj != other.warm_start_traj) {
      return false;
    }
    if (this->smoothed_traj_stage1 != other.smoothed_traj_stage1) {
      return false;
    }
    if (this->smoothed_traj_stage2 != other.smoothed_traj_stage2) {
      return false;
    }
    if (this->reference_line != other.reference_line) {
      return false;
    }
    if (this->trajectory_array != other.trajectory_array) {
      return false;
    }
    if (this->optimal_coarse_trajectory != other.optimal_coarse_trajectory) {
      return false;
    }
    if (this->optimal_smooth_trajectory != other.optimal_smooth_trajectory) {
      return false;
    }
    if (this->hybrid_a_star_map_time != other.hybrid_a_star_map_time) {
      return false;
    }
    if (this->hybrid_a_star_heuristic_time != other.hybrid_a_star_heuristic_time) {
      return false;
    }
    if (this->hybrid_a_star_rs_time != other.hybrid_a_star_rs_time) {
      return false;
    }
    if (this->hybrid_a_star_total_time != other.hybrid_a_star_total_time) {
      return false;
    }
    if (this->ias_collision_avoidance_time != other.ias_collision_avoidance_time) {
      return false;
    }
    if (this->ias_path_smooth_time != other.ias_path_smooth_time) {
      return false;
    }
    if (this->ias_speed_smooth_time != other.ias_speed_smooth_time) {
      return false;
    }
    if (this->ias_total_time != other.ias_total_time) {
      return false;
    }
    if (this->samping_trajectory_time != other.samping_trajectory_time) {
      return false;
    }
    if (this->is_replan != other.is_replan) {
      return false;
    }
    if (this->replan_reason != other.replan_reason) {
      return false;
    }
    if (this->replan_time != other.replan_time) {
      return false;
    }
    if (this->replan_num != other.replan_num) {
      return false;
    }
    if (this->optimizer_thread_counter != other.optimizer_thread_counter) {
      return false;
    }
    if (this->replan_by_context_update_counter != other.replan_by_context_update_counter) {
      return false;
    }
    if (this->replan_by_large_error_counter != other.replan_by_large_error_counter) {
      return false;
    }
    if (this->parking_type != other.parking_type) {
      return false;
    }
    if (this->moves_counter != other.moves_counter) {
      return false;
    }
    if (this->remain_distance != other.remain_distance) {
      return false;
    }
    if (this->distance_to_leader_obj != other.distance_to_leader_obj) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningParkingDebug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningParkingDebug_

// alias to use template instance with default allocator
using PlanningParkingDebug =
  ros2_interface::msg::PlanningParkingDebug_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_PARKING_DEBUG__STRUCT_HPP_

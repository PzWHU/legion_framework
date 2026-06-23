// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ObstacleFeature.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'polygon_point'
// Member 'position'
// Member 'front_position'
// Member 'velocity'
// Member 'raw_velocity'
// Member 'acceleration'
// Member 't_position'
// Member 't_velocity'
// Member 't_acceleration'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"
// Member 'priority'
#include "ros2_interface/msg/detail/obstacle_priority__struct.hpp"
// Member 'future_trajectory_points'
#include "ros2_interface/msg/detail/prediction_trajectory_point__struct.hpp"
// Member 'short_term_predicted_trajectory_points'
// Member 'adc_trajectory_point'
#include "ros2_interface/msg/detail/trajectory_point_in_prediction__struct.hpp"
// Member 'predicted_trajectory'
#include "ros2_interface/msg/detail/trajectory_in_prediction__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ObstacleFeature __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ObstacleFeature __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleFeature_
{
  using Type = ObstacleFeature_<ContainerAllocator>;

  explicit ObstacleFeature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon_point(_init),
    position(_init),
    front_position(_init),
    velocity(_init),
    raw_velocity(_init),
    acceleration(_init),
    t_position(_init),
    t_velocity(_init),
    t_acceleration(_init),
    priority(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_id = 0l;
      this->velocity_heading = 0.0;
      this->speed = 0.0;
      this->acc = 0.0;
      this->theta = 0.0;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->tracking_time = 0.0;
      this->timestamp = 0.0;
      this->t_velocity_heading = 0.0;
      this->t_speed = 0.0;
      this->t_acc = 0.0;
      this->is_still = false;
      this->type = 0l;
      this->label_update_time_delta = 0.0;
      this->is_near_junction = false;
    }
  }

  explicit ObstacleFeature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon_point(_alloc, _init),
    position(_alloc, _init),
    front_position(_alloc, _init),
    velocity(_alloc, _init),
    raw_velocity(_alloc, _init),
    acceleration(_alloc, _init),
    t_position(_alloc, _init),
    t_velocity(_alloc, _init),
    t_acceleration(_alloc, _init),
    priority(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_id = 0l;
      this->velocity_heading = 0.0;
      this->speed = 0.0;
      this->acc = 0.0;
      this->theta = 0.0;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->tracking_time = 0.0;
      this->timestamp = 0.0;
      this->t_velocity_heading = 0.0;
      this->t_speed = 0.0;
      this->t_acc = 0.0;
      this->is_still = false;
      this->type = 0l;
      this->label_update_time_delta = 0.0;
      this->is_near_junction = false;
    }
  }

  // field types and members
  using _obstacle_id_type =
    int32_t;
  _obstacle_id_type obstacle_id;
  using _polygon_point_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _polygon_point_type polygon_point;
  using _position_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _position_type position;
  using _front_position_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _front_position_type front_position;
  using _velocity_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _velocity_type velocity;
  using _raw_velocity_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _raw_velocity_type raw_velocity;
  using _acceleration_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _velocity_heading_type =
    double;
  _velocity_heading_type velocity_heading;
  using _speed_type =
    double;
  _speed_type speed;
  using _acc_type =
    double;
  _acc_type acc;
  using _theta_type =
    double;
  _theta_type theta;
  using _length_type =
    double;
  _length_type length;
  using _width_type =
    double;
  _width_type width;
  using _height_type =
    double;
  _height_type height;
  using _tracking_time_type =
    double;
  _tracking_time_type tracking_time;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _t_position_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _t_position_type t_position;
  using _t_velocity_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _t_velocity_type t_velocity;
  using _t_velocity_heading_type =
    double;
  _t_velocity_heading_type t_velocity_heading;
  using _t_speed_type =
    double;
  _t_speed_type t_speed;
  using _t_acceleration_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _t_acceleration_type t_acceleration;
  using _t_acc_type =
    double;
  _t_acc_type t_acc;
  using _is_still_type =
    bool;
  _is_still_type is_still;
  using _type_type =
    int32_t;
  _type_type type;
  using _label_update_time_delta_type =
    double;
  _label_update_time_delta_type label_update_time_delta;
  using _priority_type =
    ros2_interface::msg::ObstaclePriority_<ContainerAllocator>;
  _priority_type priority;
  using _is_near_junction_type =
    bool;
  _is_near_junction_type is_near_junction;
  using _future_trajectory_points_type =
    std::vector<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>>>;
  _future_trajectory_points_type future_trajectory_points;
  using _short_term_predicted_trajectory_points_type =
    std::vector<ros2_interface::msg::TrajectoryPointInPrediction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPointInPrediction_<ContainerAllocator>>>;
  _short_term_predicted_trajectory_points_type short_term_predicted_trajectory_points;
  using _predicted_trajectory_type =
    std::vector<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>>>;
  _predicted_trajectory_type predicted_trajectory;
  using _adc_trajectory_point_type =
    std::vector<ros2_interface::msg::TrajectoryPointInPrediction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPointInPrediction_<ContainerAllocator>>>;
  _adc_trajectory_point_type adc_trajectory_point;

  // setters for named parameter idiom
  Type & set__obstacle_id(
    const int32_t & _arg)
  {
    this->obstacle_id = _arg;
    return *this;
  }
  Type & set__polygon_point(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->polygon_point = _arg;
    return *this;
  }
  Type & set__position(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__front_position(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->front_position = _arg;
    return *this;
  }
  Type & set__velocity(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__raw_velocity(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->raw_velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__velocity_heading(
    const double & _arg)
  {
    this->velocity_heading = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__acc(
    const double & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__tracking_time(
    const double & _arg)
  {
    this->tracking_time = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__t_position(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->t_position = _arg;
    return *this;
  }
  Type & set__t_velocity(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->t_velocity = _arg;
    return *this;
  }
  Type & set__t_velocity_heading(
    const double & _arg)
  {
    this->t_velocity_heading = _arg;
    return *this;
  }
  Type & set__t_speed(
    const double & _arg)
  {
    this->t_speed = _arg;
    return *this;
  }
  Type & set__t_acceleration(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->t_acceleration = _arg;
    return *this;
  }
  Type & set__t_acc(
    const double & _arg)
  {
    this->t_acc = _arg;
    return *this;
  }
  Type & set__is_still(
    const bool & _arg)
  {
    this->is_still = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__label_update_time_delta(
    const double & _arg)
  {
    this->label_update_time_delta = _arg;
    return *this;
  }
  Type & set__priority(
    const ros2_interface::msg::ObstaclePriority_<ContainerAllocator> & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__is_near_junction(
    const bool & _arg)
  {
    this->is_near_junction = _arg;
    return *this;
  }
  Type & set__future_trajectory_points(
    const std::vector<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->future_trajectory_points = _arg;
    return *this;
  }
  Type & set__short_term_predicted_trajectory_points(
    const std::vector<ros2_interface::msg::TrajectoryPointInPrediction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPointInPrediction_<ContainerAllocator>>> & _arg)
  {
    this->short_term_predicted_trajectory_points = _arg;
    return *this;
  }
  Type & set__predicted_trajectory(
    const std::vector<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>>> & _arg)
  {
    this->predicted_trajectory = _arg;
    return *this;
  }
  Type & set__adc_trajectory_point(
    const std::vector<ros2_interface::msg::TrajectoryPointInPrediction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPointInPrediction_<ContainerAllocator>>> & _arg)
  {
    this->adc_trajectory_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ObstacleFeature_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ObstacleFeature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ObstacleFeature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ObstacleFeature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ObstacleFeature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ObstacleFeature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ObstacleFeature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ObstacleFeature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ObstacleFeature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ObstacleFeature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ObstacleFeature
    std::shared_ptr<ros2_interface::msg::ObstacleFeature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ObstacleFeature
    std::shared_ptr<ros2_interface::msg::ObstacleFeature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleFeature_ & other) const
  {
    if (this->obstacle_id != other.obstacle_id) {
      return false;
    }
    if (this->polygon_point != other.polygon_point) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->front_position != other.front_position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->raw_velocity != other.raw_velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->velocity_heading != other.velocity_heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->tracking_time != other.tracking_time) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->t_position != other.t_position) {
      return false;
    }
    if (this->t_velocity != other.t_velocity) {
      return false;
    }
    if (this->t_velocity_heading != other.t_velocity_heading) {
      return false;
    }
    if (this->t_speed != other.t_speed) {
      return false;
    }
    if (this->t_acceleration != other.t_acceleration) {
      return false;
    }
    if (this->t_acc != other.t_acc) {
      return false;
    }
    if (this->is_still != other.is_still) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->label_update_time_delta != other.label_update_time_delta) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->is_near_junction != other.is_near_junction) {
      return false;
    }
    if (this->future_trajectory_points != other.future_trajectory_points) {
      return false;
    }
    if (this->short_term_predicted_trajectory_points != other.short_term_predicted_trajectory_points) {
      return false;
    }
    if (this->predicted_trajectory != other.predicted_trajectory) {
      return false;
    }
    if (this->adc_trajectory_point != other.adc_trajectory_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleFeature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleFeature_

// alias to use template instance with default allocator
using ObstacleFeature =
  ros2_interface::msg::ObstacleFeature_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__STRUCT_HPP_

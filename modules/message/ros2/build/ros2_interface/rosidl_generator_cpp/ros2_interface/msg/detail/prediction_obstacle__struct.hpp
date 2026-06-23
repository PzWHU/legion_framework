// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/PredictionObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'perception_obstacle'
#include "ros2_interface/msg/detail/perception_obstacle__struct.hpp"
// Member 'trajectory'
#include "ros2_interface/msg/detail/trajectory_in_prediction__struct.hpp"
// Member 'intent'
#include "ros2_interface/msg/detail/obstacle_intent__struct.hpp"
// Member 'priority'
#include "ros2_interface/msg/detail/obstacle_priority__struct.hpp"
// Member 'interactive_tag'
#include "ros2_interface/msg/detail/obstacle_interactive_tag__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__PredictionObstacle __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__PredictionObstacle __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PredictionObstacle_
{
  using Type = PredictionObstacle_<ContainerAllocator>;

  explicit PredictionObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_obstacle(_init),
    intent(_init),
    priority(_init),
    interactive_tag(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->predicted_period = 0.0;
      this->is_static = false;
    }
  }

  explicit PredictionObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_obstacle(_alloc, _init),
    intent(_alloc, _init),
    priority(_alloc, _init),
    interactive_tag(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->predicted_period = 0.0;
      this->is_static = false;
    }
  }

  // field types and members
  using _perception_obstacle_type =
    ros2_interface::msg::PerceptionObstacle_<ContainerAllocator>;
  _perception_obstacle_type perception_obstacle;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _predicted_period_type =
    double;
  _predicted_period_type predicted_period;
  using _trajectory_type =
    std::vector<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>>>;
  _trajectory_type trajectory;
  using _intent_type =
    ros2_interface::msg::ObstacleIntent_<ContainerAllocator>;
  _intent_type intent;
  using _priority_type =
    ros2_interface::msg::ObstaclePriority_<ContainerAllocator>;
  _priority_type priority;
  using _interactive_tag_type =
    ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator>;
  _interactive_tag_type interactive_tag;
  using _is_static_type =
    bool;
  _is_static_type is_static;

  // setters for named parameter idiom
  Type & set__perception_obstacle(
    const ros2_interface::msg::PerceptionObstacle_<ContainerAllocator> & _arg)
  {
    this->perception_obstacle = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__predicted_period(
    const double & _arg)
  {
    this->predicted_period = _arg;
    return *this;
  }
  Type & set__trajectory(
    const std::vector<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>>> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__intent(
    const ros2_interface::msg::ObstacleIntent_<ContainerAllocator> & _arg)
  {
    this->intent = _arg;
    return *this;
  }
  Type & set__priority(
    const ros2_interface::msg::ObstaclePriority_<ContainerAllocator> & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__interactive_tag(
    const ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator> & _arg)
  {
    this->interactive_tag = _arg;
    return *this;
  }
  Type & set__is_static(
    const bool & _arg)
  {
    this->is_static = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::PredictionObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::PredictionObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::PredictionObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::PredictionObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PredictionObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PredictionObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PredictionObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PredictionObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::PredictionObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::PredictionObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__PredictionObstacle
    std::shared_ptr<ros2_interface::msg::PredictionObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__PredictionObstacle
    std::shared_ptr<ros2_interface::msg::PredictionObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PredictionObstacle_ & other) const
  {
    if (this->perception_obstacle != other.perception_obstacle) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->predicted_period != other.predicted_period) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->intent != other.intent) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->interactive_tag != other.interactive_tag) {
      return false;
    }
    if (this->is_static != other.is_static) {
      return false;
    }
    return true;
  }
  bool operator!=(const PredictionObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PredictionObstacle_

// alias to use template instance with default allocator
using PredictionObstacle =
  ros2_interface::msg::PredictionObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__STRUCT_HPP_

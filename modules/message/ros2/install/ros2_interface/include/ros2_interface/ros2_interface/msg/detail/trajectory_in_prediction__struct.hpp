// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/TrajectoryInPrediction.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_IN_PREDICTION__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_IN_PREDICTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory_points'
#include "ros2_interface/msg/detail/trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__TrajectoryInPrediction __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__TrajectoryInPrediction __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryInPrediction_
{
  using Type = TrajectoryInPrediction_<ContainerAllocator>;

  explicit TrajectoryInPrediction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0;
    }
  }

  explicit TrajectoryInPrediction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0;
    }
  }

  // field types and members
  using _probability_type =
    double;
  _probability_type probability;
  using _trajectory_points_type =
    std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _trajectory_points_type trajectory_points;

  // setters for named parameter idiom
  Type & set__probability(
    const double & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__trajectory_points(
    const std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__TrajectoryInPrediction
    std::shared_ptr<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__TrajectoryInPrediction
    std::shared_ptr<ros2_interface::msg::TrajectoryInPrediction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryInPrediction_ & other) const
  {
    if (this->probability != other.probability) {
      return false;
    }
    if (this->trajectory_points != other.trajectory_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryInPrediction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryInPrediction_

// alias to use template instance with default allocator
using TrajectoryInPrediction =
  ros2_interface::msg::TrajectoryInPrediction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_IN_PREDICTION__STRUCT_HPP_

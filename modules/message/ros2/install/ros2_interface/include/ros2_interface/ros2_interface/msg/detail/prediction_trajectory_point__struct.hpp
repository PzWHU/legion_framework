// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/PredictionTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_TRAJECTORY_POINT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'predition_path_point'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__PredictionTrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__PredictionTrajectoryPoint __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PredictionTrajectoryPoint_
{
  using Type = PredictionTrajectoryPoint_<ContainerAllocator>;

  explicit PredictionTrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : predition_path_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
    }
  }

  explicit PredictionTrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : predition_path_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
    }
  }

  // field types and members
  using _predition_path_point_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _predition_path_point_type predition_path_point;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__predition_path_point(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->predition_path_point = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__PredictionTrajectoryPoint
    std::shared_ptr<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__PredictionTrajectoryPoint
    std::shared_ptr<ros2_interface::msg::PredictionTrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PredictionTrajectoryPoint_ & other) const
  {
    if (this->predition_path_point != other.predition_path_point) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PredictionTrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PredictionTrajectoryPoint_

// alias to use template instance with default allocator
using PredictionTrajectoryPoint =
  ros2_interface::msg::PredictionTrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_TRAJECTORY_POINT__STRUCT_HPP_

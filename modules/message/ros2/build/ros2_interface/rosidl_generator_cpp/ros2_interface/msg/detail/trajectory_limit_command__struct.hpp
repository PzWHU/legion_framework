// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/TrajectoryLimitCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__TrajectoryLimitCommand __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__TrajectoryLimitCommand __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryLimitCommand_
{
  using Type = TrajectoryLimitCommand_<ContainerAllocator>;

  explicit TrajectoryLimitCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_limit_enable = false;
      this->speed_limit = 0.0;
      this->kappa_limit_enable = false;
      this->kappa_limit = 0.0;
    }
  }

  explicit TrajectoryLimitCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_limit_enable = false;
      this->speed_limit = 0.0;
      this->kappa_limit_enable = false;
      this->kappa_limit = 0.0;
    }
  }

  // field types and members
  using _speed_limit_enable_type =
    bool;
  _speed_limit_enable_type speed_limit_enable;
  using _speed_limit_type =
    double;
  _speed_limit_type speed_limit;
  using _kappa_limit_enable_type =
    bool;
  _kappa_limit_enable_type kappa_limit_enable;
  using _kappa_limit_type =
    double;
  _kappa_limit_type kappa_limit;

  // setters for named parameter idiom
  Type & set__speed_limit_enable(
    const bool & _arg)
  {
    this->speed_limit_enable = _arg;
    return *this;
  }
  Type & set__speed_limit(
    const double & _arg)
  {
    this->speed_limit = _arg;
    return *this;
  }
  Type & set__kappa_limit_enable(
    const bool & _arg)
  {
    this->kappa_limit_enable = _arg;
    return *this;
  }
  Type & set__kappa_limit(
    const double & _arg)
  {
    this->kappa_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__TrajectoryLimitCommand
    std::shared_ptr<ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__TrajectoryLimitCommand
    std::shared_ptr<ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryLimitCommand_ & other) const
  {
    if (this->speed_limit_enable != other.speed_limit_enable) {
      return false;
    }
    if (this->speed_limit != other.speed_limit) {
      return false;
    }
    if (this->kappa_limit_enable != other.kappa_limit_enable) {
      return false;
    }
    if (this->kappa_limit != other.kappa_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryLimitCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryLimitCommand_

// alias to use template instance with default allocator
using TrajectoryLimitCommand =
  ros2_interface::msg::TrajectoryLimitCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ObstaclePriority.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_PRIORITY__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_PRIORITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ObstaclePriority __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ObstaclePriority __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstaclePriority_
{
  using Type = ObstaclePriority_<ContainerAllocator>;

  explicit ObstaclePriority_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0l;
    }
  }

  explicit ObstaclePriority_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0l;
    }
  }

  // field types and members
  using _priority_type =
    int32_t;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ObstaclePriority_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ObstaclePriority_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ObstaclePriority_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ObstaclePriority_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ObstaclePriority_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ObstaclePriority_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ObstaclePriority_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ObstaclePriority_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ObstaclePriority_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ObstaclePriority_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ObstaclePriority
    std::shared_ptr<ros2_interface::msg::ObstaclePriority_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ObstaclePriority
    std::shared_ptr<ros2_interface::msg::ObstaclePriority_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstaclePriority_ & other) const
  {
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstaclePriority_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstaclePriority_

// alias to use template instance with default allocator
using ObstaclePriority =
  ros2_interface::msg::ObstaclePriority_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_PRIORITY__STRUCT_HPP_

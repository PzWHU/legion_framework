// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ObstacleInteractiveTag.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTERACTIVE_TAG__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTERACTIVE_TAG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ObstacleInteractiveTag __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ObstacleInteractiveTag __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleInteractiveTag_
{
  using Type = ObstacleInteractiveTag_<ContainerAllocator>;

  explicit ObstacleInteractiveTag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interactive_tag = 0l;
    }
  }

  explicit ObstacleInteractiveTag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interactive_tag = 0l;
    }
  }

  // field types and members
  using _interactive_tag_type =
    int32_t;
  _interactive_tag_type interactive_tag;

  // setters for named parameter idiom
  Type & set__interactive_tag(
    const int32_t & _arg)
  {
    this->interactive_tag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ObstacleInteractiveTag
    std::shared_ptr<ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ObstacleInteractiveTag
    std::shared_ptr<ros2_interface::msg::ObstacleInteractiveTag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleInteractiveTag_ & other) const
  {
    if (this->interactive_tag != other.interactive_tag) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleInteractiveTag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleInteractiveTag_

// alias to use template instance with default allocator
using ObstacleInteractiveTag =
  ros2_interface::msg::ObstacleInteractiveTag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_INTERACTIVE_TAG__STRUCT_HPP_

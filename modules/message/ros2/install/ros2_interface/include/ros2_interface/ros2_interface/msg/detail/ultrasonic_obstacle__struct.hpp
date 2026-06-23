// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/UltrasonicObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC_OBSTACLE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__UltrasonicObstacle __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__UltrasonicObstacle __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UltrasonicObstacle_
{
  using Type = UltrasonicObstacle_<ContainerAllocator>;

  explicit UltrasonicObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->range = 0.0;
    }
  }

  explicit UltrasonicObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->range = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _range_type =
    double;
  _range_type range;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__range(
    const double & _arg)
  {
    this->range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__UltrasonicObstacle
    std::shared_ptr<ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__UltrasonicObstacle
    std::shared_ptr<ros2_interface::msg::UltrasonicObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UltrasonicObstacle_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    return true;
  }
  bool operator!=(const UltrasonicObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UltrasonicObstacle_

// alias to use template instance with default allocator
using UltrasonicObstacle =
  ros2_interface::msg::UltrasonicObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC_OBSTACLE__STRUCT_HPP_

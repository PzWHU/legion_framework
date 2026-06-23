// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/TimeConsume.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TIME_CONSUME__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TIME_CONSUME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__TimeConsume __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__TimeConsume __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeConsume_
{
  using Type = TimeConsume_<ContainerAllocator>;

  explicit TimeConsume_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->time_consume = 0.0;
    }
  }

  explicit TimeConsume_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->time_consume = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _time_consume_type =
    double;
  _time_consume_type time_consume;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__time_consume(
    const double & _arg)
  {
    this->time_consume = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::TimeConsume_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::TimeConsume_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::TimeConsume_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::TimeConsume_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TimeConsume_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TimeConsume_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TimeConsume_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TimeConsume_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::TimeConsume_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::TimeConsume_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__TimeConsume
    std::shared_ptr<ros2_interface::msg::TimeConsume_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__TimeConsume
    std::shared_ptr<ros2_interface::msg::TimeConsume_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeConsume_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->time_consume != other.time_consume) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeConsume_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeConsume_

// alias to use template instance with default allocator
using TimeConsume =
  ros2_interface::msg::TimeConsume_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TIME_CONSUME__STRUCT_HPP_

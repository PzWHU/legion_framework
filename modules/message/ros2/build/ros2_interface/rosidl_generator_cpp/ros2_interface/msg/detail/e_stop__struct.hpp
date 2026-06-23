// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/EStop.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__E_STOP__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__E_STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__EStop __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__EStop __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EStop_
{
  using Type = EStop_<ContainerAllocator>;

  explicit EStop_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_estop = false;
      this->reason = "";
    }
  }

  explicit EStop_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_estop = false;
      this->reason = "";
    }
  }

  // field types and members
  using _is_estop_type =
    bool;
  _is_estop_type is_estop;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__is_estop(
    const bool & _arg)
  {
    this->is_estop = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::EStop_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::EStop_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::EStop_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::EStop_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::EStop_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::EStop_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::EStop_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::EStop_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::EStop_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::EStop_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__EStop
    std::shared_ptr<ros2_interface::msg::EStop_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__EStop
    std::shared_ptr<ros2_interface::msg::EStop_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EStop_ & other) const
  {
    if (this->is_estop != other.is_estop) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const EStop_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EStop_

// alias to use template instance with default allocator
using EStop =
  ros2_interface::msg::EStop_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__E_STOP__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMMAND__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Command __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Command __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Command_
{
  using Type = Command_<ContainerAllocator>;

  explicit Command_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_module = "";
      this->target_id = 0;
      this->target_switch = 0l;
    }
  }

  explicit Command_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_module(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_module = "";
      this->target_id = 0;
      this->target_switch = 0l;
    }
  }

  // field types and members
  using _target_module_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_module_type target_module;
  using _target_id_type =
    int8_t;
  _target_id_type target_id;
  using _target_switch_type =
    int32_t;
  _target_switch_type target_switch;

  // setters for named parameter idiom
  Type & set__target_module(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_module = _arg;
    return *this;
  }
  Type & set__target_id(
    const int8_t & _arg)
  {
    this->target_id = _arg;
    return *this;
  }
  Type & set__target_switch(
    const int32_t & _arg)
  {
    this->target_switch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Command_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Command_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Command_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Command_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Command_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Command_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Command_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Command_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Command_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Command_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Command
    std::shared_ptr<ros2_interface::msg::Command_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Command
    std::shared_ptr<ros2_interface::msg::Command_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_ & other) const
  {
    if (this->target_module != other.target_module) {
      return false;
    }
    if (this->target_id != other.target_id) {
      return false;
    }
    if (this->target_switch != other.target_switch) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_

// alias to use template instance with default allocator
using Command =
  ros2_interface::msg::Command_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMMAND__STRUCT_HPP_

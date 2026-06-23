// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/HMIDiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_STATUS__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__HMIDiagnosticStatus __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__HMIDiagnosticStatus __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HMIDiagnosticStatus_
{
  using Type = HMIDiagnosticStatus_<ContainerAllocator>;

  explicit HMIDiagnosticStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->level = 0l;
      this->name = "";
      this->message = "";
      this->hardware_id = "";
    }
  }

  explicit HMIDiagnosticStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    message(_alloc),
    hardware_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->level = 0l;
      this->name = "";
      this->message = "";
      this->hardware_id = "";
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _level_type =
    int32_t;
  _level_type level;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _hardware_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hardware_id_type hardware_id;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__level(
    const int32_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__hardware_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hardware_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__HMIDiagnosticStatus
    std::shared_ptr<ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__HMIDiagnosticStatus
    std::shared_ptr<ros2_interface::msg::HMIDiagnosticStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HMIDiagnosticStatus_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->hardware_id != other.hardware_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const HMIDiagnosticStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HMIDiagnosticStatus_

// alias to use template instance with default allocator
using HMIDiagnosticStatus =
  ros2_interface::msg::HMIDiagnosticStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_STATUS__STRUCT_HPP_

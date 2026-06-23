// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ModuleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__MODULE_STATUS__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__MODULE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'messages'
#include "ros2_interface/msg/detail/message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ModuleStatus __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ModuleStatus __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModuleStatus_
{
  using Type = ModuleStatus_<ContainerAllocator>;

  explicit ModuleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->self_id = 0;
      this->status = 0l;
    }
  }

  explicit ModuleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->self_id = 0;
      this->status = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _self_id_type =
    int8_t;
  _self_id_type self_id;
  using _status_type =
    int32_t;
  _status_type status;
  using _messages_type =
    std::vector<ros2_interface::msg::Message_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Message_<ContainerAllocator>>>;
  _messages_type messages;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__self_id(
    const int8_t & _arg)
  {
    this->self_id = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__messages(
    const std::vector<ros2_interface::msg::Message_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Message_<ContainerAllocator>>> & _arg)
  {
    this->messages = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ModuleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ModuleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ModuleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ModuleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ModuleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ModuleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ModuleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ModuleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ModuleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ModuleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ModuleStatus
    std::shared_ptr<ros2_interface::msg::ModuleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ModuleStatus
    std::shared_ptr<ros2_interface::msg::ModuleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModuleStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->self_id != other.self_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->messages != other.messages) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModuleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModuleStatus_

// alias to use template instance with default allocator
using ModuleStatus =
  ros2_interface::msg::ModuleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__MODULE_STATUS__STRUCT_HPP_

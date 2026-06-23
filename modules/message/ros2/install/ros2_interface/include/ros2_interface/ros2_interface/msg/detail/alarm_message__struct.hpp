// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/AlarmMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__AlarmMessage __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__AlarmMessage __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AlarmMessage_
{
  using Type = AlarmMessage_<ContainerAllocator>;

  explicit AlarmMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_proc = "";
      this->alarm_level = 0l;
      this->alarm_type = 0l;
      this->alarm_id = 0l;
      this->alarm_display = 0l;
      this->alarm_data = "";
    }
  }

  explicit AlarmMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    alarm_proc(_alloc),
    alarm_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_proc = "";
      this->alarm_level = 0l;
      this->alarm_type = 0l;
      this->alarm_id = 0l;
      this->alarm_display = 0l;
      this->alarm_data = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _alarm_proc_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _alarm_proc_type alarm_proc;
  using _alarm_level_type =
    int32_t;
  _alarm_level_type alarm_level;
  using _alarm_type_type =
    int32_t;
  _alarm_type_type alarm_type;
  using _alarm_id_type =
    int32_t;
  _alarm_id_type alarm_id;
  using _alarm_display_type =
    int32_t;
  _alarm_display_type alarm_display;
  using _alarm_data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _alarm_data_type alarm_data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__alarm_proc(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->alarm_proc = _arg;
    return *this;
  }
  Type & set__alarm_level(
    const int32_t & _arg)
  {
    this->alarm_level = _arg;
    return *this;
  }
  Type & set__alarm_type(
    const int32_t & _arg)
  {
    this->alarm_type = _arg;
    return *this;
  }
  Type & set__alarm_id(
    const int32_t & _arg)
  {
    this->alarm_id = _arg;
    return *this;
  }
  Type & set__alarm_display(
    const int32_t & _arg)
  {
    this->alarm_display = _arg;
    return *this;
  }
  Type & set__alarm_data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->alarm_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::AlarmMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::AlarmMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::AlarmMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::AlarmMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::AlarmMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::AlarmMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::AlarmMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::AlarmMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::AlarmMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::AlarmMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__AlarmMessage
    std::shared_ptr<ros2_interface::msg::AlarmMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__AlarmMessage
    std::shared_ptr<ros2_interface::msg::AlarmMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlarmMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->alarm_proc != other.alarm_proc) {
      return false;
    }
    if (this->alarm_level != other.alarm_level) {
      return false;
    }
    if (this->alarm_type != other.alarm_type) {
      return false;
    }
    if (this->alarm_id != other.alarm_id) {
      return false;
    }
    if (this->alarm_display != other.alarm_display) {
      return false;
    }
    if (this->alarm_data != other.alarm_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlarmMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlarmMessage_

// alias to use template instance with default allocator
using AlarmMessage =
  ros2_interface::msg::AlarmMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ALARM_MESSAGE__STRUCT_HPP_

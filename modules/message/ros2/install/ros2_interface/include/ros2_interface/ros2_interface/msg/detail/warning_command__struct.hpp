// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/WarningCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__WarningCommand __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__WarningCommand __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WarningCommand_
{
  using Type = WarningCommand_<ContainerAllocator>;

  explicit WarningCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound_alarm = 0l;
      this->light_alarm = 0l;
      this->media_alarm = 0l;
      this->motion_alarm = 0l;
    }
  }

  explicit WarningCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound_alarm = 0l;
      this->light_alarm = 0l;
      this->media_alarm = 0l;
      this->motion_alarm = 0l;
    }
  }

  // field types and members
  using _sound_alarm_type =
    int32_t;
  _sound_alarm_type sound_alarm;
  using _light_alarm_type =
    int32_t;
  _light_alarm_type light_alarm;
  using _media_alarm_type =
    int32_t;
  _media_alarm_type media_alarm;
  using _motion_alarm_type =
    int32_t;
  _motion_alarm_type motion_alarm;

  // setters for named parameter idiom
  Type & set__sound_alarm(
    const int32_t & _arg)
  {
    this->sound_alarm = _arg;
    return *this;
  }
  Type & set__light_alarm(
    const int32_t & _arg)
  {
    this->light_alarm = _arg;
    return *this;
  }
  Type & set__media_alarm(
    const int32_t & _arg)
  {
    this->media_alarm = _arg;
    return *this;
  }
  Type & set__motion_alarm(
    const int32_t & _arg)
  {
    this->motion_alarm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::WarningCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::WarningCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::WarningCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::WarningCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::WarningCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::WarningCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::WarningCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::WarningCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::WarningCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::WarningCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__WarningCommand
    std::shared_ptr<ros2_interface::msg::WarningCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__WarningCommand
    std::shared_ptr<ros2_interface::msg::WarningCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WarningCommand_ & other) const
  {
    if (this->sound_alarm != other.sound_alarm) {
      return false;
    }
    if (this->light_alarm != other.light_alarm) {
      return false;
    }
    if (this->media_alarm != other.media_alarm) {
      return false;
    }
    if (this->motion_alarm != other.motion_alarm) {
      return false;
    }
    return true;
  }
  bool operator!=(const WarningCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WarningCommand_

// alias to use template instance with default allocator
using WarningCommand =
  ros2_interface::msg::WarningCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__WARNING_COMMAND__STRUCT_HPP_

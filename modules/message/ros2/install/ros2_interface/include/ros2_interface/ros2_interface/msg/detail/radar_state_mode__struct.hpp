// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RadarStateMode.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_MODE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RadarStateMode __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RadarStateMode __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarStateMode_
{
  using Type = RadarStateMode_<ContainerAllocator>;

  explicit RadarStateMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can0_work_mode = 0;
      this->can1_work_mode = 0;
      this->dual_can_mode = 0;
      this->timming_mode = 0;
      this->power_mode = 0;
      this->performance_mode = 0;
    }
  }

  explicit RadarStateMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can0_work_mode = 0;
      this->can1_work_mode = 0;
      this->dual_can_mode = 0;
      this->timming_mode = 0;
      this->power_mode = 0;
      this->performance_mode = 0;
    }
  }

  // field types and members
  using _can0_work_mode_type =
    uint8_t;
  _can0_work_mode_type can0_work_mode;
  using _can1_work_mode_type =
    uint8_t;
  _can1_work_mode_type can1_work_mode;
  using _dual_can_mode_type =
    uint8_t;
  _dual_can_mode_type dual_can_mode;
  using _timming_mode_type =
    uint8_t;
  _timming_mode_type timming_mode;
  using _power_mode_type =
    uint8_t;
  _power_mode_type power_mode;
  using _performance_mode_type =
    uint8_t;
  _performance_mode_type performance_mode;

  // setters for named parameter idiom
  Type & set__can0_work_mode(
    const uint8_t & _arg)
  {
    this->can0_work_mode = _arg;
    return *this;
  }
  Type & set__can1_work_mode(
    const uint8_t & _arg)
  {
    this->can1_work_mode = _arg;
    return *this;
  }
  Type & set__dual_can_mode(
    const uint8_t & _arg)
  {
    this->dual_can_mode = _arg;
    return *this;
  }
  Type & set__timming_mode(
    const uint8_t & _arg)
  {
    this->timming_mode = _arg;
    return *this;
  }
  Type & set__power_mode(
    const uint8_t & _arg)
  {
    this->power_mode = _arg;
    return *this;
  }
  Type & set__performance_mode(
    const uint8_t & _arg)
  {
    this->performance_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RadarStateMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RadarStateMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RadarStateMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RadarStateMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RadarStateMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RadarStateMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RadarStateMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RadarStateMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RadarStateMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RadarStateMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RadarStateMode
    std::shared_ptr<ros2_interface::msg::RadarStateMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RadarStateMode
    std::shared_ptr<ros2_interface::msg::RadarStateMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarStateMode_ & other) const
  {
    if (this->can0_work_mode != other.can0_work_mode) {
      return false;
    }
    if (this->can1_work_mode != other.can1_work_mode) {
      return false;
    }
    if (this->dual_can_mode != other.dual_can_mode) {
      return false;
    }
    if (this->timming_mode != other.timming_mode) {
      return false;
    }
    if (this->power_mode != other.power_mode) {
      return false;
    }
    if (this->performance_mode != other.performance_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarStateMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarStateMode_

// alias to use template instance with default allocator
using RadarStateMode =
  ros2_interface::msg::RadarStateMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_MODE__STRUCT_HPP_

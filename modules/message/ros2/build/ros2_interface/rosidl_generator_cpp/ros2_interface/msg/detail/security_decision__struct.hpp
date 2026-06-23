// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/SecurityDecision.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__STRUCT_HPP_

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
// Member 'warning_command'
#include "ros2_interface/msg/detail/warning_command__struct.hpp"
// Member 'trajectory_limit_command'
#include "ros2_interface/msg/detail/trajectory_limit_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__SecurityDecision __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__SecurityDecision __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SecurityDecision_
{
  using Type = SecurityDecision_<ContainerAllocator>;

  explicit SecurityDecision_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    warning_command(_init),
    trajectory_limit_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_report = 0l;
      this->change_lane_command = 0l;
      this->park_command = 0l;
      this->drivingmode_report = 0l;
    }
  }

  explicit SecurityDecision_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    warning_command(_alloc, _init),
    trajectory_limit_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_report = 0l;
      this->change_lane_command = 0l;
      this->park_command = 0l;
      this->drivingmode_report = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _warning_command_type =
    ros2_interface::msg::WarningCommand_<ContainerAllocator>;
  _warning_command_type warning_command;
  using _brake_report_type =
    int32_t;
  _brake_report_type brake_report;
  using _change_lane_command_type =
    int32_t;
  _change_lane_command_type change_lane_command;
  using _trajectory_limit_command_type =
    ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator>;
  _trajectory_limit_command_type trajectory_limit_command;
  using _park_command_type =
    int32_t;
  _park_command_type park_command;
  using _drivingmode_report_type =
    int32_t;
  _drivingmode_report_type drivingmode_report;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__warning_command(
    const ros2_interface::msg::WarningCommand_<ContainerAllocator> & _arg)
  {
    this->warning_command = _arg;
    return *this;
  }
  Type & set__brake_report(
    const int32_t & _arg)
  {
    this->brake_report = _arg;
    return *this;
  }
  Type & set__change_lane_command(
    const int32_t & _arg)
  {
    this->change_lane_command = _arg;
    return *this;
  }
  Type & set__trajectory_limit_command(
    const ros2_interface::msg::TrajectoryLimitCommand_<ContainerAllocator> & _arg)
  {
    this->trajectory_limit_command = _arg;
    return *this;
  }
  Type & set__park_command(
    const int32_t & _arg)
  {
    this->park_command = _arg;
    return *this;
  }
  Type & set__drivingmode_report(
    const int32_t & _arg)
  {
    this->drivingmode_report = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::SecurityDecision_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::SecurityDecision_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::SecurityDecision_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::SecurityDecision_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::SecurityDecision_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::SecurityDecision_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::SecurityDecision_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::SecurityDecision_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::SecurityDecision_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::SecurityDecision_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__SecurityDecision
    std::shared_ptr<ros2_interface::msg::SecurityDecision_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__SecurityDecision
    std::shared_ptr<ros2_interface::msg::SecurityDecision_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SecurityDecision_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->warning_command != other.warning_command) {
      return false;
    }
    if (this->brake_report != other.brake_report) {
      return false;
    }
    if (this->change_lane_command != other.change_lane_command) {
      return false;
    }
    if (this->trajectory_limit_command != other.trajectory_limit_command) {
      return false;
    }
    if (this->park_command != other.park_command) {
      return false;
    }
    if (this->drivingmode_report != other.drivingmode_report) {
      return false;
    }
    return true;
  }
  bool operator!=(const SecurityDecision_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SecurityDecision_

// alias to use template instance with default allocator
using SecurityDecision =
  ros2_interface::msg::SecurityDecision_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__STRUCT_HPP_

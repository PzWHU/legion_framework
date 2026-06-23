// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/PlanningCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__STRUCT_HPP_

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
# define DEPRECATED__ros2_interface__msg__PlanningCmd __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__PlanningCmd __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningCmd_
{
  using Type = PlanningCmd_<ContainerAllocator>;

  explicit PlanningCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_lamp_ctrl = 0l;
      this->high_beam_ctrl = 0l;
      this->low_beam_ctrl = 0l;
      this->horn_ctrl = 0l;
      this->front_wiper_ctrl = 0l;
      this->rear_wiper_ctrl = 0l;
      this->position_lamp_ctrl = 0l;
      this->front_fog_lamp_ctrl = 0l;
      this->rear_fog_lamp_ctrl = 0l;
      this->brake_lamp_ctrl = 0l;
      this->alarm_lamp_ctrl = 0l;
      this->lf_door_ctrl = 0l;
      this->rf_door_ctrl = 0l;
      this->lr_door_ctrl = 0l;
      this->rr_door_ctrl = 0l;
    }
  }

  explicit PlanningCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_lamp_ctrl = 0l;
      this->high_beam_ctrl = 0l;
      this->low_beam_ctrl = 0l;
      this->horn_ctrl = 0l;
      this->front_wiper_ctrl = 0l;
      this->rear_wiper_ctrl = 0l;
      this->position_lamp_ctrl = 0l;
      this->front_fog_lamp_ctrl = 0l;
      this->rear_fog_lamp_ctrl = 0l;
      this->brake_lamp_ctrl = 0l;
      this->alarm_lamp_ctrl = 0l;
      this->lf_door_ctrl = 0l;
      this->rf_door_ctrl = 0l;
      this->lr_door_ctrl = 0l;
      this->rr_door_ctrl = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _turn_lamp_ctrl_type =
    int32_t;
  _turn_lamp_ctrl_type turn_lamp_ctrl;
  using _high_beam_ctrl_type =
    int32_t;
  _high_beam_ctrl_type high_beam_ctrl;
  using _low_beam_ctrl_type =
    int32_t;
  _low_beam_ctrl_type low_beam_ctrl;
  using _horn_ctrl_type =
    int32_t;
  _horn_ctrl_type horn_ctrl;
  using _front_wiper_ctrl_type =
    int32_t;
  _front_wiper_ctrl_type front_wiper_ctrl;
  using _rear_wiper_ctrl_type =
    int32_t;
  _rear_wiper_ctrl_type rear_wiper_ctrl;
  using _position_lamp_ctrl_type =
    int32_t;
  _position_lamp_ctrl_type position_lamp_ctrl;
  using _front_fog_lamp_ctrl_type =
    int32_t;
  _front_fog_lamp_ctrl_type front_fog_lamp_ctrl;
  using _rear_fog_lamp_ctrl_type =
    int32_t;
  _rear_fog_lamp_ctrl_type rear_fog_lamp_ctrl;
  using _brake_lamp_ctrl_type =
    int32_t;
  _brake_lamp_ctrl_type brake_lamp_ctrl;
  using _alarm_lamp_ctrl_type =
    int32_t;
  _alarm_lamp_ctrl_type alarm_lamp_ctrl;
  using _lf_door_ctrl_type =
    int32_t;
  _lf_door_ctrl_type lf_door_ctrl;
  using _rf_door_ctrl_type =
    int32_t;
  _rf_door_ctrl_type rf_door_ctrl;
  using _lr_door_ctrl_type =
    int32_t;
  _lr_door_ctrl_type lr_door_ctrl;
  using _rr_door_ctrl_type =
    int32_t;
  _rr_door_ctrl_type rr_door_ctrl;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__turn_lamp_ctrl(
    const int32_t & _arg)
  {
    this->turn_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__high_beam_ctrl(
    const int32_t & _arg)
  {
    this->high_beam_ctrl = _arg;
    return *this;
  }
  Type & set__low_beam_ctrl(
    const int32_t & _arg)
  {
    this->low_beam_ctrl = _arg;
    return *this;
  }
  Type & set__horn_ctrl(
    const int32_t & _arg)
  {
    this->horn_ctrl = _arg;
    return *this;
  }
  Type & set__front_wiper_ctrl(
    const int32_t & _arg)
  {
    this->front_wiper_ctrl = _arg;
    return *this;
  }
  Type & set__rear_wiper_ctrl(
    const int32_t & _arg)
  {
    this->rear_wiper_ctrl = _arg;
    return *this;
  }
  Type & set__position_lamp_ctrl(
    const int32_t & _arg)
  {
    this->position_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__front_fog_lamp_ctrl(
    const int32_t & _arg)
  {
    this->front_fog_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__rear_fog_lamp_ctrl(
    const int32_t & _arg)
  {
    this->rear_fog_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__brake_lamp_ctrl(
    const int32_t & _arg)
  {
    this->brake_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__alarm_lamp_ctrl(
    const int32_t & _arg)
  {
    this->alarm_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__lf_door_ctrl(
    const int32_t & _arg)
  {
    this->lf_door_ctrl = _arg;
    return *this;
  }
  Type & set__rf_door_ctrl(
    const int32_t & _arg)
  {
    this->rf_door_ctrl = _arg;
    return *this;
  }
  Type & set__lr_door_ctrl(
    const int32_t & _arg)
  {
    this->lr_door_ctrl = _arg;
    return *this;
  }
  Type & set__rr_door_ctrl(
    const int32_t & _arg)
  {
    this->rr_door_ctrl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::PlanningCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::PlanningCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::PlanningCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::PlanningCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PlanningCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PlanningCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PlanningCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PlanningCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::PlanningCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::PlanningCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__PlanningCmd
    std::shared_ptr<ros2_interface::msg::PlanningCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__PlanningCmd
    std::shared_ptr<ros2_interface::msg::PlanningCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->turn_lamp_ctrl != other.turn_lamp_ctrl) {
      return false;
    }
    if (this->high_beam_ctrl != other.high_beam_ctrl) {
      return false;
    }
    if (this->low_beam_ctrl != other.low_beam_ctrl) {
      return false;
    }
    if (this->horn_ctrl != other.horn_ctrl) {
      return false;
    }
    if (this->front_wiper_ctrl != other.front_wiper_ctrl) {
      return false;
    }
    if (this->rear_wiper_ctrl != other.rear_wiper_ctrl) {
      return false;
    }
    if (this->position_lamp_ctrl != other.position_lamp_ctrl) {
      return false;
    }
    if (this->front_fog_lamp_ctrl != other.front_fog_lamp_ctrl) {
      return false;
    }
    if (this->rear_fog_lamp_ctrl != other.rear_fog_lamp_ctrl) {
      return false;
    }
    if (this->brake_lamp_ctrl != other.brake_lamp_ctrl) {
      return false;
    }
    if (this->alarm_lamp_ctrl != other.alarm_lamp_ctrl) {
      return false;
    }
    if (this->lf_door_ctrl != other.lf_door_ctrl) {
      return false;
    }
    if (this->rf_door_ctrl != other.rf_door_ctrl) {
      return false;
    }
    if (this->lr_door_ctrl != other.lr_door_ctrl) {
      return false;
    }
    if (this->rr_door_ctrl != other.rr_door_ctrl) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningCmd_

// alias to use template instance with default allocator
using PlanningCmd =
  ros2_interface::msg::PlanningCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_CMD__STRUCT_HPP_

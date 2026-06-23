// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__ros2_interface__msg__ControlCommand __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ControlCommand __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlCommand_
{
  using Type = ControlCommand_<ContainerAllocator>;

  explicit ControlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steer_driving_mode = 0l;
      this->front_steering_target = 0.0;
      this->rear_steering_target = 0.0;
      this->front_steering_rate = 0.0;
      this->rear_steering_rate = 0.0;
      this->accel_driving_mode = 0l;
      this->accel_value = 0.0;
      this->brake_driving_mode = 0l;
      this->brake_value = 0.0;
      this->backup_brake_driving_mode = 0l;
      this->backup_brake_value = 0.0;
      this->epb_driving_mode = 0l;
      this->epb_level = 0l;
      this->gear_driving_mode = 0l;
      this->emergency_brake_enable = 0;
      this->gear_location = 0l;
      this->speed = 0.0;
      this->acceleration = 0.0;
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

  explicit ControlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steer_driving_mode = 0l;
      this->front_steering_target = 0.0;
      this->rear_steering_target = 0.0;
      this->front_steering_rate = 0.0;
      this->rear_steering_rate = 0.0;
      this->accel_driving_mode = 0l;
      this->accel_value = 0.0;
      this->brake_driving_mode = 0l;
      this->brake_value = 0.0;
      this->backup_brake_driving_mode = 0l;
      this->backup_brake_value = 0.0;
      this->epb_driving_mode = 0l;
      this->epb_level = 0l;
      this->gear_driving_mode = 0l;
      this->emergency_brake_enable = 0;
      this->gear_location = 0l;
      this->speed = 0.0;
      this->acceleration = 0.0;
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
  using _steer_driving_mode_type =
    int32_t;
  _steer_driving_mode_type steer_driving_mode;
  using _front_steering_target_type =
    double;
  _front_steering_target_type front_steering_target;
  using _rear_steering_target_type =
    double;
  _rear_steering_target_type rear_steering_target;
  using _front_steering_rate_type =
    double;
  _front_steering_rate_type front_steering_rate;
  using _rear_steering_rate_type =
    double;
  _rear_steering_rate_type rear_steering_rate;
  using _accel_driving_mode_type =
    int32_t;
  _accel_driving_mode_type accel_driving_mode;
  using _accel_value_type =
    double;
  _accel_value_type accel_value;
  using _brake_driving_mode_type =
    int32_t;
  _brake_driving_mode_type brake_driving_mode;
  using _brake_value_type =
    double;
  _brake_value_type brake_value;
  using _backup_brake_driving_mode_type =
    int32_t;
  _backup_brake_driving_mode_type backup_brake_driving_mode;
  using _backup_brake_value_type =
    double;
  _backup_brake_value_type backup_brake_value;
  using _epb_driving_mode_type =
    int32_t;
  _epb_driving_mode_type epb_driving_mode;
  using _epb_level_type =
    int32_t;
  _epb_level_type epb_level;
  using _gear_driving_mode_type =
    int32_t;
  _gear_driving_mode_type gear_driving_mode;
  using _emergency_brake_enable_type =
    int8_t;
  _emergency_brake_enable_type emergency_brake_enable;
  using _gear_location_type =
    int32_t;
  _gear_location_type gear_location;
  using _speed_type =
    double;
  _speed_type speed;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;
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
  Type & set__steer_driving_mode(
    const int32_t & _arg)
  {
    this->steer_driving_mode = _arg;
    return *this;
  }
  Type & set__front_steering_target(
    const double & _arg)
  {
    this->front_steering_target = _arg;
    return *this;
  }
  Type & set__rear_steering_target(
    const double & _arg)
  {
    this->rear_steering_target = _arg;
    return *this;
  }
  Type & set__front_steering_rate(
    const double & _arg)
  {
    this->front_steering_rate = _arg;
    return *this;
  }
  Type & set__rear_steering_rate(
    const double & _arg)
  {
    this->rear_steering_rate = _arg;
    return *this;
  }
  Type & set__accel_driving_mode(
    const int32_t & _arg)
  {
    this->accel_driving_mode = _arg;
    return *this;
  }
  Type & set__accel_value(
    const double & _arg)
  {
    this->accel_value = _arg;
    return *this;
  }
  Type & set__brake_driving_mode(
    const int32_t & _arg)
  {
    this->brake_driving_mode = _arg;
    return *this;
  }
  Type & set__brake_value(
    const double & _arg)
  {
    this->brake_value = _arg;
    return *this;
  }
  Type & set__backup_brake_driving_mode(
    const int32_t & _arg)
  {
    this->backup_brake_driving_mode = _arg;
    return *this;
  }
  Type & set__backup_brake_value(
    const double & _arg)
  {
    this->backup_brake_value = _arg;
    return *this;
  }
  Type & set__epb_driving_mode(
    const int32_t & _arg)
  {
    this->epb_driving_mode = _arg;
    return *this;
  }
  Type & set__epb_level(
    const int32_t & _arg)
  {
    this->epb_level = _arg;
    return *this;
  }
  Type & set__gear_driving_mode(
    const int32_t & _arg)
  {
    this->gear_driving_mode = _arg;
    return *this;
  }
  Type & set__emergency_brake_enable(
    const int8_t & _arg)
  {
    this->emergency_brake_enable = _arg;
    return *this;
  }
  Type & set__gear_location(
    const int32_t & _arg)
  {
    this->gear_location = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
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
    ros2_interface::msg::ControlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ControlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ControlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ControlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ControlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ControlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ControlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ControlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ControlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ControlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ControlCommand
    std::shared_ptr<ros2_interface::msg::ControlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ControlCommand
    std::shared_ptr<ros2_interface::msg::ControlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->steer_driving_mode != other.steer_driving_mode) {
      return false;
    }
    if (this->front_steering_target != other.front_steering_target) {
      return false;
    }
    if (this->rear_steering_target != other.rear_steering_target) {
      return false;
    }
    if (this->front_steering_rate != other.front_steering_rate) {
      return false;
    }
    if (this->rear_steering_rate != other.rear_steering_rate) {
      return false;
    }
    if (this->accel_driving_mode != other.accel_driving_mode) {
      return false;
    }
    if (this->accel_value != other.accel_value) {
      return false;
    }
    if (this->brake_driving_mode != other.brake_driving_mode) {
      return false;
    }
    if (this->brake_value != other.brake_value) {
      return false;
    }
    if (this->backup_brake_driving_mode != other.backup_brake_driving_mode) {
      return false;
    }
    if (this->backup_brake_value != other.backup_brake_value) {
      return false;
    }
    if (this->epb_driving_mode != other.epb_driving_mode) {
      return false;
    }
    if (this->epb_level != other.epb_level) {
      return false;
    }
    if (this->gear_driving_mode != other.gear_driving_mode) {
      return false;
    }
    if (this->emergency_brake_enable != other.emergency_brake_enable) {
      return false;
    }
    if (this->gear_location != other.gear_location) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
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
  bool operator!=(const ControlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlCommand_

// alias to use template instance with default allocator
using ControlCommand =
  ros2_interface::msg::ControlCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_

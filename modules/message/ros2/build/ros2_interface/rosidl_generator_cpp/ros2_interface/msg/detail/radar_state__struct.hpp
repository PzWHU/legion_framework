// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RadarState.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'radar_state_error'
#include "ros2_interface/msg/detail/radar_state_error__struct.hpp"
// Member 'radar_state_mode'
#include "ros2_interface/msg/detail/radar_state_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RadarState __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RadarState __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarState_
{
  using Type = RadarState_<ContainerAllocator>;

  explicit RadarState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : radar_state_error(_init),
    radar_state_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0;
      this->nvm_read_status = 0;
      this->nvm_write_status = 0;
      this->max_distance = 0;
      this->sort_index = 0;
      this->radar_power = 0;
      this->ctl_relay = 0;
      this->output_type = 0;
      this->send_quality = 0;
      this->send_extinfo = 0;
      this->motion_rx_state = 0;
      this->rcs_threshold = 0;
      this->connector_direction = 0;
      this->radar_position = 0;
      this->hw_error = 0;
    }
  }

  explicit RadarState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : radar_state_error(_alloc, _init),
    radar_state_mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0;
      this->nvm_read_status = 0;
      this->nvm_write_status = 0;
      this->max_distance = 0;
      this->sort_index = 0;
      this->radar_power = 0;
      this->ctl_relay = 0;
      this->output_type = 0;
      this->send_quality = 0;
      this->send_extinfo = 0;
      this->motion_rx_state = 0;
      this->rcs_threshold = 0;
      this->connector_direction = 0;
      this->radar_position = 0;
      this->hw_error = 0;
    }
  }

  // field types and members
  using _sensor_id_type =
    uint8_t;
  _sensor_id_type sensor_id;
  using _nvm_read_status_type =
    uint8_t;
  _nvm_read_status_type nvm_read_status;
  using _nvm_write_status_type =
    uint8_t;
  _nvm_write_status_type nvm_write_status;
  using _radar_state_error_type =
    ros2_interface::msg::RadarStateError_<ContainerAllocator>;
  _radar_state_error_type radar_state_error;
  using _radar_state_mode_type =
    ros2_interface::msg::RadarStateMode_<ContainerAllocator>;
  _radar_state_mode_type radar_state_mode;
  using _max_distance_type =
    uint16_t;
  _max_distance_type max_distance;
  using _sort_index_type =
    uint8_t;
  _sort_index_type sort_index;
  using _radar_power_type =
    uint8_t;
  _radar_power_type radar_power;
  using _ctl_relay_type =
    uint8_t;
  _ctl_relay_type ctl_relay;
  using _output_type_type =
    uint8_t;
  _output_type_type output_type;
  using _send_quality_type =
    uint8_t;
  _send_quality_type send_quality;
  using _send_extinfo_type =
    uint8_t;
  _send_extinfo_type send_extinfo;
  using _motion_rx_state_type =
    uint8_t;
  _motion_rx_state_type motion_rx_state;
  using _rcs_threshold_type =
    uint8_t;
  _rcs_threshold_type rcs_threshold;
  using _connector_direction_type =
    uint8_t;
  _connector_direction_type connector_direction;
  using _radar_position_type =
    uint8_t;
  _radar_position_type radar_position;
  using _hw_error_type =
    uint8_t;
  _hw_error_type hw_error;

  // setters for named parameter idiom
  Type & set__sensor_id(
    const uint8_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__nvm_read_status(
    const uint8_t & _arg)
  {
    this->nvm_read_status = _arg;
    return *this;
  }
  Type & set__nvm_write_status(
    const uint8_t & _arg)
  {
    this->nvm_write_status = _arg;
    return *this;
  }
  Type & set__radar_state_error(
    const ros2_interface::msg::RadarStateError_<ContainerAllocator> & _arg)
  {
    this->radar_state_error = _arg;
    return *this;
  }
  Type & set__radar_state_mode(
    const ros2_interface::msg::RadarStateMode_<ContainerAllocator> & _arg)
  {
    this->radar_state_mode = _arg;
    return *this;
  }
  Type & set__max_distance(
    const uint16_t & _arg)
  {
    this->max_distance = _arg;
    return *this;
  }
  Type & set__sort_index(
    const uint8_t & _arg)
  {
    this->sort_index = _arg;
    return *this;
  }
  Type & set__radar_power(
    const uint8_t & _arg)
  {
    this->radar_power = _arg;
    return *this;
  }
  Type & set__ctl_relay(
    const uint8_t & _arg)
  {
    this->ctl_relay = _arg;
    return *this;
  }
  Type & set__output_type(
    const uint8_t & _arg)
  {
    this->output_type = _arg;
    return *this;
  }
  Type & set__send_quality(
    const uint8_t & _arg)
  {
    this->send_quality = _arg;
    return *this;
  }
  Type & set__send_extinfo(
    const uint8_t & _arg)
  {
    this->send_extinfo = _arg;
    return *this;
  }
  Type & set__motion_rx_state(
    const uint8_t & _arg)
  {
    this->motion_rx_state = _arg;
    return *this;
  }
  Type & set__rcs_threshold(
    const uint8_t & _arg)
  {
    this->rcs_threshold = _arg;
    return *this;
  }
  Type & set__connector_direction(
    const uint8_t & _arg)
  {
    this->connector_direction = _arg;
    return *this;
  }
  Type & set__radar_position(
    const uint8_t & _arg)
  {
    this->radar_position = _arg;
    return *this;
  }
  Type & set__hw_error(
    const uint8_t & _arg)
  {
    this->hw_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RadarState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RadarState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RadarState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RadarState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RadarState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RadarState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RadarState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RadarState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RadarState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RadarState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RadarState
    std::shared_ptr<ros2_interface::msg::RadarState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RadarState
    std::shared_ptr<ros2_interface::msg::RadarState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarState_ & other) const
  {
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->nvm_read_status != other.nvm_read_status) {
      return false;
    }
    if (this->nvm_write_status != other.nvm_write_status) {
      return false;
    }
    if (this->radar_state_error != other.radar_state_error) {
      return false;
    }
    if (this->radar_state_mode != other.radar_state_mode) {
      return false;
    }
    if (this->max_distance != other.max_distance) {
      return false;
    }
    if (this->sort_index != other.sort_index) {
      return false;
    }
    if (this->radar_power != other.radar_power) {
      return false;
    }
    if (this->ctl_relay != other.ctl_relay) {
      return false;
    }
    if (this->output_type != other.output_type) {
      return false;
    }
    if (this->send_quality != other.send_quality) {
      return false;
    }
    if (this->send_extinfo != other.send_extinfo) {
      return false;
    }
    if (this->motion_rx_state != other.motion_rx_state) {
      return false;
    }
    if (this->rcs_threshold != other.rcs_threshold) {
      return false;
    }
    if (this->connector_direction != other.connector_direction) {
      return false;
    }
    if (this->radar_position != other.radar_position) {
      return false;
    }
    if (this->hw_error != other.hw_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarState_

// alias to use template instance with default allocator
using RadarState =
  ros2_interface::msg::RadarState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RadarStateError.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RadarStateError __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RadarStateError __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarStateError_
{
  using Type = RadarStateError_<ContainerAllocator>;

  explicit RadarStateError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->persistent_error = 0;
      this->temporary_error = 0;
      this->interference_error = 0;
      this->temperature_error = 0;
      this->voltage_error = 0;
      this->block_error = 0;
      this->broadcast_error = 0;
      this->electric_axis_error = 0;
      this->config_error = 0;
      this->calibration_error = 0;
    }
  }

  explicit RadarStateError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->persistent_error = 0;
      this->temporary_error = 0;
      this->interference_error = 0;
      this->temperature_error = 0;
      this->voltage_error = 0;
      this->block_error = 0;
      this->broadcast_error = 0;
      this->electric_axis_error = 0;
      this->config_error = 0;
      this->calibration_error = 0;
    }
  }

  // field types and members
  using _persistent_error_type =
    uint8_t;
  _persistent_error_type persistent_error;
  using _temporary_error_type =
    uint8_t;
  _temporary_error_type temporary_error;
  using _interference_error_type =
    uint8_t;
  _interference_error_type interference_error;
  using _temperature_error_type =
    uint8_t;
  _temperature_error_type temperature_error;
  using _voltage_error_type =
    uint8_t;
  _voltage_error_type voltage_error;
  using _block_error_type =
    uint8_t;
  _block_error_type block_error;
  using _broadcast_error_type =
    uint8_t;
  _broadcast_error_type broadcast_error;
  using _electric_axis_error_type =
    uint8_t;
  _electric_axis_error_type electric_axis_error;
  using _config_error_type =
    uint8_t;
  _config_error_type config_error;
  using _calibration_error_type =
    uint8_t;
  _calibration_error_type calibration_error;

  // setters for named parameter idiom
  Type & set__persistent_error(
    const uint8_t & _arg)
  {
    this->persistent_error = _arg;
    return *this;
  }
  Type & set__temporary_error(
    const uint8_t & _arg)
  {
    this->temporary_error = _arg;
    return *this;
  }
  Type & set__interference_error(
    const uint8_t & _arg)
  {
    this->interference_error = _arg;
    return *this;
  }
  Type & set__temperature_error(
    const uint8_t & _arg)
  {
    this->temperature_error = _arg;
    return *this;
  }
  Type & set__voltage_error(
    const uint8_t & _arg)
  {
    this->voltage_error = _arg;
    return *this;
  }
  Type & set__block_error(
    const uint8_t & _arg)
  {
    this->block_error = _arg;
    return *this;
  }
  Type & set__broadcast_error(
    const uint8_t & _arg)
  {
    this->broadcast_error = _arg;
    return *this;
  }
  Type & set__electric_axis_error(
    const uint8_t & _arg)
  {
    this->electric_axis_error = _arg;
    return *this;
  }
  Type & set__config_error(
    const uint8_t & _arg)
  {
    this->config_error = _arg;
    return *this;
  }
  Type & set__calibration_error(
    const uint8_t & _arg)
  {
    this->calibration_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RadarStateError_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RadarStateError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RadarStateError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RadarStateError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RadarStateError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RadarStateError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RadarStateError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RadarStateError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RadarStateError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RadarStateError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RadarStateError
    std::shared_ptr<ros2_interface::msg::RadarStateError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RadarStateError
    std::shared_ptr<ros2_interface::msg::RadarStateError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarStateError_ & other) const
  {
    if (this->persistent_error != other.persistent_error) {
      return false;
    }
    if (this->temporary_error != other.temporary_error) {
      return false;
    }
    if (this->interference_error != other.interference_error) {
      return false;
    }
    if (this->temperature_error != other.temperature_error) {
      return false;
    }
    if (this->voltage_error != other.voltage_error) {
      return false;
    }
    if (this->block_error != other.block_error) {
      return false;
    }
    if (this->broadcast_error != other.broadcast_error) {
      return false;
    }
    if (this->electric_axis_error != other.electric_axis_error) {
      return false;
    }
    if (this->config_error != other.config_error) {
      return false;
    }
    if (this->calibration_error != other.calibration_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarStateError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarStateError_

// alias to use template instance with default allocator
using RadarStateError =
  ros2_interface::msg::RadarStateError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__STRUCT_HPP_

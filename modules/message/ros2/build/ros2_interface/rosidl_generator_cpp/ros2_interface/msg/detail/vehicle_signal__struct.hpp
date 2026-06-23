// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/VehicleSignal.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__VehicleSignal __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__VehicleSignal __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSignal_
{
  using Type = VehicleSignal_<ContainerAllocator>;

  explicit VehicleSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_signal = 0l;
      this->high_beam = false;
      this->low_beam = false;
      this->horn = false;
      this->emergency_light = false;
    }
  }

  explicit VehicleSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_signal = 0l;
      this->high_beam = false;
      this->low_beam = false;
      this->horn = false;
      this->emergency_light = false;
    }
  }

  // field types and members
  using _turn_signal_type =
    int32_t;
  _turn_signal_type turn_signal;
  using _high_beam_type =
    bool;
  _high_beam_type high_beam;
  using _low_beam_type =
    bool;
  _low_beam_type low_beam;
  using _horn_type =
    bool;
  _horn_type horn;
  using _emergency_light_type =
    bool;
  _emergency_light_type emergency_light;

  // setters for named parameter idiom
  Type & set__turn_signal(
    const int32_t & _arg)
  {
    this->turn_signal = _arg;
    return *this;
  }
  Type & set__high_beam(
    const bool & _arg)
  {
    this->high_beam = _arg;
    return *this;
  }
  Type & set__low_beam(
    const bool & _arg)
  {
    this->low_beam = _arg;
    return *this;
  }
  Type & set__horn(
    const bool & _arg)
  {
    this->horn = _arg;
    return *this;
  }
  Type & set__emergency_light(
    const bool & _arg)
  {
    this->emergency_light = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::VehicleSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::VehicleSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__VehicleSignal
    std::shared_ptr<ros2_interface::msg::VehicleSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__VehicleSignal
    std::shared_ptr<ros2_interface::msg::VehicleSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSignal_ & other) const
  {
    if (this->turn_signal != other.turn_signal) {
      return false;
    }
    if (this->high_beam != other.high_beam) {
      return false;
    }
    if (this->low_beam != other.low_beam) {
      return false;
    }
    if (this->horn != other.horn) {
      return false;
    }
    if (this->emergency_light != other.emergency_light) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSignal_

// alias to use template instance with default allocator
using VehicleSignal =
  ros2_interface::msg::VehicleSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_HPP_

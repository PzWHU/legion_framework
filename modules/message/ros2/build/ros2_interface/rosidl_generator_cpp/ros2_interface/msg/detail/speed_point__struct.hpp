// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/SpeedPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SPEED_POINT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SPEED_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__SpeedPoint __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__SpeedPoint __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedPoint_
{
  using Type = SpeedPoint_<ContainerAllocator>;

  explicit SpeedPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->t = 0.0;
      this->v = 0.0;
      this->a = 0.0;
      this->da = 0.0;
    }
  }

  explicit SpeedPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->t = 0.0;
      this->v = 0.0;
      this->a = 0.0;
      this->da = 0.0;
    }
  }

  // field types and members
  using _s_type =
    double;
  _s_type s;
  using _t_type =
    double;
  _t_type t;
  using _v_type =
    double;
  _v_type v;
  using _a_type =
    double;
  _a_type a;
  using _da_type =
    double;
  _da_type da;

  // setters for named parameter idiom
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__t(
    const double & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__v(
    const double & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__da(
    const double & _arg)
  {
    this->da = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::SpeedPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::SpeedPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::SpeedPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::SpeedPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::SpeedPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::SpeedPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::SpeedPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::SpeedPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::SpeedPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::SpeedPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__SpeedPoint
    std::shared_ptr<ros2_interface::msg::SpeedPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__SpeedPoint
    std::shared_ptr<ros2_interface::msg::SpeedPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedPoint_ & other) const
  {
    if (this->s != other.s) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->da != other.da) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedPoint_

// alias to use template instance with default allocator
using SpeedPoint =
  ros2_interface::msg::SpeedPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SPEED_POINT__STRUCT_HPP_

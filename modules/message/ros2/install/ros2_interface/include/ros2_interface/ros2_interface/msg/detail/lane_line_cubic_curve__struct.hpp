// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/LaneLineCubicCurve.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__LaneLineCubicCurve __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__LaneLineCubicCurve __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneLineCubicCurve_
{
  using Type = LaneLineCubicCurve_<ContainerAllocator>;

  explicit LaneLineCubicCurve_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_x = 0.0;
      this->end_x = 0.0;
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->d = 0.0;
    }
  }

  explicit LaneLineCubicCurve_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_x = 0.0;
      this->end_x = 0.0;
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->d = 0.0;
    }
  }

  // field types and members
  using _start_x_type =
    double;
  _start_x_type start_x;
  using _end_x_type =
    double;
  _end_x_type end_x;
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;
  using _c_type =
    double;
  _c_type c;
  using _d_type =
    double;
  _d_type d;

  // setters for named parameter idiom
  Type & set__start_x(
    const double & _arg)
  {
    this->start_x = _arg;
    return *this;
  }
  Type & set__end_x(
    const double & _arg)
  {
    this->end_x = _arg;
    return *this;
  }
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const double & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__d(
    const double & _arg)
  {
    this->d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__LaneLineCubicCurve
    std::shared_ptr<ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__LaneLineCubicCurve
    std::shared_ptr<ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneLineCubicCurve_ & other) const
  {
    if (this->start_x != other.start_x) {
      return false;
    }
    if (this->end_x != other.end_x) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneLineCubicCurve_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneLineCubicCurve_

// alias to use template instance with default allocator
using LaneLineCubicCurve =
  ros2_interface::msg::LaneLineCubicCurve_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LINE_CUBIC_CURVE__STRUCT_HPP_

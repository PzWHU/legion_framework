// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__PathPoint __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__PathPoint __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPoint_
{
  using Type = PathPoint_<ContainerAllocator>;

  explicit PathPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->theta = 0.0;
      this->kappa = 0.0;
      this->s = 0.0;
      this->dkappa = 0.0;
      this->ddkappa = 0.0;
      this->lane_id = 0.0;
      this->x_derivative = 0.0;
      this->y_derivative = 0.0;
    }
  }

  explicit PathPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->theta = 0.0;
      this->kappa = 0.0;
      this->s = 0.0;
      this->dkappa = 0.0;
      this->ddkappa = 0.0;
      this->lane_id = 0.0;
      this->x_derivative = 0.0;
      this->y_derivative = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _theta_type =
    double;
  _theta_type theta;
  using _kappa_type =
    double;
  _kappa_type kappa;
  using _s_type =
    double;
  _s_type s;
  using _dkappa_type =
    double;
  _dkappa_type dkappa;
  using _ddkappa_type =
    double;
  _ddkappa_type ddkappa;
  using _lane_id_type =
    double;
  _lane_id_type lane_id;
  using _x_derivative_type =
    double;
  _x_derivative_type x_derivative;
  using _y_derivative_type =
    double;
  _y_derivative_type y_derivative;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__kappa(
    const double & _arg)
  {
    this->kappa = _arg;
    return *this;
  }
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__dkappa(
    const double & _arg)
  {
    this->dkappa = _arg;
    return *this;
  }
  Type & set__ddkappa(
    const double & _arg)
  {
    this->ddkappa = _arg;
    return *this;
  }
  Type & set__lane_id(
    const double & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__x_derivative(
    const double & _arg)
  {
    this->x_derivative = _arg;
    return *this;
  }
  Type & set__y_derivative(
    const double & _arg)
  {
    this->y_derivative = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::PathPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::PathPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::PathPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::PathPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PathPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PathPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PathPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PathPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::PathPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::PathPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__PathPoint
    std::shared_ptr<ros2_interface::msg::PathPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__PathPoint
    std::shared_ptr<ros2_interface::msg::PathPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->kappa != other.kappa) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    if (this->dkappa != other.dkappa) {
      return false;
    }
    if (this->ddkappa != other.ddkappa) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->x_derivative != other.x_derivative) {
      return false;
    }
    if (this->y_derivative != other.y_derivative) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPoint_

// alias to use template instance with default allocator
using PathPoint =
  ros2_interface::msg::PathPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Uncertainty.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position_std_dev'
// Member 'orientation_std_dev'
// Member 'linear_velocity_std_dev'
// Member 'linear_acceleration_std_dev'
// Member 'angular_velocity_std_dev'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Uncertainty __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Uncertainty __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Uncertainty_
{
  using Type = Uncertainty_<ContainerAllocator>;

  explicit Uncertainty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_std_dev(_init),
    orientation_std_dev(_init),
    linear_velocity_std_dev(_init),
    linear_acceleration_std_dev(_init),
    angular_velocity_std_dev(_init)
  {
    (void)_init;
  }

  explicit Uncertainty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_std_dev(_alloc, _init),
    orientation_std_dev(_alloc, _init),
    linear_velocity_std_dev(_alloc, _init),
    linear_acceleration_std_dev(_alloc, _init),
    angular_velocity_std_dev(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _position_std_dev_type position_std_dev;
  using _orientation_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _orientation_std_dev_type orientation_std_dev;
  using _linear_velocity_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _linear_velocity_std_dev_type linear_velocity_std_dev;
  using _linear_acceleration_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _linear_acceleration_std_dev_type linear_acceleration_std_dev;
  using _angular_velocity_std_dev_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _angular_velocity_std_dev_type angular_velocity_std_dev;

  // setters for named parameter idiom
  Type & set__position_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->position_std_dev = _arg;
    return *this;
  }
  Type & set__orientation_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->orientation_std_dev = _arg;
    return *this;
  }
  Type & set__linear_velocity_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->linear_velocity_std_dev = _arg;
    return *this;
  }
  Type & set__linear_acceleration_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration_std_dev = _arg;
    return *this;
  }
  Type & set__angular_velocity_std_dev(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->angular_velocity_std_dev = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Uncertainty_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Uncertainty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Uncertainty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Uncertainty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Uncertainty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Uncertainty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Uncertainty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Uncertainty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Uncertainty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Uncertainty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Uncertainty
    std::shared_ptr<ros2_interface::msg::Uncertainty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Uncertainty
    std::shared_ptr<ros2_interface::msg::Uncertainty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Uncertainty_ & other) const
  {
    if (this->position_std_dev != other.position_std_dev) {
      return false;
    }
    if (this->orientation_std_dev != other.orientation_std_dev) {
      return false;
    }
    if (this->linear_velocity_std_dev != other.linear_velocity_std_dev) {
      return false;
    }
    if (this->linear_acceleration_std_dev != other.linear_acceleration_std_dev) {
      return false;
    }
    if (this->angular_velocity_std_dev != other.angular_velocity_std_dev) {
      return false;
    }
    return true;
  }
  bool operator!=(const Uncertainty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Uncertainty_

// alias to use template instance with default allocator
using Uncertainty =
  ros2_interface::msg::Uncertainty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__STRUCT_HPP_

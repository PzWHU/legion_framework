// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/StopPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STOP_POINT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__STOP_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__StopPoint __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__StopPoint __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopPoint_
{
  using Type = StopPoint_<ContainerAllocator>;

  explicit StopPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
      this->type = 0;
      this->stop_distance = 0.0;
    }
  }

  explicit StopPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
      this->type = 0;
      this->stop_distance = 0.0;
    }
  }

  // field types and members
  using _point_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _point_type point;
  using _theta_type =
    double;
  _theta_type theta;
  using _type_type =
    int8_t;
  _type_type type;
  using _stop_distance_type =
    double;
  _stop_distance_type stop_distance;

  // setters for named parameter idiom
  Type & set__point(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__type(
    const int8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__stop_distance(
    const double & _arg)
  {
    this->stop_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::StopPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::StopPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::StopPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::StopPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::StopPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::StopPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::StopPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::StopPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::StopPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::StopPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__StopPoint
    std::shared_ptr<ros2_interface::msg::StopPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__StopPoint
    std::shared_ptr<ros2_interface::msg::StopPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopPoint_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->stop_distance != other.stop_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopPoint_

// alias to use template instance with default allocator
using StopPoint =
  ros2_interface::msg::StopPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__STOP_POINT__STRUCT_HPP_

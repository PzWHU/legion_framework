// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path_point'
#include "ros2_interface/msg/detail/path_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__TrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__TrajectoryPoint __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPoint_
{
  using Type = TrajectoryPoint_<ContainerAllocator>;

  explicit TrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v = 0.0;
      this->a = 0.0;
      this->relative_time = 0.0;
      this->da = 0.0;
      this->is_steer_valid = false;
      this->front_steer = 0.0;
      this->rear_steer = 0.0;
      this->gear = 0l;
    }
  }

  explicit TrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v = 0.0;
      this->a = 0.0;
      this->relative_time = 0.0;
      this->da = 0.0;
      this->is_steer_valid = false;
      this->front_steer = 0.0;
      this->rear_steer = 0.0;
      this->gear = 0l;
    }
  }

  // field types and members
  using _path_point_type =
    ros2_interface::msg::PathPoint_<ContainerAllocator>;
  _path_point_type path_point;
  using _v_type =
    double;
  _v_type v;
  using _a_type =
    double;
  _a_type a;
  using _relative_time_type =
    double;
  _relative_time_type relative_time;
  using _da_type =
    double;
  _da_type da;
  using _is_steer_valid_type =
    bool;
  _is_steer_valid_type is_steer_valid;
  using _front_steer_type =
    double;
  _front_steer_type front_steer;
  using _rear_steer_type =
    double;
  _rear_steer_type rear_steer;
  using _gear_type =
    int32_t;
  _gear_type gear;

  // setters for named parameter idiom
  Type & set__path_point(
    const ros2_interface::msg::PathPoint_<ContainerAllocator> & _arg)
  {
    this->path_point = _arg;
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
  Type & set__relative_time(
    const double & _arg)
  {
    this->relative_time = _arg;
    return *this;
  }
  Type & set__da(
    const double & _arg)
  {
    this->da = _arg;
    return *this;
  }
  Type & set__is_steer_valid(
    const bool & _arg)
  {
    this->is_steer_valid = _arg;
    return *this;
  }
  Type & set__front_steer(
    const double & _arg)
  {
    this->front_steer = _arg;
    return *this;
  }
  Type & set__rear_steer(
    const double & _arg)
  {
    this->rear_steer = _arg;
    return *this;
  }
  Type & set__gear(
    const int32_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::TrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::TrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__TrajectoryPoint
    std::shared_ptr<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__TrajectoryPoint
    std::shared_ptr<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPoint_ & other) const
  {
    if (this->path_point != other.path_point) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->relative_time != other.relative_time) {
      return false;
    }
    if (this->da != other.da) {
      return false;
    }
    if (this->is_steer_valid != other.is_steer_valid) {
      return false;
    }
    if (this->front_steer != other.front_steer) {
      return false;
    }
    if (this->rear_steer != other.rear_steer) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPoint_

// alias to use template instance with default allocator
using TrajectoryPoint =
  ros2_interface::msg::TrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_

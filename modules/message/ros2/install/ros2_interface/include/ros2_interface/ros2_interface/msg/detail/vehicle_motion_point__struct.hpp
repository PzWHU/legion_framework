// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/VehicleMotionPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory_point'
#include "ros2_interface/msg/detail/trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__VehicleMotionPoint __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__VehicleMotionPoint __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleMotionPoint_
{
  using Type = VehicleMotionPoint_<ContainerAllocator>;

  explicit VehicleMotionPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steer = 0.0;
    }
  }

  explicit VehicleMotionPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steer = 0.0;
    }
  }

  // field types and members
  using _trajectory_point_type =
    ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>;
  _trajectory_point_type trajectory_point;
  using _steer_type =
    double;
  _steer_type steer;

  // setters for named parameter idiom
  Type & set__trajectory_point(
    const ros2_interface::msg::TrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->trajectory_point = _arg;
    return *this;
  }
  Type & set__steer(
    const double & _arg)
  {
    this->steer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__VehicleMotionPoint
    std::shared_ptr<ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__VehicleMotionPoint
    std::shared_ptr<ros2_interface::msg::VehicleMotionPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleMotionPoint_ & other) const
  {
    if (this->trajectory_point != other.trajectory_point) {
      return false;
    }
    if (this->steer != other.steer) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleMotionPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleMotionPoint_

// alias to use template instance with default allocator
using VehicleMotionPoint =
  ros2_interface::msg::VehicleMotionPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__STRUCT_HPP_

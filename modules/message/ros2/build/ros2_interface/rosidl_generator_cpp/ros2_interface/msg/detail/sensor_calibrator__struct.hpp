// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/SensorCalibrator.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
// Member 'angle'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__SensorCalibrator __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__SensorCalibrator __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorCalibrator_
{
  using Type = SensorCalibrator_<ContainerAllocator>;

  explicit SensorCalibrator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    angle(_init)
  {
    (void)_init;
  }

  explicit SensorCalibrator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    angle(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _pose_type pose;
  using _angle_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__pose(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__angle(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::SensorCalibrator_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::SensorCalibrator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::SensorCalibrator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::SensorCalibrator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::SensorCalibrator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::SensorCalibrator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::SensorCalibrator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::SensorCalibrator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::SensorCalibrator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::SensorCalibrator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__SensorCalibrator
    std::shared_ptr<ros2_interface::msg::SensorCalibrator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__SensorCalibrator
    std::shared_ptr<ros2_interface::msg::SensorCalibrator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorCalibrator_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorCalibrator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorCalibrator_

// alias to use template instance with default allocator
using SensorCalibrator =
  ros2_interface::msg::SensorCalibrator_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SENSOR_CALIBRATOR__STRUCT_HPP_

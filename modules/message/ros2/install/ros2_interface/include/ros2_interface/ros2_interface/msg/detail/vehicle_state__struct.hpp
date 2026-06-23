// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "ros2_interface/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__VehicleState __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->timestamp = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->heading = 0.0;
      this->kappa = 0.0;
      this->linear_velocity = 0.0;
      this->angular_velocity = 0.0;
      this->linear_acceleration = 0.0;
      this->gear = 0l;
      this->driving_mode = 0l;
      this->front_steering_value = 0.0;
      this->rear_steering_value = 0.0;
    }
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->timestamp = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->heading = 0.0;
      this->kappa = 0.0;
      this->linear_velocity = 0.0;
      this->angular_velocity = 0.0;
      this->linear_acceleration = 0.0;
      this->gear = 0l;
      this->driving_mode = 0l;
      this->front_steering_value = 0.0;
      this->rear_steering_value = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _heading_type =
    double;
  _heading_type heading;
  using _kappa_type =
    double;
  _kappa_type kappa;
  using _linear_velocity_type =
    double;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    double;
  _angular_velocity_type angular_velocity;
  using _linear_acceleration_type =
    double;
  _linear_acceleration_type linear_acceleration;
  using _gear_type =
    int32_t;
  _gear_type gear;
  using _driving_mode_type =
    int32_t;
  _driving_mode_type driving_mode;
  using _pose_type =
    ros2_interface::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _front_steering_value_type =
    double;
  _front_steering_value_type front_steering_value;
  using _rear_steering_value_type =
    double;
  _rear_steering_value_type rear_steering_value;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
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
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__kappa(
    const double & _arg)
  {
    this->kappa = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const double & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const double & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const double & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__gear(
    const int32_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__driving_mode(
    const int32_t & _arg)
  {
    this->driving_mode = _arg;
    return *this;
  }
  Type & set__pose(
    const ros2_interface::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__front_steering_value(
    const double & _arg)
  {
    this->front_steering_value = _arg;
    return *this;
  }
  Type & set__rear_steering_value(
    const double & _arg)
  {
    this->rear_steering_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__VehicleState
    std::shared_ptr<ros2_interface::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__VehicleState
    std::shared_ptr<ros2_interface::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->kappa != other.kappa) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->driving_mode != other.driving_mode) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->front_steering_value != other.front_steering_value) {
      return false;
    }
    if (this->rear_steering_value != other.rear_steering_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  ros2_interface::msg::VehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

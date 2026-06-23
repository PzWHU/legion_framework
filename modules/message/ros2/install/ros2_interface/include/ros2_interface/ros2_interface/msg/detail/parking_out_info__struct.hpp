// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ParkingOutInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__STRUCT_HPP_

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
// Member 'parking_out_point'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ParkingOutInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ParkingOutInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParkingOutInfo_
{
  using Type = ParkingOutInfo_<ContainerAllocator>;

  explicit ParkingOutInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    parking_out_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parking_out_id = 0l;
      this->parking_direction_type = 0l;
      this->is_parking_out_enable = false;
      this->theta = 0.0;
    }
  }

  explicit ParkingOutInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    parking_out_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parking_out_id = 0l;
      this->parking_direction_type = 0l;
      this->is_parking_out_enable = false;
      this->theta = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _parking_out_id_type =
    int32_t;
  _parking_out_id_type parking_out_id;
  using _parking_direction_type_type =
    int32_t;
  _parking_direction_type_type parking_direction_type;
  using _is_parking_out_enable_type =
    bool;
  _is_parking_out_enable_type is_parking_out_enable;
  using _parking_out_point_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _parking_out_point_type parking_out_point;
  using _theta_type =
    double;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__parking_out_id(
    const int32_t & _arg)
  {
    this->parking_out_id = _arg;
    return *this;
  }
  Type & set__parking_direction_type(
    const int32_t & _arg)
  {
    this->parking_direction_type = _arg;
    return *this;
  }
  Type & set__is_parking_out_enable(
    const bool & _arg)
  {
    this->is_parking_out_enable = _arg;
    return *this;
  }
  Type & set__parking_out_point(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->parking_out_point = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ParkingOutInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ParkingOutInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ParkingOutInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ParkingOutInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ParkingOutInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ParkingOutInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ParkingOutInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ParkingOutInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ParkingOutInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ParkingOutInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ParkingOutInfo
    std::shared_ptr<ros2_interface::msg::ParkingOutInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ParkingOutInfo
    std::shared_ptr<ros2_interface::msg::ParkingOutInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkingOutInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->parking_out_id != other.parking_out_id) {
      return false;
    }
    if (this->parking_direction_type != other.parking_direction_type) {
      return false;
    }
    if (this->is_parking_out_enable != other.is_parking_out_enable) {
      return false;
    }
    if (this->parking_out_point != other.parking_out_point) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkingOutInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkingOutInfo_

// alias to use template instance with default allocator
using ParkingOutInfo =
  ros2_interface::msg::ParkingOutInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__STRUCT_HPP_

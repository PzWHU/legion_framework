// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/UssParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__STRUCT_HPP_

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
// Member 'parking_point0'
// Member 'parking_point1'
// Member 'parking_point2'
// Member 'parking_point3'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__UssParkingInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__UssParkingInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UssParkingInfo_
{
  using Type = UssParkingInfo_<ContainerAllocator>;

  explicit UssParkingInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    parking_point0(_init),
    parking_point1(_init),
    parking_point2(_init),
    parking_point3(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uss_parking_type = 0l;
    }
  }

  explicit UssParkingInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    parking_point0(_alloc, _init),
    parking_point1(_alloc, _init),
    parking_point2(_alloc, _init),
    parking_point3(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uss_parking_type = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _uss_parking_type_type =
    int32_t;
  _uss_parking_type_type uss_parking_type;
  using _parking_point0_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _parking_point0_type parking_point0;
  using _parking_point1_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _parking_point1_type parking_point1;
  using _parking_point2_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _parking_point2_type parking_point2;
  using _parking_point3_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _parking_point3_type parking_point3;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__uss_parking_type(
    const int32_t & _arg)
  {
    this->uss_parking_type = _arg;
    return *this;
  }
  Type & set__parking_point0(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->parking_point0 = _arg;
    return *this;
  }
  Type & set__parking_point1(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->parking_point1 = _arg;
    return *this;
  }
  Type & set__parking_point2(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->parking_point2 = _arg;
    return *this;
  }
  Type & set__parking_point3(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->parking_point3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::UssParkingInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::UssParkingInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::UssParkingInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::UssParkingInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::UssParkingInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::UssParkingInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::UssParkingInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::UssParkingInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::UssParkingInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::UssParkingInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__UssParkingInfo
    std::shared_ptr<ros2_interface::msg::UssParkingInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__UssParkingInfo
    std::shared_ptr<ros2_interface::msg::UssParkingInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UssParkingInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->uss_parking_type != other.uss_parking_type) {
      return false;
    }
    if (this->parking_point0 != other.parking_point0) {
      return false;
    }
    if (this->parking_point1 != other.parking_point1) {
      return false;
    }
    if (this->parking_point2 != other.parking_point2) {
      return false;
    }
    if (this->parking_point3 != other.parking_point3) {
      return false;
    }
    return true;
  }
  bool operator!=(const UssParkingInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UssParkingInfo_

// alias to use template instance with default allocator
using UssParkingInfo =
  ros2_interface::msg::UssParkingInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__STRUCT_HPP_

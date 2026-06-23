// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/WLConstraintInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO__STRUCT_HPP_

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
// Member 'vehicle_point1'
// Member 'vehicle_point2'
// Member 'abs_point1'
// Member 'abs_point2'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__WLConstraintInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__WLConstraintInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WLConstraintInfo_
{
  using Type = WLConstraintInfo_<ContainerAllocator>;

  explicit WLConstraintInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    vehicle_point1(_init),
    vehicle_point2(_init),
    abs_point1(_init),
    abs_point2(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit WLConstraintInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    vehicle_point1(_alloc, _init),
    vehicle_point2(_alloc, _init),
    abs_point1(_alloc, _init),
    abs_point2(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    int32_t;
  _id_type id;
  using _vehicle_point1_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _vehicle_point1_type vehicle_point1;
  using _vehicle_point2_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _vehicle_point2_type vehicle_point2;
  using _abs_point1_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _abs_point1_type abs_point1;
  using _abs_point2_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _abs_point2_type abs_point2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__vehicle_point1(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->vehicle_point1 = _arg;
    return *this;
  }
  Type & set__vehicle_point2(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->vehicle_point2 = _arg;
    return *this;
  }
  Type & set__abs_point1(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->abs_point1 = _arg;
    return *this;
  }
  Type & set__abs_point2(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->abs_point2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::WLConstraintInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::WLConstraintInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::WLConstraintInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::WLConstraintInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::WLConstraintInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::WLConstraintInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::WLConstraintInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::WLConstraintInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::WLConstraintInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::WLConstraintInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__WLConstraintInfo
    std::shared_ptr<ros2_interface::msg::WLConstraintInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__WLConstraintInfo
    std::shared_ptr<ros2_interface::msg::WLConstraintInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WLConstraintInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->vehicle_point1 != other.vehicle_point1) {
      return false;
    }
    if (this->vehicle_point2 != other.vehicle_point2) {
      return false;
    }
    if (this->abs_point1 != other.abs_point1) {
      return false;
    }
    if (this->abs_point2 != other.abs_point2) {
      return false;
    }
    return true;
  }
  bool operator!=(const WLConstraintInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WLConstraintInfo_

// alias to use template instance with default allocator
using WLConstraintInfo =
  ros2_interface::msg::WLConstraintInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/FreeSpace.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FREE_SPACE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__FREE_SPACE__STRUCT_HPP_

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
// Member 'freespace_region'
#include "ros2_interface/msg/detail/polygon2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__FreeSpace __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__FreeSpace __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FreeSpace_
{
  using Type = FreeSpace_<ContainerAllocator>;

  explicit FreeSpace_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0l;
      this->error_code = 0l;
      this->is_valid = false;
    }
  }

  explicit FreeSpace_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0l;
      this->error_code = 0l;
      this->is_valid = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_id_type =
    int32_t;
  _sensor_id_type sensor_id;
  using _freespace_region_type =
    std::vector<ros2_interface::msg::Polygon2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Polygon2D_<ContainerAllocator>>>;
  _freespace_region_type freespace_region;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const int32_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__freespace_region(
    const std::vector<ros2_interface::msg::Polygon2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Polygon2D_<ContainerAllocator>>> & _arg)
  {
    this->freespace_region = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::FreeSpace_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::FreeSpace_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::FreeSpace_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::FreeSpace_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::FreeSpace_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::FreeSpace_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::FreeSpace_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::FreeSpace_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::FreeSpace_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::FreeSpace_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__FreeSpace
    std::shared_ptr<ros2_interface::msg::FreeSpace_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__FreeSpace
    std::shared_ptr<ros2_interface::msg::FreeSpace_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FreeSpace_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->freespace_region != other.freespace_region) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const FreeSpace_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FreeSpace_

// alias to use template instance with default allocator
using FreeSpace =
  ros2_interface::msg::FreeSpace_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__FREE_SPACE__STRUCT_HPP_

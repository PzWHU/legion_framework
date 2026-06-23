// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Grid.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GRID__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GRID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sl_point'
#include "ros2_interface/msg/detail/sl_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Grid __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Grid __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Grid_
{
  using Type = Grid_<ContainerAllocator>;

  explicit Grid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sl_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->potential = 0.0;
      this->region_id = 0l;
    }
  }

  explicit Grid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sl_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->potential = 0.0;
      this->region_id = 0l;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _sl_point_type =
    ros2_interface::msg::SLPoint_<ContainerAllocator>;
  _sl_point_type sl_point;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _potential_type =
    double;
  _potential_type potential;
  using _region_id_type =
    int32_t;
  _region_id_type region_id;

  // setters for named parameter idiom
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
  Type & set__sl_point(
    const ros2_interface::msg::SLPoint_<ContainerAllocator> & _arg)
  {
    this->sl_point = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__potential(
    const double & _arg)
  {
    this->potential = _arg;
    return *this;
  }
  Type & set__region_id(
    const int32_t & _arg)
  {
    this->region_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Grid_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Grid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Grid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Grid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Grid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Grid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Grid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Grid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Grid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Grid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Grid
    std::shared_ptr<ros2_interface::msg::Grid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Grid
    std::shared_ptr<ros2_interface::msg::Grid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Grid_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->sl_point != other.sl_point) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->potential != other.potential) {
      return false;
    }
    if (this->region_id != other.region_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Grid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Grid_

// alias to use template instance with default allocator
using Grid =
  ros2_interface::msg::Grid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GRID__STRUCT_HPP_

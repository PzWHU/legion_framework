// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/BBox2D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__B_BOX2_D__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__B_BOX2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__BBox2D __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__BBox2D __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BBox2D_
{
  using Type = BBox2D_<ContainerAllocator>;

  explicit BBox2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xmin = 0;
      this->ymin = 0;
      this->xmax = 0;
      this->ymax = 0;
    }
  }

  explicit BBox2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xmin = 0;
      this->ymin = 0;
      this->xmax = 0;
      this->ymax = 0;
    }
  }

  // field types and members
  using _xmin_type =
    int16_t;
  _xmin_type xmin;
  using _ymin_type =
    int16_t;
  _ymin_type ymin;
  using _xmax_type =
    int16_t;
  _xmax_type xmax;
  using _ymax_type =
    int16_t;
  _ymax_type ymax;

  // setters for named parameter idiom
  Type & set__xmin(
    const int16_t & _arg)
  {
    this->xmin = _arg;
    return *this;
  }
  Type & set__ymin(
    const int16_t & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__xmax(
    const int16_t & _arg)
  {
    this->xmax = _arg;
    return *this;
  }
  Type & set__ymax(
    const int16_t & _arg)
  {
    this->ymax = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::BBox2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::BBox2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::BBox2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::BBox2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::BBox2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::BBox2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::BBox2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::BBox2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::BBox2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::BBox2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__BBox2D
    std::shared_ptr<ros2_interface::msg::BBox2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__BBox2D
    std::shared_ptr<ros2_interface::msg::BBox2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BBox2D_ & other) const
  {
    if (this->xmin != other.xmin) {
      return false;
    }
    if (this->ymin != other.ymin) {
      return false;
    }
    if (this->xmax != other.xmax) {
      return false;
    }
    if (this->ymax != other.ymax) {
      return false;
    }
    return true;
  }
  bool operator!=(const BBox2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BBox2D_

// alias to use template instance with default allocator
using BBox2D =
  ros2_interface::msg::BBox2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__B_BOX2_D__STRUCT_HPP_

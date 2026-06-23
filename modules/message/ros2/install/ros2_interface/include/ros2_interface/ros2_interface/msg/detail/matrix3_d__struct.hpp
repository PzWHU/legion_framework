// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Matrix3D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Matrix3D __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Matrix3D __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Matrix3D_
{
  using Type = Matrix3D_<ContainerAllocator>;

  explicit Matrix3D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a00 = 0.0;
      this->a01 = 0.0;
      this->a02 = 0.0;
      this->a10 = 0.0;
      this->a11 = 0.0;
      this->a12 = 0.0;
      this->a20 = 0.0;
      this->a21 = 0.0;
      this->a22 = 0.0;
    }
  }

  explicit Matrix3D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a00 = 0.0;
      this->a01 = 0.0;
      this->a02 = 0.0;
      this->a10 = 0.0;
      this->a11 = 0.0;
      this->a12 = 0.0;
      this->a20 = 0.0;
      this->a21 = 0.0;
      this->a22 = 0.0;
    }
  }

  // field types and members
  using _a00_type =
    double;
  _a00_type a00;
  using _a01_type =
    double;
  _a01_type a01;
  using _a02_type =
    double;
  _a02_type a02;
  using _a10_type =
    double;
  _a10_type a10;
  using _a11_type =
    double;
  _a11_type a11;
  using _a12_type =
    double;
  _a12_type a12;
  using _a20_type =
    double;
  _a20_type a20;
  using _a21_type =
    double;
  _a21_type a21;
  using _a22_type =
    double;
  _a22_type a22;

  // setters for named parameter idiom
  Type & set__a00(
    const double & _arg)
  {
    this->a00 = _arg;
    return *this;
  }
  Type & set__a01(
    const double & _arg)
  {
    this->a01 = _arg;
    return *this;
  }
  Type & set__a02(
    const double & _arg)
  {
    this->a02 = _arg;
    return *this;
  }
  Type & set__a10(
    const double & _arg)
  {
    this->a10 = _arg;
    return *this;
  }
  Type & set__a11(
    const double & _arg)
  {
    this->a11 = _arg;
    return *this;
  }
  Type & set__a12(
    const double & _arg)
  {
    this->a12 = _arg;
    return *this;
  }
  Type & set__a20(
    const double & _arg)
  {
    this->a20 = _arg;
    return *this;
  }
  Type & set__a21(
    const double & _arg)
  {
    this->a21 = _arg;
    return *this;
  }
  Type & set__a22(
    const double & _arg)
  {
    this->a22 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Matrix3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Matrix3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Matrix3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Matrix3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Matrix3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Matrix3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Matrix3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Matrix3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Matrix3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Matrix3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Matrix3D
    std::shared_ptr<ros2_interface::msg::Matrix3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Matrix3D
    std::shared_ptr<ros2_interface::msg::Matrix3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Matrix3D_ & other) const
  {
    if (this->a00 != other.a00) {
      return false;
    }
    if (this->a01 != other.a01) {
      return false;
    }
    if (this->a02 != other.a02) {
      return false;
    }
    if (this->a10 != other.a10) {
      return false;
    }
    if (this->a11 != other.a11) {
      return false;
    }
    if (this->a12 != other.a12) {
      return false;
    }
    if (this->a20 != other.a20) {
      return false;
    }
    if (this->a21 != other.a21) {
      return false;
    }
    if (this->a22 != other.a22) {
      return false;
    }
    return true;
  }
  bool operator!=(const Matrix3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Matrix3D_

// alias to use template instance with default allocator
using Matrix3D =
  ros2_interface::msg::Matrix3D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__STRUCT_HPP_

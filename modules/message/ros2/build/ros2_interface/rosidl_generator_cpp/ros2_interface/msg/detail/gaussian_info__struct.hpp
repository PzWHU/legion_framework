// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/GaussianInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__GaussianInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__GaussianInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GaussianInfo_
{
  using Type = GaussianInfo_<ContainerAllocator>;

  explicit GaussianInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sigma_x = 0.0;
      this->sigma_y = 0.0;
      this->correlation = 0.0;
      this->area_probability = 0.0;
      this->ellipse_a = 0.0;
      this->ellipse_b = 0.0;
      this->theta_a = 0.0;
    }
  }

  explicit GaussianInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sigma_x = 0.0;
      this->sigma_y = 0.0;
      this->correlation = 0.0;
      this->area_probability = 0.0;
      this->ellipse_a = 0.0;
      this->ellipse_b = 0.0;
      this->theta_a = 0.0;
    }
  }

  // field types and members
  using _sigma_x_type =
    double;
  _sigma_x_type sigma_x;
  using _sigma_y_type =
    double;
  _sigma_y_type sigma_y;
  using _correlation_type =
    double;
  _correlation_type correlation;
  using _area_probability_type =
    double;
  _area_probability_type area_probability;
  using _ellipse_a_type =
    double;
  _ellipse_a_type ellipse_a;
  using _ellipse_b_type =
    double;
  _ellipse_b_type ellipse_b;
  using _theta_a_type =
    double;
  _theta_a_type theta_a;

  // setters for named parameter idiom
  Type & set__sigma_x(
    const double & _arg)
  {
    this->sigma_x = _arg;
    return *this;
  }
  Type & set__sigma_y(
    const double & _arg)
  {
    this->sigma_y = _arg;
    return *this;
  }
  Type & set__correlation(
    const double & _arg)
  {
    this->correlation = _arg;
    return *this;
  }
  Type & set__area_probability(
    const double & _arg)
  {
    this->area_probability = _arg;
    return *this;
  }
  Type & set__ellipse_a(
    const double & _arg)
  {
    this->ellipse_a = _arg;
    return *this;
  }
  Type & set__ellipse_b(
    const double & _arg)
  {
    this->ellipse_b = _arg;
    return *this;
  }
  Type & set__theta_a(
    const double & _arg)
  {
    this->theta_a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::GaussianInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::GaussianInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::GaussianInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::GaussianInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::GaussianInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::GaussianInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::GaussianInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::GaussianInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::GaussianInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::GaussianInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__GaussianInfo
    std::shared_ptr<ros2_interface::msg::GaussianInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__GaussianInfo
    std::shared_ptr<ros2_interface::msg::GaussianInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GaussianInfo_ & other) const
  {
    if (this->sigma_x != other.sigma_x) {
      return false;
    }
    if (this->sigma_y != other.sigma_y) {
      return false;
    }
    if (this->correlation != other.correlation) {
      return false;
    }
    if (this->area_probability != other.area_probability) {
      return false;
    }
    if (this->ellipse_a != other.ellipse_a) {
      return false;
    }
    if (this->ellipse_b != other.ellipse_b) {
      return false;
    }
    if (this->theta_a != other.theta_a) {
      return false;
    }
    return true;
  }
  bool operator!=(const GaussianInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GaussianInfo_

// alias to use template instance with default allocator
using GaussianInfo =
  ros2_interface::msg::GaussianInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GAUSSIAN_INFO__STRUCT_HPP_

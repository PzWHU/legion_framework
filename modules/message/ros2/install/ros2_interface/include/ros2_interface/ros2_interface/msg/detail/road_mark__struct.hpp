// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RoadMark.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RoadMark __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RoadMark __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadMark_
{
  using Type = RoadMark_<ContainerAllocator>;

  explicit RoadMark_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude_dist = 0.0;
      this->lateral_dist = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->confidence = 0.0;
      this->type = 0l;
    }
  }

  explicit RoadMark_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude_dist = 0.0;
      this->lateral_dist = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->confidence = 0.0;
      this->type = 0l;
    }
  }

  // field types and members
  using _longitude_dist_type =
    double;
  _longitude_dist_type longitude_dist;
  using _lateral_dist_type =
    double;
  _lateral_dist_type lateral_dist;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _type_type =
    int32_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__longitude_dist(
    const double & _arg)
  {
    this->longitude_dist = _arg;
    return *this;
  }
  Type & set__lateral_dist(
    const double & _arg)
  {
    this->lateral_dist = _arg;
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
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RoadMark_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RoadMark_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RoadMark_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RoadMark_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RoadMark_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RoadMark_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RoadMark_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RoadMark_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RoadMark_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RoadMark_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RoadMark
    std::shared_ptr<ros2_interface::msg::RoadMark_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RoadMark
    std::shared_ptr<ros2_interface::msg::RoadMark_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadMark_ & other) const
  {
    if (this->longitude_dist != other.longitude_dist) {
      return false;
    }
    if (this->lateral_dist != other.lateral_dist) {
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
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadMark_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadMark_

// alias to use template instance with default allocator
using RoadMark =
  ros2_interface::msg::RoadMark_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__STRUCT_HPP_

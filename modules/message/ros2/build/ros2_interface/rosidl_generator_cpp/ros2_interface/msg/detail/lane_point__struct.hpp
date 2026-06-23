// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/LanePoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__LanePoint __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__LanePoint __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LanePoint_
{
  using Type = LanePoint_<ContainerAllocator>;

  explicit LanePoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
      this->mileage = 0.0;
      this->limit_speed = 0.0;
      this->left_road_width = 0.0;
      this->right_road_width = 0.0;
      this->left_line_type = 0l;
      this->right_line_type = 0l;
    }
  }

  explicit LanePoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
      this->mileage = 0.0;
      this->limit_speed = 0.0;
      this->left_road_width = 0.0;
      this->right_road_width = 0.0;
      this->left_line_type = 0l;
      this->right_line_type = 0l;
    }
  }

  // field types and members
  using _point_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _point_type point;
  using _theta_type =
    double;
  _theta_type theta;
  using _mileage_type =
    double;
  _mileage_type mileage;
  using _limit_speed_type =
    double;
  _limit_speed_type limit_speed;
  using _left_road_width_type =
    double;
  _left_road_width_type left_road_width;
  using _right_road_width_type =
    double;
  _right_road_width_type right_road_width;
  using _left_line_type_type =
    int32_t;
  _left_line_type_type left_line_type;
  using _right_line_type_type =
    int32_t;
  _right_line_type_type right_line_type;

  // setters for named parameter idiom
  Type & set__point(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__mileage(
    const double & _arg)
  {
    this->mileage = _arg;
    return *this;
  }
  Type & set__limit_speed(
    const double & _arg)
  {
    this->limit_speed = _arg;
    return *this;
  }
  Type & set__left_road_width(
    const double & _arg)
  {
    this->left_road_width = _arg;
    return *this;
  }
  Type & set__right_road_width(
    const double & _arg)
  {
    this->right_road_width = _arg;
    return *this;
  }
  Type & set__left_line_type(
    const int32_t & _arg)
  {
    this->left_line_type = _arg;
    return *this;
  }
  Type & set__right_line_type(
    const int32_t & _arg)
  {
    this->right_line_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::LanePoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::LanePoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::LanePoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::LanePoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LanePoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LanePoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LanePoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LanePoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::LanePoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::LanePoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__LanePoint
    std::shared_ptr<ros2_interface::msg::LanePoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__LanePoint
    std::shared_ptr<ros2_interface::msg::LanePoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LanePoint_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->mileage != other.mileage) {
      return false;
    }
    if (this->limit_speed != other.limit_speed) {
      return false;
    }
    if (this->left_road_width != other.left_road_width) {
      return false;
    }
    if (this->right_road_width != other.right_road_width) {
      return false;
    }
    if (this->left_line_type != other.left_line_type) {
      return false;
    }
    if (this->right_line_type != other.right_line_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const LanePoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LanePoint_

// alias to use template instance with default allocator
using LanePoint =
  ros2_interface::msg::LanePoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__STRUCT_HPP_

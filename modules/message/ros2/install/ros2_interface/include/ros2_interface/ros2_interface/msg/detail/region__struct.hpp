// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Region.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__REGION__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__REGION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'region_polygon'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Region __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Region __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Region_
{
  using Type = Region_<ContainerAllocator>;

  explicit Region_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name_region = 0l;
      this->score = 0.0;
      this->rank_risk = 0l;
    }
  }

  explicit Region_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name_region = 0l;
      this->score = 0.0;
      this->rank_risk = 0l;
    }
  }

  // field types and members
  using _name_region_type =
    int32_t;
  _name_region_type name_region;
  using _score_type =
    double;
  _score_type score;
  using _rank_risk_type =
    int32_t;
  _rank_risk_type rank_risk;
  using _region_polygon_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _region_polygon_type region_polygon;

  // setters for named parameter idiom
  Type & set__name_region(
    const int32_t & _arg)
  {
    this->name_region = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__rank_risk(
    const int32_t & _arg)
  {
    this->rank_risk = _arg;
    return *this;
  }
  Type & set__region_polygon(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->region_polygon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Region_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Region_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Region_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Region_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Region_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Region_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Region_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Region_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Region_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Region_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Region
    std::shared_ptr<ros2_interface::msg::Region_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Region
    std::shared_ptr<ros2_interface::msg::Region_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Region_ & other) const
  {
    if (this->name_region != other.name_region) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->rank_risk != other.rank_risk) {
      return false;
    }
    if (this->region_polygon != other.region_polygon) {
      return false;
    }
    return true;
  }
  bool operator!=(const Region_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Region_

// alias to use template instance with default allocator
using Region =
  ros2_interface::msg::Region_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__REGION__STRUCT_HPP_

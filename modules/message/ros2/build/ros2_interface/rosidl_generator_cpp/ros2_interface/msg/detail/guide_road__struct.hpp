// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/GuideRoad.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'curvature'
#include "ros2_interface/msg/detail/curvature_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__GuideRoad __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__GuideRoad __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GuideRoad_
{
  using Type = GuideRoad_<ContainerAllocator>;

  explicit GuideRoad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_id = 0ll;
      this->road_type = 0;
      this->turn_type = 0;
      this->avg_curvature = 0.0;
      this->curvature_size = 0l;
    }
  }

  explicit GuideRoad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_id = 0ll;
      this->road_type = 0;
      this->turn_type = 0;
      this->avg_curvature = 0.0;
      this->curvature_size = 0l;
    }
  }

  // field types and members
  using _road_id_type =
    int64_t;
  _road_id_type road_id;
  using _road_type_type =
    int8_t;
  _road_type_type road_type;
  using _turn_type_type =
    int8_t;
  _turn_type_type turn_type;
  using _avg_curvature_type =
    double;
  _avg_curvature_type avg_curvature;
  using _curvature_size_type =
    int32_t;
  _curvature_size_type curvature_size;
  using _curvature_type =
    std::vector<ros2_interface::msg::CurvatureInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::CurvatureInfo_<ContainerAllocator>>>;
  _curvature_type curvature;

  // setters for named parameter idiom
  Type & set__road_id(
    const int64_t & _arg)
  {
    this->road_id = _arg;
    return *this;
  }
  Type & set__road_type(
    const int8_t & _arg)
  {
    this->road_type = _arg;
    return *this;
  }
  Type & set__turn_type(
    const int8_t & _arg)
  {
    this->turn_type = _arg;
    return *this;
  }
  Type & set__avg_curvature(
    const double & _arg)
  {
    this->avg_curvature = _arg;
    return *this;
  }
  Type & set__curvature_size(
    const int32_t & _arg)
  {
    this->curvature_size = _arg;
    return *this;
  }
  Type & set__curvature(
    const std::vector<ros2_interface::msg::CurvatureInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::CurvatureInfo_<ContainerAllocator>>> & _arg)
  {
    this->curvature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::GuideRoad_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::GuideRoad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::GuideRoad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::GuideRoad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::GuideRoad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::GuideRoad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::GuideRoad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::GuideRoad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::GuideRoad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::GuideRoad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__GuideRoad
    std::shared_ptr<ros2_interface::msg::GuideRoad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__GuideRoad
    std::shared_ptr<ros2_interface::msg::GuideRoad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GuideRoad_ & other) const
  {
    if (this->road_id != other.road_id) {
      return false;
    }
    if (this->road_type != other.road_type) {
      return false;
    }
    if (this->turn_type != other.turn_type) {
      return false;
    }
    if (this->avg_curvature != other.avg_curvature) {
      return false;
    }
    if (this->curvature_size != other.curvature_size) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    return true;
  }
  bool operator!=(const GuideRoad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GuideRoad_

// alias to use template instance with default allocator
using GuideRoad =
  ros2_interface::msg::GuideRoad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__STRUCT_HPP_

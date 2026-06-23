// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/HolisticPathPrediction.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'hpp'
#include "ros2_interface/msg/detail/lane_line_cubic_curve__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__HolisticPathPrediction __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__HolisticPathPrediction __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HolisticPathPrediction_
{
  using Type = HolisticPathPrediction_<ContainerAllocator>;

  explicit HolisticPathPrediction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hpp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_source = 0l;
      this->ego_lane_width = 0.0;
      this->confidence = 0.0;
    }
  }

  explicit HolisticPathPrediction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hpp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_source = 0l;
      this->ego_lane_width = 0.0;
      this->confidence = 0.0;
    }
  }

  // field types and members
  using _hpp_type =
    ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator>;
  _hpp_type hpp;
  using _planning_source_type =
    int32_t;
  _planning_source_type planning_source;
  using _ego_lane_width_type =
    double;
  _ego_lane_width_type ego_lane_width;
  using _confidence_type =
    double;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__hpp(
    const ros2_interface::msg::LaneLineCubicCurve_<ContainerAllocator> & _arg)
  {
    this->hpp = _arg;
    return *this;
  }
  Type & set__planning_source(
    const int32_t & _arg)
  {
    this->planning_source = _arg;
    return *this;
  }
  Type & set__ego_lane_width(
    const double & _arg)
  {
    this->ego_lane_width = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__HolisticPathPrediction
    std::shared_ptr<ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__HolisticPathPrediction
    std::shared_ptr<ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HolisticPathPrediction_ & other) const
  {
    if (this->hpp != other.hpp) {
      return false;
    }
    if (this->planning_source != other.planning_source) {
      return false;
    }
    if (this->ego_lane_width != other.ego_lane_width) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const HolisticPathPrediction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HolisticPathPrediction_

// alias to use template instance with default allocator
using HolisticPathPrediction =
  ros2_interface::msg::HolisticPathPrediction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__STRUCT_HPP_

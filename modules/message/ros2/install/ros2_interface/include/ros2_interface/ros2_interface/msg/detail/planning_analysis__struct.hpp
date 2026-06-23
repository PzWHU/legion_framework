// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/PlanningAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__STRUCT_HPP_

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
// Member 'evaluator_time'
#include "ros2_interface/msg/detail/time_consume__struct.hpp"
// Member 'planning_parking_debug'
#include "ros2_interface/msg/detail/planning_parking_debug__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__PlanningAnalysis __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__PlanningAnalysis __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningAnalysis_
{
  using Type = PlanningAnalysis_<ContainerAllocator>;

  explicit PlanningAnalysis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    planning_parking_debug(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_update_time = 0.0;
      this->generator_time = 0.0;
      this->selector_time = 0.0;
      this->dis_to_center_line = 0.0;
      this->diff_to_velocity = 0.0;
      this->referencline_kappa = 0.0;
    }
  }

  explicit PlanningAnalysis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    planning_parking_debug(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_update_time = 0.0;
      this->generator_time = 0.0;
      this->selector_time = 0.0;
      this->dis_to_center_line = 0.0;
      this->diff_to_velocity = 0.0;
      this->referencline_kappa = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frame_update_time_type =
    double;
  _frame_update_time_type frame_update_time;
  using _generator_time_type =
    double;
  _generator_time_type generator_time;
  using _evaluator_time_type =
    std::vector<ros2_interface::msg::TimeConsume_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TimeConsume_<ContainerAllocator>>>;
  _evaluator_time_type evaluator_time;
  using _selector_time_type =
    double;
  _selector_time_type selector_time;
  using _planning_parking_debug_type =
    ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator>;
  _planning_parking_debug_type planning_parking_debug;
  using _dis_to_center_line_type =
    double;
  _dis_to_center_line_type dis_to_center_line;
  using _diff_to_velocity_type =
    double;
  _diff_to_velocity_type diff_to_velocity;
  using _referencline_kappa_type =
    double;
  _referencline_kappa_type referencline_kappa;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__frame_update_time(
    const double & _arg)
  {
    this->frame_update_time = _arg;
    return *this;
  }
  Type & set__generator_time(
    const double & _arg)
  {
    this->generator_time = _arg;
    return *this;
  }
  Type & set__evaluator_time(
    const std::vector<ros2_interface::msg::TimeConsume_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TimeConsume_<ContainerAllocator>>> & _arg)
  {
    this->evaluator_time = _arg;
    return *this;
  }
  Type & set__selector_time(
    const double & _arg)
  {
    this->selector_time = _arg;
    return *this;
  }
  Type & set__planning_parking_debug(
    const ros2_interface::msg::PlanningParkingDebug_<ContainerAllocator> & _arg)
  {
    this->planning_parking_debug = _arg;
    return *this;
  }
  Type & set__dis_to_center_line(
    const double & _arg)
  {
    this->dis_to_center_line = _arg;
    return *this;
  }
  Type & set__diff_to_velocity(
    const double & _arg)
  {
    this->diff_to_velocity = _arg;
    return *this;
  }
  Type & set__referencline_kappa(
    const double & _arg)
  {
    this->referencline_kappa = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::PlanningAnalysis_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::PlanningAnalysis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::PlanningAnalysis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::PlanningAnalysis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PlanningAnalysis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PlanningAnalysis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PlanningAnalysis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PlanningAnalysis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::PlanningAnalysis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::PlanningAnalysis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__PlanningAnalysis
    std::shared_ptr<ros2_interface::msg::PlanningAnalysis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__PlanningAnalysis
    std::shared_ptr<ros2_interface::msg::PlanningAnalysis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningAnalysis_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frame_update_time != other.frame_update_time) {
      return false;
    }
    if (this->generator_time != other.generator_time) {
      return false;
    }
    if (this->evaluator_time != other.evaluator_time) {
      return false;
    }
    if (this->selector_time != other.selector_time) {
      return false;
    }
    if (this->planning_parking_debug != other.planning_parking_debug) {
      return false;
    }
    if (this->dis_to_center_line != other.dis_to_center_line) {
      return false;
    }
    if (this->diff_to_velocity != other.diff_to_velocity) {
      return false;
    }
    if (this->referencline_kappa != other.referencline_kappa) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningAnalysis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningAnalysis_

// alias to use template instance with default allocator
using PlanningAnalysis =
  ros2_interface::msg::PlanningAnalysis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lane_points'
#include "ros2_interface/msg/detail/lane_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__LaneInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__LaneInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneInfo_
{
  using Type = LaneInfo_<ContainerAllocator>;

  explicit LaneInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0;
      this->global_id = 0;
      this->predecessor_id = 0;
      this->successor_id = 0;
      this->left_neighbor_id = 0;
      this->right_neighbor_id = 0;
      this->type = 0;
    }
  }

  explicit LaneInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0;
      this->global_id = 0;
      this->predecessor_id = 0;
      this->successor_id = 0;
      this->left_neighbor_id = 0;
      this->right_neighbor_id = 0;
      this->type = 0;
    }
  }

  // field types and members
  using _priority_type =
    int8_t;
  _priority_type priority;
  using _global_id_type =
    int8_t;
  _global_id_type global_id;
  using _predecessor_id_type =
    int8_t;
  _predecessor_id_type predecessor_id;
  using _successor_id_type =
    int8_t;
  _successor_id_type successor_id;
  using _left_neighbor_id_type =
    int8_t;
  _left_neighbor_id_type left_neighbor_id;
  using _right_neighbor_id_type =
    int8_t;
  _right_neighbor_id_type right_neighbor_id;
  using _type_type =
    int8_t;
  _type_type type;
  using _lane_points_type =
    std::vector<ros2_interface::msg::LanePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LanePoint_<ContainerAllocator>>>;
  _lane_points_type lane_points;

  // setters for named parameter idiom
  Type & set__priority(
    const int8_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__global_id(
    const int8_t & _arg)
  {
    this->global_id = _arg;
    return *this;
  }
  Type & set__predecessor_id(
    const int8_t & _arg)
  {
    this->predecessor_id = _arg;
    return *this;
  }
  Type & set__successor_id(
    const int8_t & _arg)
  {
    this->successor_id = _arg;
    return *this;
  }
  Type & set__left_neighbor_id(
    const int8_t & _arg)
  {
    this->left_neighbor_id = _arg;
    return *this;
  }
  Type & set__right_neighbor_id(
    const int8_t & _arg)
  {
    this->right_neighbor_id = _arg;
    return *this;
  }
  Type & set__type(
    const int8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__lane_points(
    const std::vector<ros2_interface::msg::LanePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LanePoint_<ContainerAllocator>>> & _arg)
  {
    this->lane_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::LaneInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::LaneInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__LaneInfo
    std::shared_ptr<ros2_interface::msg::LaneInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__LaneInfo
    std::shared_ptr<ros2_interface::msg::LaneInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneInfo_ & other) const
  {
    if (this->priority != other.priority) {
      return false;
    }
    if (this->global_id != other.global_id) {
      return false;
    }
    if (this->predecessor_id != other.predecessor_id) {
      return false;
    }
    if (this->successor_id != other.successor_id) {
      return false;
    }
    if (this->left_neighbor_id != other.left_neighbor_id) {
      return false;
    }
    if (this->right_neighbor_id != other.right_neighbor_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->lane_points != other.lane_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneInfo_

// alias to use template instance with default allocator
using LaneInfo =
  ros2_interface::msg::LaneInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_INFO__STRUCT_HPP_

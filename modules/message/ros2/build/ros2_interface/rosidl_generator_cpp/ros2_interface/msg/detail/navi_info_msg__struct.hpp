// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/NaviInfoMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__NaviInfoMsg __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__NaviInfoMsg __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NaviInfoMsg_
{
  using Type = NaviInfoMsg_<ContainerAllocator>;

  explicit NaviInfoMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_type = 0ul;
      this->lane_count = 0ul;
      this->lane_index = 0ul;
      this->lane_target = 0ul;
      this->road_speed = 0.0f;
      this->turning_speed = 0.0f;
      this->turning_deriction = 0.0f;
      this->distance_to_cross = 0.0f;
      this->traffic_light_stop = false;
      this->crossing_behavior = 0ul;
      this->distance_to_stop = 0.0f;
    }
  }

  explicit NaviInfoMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_type = 0ul;
      this->lane_count = 0ul;
      this->lane_index = 0ul;
      this->lane_target = 0ul;
      this->road_speed = 0.0f;
      this->turning_speed = 0.0f;
      this->turning_deriction = 0.0f;
      this->distance_to_cross = 0.0f;
      this->traffic_light_stop = false;
      this->crossing_behavior = 0ul;
      this->distance_to_stop = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lane_type_type =
    uint32_t;
  _lane_type_type lane_type;
  using _lane_count_type =
    uint32_t;
  _lane_count_type lane_count;
  using _lane_index_type =
    uint32_t;
  _lane_index_type lane_index;
  using _lane_target_type =
    uint32_t;
  _lane_target_type lane_target;
  using _road_speed_type =
    float;
  _road_speed_type road_speed;
  using _turning_speed_type =
    float;
  _turning_speed_type turning_speed;
  using _turning_deriction_type =
    float;
  _turning_deriction_type turning_deriction;
  using _distance_to_cross_type =
    float;
  _distance_to_cross_type distance_to_cross;
  using _traffic_light_stop_type =
    bool;
  _traffic_light_stop_type traffic_light_stop;
  using _crossing_behavior_type =
    uint32_t;
  _crossing_behavior_type crossing_behavior;
  using _distance_to_stop_type =
    float;
  _distance_to_stop_type distance_to_stop;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lane_type(
    const uint32_t & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__lane_count(
    const uint32_t & _arg)
  {
    this->lane_count = _arg;
    return *this;
  }
  Type & set__lane_index(
    const uint32_t & _arg)
  {
    this->lane_index = _arg;
    return *this;
  }
  Type & set__lane_target(
    const uint32_t & _arg)
  {
    this->lane_target = _arg;
    return *this;
  }
  Type & set__road_speed(
    const float & _arg)
  {
    this->road_speed = _arg;
    return *this;
  }
  Type & set__turning_speed(
    const float & _arg)
  {
    this->turning_speed = _arg;
    return *this;
  }
  Type & set__turning_deriction(
    const float & _arg)
  {
    this->turning_deriction = _arg;
    return *this;
  }
  Type & set__distance_to_cross(
    const float & _arg)
  {
    this->distance_to_cross = _arg;
    return *this;
  }
  Type & set__traffic_light_stop(
    const bool & _arg)
  {
    this->traffic_light_stop = _arg;
    return *this;
  }
  Type & set__crossing_behavior(
    const uint32_t & _arg)
  {
    this->crossing_behavior = _arg;
    return *this;
  }
  Type & set__distance_to_stop(
    const float & _arg)
  {
    this->distance_to_stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::NaviInfoMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::NaviInfoMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::NaviInfoMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::NaviInfoMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::NaviInfoMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::NaviInfoMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::NaviInfoMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::NaviInfoMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::NaviInfoMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::NaviInfoMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__NaviInfoMsg
    std::shared_ptr<ros2_interface::msg::NaviInfoMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__NaviInfoMsg
    std::shared_ptr<ros2_interface::msg::NaviInfoMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NaviInfoMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->lane_count != other.lane_count) {
      return false;
    }
    if (this->lane_index != other.lane_index) {
      return false;
    }
    if (this->lane_target != other.lane_target) {
      return false;
    }
    if (this->road_speed != other.road_speed) {
      return false;
    }
    if (this->turning_speed != other.turning_speed) {
      return false;
    }
    if (this->turning_deriction != other.turning_deriction) {
      return false;
    }
    if (this->distance_to_cross != other.distance_to_cross) {
      return false;
    }
    if (this->traffic_light_stop != other.traffic_light_stop) {
      return false;
    }
    if (this->crossing_behavior != other.crossing_behavior) {
      return false;
    }
    if (this->distance_to_stop != other.distance_to_stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const NaviInfoMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NaviInfoMsg_

// alias to use template instance with default allocator
using NaviInfoMsg =
  ros2_interface::msg::NaviInfoMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__NAVI_INFO_MSG__STRUCT_HPP_

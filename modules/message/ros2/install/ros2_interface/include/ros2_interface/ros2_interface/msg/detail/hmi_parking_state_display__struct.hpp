// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/HMIParkingStateDisplay.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_STATE_DISPLAY__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_STATE_DISPLAY__STRUCT_HPP_

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
# define DEPRECATED__ros2_interface__msg__HMIParkingStateDisplay __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__HMIParkingStateDisplay __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HMIParkingStateDisplay_
{
  using Type = HMIParkingStateDisplay_<ContainerAllocator>;

  explicit HMIParkingStateDisplay_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parking_type = 0l;
      this->moves_counter = 0l;
      this->remian_distance = 0.0;
      this->display_info = 0l;
      this->distance_to_leader_obj = 0.0;
      this->state = 0l;
    }
  }

  explicit HMIParkingStateDisplay_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parking_type = 0l;
      this->moves_counter = 0l;
      this->remian_distance = 0.0;
      this->display_info = 0l;
      this->distance_to_leader_obj = 0.0;
      this->state = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _parking_type_type =
    int32_t;
  _parking_type_type parking_type;
  using _moves_counter_type =
    int32_t;
  _moves_counter_type moves_counter;
  using _remian_distance_type =
    double;
  _remian_distance_type remian_distance;
  using _display_info_type =
    int32_t;
  _display_info_type display_info;
  using _distance_to_leader_obj_type =
    double;
  _distance_to_leader_obj_type distance_to_leader_obj;
  using _state_type =
    int32_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__parking_type(
    const int32_t & _arg)
  {
    this->parking_type = _arg;
    return *this;
  }
  Type & set__moves_counter(
    const int32_t & _arg)
  {
    this->moves_counter = _arg;
    return *this;
  }
  Type & set__remian_distance(
    const double & _arg)
  {
    this->remian_distance = _arg;
    return *this;
  }
  Type & set__display_info(
    const int32_t & _arg)
  {
    this->display_info = _arg;
    return *this;
  }
  Type & set__distance_to_leader_obj(
    const double & _arg)
  {
    this->distance_to_leader_obj = _arg;
    return *this;
  }
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__HMIParkingStateDisplay
    std::shared_ptr<ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__HMIParkingStateDisplay
    std::shared_ptr<ros2_interface::msg::HMIParkingStateDisplay_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HMIParkingStateDisplay_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->parking_type != other.parking_type) {
      return false;
    }
    if (this->moves_counter != other.moves_counter) {
      return false;
    }
    if (this->remian_distance != other.remian_distance) {
      return false;
    }
    if (this->display_info != other.display_info) {
      return false;
    }
    if (this->distance_to_leader_obj != other.distance_to_leader_obj) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const HMIParkingStateDisplay_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HMIParkingStateDisplay_

// alias to use template instance with default allocator
using HMIParkingStateDisplay =
  ros2_interface::msg::HMIParkingStateDisplay_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_STATE_DISPLAY__STRUCT_HPP_

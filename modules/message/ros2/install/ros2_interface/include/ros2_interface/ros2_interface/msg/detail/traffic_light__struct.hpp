// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'light_rect'
#include "ros2_interface/msg/detail/image_rect__struct.hpp"
// Member 'position'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"
// Member 'create_time'
#include "ros2_interface/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__TrafficLight __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__TrafficLight __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLight_
{
  using Type = TrafficLight_<ContainerAllocator>;

  explicit TrafficLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : light_rect(_init),
    position(_init),
    create_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0l;
      this->id = 0ul;
      this->type = 0l;
      this->confidence = 0.0;
      this->distance = 0.0;
      this->tracking_time = 0.0;
      this->blink = false;
      this->blinking_time = 0.0;
      this->remaining_time = 0.0;
    }
  }

  explicit TrafficLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : light_rect(_alloc, _init),
    position(_alloc, _init),
    create_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0l;
      this->id = 0ul;
      this->type = 0l;
      this->confidence = 0.0;
      this->distance = 0.0;
      this->tracking_time = 0.0;
      this->blink = false;
      this->blinking_time = 0.0;
      this->remaining_time = 0.0;
    }
  }

  // field types and members
  using _color_type =
    int32_t;
  _color_type color;
  using _id_type =
    uint32_t;
  _id_type id;
  using _type_type =
    int32_t;
  _type_type type;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _light_rect_type =
    ros2_interface::msg::ImageRect_<ContainerAllocator>;
  _light_rect_type light_rect;
  using _position_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _position_type position;
  using _distance_type =
    double;
  _distance_type distance;
  using _light_lanes_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _light_lanes_type light_lanes;
  using _tracking_time_type =
    double;
  _tracking_time_type tracking_time;
  using _blink_type =
    bool;
  _blink_type blink;
  using _blinking_time_type =
    double;
  _blinking_time_type blinking_time;
  using _remaining_time_type =
    double;
  _remaining_time_type remaining_time;
  using _create_time_type =
    ros2_interface::msg::Time_<ContainerAllocator>;
  _create_time_type create_time;

  // setters for named parameter idiom
  Type & set__color(
    const int32_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__light_rect(
    const ros2_interface::msg::ImageRect_<ContainerAllocator> & _arg)
  {
    this->light_rect = _arg;
    return *this;
  }
  Type & set__position(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__light_lanes(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->light_lanes = _arg;
    return *this;
  }
  Type & set__tracking_time(
    const double & _arg)
  {
    this->tracking_time = _arg;
    return *this;
  }
  Type & set__blink(
    const bool & _arg)
  {
    this->blink = _arg;
    return *this;
  }
  Type & set__blinking_time(
    const double & _arg)
  {
    this->blinking_time = _arg;
    return *this;
  }
  Type & set__remaining_time(
    const double & _arg)
  {
    this->remaining_time = _arg;
    return *this;
  }
  Type & set__create_time(
    const ros2_interface::msg::Time_<ContainerAllocator> & _arg)
  {
    this->create_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::TrafficLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::TrafficLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::TrafficLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::TrafficLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrafficLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrafficLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrafficLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrafficLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::TrafficLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::TrafficLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__TrafficLight
    std::shared_ptr<ros2_interface::msg::TrafficLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__TrafficLight
    std::shared_ptr<ros2_interface::msg::TrafficLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLight_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->light_rect != other.light_rect) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->light_lanes != other.light_lanes) {
      return false;
    }
    if (this->tracking_time != other.tracking_time) {
      return false;
    }
    if (this->blink != other.blink) {
      return false;
    }
    if (this->blinking_time != other.blinking_time) {
      return false;
    }
    if (this->remaining_time != other.remaining_time) {
      return false;
    }
    if (this->create_time != other.create_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLight_

// alias to use template instance with default allocator
using TrafficLight =
  ros2_interface::msg::TrafficLight_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_

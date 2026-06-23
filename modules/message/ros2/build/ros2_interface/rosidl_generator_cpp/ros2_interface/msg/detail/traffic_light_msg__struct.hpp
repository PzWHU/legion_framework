// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/TrafficLightMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_HPP_

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
// Member 'traffic_light'
#include "ros2_interface/msg/detail/traffic_light__struct.hpp"
// Member 'traffic_light_debug'
#include "ros2_interface/msg/detail/traffic_light_debug__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__TrafficLightMsg __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__TrafficLightMsg __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLightMsg_
{
  using Type = TrafficLightMsg_<ContainerAllocator>;

  explicit TrafficLightMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    traffic_light_debug(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->contain_lights = false;
      this->camera_id = 0l;
      this->is_valid = false;
    }
  }

  explicit TrafficLightMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    traffic_light_debug(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->contain_lights = false;
      this->camera_id = 0l;
      this->is_valid = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _traffic_light_type =
    std::vector<ros2_interface::msg::TrafficLight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLight_<ContainerAllocator>>>;
  _traffic_light_type traffic_light;
  using _traffic_light_debug_type =
    ros2_interface::msg::TrafficLightDebug_<ContainerAllocator>;
  _traffic_light_debug_type traffic_light_debug;
  using _contain_lights_type =
    bool;
  _contain_lights_type contain_lights;
  using _camera_id_type =
    int32_t;
  _camera_id_type camera_id;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__traffic_light(
    const std::vector<ros2_interface::msg::TrafficLight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrafficLight_<ContainerAllocator>>> & _arg)
  {
    this->traffic_light = _arg;
    return *this;
  }
  Type & set__traffic_light_debug(
    const ros2_interface::msg::TrafficLightDebug_<ContainerAllocator> & _arg)
  {
    this->traffic_light_debug = _arg;
    return *this;
  }
  Type & set__contain_lights(
    const bool & _arg)
  {
    this->contain_lights = _arg;
    return *this;
  }
  Type & set__camera_id(
    const int32_t & _arg)
  {
    this->camera_id = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::TrafficLightMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::TrafficLightMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::TrafficLightMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::TrafficLightMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrafficLightMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrafficLightMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrafficLightMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrafficLightMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::TrafficLightMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::TrafficLightMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__TrafficLightMsg
    std::shared_ptr<ros2_interface::msg::TrafficLightMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__TrafficLightMsg
    std::shared_ptr<ros2_interface::msg::TrafficLightMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLightMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->traffic_light != other.traffic_light) {
      return false;
    }
    if (this->traffic_light_debug != other.traffic_light_debug) {
      return false;
    }
    if (this->contain_lights != other.contain_lights) {
      return false;
    }
    if (this->camera_id != other.camera_id) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLightMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLightMsg_

// alias to use template instance with default allocator
using TrafficLightMsg =
  ros2_interface::msg::TrafficLightMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/VehicleTask.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__STRUCT_HPP_

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
# define DEPRECATED__ros2_interface__msg__VehicleTask __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__VehicleTask __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleTask_
{
  using Type = VehicleTask_<ContainerAllocator>;

  explicit VehicleTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clean_up_ctrl = 0l;
      this->watering_ctrl = 0l;
      this->water_add_ctrl = 0l;
      this->hatch_unlock_ctrl = 0l;
      this->decorative_light_ctrl = 0l;
    }
  }

  explicit VehicleTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clean_up_ctrl = 0l;
      this->watering_ctrl = 0l;
      this->water_add_ctrl = 0l;
      this->hatch_unlock_ctrl = 0l;
      this->decorative_light_ctrl = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _clean_up_ctrl_type =
    int32_t;
  _clean_up_ctrl_type clean_up_ctrl;
  using _watering_ctrl_type =
    int32_t;
  _watering_ctrl_type watering_ctrl;
  using _water_add_ctrl_type =
    int32_t;
  _water_add_ctrl_type water_add_ctrl;
  using _hatch_unlock_ctrl_type =
    int32_t;
  _hatch_unlock_ctrl_type hatch_unlock_ctrl;
  using _decorative_light_ctrl_type =
    int32_t;
  _decorative_light_ctrl_type decorative_light_ctrl;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__clean_up_ctrl(
    const int32_t & _arg)
  {
    this->clean_up_ctrl = _arg;
    return *this;
  }
  Type & set__watering_ctrl(
    const int32_t & _arg)
  {
    this->watering_ctrl = _arg;
    return *this;
  }
  Type & set__water_add_ctrl(
    const int32_t & _arg)
  {
    this->water_add_ctrl = _arg;
    return *this;
  }
  Type & set__hatch_unlock_ctrl(
    const int32_t & _arg)
  {
    this->hatch_unlock_ctrl = _arg;
    return *this;
  }
  Type & set__decorative_light_ctrl(
    const int32_t & _arg)
  {
    this->decorative_light_ctrl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::VehicleTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::VehicleTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__VehicleTask
    std::shared_ptr<ros2_interface::msg::VehicleTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__VehicleTask
    std::shared_ptr<ros2_interface::msg::VehicleTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleTask_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->clean_up_ctrl != other.clean_up_ctrl) {
      return false;
    }
    if (this->watering_ctrl != other.watering_ctrl) {
      return false;
    }
    if (this->water_add_ctrl != other.water_add_ctrl) {
      return false;
    }
    if (this->hatch_unlock_ctrl != other.hatch_unlock_ctrl) {
      return false;
    }
    if (this->decorative_light_ctrl != other.decorative_light_ctrl) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleTask_

// alias to use template instance with default allocator
using VehicleTask =
  ros2_interface::msg::VehicleTask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_TASK__STRUCT_HPP_

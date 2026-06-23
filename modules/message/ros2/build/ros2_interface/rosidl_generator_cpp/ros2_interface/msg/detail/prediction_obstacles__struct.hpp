// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/PredictionObstacles.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__STRUCT_HPP_

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
// Member 'prediction_obstacles'
#include "ros2_interface/msg/detail/prediction_obstacle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__PredictionObstacles __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__PredictionObstacles __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PredictionObstacles_
{
  using Type = PredictionObstacles_<ContainerAllocator>;

  explicit PredictionObstacles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->change_origin_flag = 0l;
      this->start_timestamp = 0.0;
      this->end_timestamp = 0.0;
      this->self_intent = 0l;
      this->scenario = 0l;
    }
  }

  explicit PredictionObstacles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->change_origin_flag = 0l;
      this->start_timestamp = 0.0;
      this->end_timestamp = 0.0;
      this->self_intent = 0l;
      this->scenario = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _prediction_obstacles_type =
    std::vector<ros2_interface::msg::PredictionObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::PredictionObstacle_<ContainerAllocator>>>;
  _prediction_obstacles_type prediction_obstacles;
  using _change_origin_flag_type =
    int32_t;
  _change_origin_flag_type change_origin_flag;
  using _start_timestamp_type =
    double;
  _start_timestamp_type start_timestamp;
  using _end_timestamp_type =
    double;
  _end_timestamp_type end_timestamp;
  using _self_intent_type =
    int32_t;
  _self_intent_type self_intent;
  using _scenario_type =
    int32_t;
  _scenario_type scenario;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__prediction_obstacles(
    const std::vector<ros2_interface::msg::PredictionObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::PredictionObstacle_<ContainerAllocator>>> & _arg)
  {
    this->prediction_obstacles = _arg;
    return *this;
  }
  Type & set__change_origin_flag(
    const int32_t & _arg)
  {
    this->change_origin_flag = _arg;
    return *this;
  }
  Type & set__start_timestamp(
    const double & _arg)
  {
    this->start_timestamp = _arg;
    return *this;
  }
  Type & set__end_timestamp(
    const double & _arg)
  {
    this->end_timestamp = _arg;
    return *this;
  }
  Type & set__self_intent(
    const int32_t & _arg)
  {
    this->self_intent = _arg;
    return *this;
  }
  Type & set__scenario(
    const int32_t & _arg)
  {
    this->scenario = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::PredictionObstacles_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::PredictionObstacles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::PredictionObstacles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::PredictionObstacles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PredictionObstacles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PredictionObstacles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PredictionObstacles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PredictionObstacles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::PredictionObstacles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::PredictionObstacles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__PredictionObstacles
    std::shared_ptr<ros2_interface::msg::PredictionObstacles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__PredictionObstacles
    std::shared_ptr<ros2_interface::msg::PredictionObstacles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PredictionObstacles_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->prediction_obstacles != other.prediction_obstacles) {
      return false;
    }
    if (this->change_origin_flag != other.change_origin_flag) {
      return false;
    }
    if (this->start_timestamp != other.start_timestamp) {
      return false;
    }
    if (this->end_timestamp != other.end_timestamp) {
      return false;
    }
    if (this->self_intent != other.self_intent) {
      return false;
    }
    if (this->scenario != other.scenario) {
      return false;
    }
    return true;
  }
  bool operator!=(const PredictionObstacles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PredictionObstacles_

// alias to use template instance with default allocator
using PredictionObstacles =
  ros2_interface::msg::PredictionObstacles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__STRUCT_HPP_

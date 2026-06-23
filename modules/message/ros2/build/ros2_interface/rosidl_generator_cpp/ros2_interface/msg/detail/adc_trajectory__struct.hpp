// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/ADCTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__STRUCT_HPP_

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
// Member 'trajectory_points'
#include "ros2_interface/msg/detail/trajectory_point__struct.hpp"
// Member 'estop'
#include "ros2_interface/msg/detail/e_stop__struct.hpp"
// Member 'rss_info'
#include "ros2_interface/msg/detail/rss_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__ADCTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__ADCTrajectory __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ADCTrajectory_
{
  using Type = ADCTrajectory_<ContainerAllocator>;

  explicit ADCTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    estop(_init),
    rss_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_path_length = 0.0;
      this->total_path_time = 0.0;
      this->car_action = 0l;
      this->behaviour_lat_state = 0l;
      this->behaviour_lon_state = 0l;
      this->scenario = 0l;
      this->driving_mode = 0l;
      this->adc_trajectory_type = 0l;
      this->is_replan = false;
      this->replan_reason = "";
      this->right_of_way_status = 0l;
    }
  }

  explicit ADCTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    estop(_alloc, _init),
    replan_reason(_alloc),
    rss_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_path_length = 0.0;
      this->total_path_time = 0.0;
      this->car_action = 0l;
      this->behaviour_lat_state = 0l;
      this->behaviour_lon_state = 0l;
      this->scenario = 0l;
      this->driving_mode = 0l;
      this->adc_trajectory_type = 0l;
      this->is_replan = false;
      this->replan_reason = "";
      this->right_of_way_status = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _total_path_length_type =
    double;
  _total_path_length_type total_path_length;
  using _total_path_time_type =
    double;
  _total_path_time_type total_path_time;
  using _trajectory_points_type =
    std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _trajectory_points_type trajectory_points;
  using _car_action_type =
    int32_t;
  _car_action_type car_action;
  using _behaviour_lat_state_type =
    int32_t;
  _behaviour_lat_state_type behaviour_lat_state;
  using _behaviour_lon_state_type =
    int32_t;
  _behaviour_lon_state_type behaviour_lon_state;
  using _scenario_type =
    int32_t;
  _scenario_type scenario;
  using _driving_mode_type =
    int32_t;
  _driving_mode_type driving_mode;
  using _adc_trajectory_type_type =
    int32_t;
  _adc_trajectory_type_type adc_trajectory_type;
  using _estop_type =
    ros2_interface::msg::EStop_<ContainerAllocator>;
  _estop_type estop;
  using _is_replan_type =
    bool;
  _is_replan_type is_replan;
  using _replan_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _replan_reason_type replan_reason;
  using _right_of_way_status_type =
    int32_t;
  _right_of_way_status_type right_of_way_status;
  using _rss_info_type =
    ros2_interface::msg::RSSInfo_<ContainerAllocator>;
  _rss_info_type rss_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__total_path_length(
    const double & _arg)
  {
    this->total_path_length = _arg;
    return *this;
  }
  Type & set__total_path_time(
    const double & _arg)
  {
    this->total_path_time = _arg;
    return *this;
  }
  Type & set__trajectory_points(
    const std::vector<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_points = _arg;
    return *this;
  }
  Type & set__car_action(
    const int32_t & _arg)
  {
    this->car_action = _arg;
    return *this;
  }
  Type & set__behaviour_lat_state(
    const int32_t & _arg)
  {
    this->behaviour_lat_state = _arg;
    return *this;
  }
  Type & set__behaviour_lon_state(
    const int32_t & _arg)
  {
    this->behaviour_lon_state = _arg;
    return *this;
  }
  Type & set__scenario(
    const int32_t & _arg)
  {
    this->scenario = _arg;
    return *this;
  }
  Type & set__driving_mode(
    const int32_t & _arg)
  {
    this->driving_mode = _arg;
    return *this;
  }
  Type & set__adc_trajectory_type(
    const int32_t & _arg)
  {
    this->adc_trajectory_type = _arg;
    return *this;
  }
  Type & set__estop(
    const ros2_interface::msg::EStop_<ContainerAllocator> & _arg)
  {
    this->estop = _arg;
    return *this;
  }
  Type & set__is_replan(
    const bool & _arg)
  {
    this->is_replan = _arg;
    return *this;
  }
  Type & set__replan_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->replan_reason = _arg;
    return *this;
  }
  Type & set__right_of_way_status(
    const int32_t & _arg)
  {
    this->right_of_way_status = _arg;
    return *this;
  }
  Type & set__rss_info(
    const ros2_interface::msg::RSSInfo_<ContainerAllocator> & _arg)
  {
    this->rss_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::ADCTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::ADCTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::ADCTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::ADCTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ADCTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ADCTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::ADCTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::ADCTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::ADCTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::ADCTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__ADCTrajectory
    std::shared_ptr<ros2_interface::msg::ADCTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__ADCTrajectory
    std::shared_ptr<ros2_interface::msg::ADCTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ADCTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->total_path_length != other.total_path_length) {
      return false;
    }
    if (this->total_path_time != other.total_path_time) {
      return false;
    }
    if (this->trajectory_points != other.trajectory_points) {
      return false;
    }
    if (this->car_action != other.car_action) {
      return false;
    }
    if (this->behaviour_lat_state != other.behaviour_lat_state) {
      return false;
    }
    if (this->behaviour_lon_state != other.behaviour_lon_state) {
      return false;
    }
    if (this->scenario != other.scenario) {
      return false;
    }
    if (this->driving_mode != other.driving_mode) {
      return false;
    }
    if (this->adc_trajectory_type != other.adc_trajectory_type) {
      return false;
    }
    if (this->estop != other.estop) {
      return false;
    }
    if (this->is_replan != other.is_replan) {
      return false;
    }
    if (this->replan_reason != other.replan_reason) {
      return false;
    }
    if (this->right_of_way_status != other.right_of_way_status) {
      return false;
    }
    if (this->rss_info != other.rss_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ADCTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ADCTrajectory_

// alias to use template instance with default allocator
using ADCTrajectory =
  ros2_interface::msg::ADCTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__STRUCT_HPP_

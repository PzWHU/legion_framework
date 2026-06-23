// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/HMIVehicleMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__STRUCT_HPP_

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
// Member 'position'
#include "ros2_interface/msg/detail/point_llh__struct.hpp"
// Member 'utm_position'
// Member 'mercator_position'
#include "ros2_interface/msg/detail/point_enu__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__HMIVehicleMsg __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__HMIVehicleMsg __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HMIVehicleMsg_
{
  using Type = HMIVehicleMsg_<ContainerAllocator>;

  explicit HMIVehicleMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    utm_position(_init),
    mercator_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driving_mode = 0l;
      this->gear_location = 0l;
      this->steering_value = 0.0;
      this->accel_value = 0.0;
      this->brake_value = 0.0;
      this->speed_mps = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->heading = 0.0;
      this->rtk_flag = 0l;
      this->origin_lat = 0.0;
      this->origin_lon = 0.0;
      this->current_ins_yaw = 0.0;
      this->auto_safe = 0l;
      this->battery_power_percentage = 0.0;
      this->charging_gun_status = 0l;
      this->brake_lamp_status = 0l;
      this->turn_lamp_status = 0l;
    }
  }

  explicit HMIVehicleMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    utm_position(_alloc, _init),
    mercator_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driving_mode = 0l;
      this->gear_location = 0l;
      this->steering_value = 0.0;
      this->accel_value = 0.0;
      this->brake_value = 0.0;
      this->speed_mps = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->heading = 0.0;
      this->rtk_flag = 0l;
      this->origin_lat = 0.0;
      this->origin_lon = 0.0;
      this->current_ins_yaw = 0.0;
      this->auto_safe = 0l;
      this->battery_power_percentage = 0.0;
      this->charging_gun_status = 0l;
      this->brake_lamp_status = 0l;
      this->turn_lamp_status = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _driving_mode_type =
    int32_t;
  _driving_mode_type driving_mode;
  using _gear_location_type =
    int32_t;
  _gear_location_type gear_location;
  using _steering_value_type =
    double;
  _steering_value_type steering_value;
  using _accel_value_type =
    double;
  _accel_value_type accel_value;
  using _brake_value_type =
    double;
  _brake_value_type brake_value;
  using _speed_mps_type =
    double;
  _speed_mps_type speed_mps;
  using _position_type =
    ros2_interface::msg::PointLLH_<ContainerAllocator>;
  _position_type position;
  using _utm_position_type =
    ros2_interface::msg::PointENU_<ContainerAllocator>;
  _utm_position_type utm_position;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;
  using _heading_type =
    double;
  _heading_type heading;
  using _rtk_flag_type =
    int32_t;
  _rtk_flag_type rtk_flag;
  using _origin_lat_type =
    double;
  _origin_lat_type origin_lat;
  using _origin_lon_type =
    double;
  _origin_lon_type origin_lon;
  using _current_ins_yaw_type =
    double;
  _current_ins_yaw_type current_ins_yaw;
  using _auto_safe_type =
    int32_t;
  _auto_safe_type auto_safe;
  using _battery_power_percentage_type =
    double;
  _battery_power_percentage_type battery_power_percentage;
  using _charging_gun_status_type =
    int32_t;
  _charging_gun_status_type charging_gun_status;
  using _chassis_error_code_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _chassis_error_code_type chassis_error_code;
  using _brake_lamp_status_type =
    int32_t;
  _brake_lamp_status_type brake_lamp_status;
  using _turn_lamp_status_type =
    int32_t;
  _turn_lamp_status_type turn_lamp_status;
  using _mercator_position_type =
    ros2_interface::msg::PointENU_<ContainerAllocator>;
  _mercator_position_type mercator_position;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__driving_mode(
    const int32_t & _arg)
  {
    this->driving_mode = _arg;
    return *this;
  }
  Type & set__gear_location(
    const int32_t & _arg)
  {
    this->gear_location = _arg;
    return *this;
  }
  Type & set__steering_value(
    const double & _arg)
  {
    this->steering_value = _arg;
    return *this;
  }
  Type & set__accel_value(
    const double & _arg)
  {
    this->accel_value = _arg;
    return *this;
  }
  Type & set__brake_value(
    const double & _arg)
  {
    this->brake_value = _arg;
    return *this;
  }
  Type & set__speed_mps(
    const double & _arg)
  {
    this->speed_mps = _arg;
    return *this;
  }
  Type & set__position(
    const ros2_interface::msg::PointLLH_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__utm_position(
    const ros2_interface::msg::PointENU_<ContainerAllocator> & _arg)
  {
    this->utm_position = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__rtk_flag(
    const int32_t & _arg)
  {
    this->rtk_flag = _arg;
    return *this;
  }
  Type & set__origin_lat(
    const double & _arg)
  {
    this->origin_lat = _arg;
    return *this;
  }
  Type & set__origin_lon(
    const double & _arg)
  {
    this->origin_lon = _arg;
    return *this;
  }
  Type & set__current_ins_yaw(
    const double & _arg)
  {
    this->current_ins_yaw = _arg;
    return *this;
  }
  Type & set__auto_safe(
    const int32_t & _arg)
  {
    this->auto_safe = _arg;
    return *this;
  }
  Type & set__battery_power_percentage(
    const double & _arg)
  {
    this->battery_power_percentage = _arg;
    return *this;
  }
  Type & set__charging_gun_status(
    const int32_t & _arg)
  {
    this->charging_gun_status = _arg;
    return *this;
  }
  Type & set__chassis_error_code(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->chassis_error_code = _arg;
    return *this;
  }
  Type & set__brake_lamp_status(
    const int32_t & _arg)
  {
    this->brake_lamp_status = _arg;
    return *this;
  }
  Type & set__turn_lamp_status(
    const int32_t & _arg)
  {
    this->turn_lamp_status = _arg;
    return *this;
  }
  Type & set__mercator_position(
    const ros2_interface::msg::PointENU_<ContainerAllocator> & _arg)
  {
    this->mercator_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__HMIVehicleMsg
    std::shared_ptr<ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__HMIVehicleMsg
    std::shared_ptr<ros2_interface::msg::HMIVehicleMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HMIVehicleMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->driving_mode != other.driving_mode) {
      return false;
    }
    if (this->gear_location != other.gear_location) {
      return false;
    }
    if (this->steering_value != other.steering_value) {
      return false;
    }
    if (this->accel_value != other.accel_value) {
      return false;
    }
    if (this->brake_value != other.brake_value) {
      return false;
    }
    if (this->speed_mps != other.speed_mps) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->utm_position != other.utm_position) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->rtk_flag != other.rtk_flag) {
      return false;
    }
    if (this->origin_lat != other.origin_lat) {
      return false;
    }
    if (this->origin_lon != other.origin_lon) {
      return false;
    }
    if (this->current_ins_yaw != other.current_ins_yaw) {
      return false;
    }
    if (this->auto_safe != other.auto_safe) {
      return false;
    }
    if (this->battery_power_percentage != other.battery_power_percentage) {
      return false;
    }
    if (this->charging_gun_status != other.charging_gun_status) {
      return false;
    }
    if (this->chassis_error_code != other.chassis_error_code) {
      return false;
    }
    if (this->brake_lamp_status != other.brake_lamp_status) {
      return false;
    }
    if (this->turn_lamp_status != other.turn_lamp_status) {
      return false;
    }
    if (this->mercator_position != other.mercator_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const HMIVehicleMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HMIVehicleMsg_

// alias to use template instance with default allocator
using HMIVehicleMsg =
  ros2_interface::msg::HMIVehicleMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_VEHICLE_MSG__STRUCT_HPP_

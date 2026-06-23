// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/WheelInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__STRUCT_HPP_

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
# define DEPRECATED__ros2_interface__msg__WheelInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__WheelInfo __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelInfo_
{
  using Type = WheelInfo_<ContainerAllocator>;

  explicit WheelInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_status = 0l;
      this->steer_driving_mode = 0l;
      this->steering_value = 0.0;
      this->steering_torque_nm = 0.0;
      this->steering_rate_dps = 0.0;
      this->speed_mps = 0.0;
      this->veh_spd_vld = false;
      this->gear = 0l;
      this->gear_vld = false;
      this->wheel_direction_rr = 0l;
      this->wheel_spd_rr = 0.0;
      this->wheel_direction_rl = 0l;
      this->wheel_spd_rl = 0.0;
      this->wheel_direction_fr = 0l;
      this->wheel_spd_fr = 0.0;
      this->wheel_direction_fl = 0l;
      this->wheel_spd_fl = 0.0;
      this->yaw_rate = 0.0;
      this->wss_fl_edges_sum = 0l;
      this->wss_fr_edges_sum = 0l;
      this->wss_rl_edges_sum = 0l;
      this->wss_rr_edges_sum = 0l;
      this->wss_fl_edges_sum_vld = false;
      this->wss_fr_edges_sum_vld = false;
      this->wss_rl_edges_sum_vld = false;
      this->wss_rr_edges_sum_vld = false;
      this->veh_lat_accel = 0.0;
      this->veh_lgt_accel = 0.0;
      this->veh_lat_accel_vld = false;
      this->veh_lgt_accel_vld = false;
    }
  }

  explicit WheelInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_status = 0l;
      this->steer_driving_mode = 0l;
      this->steering_value = 0.0;
      this->steering_torque_nm = 0.0;
      this->steering_rate_dps = 0.0;
      this->speed_mps = 0.0;
      this->veh_spd_vld = false;
      this->gear = 0l;
      this->gear_vld = false;
      this->wheel_direction_rr = 0l;
      this->wheel_spd_rr = 0.0;
      this->wheel_direction_rl = 0l;
      this->wheel_spd_rl = 0.0;
      this->wheel_direction_fr = 0l;
      this->wheel_spd_fr = 0.0;
      this->wheel_direction_fl = 0l;
      this->wheel_spd_fl = 0.0;
      this->yaw_rate = 0.0;
      this->wss_fl_edges_sum = 0l;
      this->wss_fr_edges_sum = 0l;
      this->wss_rl_edges_sum = 0l;
      this->wss_rr_edges_sum = 0l;
      this->wss_fl_edges_sum_vld = false;
      this->wss_fr_edges_sum_vld = false;
      this->wss_rl_edges_sum_vld = false;
      this->wss_rr_edges_sum_vld = false;
      this->veh_lat_accel = 0.0;
      this->veh_lgt_accel = 0.0;
      this->veh_lat_accel_vld = false;
      this->veh_lgt_accel_vld = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _moving_status_type =
    int32_t;
  _moving_status_type moving_status;
  using _steer_driving_mode_type =
    int32_t;
  _steer_driving_mode_type steer_driving_mode;
  using _steering_value_type =
    double;
  _steering_value_type steering_value;
  using _steering_torque_nm_type =
    double;
  _steering_torque_nm_type steering_torque_nm;
  using _steering_rate_dps_type =
    double;
  _steering_rate_dps_type steering_rate_dps;
  using _speed_mps_type =
    double;
  _speed_mps_type speed_mps;
  using _veh_spd_vld_type =
    bool;
  _veh_spd_vld_type veh_spd_vld;
  using _gear_type =
    int32_t;
  _gear_type gear;
  using _gear_vld_type =
    bool;
  _gear_vld_type gear_vld;
  using _wheel_direction_rr_type =
    int32_t;
  _wheel_direction_rr_type wheel_direction_rr;
  using _wheel_spd_rr_type =
    double;
  _wheel_spd_rr_type wheel_spd_rr;
  using _wheel_direction_rl_type =
    int32_t;
  _wheel_direction_rl_type wheel_direction_rl;
  using _wheel_spd_rl_type =
    double;
  _wheel_spd_rl_type wheel_spd_rl;
  using _wheel_direction_fr_type =
    int32_t;
  _wheel_direction_fr_type wheel_direction_fr;
  using _wheel_spd_fr_type =
    double;
  _wheel_spd_fr_type wheel_spd_fr;
  using _wheel_direction_fl_type =
    int32_t;
  _wheel_direction_fl_type wheel_direction_fl;
  using _wheel_spd_fl_type =
    double;
  _wheel_spd_fl_type wheel_spd_fl;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _wss_fl_edges_sum_type =
    int32_t;
  _wss_fl_edges_sum_type wss_fl_edges_sum;
  using _wss_fr_edges_sum_type =
    int32_t;
  _wss_fr_edges_sum_type wss_fr_edges_sum;
  using _wss_rl_edges_sum_type =
    int32_t;
  _wss_rl_edges_sum_type wss_rl_edges_sum;
  using _wss_rr_edges_sum_type =
    int32_t;
  _wss_rr_edges_sum_type wss_rr_edges_sum;
  using _wss_fl_edges_sum_vld_type =
    bool;
  _wss_fl_edges_sum_vld_type wss_fl_edges_sum_vld;
  using _wss_fr_edges_sum_vld_type =
    bool;
  _wss_fr_edges_sum_vld_type wss_fr_edges_sum_vld;
  using _wss_rl_edges_sum_vld_type =
    bool;
  _wss_rl_edges_sum_vld_type wss_rl_edges_sum_vld;
  using _wss_rr_edges_sum_vld_type =
    bool;
  _wss_rr_edges_sum_vld_type wss_rr_edges_sum_vld;
  using _veh_lat_accel_type =
    double;
  _veh_lat_accel_type veh_lat_accel;
  using _veh_lgt_accel_type =
    double;
  _veh_lgt_accel_type veh_lgt_accel;
  using _veh_lat_accel_vld_type =
    bool;
  _veh_lat_accel_vld_type veh_lat_accel_vld;
  using _veh_lgt_accel_vld_type =
    bool;
  _veh_lgt_accel_vld_type veh_lgt_accel_vld;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__moving_status(
    const int32_t & _arg)
  {
    this->moving_status = _arg;
    return *this;
  }
  Type & set__steer_driving_mode(
    const int32_t & _arg)
  {
    this->steer_driving_mode = _arg;
    return *this;
  }
  Type & set__steering_value(
    const double & _arg)
  {
    this->steering_value = _arg;
    return *this;
  }
  Type & set__steering_torque_nm(
    const double & _arg)
  {
    this->steering_torque_nm = _arg;
    return *this;
  }
  Type & set__steering_rate_dps(
    const double & _arg)
  {
    this->steering_rate_dps = _arg;
    return *this;
  }
  Type & set__speed_mps(
    const double & _arg)
  {
    this->speed_mps = _arg;
    return *this;
  }
  Type & set__veh_spd_vld(
    const bool & _arg)
  {
    this->veh_spd_vld = _arg;
    return *this;
  }
  Type & set__gear(
    const int32_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__gear_vld(
    const bool & _arg)
  {
    this->gear_vld = _arg;
    return *this;
  }
  Type & set__wheel_direction_rr(
    const int32_t & _arg)
  {
    this->wheel_direction_rr = _arg;
    return *this;
  }
  Type & set__wheel_spd_rr(
    const double & _arg)
  {
    this->wheel_spd_rr = _arg;
    return *this;
  }
  Type & set__wheel_direction_rl(
    const int32_t & _arg)
  {
    this->wheel_direction_rl = _arg;
    return *this;
  }
  Type & set__wheel_spd_rl(
    const double & _arg)
  {
    this->wheel_spd_rl = _arg;
    return *this;
  }
  Type & set__wheel_direction_fr(
    const int32_t & _arg)
  {
    this->wheel_direction_fr = _arg;
    return *this;
  }
  Type & set__wheel_spd_fr(
    const double & _arg)
  {
    this->wheel_spd_fr = _arg;
    return *this;
  }
  Type & set__wheel_direction_fl(
    const int32_t & _arg)
  {
    this->wheel_direction_fl = _arg;
    return *this;
  }
  Type & set__wheel_spd_fl(
    const double & _arg)
  {
    this->wheel_spd_fl = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__wss_fl_edges_sum(
    const int32_t & _arg)
  {
    this->wss_fl_edges_sum = _arg;
    return *this;
  }
  Type & set__wss_fr_edges_sum(
    const int32_t & _arg)
  {
    this->wss_fr_edges_sum = _arg;
    return *this;
  }
  Type & set__wss_rl_edges_sum(
    const int32_t & _arg)
  {
    this->wss_rl_edges_sum = _arg;
    return *this;
  }
  Type & set__wss_rr_edges_sum(
    const int32_t & _arg)
  {
    this->wss_rr_edges_sum = _arg;
    return *this;
  }
  Type & set__wss_fl_edges_sum_vld(
    const bool & _arg)
  {
    this->wss_fl_edges_sum_vld = _arg;
    return *this;
  }
  Type & set__wss_fr_edges_sum_vld(
    const bool & _arg)
  {
    this->wss_fr_edges_sum_vld = _arg;
    return *this;
  }
  Type & set__wss_rl_edges_sum_vld(
    const bool & _arg)
  {
    this->wss_rl_edges_sum_vld = _arg;
    return *this;
  }
  Type & set__wss_rr_edges_sum_vld(
    const bool & _arg)
  {
    this->wss_rr_edges_sum_vld = _arg;
    return *this;
  }
  Type & set__veh_lat_accel(
    const double & _arg)
  {
    this->veh_lat_accel = _arg;
    return *this;
  }
  Type & set__veh_lgt_accel(
    const double & _arg)
  {
    this->veh_lgt_accel = _arg;
    return *this;
  }
  Type & set__veh_lat_accel_vld(
    const bool & _arg)
  {
    this->veh_lat_accel_vld = _arg;
    return *this;
  }
  Type & set__veh_lgt_accel_vld(
    const bool & _arg)
  {
    this->veh_lgt_accel_vld = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::WheelInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::WheelInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::WheelInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::WheelInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::WheelInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::WheelInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::WheelInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::WheelInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::WheelInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::WheelInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__WheelInfo
    std::shared_ptr<ros2_interface::msg::WheelInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__WheelInfo
    std::shared_ptr<ros2_interface::msg::WheelInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->moving_status != other.moving_status) {
      return false;
    }
    if (this->steer_driving_mode != other.steer_driving_mode) {
      return false;
    }
    if (this->steering_value != other.steering_value) {
      return false;
    }
    if (this->steering_torque_nm != other.steering_torque_nm) {
      return false;
    }
    if (this->steering_rate_dps != other.steering_rate_dps) {
      return false;
    }
    if (this->speed_mps != other.speed_mps) {
      return false;
    }
    if (this->veh_spd_vld != other.veh_spd_vld) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->gear_vld != other.gear_vld) {
      return false;
    }
    if (this->wheel_direction_rr != other.wheel_direction_rr) {
      return false;
    }
    if (this->wheel_spd_rr != other.wheel_spd_rr) {
      return false;
    }
    if (this->wheel_direction_rl != other.wheel_direction_rl) {
      return false;
    }
    if (this->wheel_spd_rl != other.wheel_spd_rl) {
      return false;
    }
    if (this->wheel_direction_fr != other.wheel_direction_fr) {
      return false;
    }
    if (this->wheel_spd_fr != other.wheel_spd_fr) {
      return false;
    }
    if (this->wheel_direction_fl != other.wheel_direction_fl) {
      return false;
    }
    if (this->wheel_spd_fl != other.wheel_spd_fl) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->wss_fl_edges_sum != other.wss_fl_edges_sum) {
      return false;
    }
    if (this->wss_fr_edges_sum != other.wss_fr_edges_sum) {
      return false;
    }
    if (this->wss_rl_edges_sum != other.wss_rl_edges_sum) {
      return false;
    }
    if (this->wss_rr_edges_sum != other.wss_rr_edges_sum) {
      return false;
    }
    if (this->wss_fl_edges_sum_vld != other.wss_fl_edges_sum_vld) {
      return false;
    }
    if (this->wss_fr_edges_sum_vld != other.wss_fr_edges_sum_vld) {
      return false;
    }
    if (this->wss_rl_edges_sum_vld != other.wss_rl_edges_sum_vld) {
      return false;
    }
    if (this->wss_rr_edges_sum_vld != other.wss_rr_edges_sum_vld) {
      return false;
    }
    if (this->veh_lat_accel != other.veh_lat_accel) {
      return false;
    }
    if (this->veh_lgt_accel != other.veh_lgt_accel) {
      return false;
    }
    if (this->veh_lat_accel_vld != other.veh_lat_accel_vld) {
      return false;
    }
    if (this->veh_lgt_accel_vld != other.veh_lgt_accel_vld) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelInfo_

// alias to use template instance with default allocator
using WheelInfo =
  ros2_interface::msg::WheelInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__WHEEL_INFO__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/VehicleParam.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__VehicleParam __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__VehicleParam __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleParam_
{
  using Type = VehicleParam_<ContainerAllocator>;

  explicit VehicleParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brand = "";
      this->steer_mode = 0l;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->mass_fl = 0.0;
      this->mass_fr = 0.0;
      this->mass_rl = 0.0;
      this->mass_rr = 0.0;
      this->wheel_radius = 0.0;
      this->wheelbase = 0.0;
      this->front_edge_to_center = 0.0;
      this->back_edge_to_center = 0.0;
      this->lf = 0.0;
      this->lr = 0.0;
      this->cf = 0.0;
      this->cr = 0.0;
      this->steer_ratio = 0.0;
      this->rolling_coefficient = 0.0;
      this->air_density = 0.0;
      this->air_damping_coefficient = 0.0;
      this->max_front_steer_angle = 0.0;
      this->min_front_steer_angle = 0.0;
      this->max_rear_steer_angle = 0.0;
      this->min_rear_steer_angle = 0.0;
      this->speed_limit = 0.0;
      this->max_brake_value = 0.0;
      this->min_brake_value = 0.0;
      this->max_accel_value = 0.0;
      this->min_accel_value = 0.0;
      this->speed_deadzone = 0.0;
      this->standstill_acceleration = 0.0;
      this->max_front_steer_angle_rate = 0.0;
      this->max_rear_steer_angle_rate = 0.0;
      this->max_abs_speed_when_stopped = 0.0;
      this->max_abs_speed_when_stopped_duration = 0.0;
      this->brake_value_when_gear_transitioning = 0.0;
      this->accel_deadzone = 0.0;
      this->brake_deadzone = 0.0;
      this->acceleration_in_idle = 0.0;
      this->deceleration_in_idle = 0.0;
      this->max_acceleration_jerk = 0.0;
      this->max_acceleration = 0.0;
      this->max_deceleration = 0.0;
      this->min_turning_radius = 0.0;
    }
  }

  explicit VehicleParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : brand(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brand = "";
      this->steer_mode = 0l;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->mass_fl = 0.0;
      this->mass_fr = 0.0;
      this->mass_rl = 0.0;
      this->mass_rr = 0.0;
      this->wheel_radius = 0.0;
      this->wheelbase = 0.0;
      this->front_edge_to_center = 0.0;
      this->back_edge_to_center = 0.0;
      this->lf = 0.0;
      this->lr = 0.0;
      this->cf = 0.0;
      this->cr = 0.0;
      this->steer_ratio = 0.0;
      this->rolling_coefficient = 0.0;
      this->air_density = 0.0;
      this->air_damping_coefficient = 0.0;
      this->max_front_steer_angle = 0.0;
      this->min_front_steer_angle = 0.0;
      this->max_rear_steer_angle = 0.0;
      this->min_rear_steer_angle = 0.0;
      this->speed_limit = 0.0;
      this->max_brake_value = 0.0;
      this->min_brake_value = 0.0;
      this->max_accel_value = 0.0;
      this->min_accel_value = 0.0;
      this->speed_deadzone = 0.0;
      this->standstill_acceleration = 0.0;
      this->max_front_steer_angle_rate = 0.0;
      this->max_rear_steer_angle_rate = 0.0;
      this->max_abs_speed_when_stopped = 0.0;
      this->max_abs_speed_when_stopped_duration = 0.0;
      this->brake_value_when_gear_transitioning = 0.0;
      this->accel_deadzone = 0.0;
      this->brake_deadzone = 0.0;
      this->acceleration_in_idle = 0.0;
      this->deceleration_in_idle = 0.0;
      this->max_acceleration_jerk = 0.0;
      this->max_acceleration = 0.0;
      this->max_deceleration = 0.0;
      this->min_turning_radius = 0.0;
    }
  }

  // field types and members
  using _brand_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _brand_type brand;
  using _steer_mode_type =
    int32_t;
  _steer_mode_type steer_mode;
  using _length_type =
    double;
  _length_type length;
  using _width_type =
    double;
  _width_type width;
  using _height_type =
    double;
  _height_type height;
  using _mass_fl_type =
    double;
  _mass_fl_type mass_fl;
  using _mass_fr_type =
    double;
  _mass_fr_type mass_fr;
  using _mass_rl_type =
    double;
  _mass_rl_type mass_rl;
  using _mass_rr_type =
    double;
  _mass_rr_type mass_rr;
  using _wheel_radius_type =
    double;
  _wheel_radius_type wheel_radius;
  using _wheelbase_type =
    double;
  _wheelbase_type wheelbase;
  using _front_edge_to_center_type =
    double;
  _front_edge_to_center_type front_edge_to_center;
  using _back_edge_to_center_type =
    double;
  _back_edge_to_center_type back_edge_to_center;
  using _lf_type =
    double;
  _lf_type lf;
  using _lr_type =
    double;
  _lr_type lr;
  using _cf_type =
    double;
  _cf_type cf;
  using _cr_type =
    double;
  _cr_type cr;
  using _steer_ratio_type =
    double;
  _steer_ratio_type steer_ratio;
  using _rolling_coefficient_type =
    double;
  _rolling_coefficient_type rolling_coefficient;
  using _air_density_type =
    double;
  _air_density_type air_density;
  using _air_damping_coefficient_type =
    double;
  _air_damping_coefficient_type air_damping_coefficient;
  using _max_front_steer_angle_type =
    double;
  _max_front_steer_angle_type max_front_steer_angle;
  using _min_front_steer_angle_type =
    double;
  _min_front_steer_angle_type min_front_steer_angle;
  using _max_rear_steer_angle_type =
    double;
  _max_rear_steer_angle_type max_rear_steer_angle;
  using _min_rear_steer_angle_type =
    double;
  _min_rear_steer_angle_type min_rear_steer_angle;
  using _speed_limit_type =
    double;
  _speed_limit_type speed_limit;
  using _max_brake_value_type =
    double;
  _max_brake_value_type max_brake_value;
  using _min_brake_value_type =
    double;
  _min_brake_value_type min_brake_value;
  using _max_accel_value_type =
    double;
  _max_accel_value_type max_accel_value;
  using _min_accel_value_type =
    double;
  _min_accel_value_type min_accel_value;
  using _speed_deadzone_type =
    double;
  _speed_deadzone_type speed_deadzone;
  using _standstill_acceleration_type =
    double;
  _standstill_acceleration_type standstill_acceleration;
  using _max_front_steer_angle_rate_type =
    double;
  _max_front_steer_angle_rate_type max_front_steer_angle_rate;
  using _max_rear_steer_angle_rate_type =
    double;
  _max_rear_steer_angle_rate_type max_rear_steer_angle_rate;
  using _max_abs_speed_when_stopped_type =
    double;
  _max_abs_speed_when_stopped_type max_abs_speed_when_stopped;
  using _max_abs_speed_when_stopped_duration_type =
    double;
  _max_abs_speed_when_stopped_duration_type max_abs_speed_when_stopped_duration;
  using _brake_value_when_gear_transitioning_type =
    double;
  _brake_value_when_gear_transitioning_type brake_value_when_gear_transitioning;
  using _accel_deadzone_type =
    double;
  _accel_deadzone_type accel_deadzone;
  using _brake_deadzone_type =
    double;
  _brake_deadzone_type brake_deadzone;
  using _acceleration_in_idle_type =
    double;
  _acceleration_in_idle_type acceleration_in_idle;
  using _deceleration_in_idle_type =
    double;
  _deceleration_in_idle_type deceleration_in_idle;
  using _max_acceleration_jerk_type =
    double;
  _max_acceleration_jerk_type max_acceleration_jerk;
  using _max_acceleration_type =
    double;
  _max_acceleration_type max_acceleration;
  using _max_deceleration_type =
    double;
  _max_deceleration_type max_deceleration;
  using _min_turning_radius_type =
    double;
  _min_turning_radius_type min_turning_radius;

  // setters for named parameter idiom
  Type & set__brand(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->brand = _arg;
    return *this;
  }
  Type & set__steer_mode(
    const int32_t & _arg)
  {
    this->steer_mode = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__mass_fl(
    const double & _arg)
  {
    this->mass_fl = _arg;
    return *this;
  }
  Type & set__mass_fr(
    const double & _arg)
  {
    this->mass_fr = _arg;
    return *this;
  }
  Type & set__mass_rl(
    const double & _arg)
  {
    this->mass_rl = _arg;
    return *this;
  }
  Type & set__mass_rr(
    const double & _arg)
  {
    this->mass_rr = _arg;
    return *this;
  }
  Type & set__wheel_radius(
    const double & _arg)
  {
    this->wheel_radius = _arg;
    return *this;
  }
  Type & set__wheelbase(
    const double & _arg)
  {
    this->wheelbase = _arg;
    return *this;
  }
  Type & set__front_edge_to_center(
    const double & _arg)
  {
    this->front_edge_to_center = _arg;
    return *this;
  }
  Type & set__back_edge_to_center(
    const double & _arg)
  {
    this->back_edge_to_center = _arg;
    return *this;
  }
  Type & set__lf(
    const double & _arg)
  {
    this->lf = _arg;
    return *this;
  }
  Type & set__lr(
    const double & _arg)
  {
    this->lr = _arg;
    return *this;
  }
  Type & set__cf(
    const double & _arg)
  {
    this->cf = _arg;
    return *this;
  }
  Type & set__cr(
    const double & _arg)
  {
    this->cr = _arg;
    return *this;
  }
  Type & set__steer_ratio(
    const double & _arg)
  {
    this->steer_ratio = _arg;
    return *this;
  }
  Type & set__rolling_coefficient(
    const double & _arg)
  {
    this->rolling_coefficient = _arg;
    return *this;
  }
  Type & set__air_density(
    const double & _arg)
  {
    this->air_density = _arg;
    return *this;
  }
  Type & set__air_damping_coefficient(
    const double & _arg)
  {
    this->air_damping_coefficient = _arg;
    return *this;
  }
  Type & set__max_front_steer_angle(
    const double & _arg)
  {
    this->max_front_steer_angle = _arg;
    return *this;
  }
  Type & set__min_front_steer_angle(
    const double & _arg)
  {
    this->min_front_steer_angle = _arg;
    return *this;
  }
  Type & set__max_rear_steer_angle(
    const double & _arg)
  {
    this->max_rear_steer_angle = _arg;
    return *this;
  }
  Type & set__min_rear_steer_angle(
    const double & _arg)
  {
    this->min_rear_steer_angle = _arg;
    return *this;
  }
  Type & set__speed_limit(
    const double & _arg)
  {
    this->speed_limit = _arg;
    return *this;
  }
  Type & set__max_brake_value(
    const double & _arg)
  {
    this->max_brake_value = _arg;
    return *this;
  }
  Type & set__min_brake_value(
    const double & _arg)
  {
    this->min_brake_value = _arg;
    return *this;
  }
  Type & set__max_accel_value(
    const double & _arg)
  {
    this->max_accel_value = _arg;
    return *this;
  }
  Type & set__min_accel_value(
    const double & _arg)
  {
    this->min_accel_value = _arg;
    return *this;
  }
  Type & set__speed_deadzone(
    const double & _arg)
  {
    this->speed_deadzone = _arg;
    return *this;
  }
  Type & set__standstill_acceleration(
    const double & _arg)
  {
    this->standstill_acceleration = _arg;
    return *this;
  }
  Type & set__max_front_steer_angle_rate(
    const double & _arg)
  {
    this->max_front_steer_angle_rate = _arg;
    return *this;
  }
  Type & set__max_rear_steer_angle_rate(
    const double & _arg)
  {
    this->max_rear_steer_angle_rate = _arg;
    return *this;
  }
  Type & set__max_abs_speed_when_stopped(
    const double & _arg)
  {
    this->max_abs_speed_when_stopped = _arg;
    return *this;
  }
  Type & set__max_abs_speed_when_stopped_duration(
    const double & _arg)
  {
    this->max_abs_speed_when_stopped_duration = _arg;
    return *this;
  }
  Type & set__brake_value_when_gear_transitioning(
    const double & _arg)
  {
    this->brake_value_when_gear_transitioning = _arg;
    return *this;
  }
  Type & set__accel_deadzone(
    const double & _arg)
  {
    this->accel_deadzone = _arg;
    return *this;
  }
  Type & set__brake_deadzone(
    const double & _arg)
  {
    this->brake_deadzone = _arg;
    return *this;
  }
  Type & set__acceleration_in_idle(
    const double & _arg)
  {
    this->acceleration_in_idle = _arg;
    return *this;
  }
  Type & set__deceleration_in_idle(
    const double & _arg)
  {
    this->deceleration_in_idle = _arg;
    return *this;
  }
  Type & set__max_acceleration_jerk(
    const double & _arg)
  {
    this->max_acceleration_jerk = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const double & _arg)
  {
    this->max_acceleration = _arg;
    return *this;
  }
  Type & set__max_deceleration(
    const double & _arg)
  {
    this->max_deceleration = _arg;
    return *this;
  }
  Type & set__min_turning_radius(
    const double & _arg)
  {
    this->min_turning_radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::VehicleParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::VehicleParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::VehicleParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::VehicleParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::VehicleParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::VehicleParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__VehicleParam
    std::shared_ptr<ros2_interface::msg::VehicleParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__VehicleParam
    std::shared_ptr<ros2_interface::msg::VehicleParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleParam_ & other) const
  {
    if (this->brand != other.brand) {
      return false;
    }
    if (this->steer_mode != other.steer_mode) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->mass_fl != other.mass_fl) {
      return false;
    }
    if (this->mass_fr != other.mass_fr) {
      return false;
    }
    if (this->mass_rl != other.mass_rl) {
      return false;
    }
    if (this->mass_rr != other.mass_rr) {
      return false;
    }
    if (this->wheel_radius != other.wheel_radius) {
      return false;
    }
    if (this->wheelbase != other.wheelbase) {
      return false;
    }
    if (this->front_edge_to_center != other.front_edge_to_center) {
      return false;
    }
    if (this->back_edge_to_center != other.back_edge_to_center) {
      return false;
    }
    if (this->lf != other.lf) {
      return false;
    }
    if (this->lr != other.lr) {
      return false;
    }
    if (this->cf != other.cf) {
      return false;
    }
    if (this->cr != other.cr) {
      return false;
    }
    if (this->steer_ratio != other.steer_ratio) {
      return false;
    }
    if (this->rolling_coefficient != other.rolling_coefficient) {
      return false;
    }
    if (this->air_density != other.air_density) {
      return false;
    }
    if (this->air_damping_coefficient != other.air_damping_coefficient) {
      return false;
    }
    if (this->max_front_steer_angle != other.max_front_steer_angle) {
      return false;
    }
    if (this->min_front_steer_angle != other.min_front_steer_angle) {
      return false;
    }
    if (this->max_rear_steer_angle != other.max_rear_steer_angle) {
      return false;
    }
    if (this->min_rear_steer_angle != other.min_rear_steer_angle) {
      return false;
    }
    if (this->speed_limit != other.speed_limit) {
      return false;
    }
    if (this->max_brake_value != other.max_brake_value) {
      return false;
    }
    if (this->min_brake_value != other.min_brake_value) {
      return false;
    }
    if (this->max_accel_value != other.max_accel_value) {
      return false;
    }
    if (this->min_accel_value != other.min_accel_value) {
      return false;
    }
    if (this->speed_deadzone != other.speed_deadzone) {
      return false;
    }
    if (this->standstill_acceleration != other.standstill_acceleration) {
      return false;
    }
    if (this->max_front_steer_angle_rate != other.max_front_steer_angle_rate) {
      return false;
    }
    if (this->max_rear_steer_angle_rate != other.max_rear_steer_angle_rate) {
      return false;
    }
    if (this->max_abs_speed_when_stopped != other.max_abs_speed_when_stopped) {
      return false;
    }
    if (this->max_abs_speed_when_stopped_duration != other.max_abs_speed_when_stopped_duration) {
      return false;
    }
    if (this->brake_value_when_gear_transitioning != other.brake_value_when_gear_transitioning) {
      return false;
    }
    if (this->accel_deadzone != other.accel_deadzone) {
      return false;
    }
    if (this->brake_deadzone != other.brake_deadzone) {
      return false;
    }
    if (this->acceleration_in_idle != other.acceleration_in_idle) {
      return false;
    }
    if (this->deceleration_in_idle != other.deceleration_in_idle) {
      return false;
    }
    if (this->max_acceleration_jerk != other.max_acceleration_jerk) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->max_deceleration != other.max_deceleration) {
      return false;
    }
    if (this->min_turning_radius != other.min_turning_radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleParam_

// alias to use template instance with default allocator
using VehicleParam =
  ros2_interface::msg::VehicleParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_PARAM__STRUCT_HPP_

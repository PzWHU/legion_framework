// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/RadarObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'relative_position'
// Member 'relative_position_rms'
// Member 'relative_velocity'
// Member 'relative_velocity_rms'
// Member 'relative_acceleration'
// Member 'relative_acceleration_rms'
// Member 'absolute_position'
// Member 'absolute_position_rms'
// Member 'absolute_velocity'
// Member 'absolute_velocity_rms'
// Member 'absolute_acceleration'
// Member 'absolute_acceleration_rms'
#include "ros2_interface/msg/detail/point2_d__struct.hpp"
// Member 'status'
#include "ros2_interface/msg/detail/status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__RadarObstacle __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__RadarObstacle __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarObstacle_
{
  using Type = RadarObstacle_<ContainerAllocator>;

  explicit RadarObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : relative_position(_init),
    relative_position_rms(_init),
    relative_velocity(_init),
    relative_velocity_rms(_init),
    relative_acceleration(_init),
    relative_acceleration_rms(_init),
    absolute_position(_init),
    absolute_position_rms(_init),
    absolute_velocity(_init),
    absolute_velocity_rms(_init),
    absolute_acceleration(_init),
    absolute_acceleration_rms(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->life_time = 0;
      this->rcs = 0.0;
      this->snr = 0.0;
      this->moving_status = 0l;
      this->width = 0.0;
      this->length = 0.0;
      this->height = 0.0;
      this->theta = 0.0;
      this->orientation = 0.0;
      this->orient_rms = 0.0;
      this->yaw = 0.0;
      this->yaw_rms = 0.0;
      this->count = 0l;
      this->moving_frames_count = 0l;
      this->underpass_probability = 0.0;
      this->overpass_probability = 0.0;
      this->exist_probability = 0;
      this->mov_property = 0;
      this->track_state = 0;
      this->track_type = 0;
    }
  }

  explicit RadarObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : relative_position(_alloc, _init),
    relative_position_rms(_alloc, _init),
    relative_velocity(_alloc, _init),
    relative_velocity_rms(_alloc, _init),
    relative_acceleration(_alloc, _init),
    relative_acceleration_rms(_alloc, _init),
    absolute_position(_alloc, _init),
    absolute_position_rms(_alloc, _init),
    absolute_velocity(_alloc, _init),
    absolute_velocity_rms(_alloc, _init),
    absolute_acceleration(_alloc, _init),
    absolute_acceleration_rms(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->life_time = 0;
      this->rcs = 0.0;
      this->snr = 0.0;
      this->moving_status = 0l;
      this->width = 0.0;
      this->length = 0.0;
      this->height = 0.0;
      this->theta = 0.0;
      this->orientation = 0.0;
      this->orient_rms = 0.0;
      this->yaw = 0.0;
      this->yaw_rms = 0.0;
      this->count = 0l;
      this->moving_frames_count = 0l;
      this->underpass_probability = 0.0;
      this->overpass_probability = 0.0;
      this->exist_probability = 0;
      this->mov_property = 0;
      this->track_state = 0;
      this->track_type = 0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _life_time_type =
    uint8_t;
  _life_time_type life_time;
  using _relative_position_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _relative_position_type relative_position;
  using _relative_position_rms_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _relative_position_rms_type relative_position_rms;
  using _relative_velocity_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _relative_velocity_type relative_velocity;
  using _relative_velocity_rms_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _relative_velocity_rms_type relative_velocity_rms;
  using _relative_acceleration_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _relative_acceleration_type relative_acceleration;
  using _relative_acceleration_rms_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _relative_acceleration_rms_type relative_acceleration_rms;
  using _rcs_type =
    double;
  _rcs_type rcs;
  using _snr_type =
    double;
  _snr_type snr;
  using _moving_status_type =
    int32_t;
  _moving_status_type moving_status;
  using _width_type =
    double;
  _width_type width;
  using _length_type =
    double;
  _length_type length;
  using _height_type =
    double;
  _height_type height;
  using _theta_type =
    double;
  _theta_type theta;
  using _absolute_position_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _absolute_position_type absolute_position;
  using _absolute_position_rms_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _absolute_position_rms_type absolute_position_rms;
  using _absolute_velocity_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _absolute_velocity_type absolute_velocity;
  using _absolute_velocity_rms_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _absolute_velocity_rms_type absolute_velocity_rms;
  using _absolute_acceleration_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _absolute_acceleration_type absolute_acceleration;
  using _absolute_acceleration_rms_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _absolute_acceleration_rms_type absolute_acceleration_rms;
  using _orientation_type =
    double;
  _orientation_type orientation;
  using _orient_rms_type =
    double;
  _orient_rms_type orient_rms;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _yaw_rms_type =
    double;
  _yaw_rms_type yaw_rms;
  using _count_type =
    int32_t;
  _count_type count;
  using _moving_frames_count_type =
    int32_t;
  _moving_frames_count_type moving_frames_count;
  using _status_type =
    ros2_interface::msg::Status_<ContainerAllocator>;
  _status_type status;
  using _underpass_probability_type =
    double;
  _underpass_probability_type underpass_probability;
  using _overpass_probability_type =
    double;
  _overpass_probability_type overpass_probability;
  using _exist_probability_type =
    uint8_t;
  _exist_probability_type exist_probability;
  using _mov_property_type =
    uint8_t;
  _mov_property_type mov_property;
  using _track_state_type =
    uint8_t;
  _track_state_type track_state;
  using _track_type_type =
    uint8_t;
  _track_type_type track_type;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__life_time(
    const uint8_t & _arg)
  {
    this->life_time = _arg;
    return *this;
  }
  Type & set__relative_position(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->relative_position = _arg;
    return *this;
  }
  Type & set__relative_position_rms(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->relative_position_rms = _arg;
    return *this;
  }
  Type & set__relative_velocity(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->relative_velocity = _arg;
    return *this;
  }
  Type & set__relative_velocity_rms(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->relative_velocity_rms = _arg;
    return *this;
  }
  Type & set__relative_acceleration(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->relative_acceleration = _arg;
    return *this;
  }
  Type & set__relative_acceleration_rms(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->relative_acceleration_rms = _arg;
    return *this;
  }
  Type & set__rcs(
    const double & _arg)
  {
    this->rcs = _arg;
    return *this;
  }
  Type & set__snr(
    const double & _arg)
  {
    this->snr = _arg;
    return *this;
  }
  Type & set__moving_status(
    const int32_t & _arg)
  {
    this->moving_status = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__absolute_position(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->absolute_position = _arg;
    return *this;
  }
  Type & set__absolute_position_rms(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->absolute_position_rms = _arg;
    return *this;
  }
  Type & set__absolute_velocity(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->absolute_velocity = _arg;
    return *this;
  }
  Type & set__absolute_velocity_rms(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->absolute_velocity_rms = _arg;
    return *this;
  }
  Type & set__absolute_acceleration(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->absolute_acceleration = _arg;
    return *this;
  }
  Type & set__absolute_acceleration_rms(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->absolute_acceleration_rms = _arg;
    return *this;
  }
  Type & set__orientation(
    const double & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__orient_rms(
    const double & _arg)
  {
    this->orient_rms = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__yaw_rms(
    const double & _arg)
  {
    this->yaw_rms = _arg;
    return *this;
  }
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__moving_frames_count(
    const int32_t & _arg)
  {
    this->moving_frames_count = _arg;
    return *this;
  }
  Type & set__status(
    const ros2_interface::msg::Status_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__underpass_probability(
    const double & _arg)
  {
    this->underpass_probability = _arg;
    return *this;
  }
  Type & set__overpass_probability(
    const double & _arg)
  {
    this->overpass_probability = _arg;
    return *this;
  }
  Type & set__exist_probability(
    const uint8_t & _arg)
  {
    this->exist_probability = _arg;
    return *this;
  }
  Type & set__mov_property(
    const uint8_t & _arg)
  {
    this->mov_property = _arg;
    return *this;
  }
  Type & set__track_state(
    const uint8_t & _arg)
  {
    this->track_state = _arg;
    return *this;
  }
  Type & set__track_type(
    const uint8_t & _arg)
  {
    this->track_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::RadarObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::RadarObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::RadarObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::RadarObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RadarObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RadarObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::RadarObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::RadarObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::RadarObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::RadarObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__RadarObstacle
    std::shared_ptr<ros2_interface::msg::RadarObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__RadarObstacle
    std::shared_ptr<ros2_interface::msg::RadarObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarObstacle_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->life_time != other.life_time) {
      return false;
    }
    if (this->relative_position != other.relative_position) {
      return false;
    }
    if (this->relative_position_rms != other.relative_position_rms) {
      return false;
    }
    if (this->relative_velocity != other.relative_velocity) {
      return false;
    }
    if (this->relative_velocity_rms != other.relative_velocity_rms) {
      return false;
    }
    if (this->relative_acceleration != other.relative_acceleration) {
      return false;
    }
    if (this->relative_acceleration_rms != other.relative_acceleration_rms) {
      return false;
    }
    if (this->rcs != other.rcs) {
      return false;
    }
    if (this->snr != other.snr) {
      return false;
    }
    if (this->moving_status != other.moving_status) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->absolute_position != other.absolute_position) {
      return false;
    }
    if (this->absolute_position_rms != other.absolute_position_rms) {
      return false;
    }
    if (this->absolute_velocity != other.absolute_velocity) {
      return false;
    }
    if (this->absolute_velocity_rms != other.absolute_velocity_rms) {
      return false;
    }
    if (this->absolute_acceleration != other.absolute_acceleration) {
      return false;
    }
    if (this->absolute_acceleration_rms != other.absolute_acceleration_rms) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->orient_rms != other.orient_rms) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->yaw_rms != other.yaw_rms) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->moving_frames_count != other.moving_frames_count) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->underpass_probability != other.underpass_probability) {
      return false;
    }
    if (this->overpass_probability != other.overpass_probability) {
      return false;
    }
    if (this->exist_probability != other.exist_probability) {
      return false;
    }
    if (this->mov_property != other.mov_property) {
      return false;
    }
    if (this->track_state != other.track_state) {
      return false;
    }
    if (this->track_type != other.track_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarObstacle_

// alias to use template instance with default allocator
using RadarObstacle =
  ros2_interface::msg::RadarObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/PerceptionObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
// Member 'velocity'
// Member 'polygon_point'
// Member 'drops'
// Member 'acceleration'
// Member 'anchor_point'
// Member 'bounding_box'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__PerceptionObstacle __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__PerceptionObstacle __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceptionObstacle_
{
  using Type = PerceptionObstacle_<ContainerAllocator>;

  explicit PerceptionObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init),
    drops(_init),
    acceleration(_init),
    anchor_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->theta = 0.0;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->tracking_time = 0.0;
      this->type = 0l;
      this->lane_position = 0l;
      this->confidence = 0.0;
      this->timestamp = 0.0;
      this->confidence_type = 0;
      this->sub_type = 0l;
      this->height_above_ground = 0.0;
      this->light_status = 0;
    }
  }

  explicit PerceptionObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    velocity(_alloc, _init),
    drops(_alloc, _init),
    acceleration(_alloc, _init),
    anchor_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->theta = 0.0;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->tracking_time = 0.0;
      this->type = 0l;
      this->lane_position = 0l;
      this->confidence = 0.0;
      this->timestamp = 0.0;
      this->confidence_type = 0;
      this->sub_type = 0l;
      this->height_above_ground = 0.0;
      this->light_status = 0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _position_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _position_type position;
  using _theta_type =
    double;
  _theta_type theta;
  using _velocity_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _velocity_type velocity;
  using _length_type =
    double;
  _length_type length;
  using _width_type =
    double;
  _width_type width;
  using _height_type =
    double;
  _height_type height;
  using _polygon_point_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _polygon_point_type polygon_point;
  using _tracking_time_type =
    double;
  _tracking_time_type tracking_time;
  using _type_type =
    int32_t;
  _type_type type;
  using _lane_position_type =
    int32_t;
  _lane_position_type lane_position;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _confidence_type_type =
    uint8_t;
  _confidence_type_type confidence_type;
  using _drops_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _drops_type drops;
  using _acceleration_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _anchor_point_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _anchor_point_type anchor_point;
  using _bounding_box_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _bounding_box_type bounding_box;
  using _sub_type_type =
    int32_t;
  _sub_type_type sub_type;
  using _height_above_ground_type =
    double;
  _height_above_ground_type height_above_ground;
  using _position_covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_covariance_type position_covariance;
  using _velocity_covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _velocity_covariance_type velocity_covariance;
  using _acceleration_covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _acceleration_covariance_type acceleration_covariance;
  using _light_status_type =
    uint8_t;
  _light_status_type light_status;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__velocity(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
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
  Type & set__polygon_point(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->polygon_point = _arg;
    return *this;
  }
  Type & set__tracking_time(
    const double & _arg)
  {
    this->tracking_time = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__lane_position(
    const int32_t & _arg)
  {
    this->lane_position = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__confidence_type(
    const uint8_t & _arg)
  {
    this->confidence_type = _arg;
    return *this;
  }
  Type & set__drops(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->drops = _arg;
    return *this;
  }
  Type & set__acceleration(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__anchor_point(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->anchor_point = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__sub_type(
    const int32_t & _arg)
  {
    this->sub_type = _arg;
    return *this;
  }
  Type & set__height_above_ground(
    const double & _arg)
  {
    this->height_above_ground = _arg;
    return *this;
  }
  Type & set__position_covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position_covariance = _arg;
    return *this;
  }
  Type & set__velocity_covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->velocity_covariance = _arg;
    return *this;
  }
  Type & set__acceleration_covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->acceleration_covariance = _arg;
    return *this;
  }
  Type & set__light_status(
    const uint8_t & _arg)
  {
    this->light_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::PerceptionObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::PerceptionObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::PerceptionObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::PerceptionObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PerceptionObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PerceptionObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::PerceptionObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::PerceptionObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::PerceptionObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::PerceptionObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__PerceptionObstacle
    std::shared_ptr<ros2_interface::msg::PerceptionObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__PerceptionObstacle
    std::shared_ptr<ros2_interface::msg::PerceptionObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceptionObstacle_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->velocity != other.velocity) {
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
    if (this->polygon_point != other.polygon_point) {
      return false;
    }
    if (this->tracking_time != other.tracking_time) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->lane_position != other.lane_position) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->confidence_type != other.confidence_type) {
      return false;
    }
    if (this->drops != other.drops) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->anchor_point != other.anchor_point) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->sub_type != other.sub_type) {
      return false;
    }
    if (this->height_above_ground != other.height_above_ground) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    if (this->velocity_covariance != other.velocity_covariance) {
      return false;
    }
    if (this->acceleration_covariance != other.acceleration_covariance) {
      return false;
    }
    if (this->light_status != other.light_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceptionObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceptionObstacle_

// alias to use template instance with default allocator
using PerceptionObstacle =
  ros2_interface::msg::PerceptionObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__STRUCT_HPP_

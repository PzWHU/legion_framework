// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
// Member 'create_time'
// Member 'last_updated_time'
#include "ros2_interface/msg/detail/time__struct.hpp"
// Member 'center_pos_vehicle'
// Member 'center_pos_abs'
// Member 'velocity_vehicle'
// Member 'velocity_abs'
// Member 'polygon_point_abs'
// Member 'polygon_point_vehicle'
// Member 'drops'
// Member 'acceleration_vehicle'
// Member 'acceleration_abs'
// Member 'anchor_point_vehicle'
// Member 'anchor_point_abs'
#include "ros2_interface/msg/detail/point3_d__struct.hpp"
// Member 'image_key_points'
#include "ros2_interface/msg/detail/image_key_point__struct.hpp"
// Member 'anchor_point_image'
#include "ros2_interface/msg/detail/point2_d__struct.hpp"
// Member 'bbox2d'
// Member 'bbox2d_rear'
#include "ros2_interface/msg/detail/b_box2_d__struct.hpp"
// Member 'sensor_calibrator'
#include "ros2_interface/msg/detail/sensor_calibrator__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Obstacle __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Obstacle __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Obstacle_
{
  using Type = Obstacle_<ContainerAllocator>;

  explicit Obstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    create_time(_init),
    last_updated_time(_init),
    center_pos_vehicle(_init),
    center_pos_abs(_init),
    velocity_vehicle(_init),
    velocity_abs(_init),
    acceleration_vehicle(_init),
    acceleration_abs(_init),
    anchor_point_image(_init),
    anchor_point_vehicle(_init),
    anchor_point_abs(_init),
    bbox2d(_init),
    bbox2d_rear(_init),
    sensor_calibrator(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->existence_prob = 0.0;
      this->theta_vehicle = 0.0;
      this->theta_abs = 0.0;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->tracking_time = 0.0;
      this->type = 0l;
      this->confidence = 0.0;
      this->confidence_type = 0l;
      this->sub_type = 0l;
      this->height_above_ground = 0.0;
      this->theta_abs_covariance = 0.0;
      this->theta_vehicle_covariance = 0.0;
      this->cipv_flag = 0;
      this->lane_position = 0l;
      this->pihp_percentage = 0.0;
      this->blinker_flag = 0l;
      this->fusion_type = 0l;
    }
  }

  explicit Obstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    create_time(_alloc, _init),
    last_updated_time(_alloc, _init),
    center_pos_vehicle(_alloc, _init),
    center_pos_abs(_alloc, _init),
    velocity_vehicle(_alloc, _init),
    velocity_abs(_alloc, _init),
    acceleration_vehicle(_alloc, _init),
    acceleration_abs(_alloc, _init),
    anchor_point_image(_alloc, _init),
    anchor_point_vehicle(_alloc, _init),
    anchor_point_abs(_alloc, _init),
    bbox2d(_alloc, _init),
    bbox2d_rear(_alloc, _init),
    sensor_calibrator(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->existence_prob = 0.0;
      this->theta_vehicle = 0.0;
      this->theta_abs = 0.0;
      this->length = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->tracking_time = 0.0;
      this->type = 0l;
      this->confidence = 0.0;
      this->confidence_type = 0l;
      this->sub_type = 0l;
      this->height_above_ground = 0.0;
      this->theta_abs_covariance = 0.0;
      this->theta_vehicle_covariance = 0.0;
      this->cipv_flag = 0;
      this->lane_position = 0l;
      this->pihp_percentage = 0.0;
      this->blinker_flag = 0l;
      this->fusion_type = 0l;
    }
  }

  // field types and members
  using _timestamp_type =
    ros2_interface::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _id_type =
    int32_t;
  _id_type id;
  using _existence_prob_type =
    double;
  _existence_prob_type existence_prob;
  using _create_time_type =
    ros2_interface::msg::Time_<ContainerAllocator>;
  _create_time_type create_time;
  using _last_updated_time_type =
    ros2_interface::msg::Time_<ContainerAllocator>;
  _last_updated_time_type last_updated_time;
  using _center_pos_vehicle_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _center_pos_vehicle_type center_pos_vehicle;
  using _center_pos_abs_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _center_pos_abs_type center_pos_abs;
  using _theta_vehicle_type =
    double;
  _theta_vehicle_type theta_vehicle;
  using _theta_abs_type =
    double;
  _theta_abs_type theta_abs;
  using _velocity_vehicle_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _velocity_vehicle_type velocity_vehicle;
  using _velocity_abs_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _velocity_abs_type velocity_abs;
  using _length_type =
    double;
  _length_type length;
  using _width_type =
    double;
  _width_type width;
  using _height_type =
    double;
  _height_type height;
  using _image_key_points_type =
    std::vector<ros2_interface::msg::ImageKeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::ImageKeyPoint_<ContainerAllocator>>>;
  _image_key_points_type image_key_points;
  using _polygon_point_abs_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _polygon_point_abs_type polygon_point_abs;
  using _polygon_point_vehicle_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _polygon_point_vehicle_type polygon_point_vehicle;
  using _tracking_time_type =
    double;
  _tracking_time_type tracking_time;
  using _type_type =
    int32_t;
  _type_type type;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _confidence_type_type =
    int32_t;
  _confidence_type_type confidence_type;
  using _drops_type =
    std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>>;
  _drops_type drops;
  using _acceleration_vehicle_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _acceleration_vehicle_type acceleration_vehicle;
  using _acceleration_abs_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _acceleration_abs_type acceleration_abs;
  using _anchor_point_image_type =
    ros2_interface::msg::Point2D_<ContainerAllocator>;
  _anchor_point_image_type anchor_point_image;
  using _anchor_point_vehicle_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _anchor_point_vehicle_type anchor_point_vehicle;
  using _anchor_point_abs_type =
    ros2_interface::msg::Point3D_<ContainerAllocator>;
  _anchor_point_abs_type anchor_point_abs;
  using _bbox2d_type =
    ros2_interface::msg::BBox2D_<ContainerAllocator>;
  _bbox2d_type bbox2d;
  using _bbox2d_rear_type =
    ros2_interface::msg::BBox2D_<ContainerAllocator>;
  _bbox2d_rear_type bbox2d_rear;
  using _sub_type_type =
    int32_t;
  _sub_type_type sub_type;
  using _height_above_ground_type =
    double;
  _height_above_ground_type height_above_ground;
  using _position_abs_covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_abs_covariance_type position_abs_covariance;
  using _velocity_abs_covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _velocity_abs_covariance_type velocity_abs_covariance;
  using _acceleration_abs_covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _acceleration_abs_covariance_type acceleration_abs_covariance;
  using _theta_abs_covariance_type =
    double;
  _theta_abs_covariance_type theta_abs_covariance;
  using _position_vehicle_covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_vehicle_covariance_type position_vehicle_covariance;
  using _velocity_vehicle_covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _velocity_vehicle_covariance_type velocity_vehicle_covariance;
  using _acceleration_vehicle_covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _acceleration_vehicle_covariance_type acceleration_vehicle_covariance;
  using _theta_vehicle_covariance_type =
    double;
  _theta_vehicle_covariance_type theta_vehicle_covariance;
  using _sensor_calibrator_type =
    ros2_interface::msg::SensorCalibrator_<ContainerAllocator>;
  _sensor_calibrator_type sensor_calibrator;
  using _cipv_flag_type =
    uint8_t;
  _cipv_flag_type cipv_flag;
  using _lane_position_type =
    int32_t;
  _lane_position_type lane_position;
  using _pihp_percentage_type =
    double;
  _pihp_percentage_type pihp_percentage;
  using _blinker_flag_type =
    int32_t;
  _blinker_flag_type blinker_flag;
  using _fusion_type_type =
    int32_t;
  _fusion_type_type fusion_type;

  // setters for named parameter idiom
  Type & set__timestamp(
    const ros2_interface::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__existence_prob(
    const double & _arg)
  {
    this->existence_prob = _arg;
    return *this;
  }
  Type & set__create_time(
    const ros2_interface::msg::Time_<ContainerAllocator> & _arg)
  {
    this->create_time = _arg;
    return *this;
  }
  Type & set__last_updated_time(
    const ros2_interface::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_updated_time = _arg;
    return *this;
  }
  Type & set__center_pos_vehicle(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->center_pos_vehicle = _arg;
    return *this;
  }
  Type & set__center_pos_abs(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->center_pos_abs = _arg;
    return *this;
  }
  Type & set__theta_vehicle(
    const double & _arg)
  {
    this->theta_vehicle = _arg;
    return *this;
  }
  Type & set__theta_abs(
    const double & _arg)
  {
    this->theta_abs = _arg;
    return *this;
  }
  Type & set__velocity_vehicle(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->velocity_vehicle = _arg;
    return *this;
  }
  Type & set__velocity_abs(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->velocity_abs = _arg;
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
  Type & set__image_key_points(
    const std::vector<ros2_interface::msg::ImageKeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::ImageKeyPoint_<ContainerAllocator>>> & _arg)
  {
    this->image_key_points = _arg;
    return *this;
  }
  Type & set__polygon_point_abs(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->polygon_point_abs = _arg;
    return *this;
  }
  Type & set__polygon_point_vehicle(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->polygon_point_vehicle = _arg;
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
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__confidence_type(
    const int32_t & _arg)
  {
    this->confidence_type = _arg;
    return *this;
  }
  Type & set__drops(
    const std::vector<ros2_interface::msg::Point3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Point3D_<ContainerAllocator>>> & _arg)
  {
    this->drops = _arg;
    return *this;
  }
  Type & set__acceleration_vehicle(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->acceleration_vehicle = _arg;
    return *this;
  }
  Type & set__acceleration_abs(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->acceleration_abs = _arg;
    return *this;
  }
  Type & set__anchor_point_image(
    const ros2_interface::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->anchor_point_image = _arg;
    return *this;
  }
  Type & set__anchor_point_vehicle(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->anchor_point_vehicle = _arg;
    return *this;
  }
  Type & set__anchor_point_abs(
    const ros2_interface::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->anchor_point_abs = _arg;
    return *this;
  }
  Type & set__bbox2d(
    const ros2_interface::msg::BBox2D_<ContainerAllocator> & _arg)
  {
    this->bbox2d = _arg;
    return *this;
  }
  Type & set__bbox2d_rear(
    const ros2_interface::msg::BBox2D_<ContainerAllocator> & _arg)
  {
    this->bbox2d_rear = _arg;
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
  Type & set__position_abs_covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position_abs_covariance = _arg;
    return *this;
  }
  Type & set__velocity_abs_covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->velocity_abs_covariance = _arg;
    return *this;
  }
  Type & set__acceleration_abs_covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->acceleration_abs_covariance = _arg;
    return *this;
  }
  Type & set__theta_abs_covariance(
    const double & _arg)
  {
    this->theta_abs_covariance = _arg;
    return *this;
  }
  Type & set__position_vehicle_covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position_vehicle_covariance = _arg;
    return *this;
  }
  Type & set__velocity_vehicle_covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->velocity_vehicle_covariance = _arg;
    return *this;
  }
  Type & set__acceleration_vehicle_covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->acceleration_vehicle_covariance = _arg;
    return *this;
  }
  Type & set__theta_vehicle_covariance(
    const double & _arg)
  {
    this->theta_vehicle_covariance = _arg;
    return *this;
  }
  Type & set__sensor_calibrator(
    const ros2_interface::msg::SensorCalibrator_<ContainerAllocator> & _arg)
  {
    this->sensor_calibrator = _arg;
    return *this;
  }
  Type & set__cipv_flag(
    const uint8_t & _arg)
  {
    this->cipv_flag = _arg;
    return *this;
  }
  Type & set__lane_position(
    const int32_t & _arg)
  {
    this->lane_position = _arg;
    return *this;
  }
  Type & set__pihp_percentage(
    const double & _arg)
  {
    this->pihp_percentage = _arg;
    return *this;
  }
  Type & set__blinker_flag(
    const int32_t & _arg)
  {
    this->blinker_flag = _arg;
    return *this;
  }
  Type & set__fusion_type(
    const int32_t & _arg)
  {
    this->fusion_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Obstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Obstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Obstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Obstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Obstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Obstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Obstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Obstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Obstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Obstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Obstacle
    std::shared_ptr<ros2_interface::msg::Obstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Obstacle
    std::shared_ptr<ros2_interface::msg::Obstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Obstacle_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->existence_prob != other.existence_prob) {
      return false;
    }
    if (this->create_time != other.create_time) {
      return false;
    }
    if (this->last_updated_time != other.last_updated_time) {
      return false;
    }
    if (this->center_pos_vehicle != other.center_pos_vehicle) {
      return false;
    }
    if (this->center_pos_abs != other.center_pos_abs) {
      return false;
    }
    if (this->theta_vehicle != other.theta_vehicle) {
      return false;
    }
    if (this->theta_abs != other.theta_abs) {
      return false;
    }
    if (this->velocity_vehicle != other.velocity_vehicle) {
      return false;
    }
    if (this->velocity_abs != other.velocity_abs) {
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
    if (this->image_key_points != other.image_key_points) {
      return false;
    }
    if (this->polygon_point_abs != other.polygon_point_abs) {
      return false;
    }
    if (this->polygon_point_vehicle != other.polygon_point_vehicle) {
      return false;
    }
    if (this->tracking_time != other.tracking_time) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->confidence_type != other.confidence_type) {
      return false;
    }
    if (this->drops != other.drops) {
      return false;
    }
    if (this->acceleration_vehicle != other.acceleration_vehicle) {
      return false;
    }
    if (this->acceleration_abs != other.acceleration_abs) {
      return false;
    }
    if (this->anchor_point_image != other.anchor_point_image) {
      return false;
    }
    if (this->anchor_point_vehicle != other.anchor_point_vehicle) {
      return false;
    }
    if (this->anchor_point_abs != other.anchor_point_abs) {
      return false;
    }
    if (this->bbox2d != other.bbox2d) {
      return false;
    }
    if (this->bbox2d_rear != other.bbox2d_rear) {
      return false;
    }
    if (this->sub_type != other.sub_type) {
      return false;
    }
    if (this->height_above_ground != other.height_above_ground) {
      return false;
    }
    if (this->position_abs_covariance != other.position_abs_covariance) {
      return false;
    }
    if (this->velocity_abs_covariance != other.velocity_abs_covariance) {
      return false;
    }
    if (this->acceleration_abs_covariance != other.acceleration_abs_covariance) {
      return false;
    }
    if (this->theta_abs_covariance != other.theta_abs_covariance) {
      return false;
    }
    if (this->position_vehicle_covariance != other.position_vehicle_covariance) {
      return false;
    }
    if (this->velocity_vehicle_covariance != other.velocity_vehicle_covariance) {
      return false;
    }
    if (this->acceleration_vehicle_covariance != other.acceleration_vehicle_covariance) {
      return false;
    }
    if (this->theta_vehicle_covariance != other.theta_vehicle_covariance) {
      return false;
    }
    if (this->sensor_calibrator != other.sensor_calibrator) {
      return false;
    }
    if (this->cipv_flag != other.cipv_flag) {
      return false;
    }
    if (this->lane_position != other.lane_position) {
      return false;
    }
    if (this->pihp_percentage != other.pihp_percentage) {
      return false;
    }
    if (this->blinker_flag != other.blinker_flag) {
      return false;
    }
    if (this->fusion_type != other.fusion_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Obstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Obstacle_

// alias to use template instance with default allocator
using Obstacle =
  ros2_interface::msg::Obstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__STRUCT_HPP_

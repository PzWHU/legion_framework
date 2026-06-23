// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/LaneList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LIST__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LIST__STRUCT_HPP_

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
// Member 'sensor_calibrator'
#include "ros2_interface/msg/detail/sensor_calibrator__struct.hpp"
// Member 'camera_laneline'
#include "ros2_interface/msg/detail/lane_line__struct.hpp"
// Member 'hpp'
#include "ros2_interface/msg/detail/holistic_path_prediction__struct.hpp"
// Member 'road_marks'
#include "ros2_interface/msg/detail/road_mark__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__LaneList __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__LaneList __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneList_
{
  using Type = LaneList_<ContainerAllocator>;

  explicit LaneList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    sensor_calibrator(_init),
    hpp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0l;
      this->error_code = 0;
      this->sensor_status = 0;
      this->change_origin_flag = 0l;
      this->is_valid = false;
    }
  }

  explicit LaneList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor_calibrator(_alloc, _init),
    hpp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0l;
      this->error_code = 0;
      this->sensor_status = 0;
      this->change_origin_flag = 0l;
      this->is_valid = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_id_type =
    int32_t;
  _sensor_id_type sensor_id;
  using _error_code_type =
    int8_t;
  _error_code_type error_code;
  using _sensor_status_type =
    uint8_t;
  _sensor_status_type sensor_status;
  using _change_origin_flag_type =
    int32_t;
  _change_origin_flag_type change_origin_flag;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _sensor_calibrator_type =
    ros2_interface::msg::SensorCalibrator_<ContainerAllocator>;
  _sensor_calibrator_type sensor_calibrator;
  using _camera_laneline_type =
    std::vector<ros2_interface::msg::LaneLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneLine_<ContainerAllocator>>>;
  _camera_laneline_type camera_laneline;
  using _hpp_type =
    ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator>;
  _hpp_type hpp;
  using _road_marks_type =
    std::vector<ros2_interface::msg::RoadMark_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::RoadMark_<ContainerAllocator>>>;
  _road_marks_type road_marks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const int32_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__error_code(
    const int8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__sensor_status(
    const uint8_t & _arg)
  {
    this->sensor_status = _arg;
    return *this;
  }
  Type & set__change_origin_flag(
    const int32_t & _arg)
  {
    this->change_origin_flag = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__sensor_calibrator(
    const ros2_interface::msg::SensorCalibrator_<ContainerAllocator> & _arg)
  {
    this->sensor_calibrator = _arg;
    return *this;
  }
  Type & set__camera_laneline(
    const std::vector<ros2_interface::msg::LaneLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::LaneLine_<ContainerAllocator>>> & _arg)
  {
    this->camera_laneline = _arg;
    return *this;
  }
  Type & set__hpp(
    const ros2_interface::msg::HolisticPathPrediction_<ContainerAllocator> & _arg)
  {
    this->hpp = _arg;
    return *this;
  }
  Type & set__road_marks(
    const std::vector<ros2_interface::msg::RoadMark_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::RoadMark_<ContainerAllocator>>> & _arg)
  {
    this->road_marks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::LaneList_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::LaneList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::LaneList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::LaneList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::LaneList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::LaneList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__LaneList
    std::shared_ptr<ros2_interface::msg::LaneList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__LaneList
    std::shared_ptr<ros2_interface::msg::LaneList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->sensor_status != other.sensor_status) {
      return false;
    }
    if (this->change_origin_flag != other.change_origin_flag) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->sensor_calibrator != other.sensor_calibrator) {
      return false;
    }
    if (this->camera_laneline != other.camera_laneline) {
      return false;
    }
    if (this->hpp != other.hpp) {
      return false;
    }
    if (this->road_marks != other.road_marks) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneList_

// alias to use template instance with default allocator
using LaneList =
  ros2_interface::msg::LaneList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LIST__STRUCT_HPP_

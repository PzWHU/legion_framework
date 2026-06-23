// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/LaneLine.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/lane_line__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/lane_line__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::LaneLineCubicCurve &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::LaneLineCubicCurve &);
size_t get_serialized_size(
  const ros2_interface::msg::LaneLineCubicCurve &,
  size_t current_alignment);
size_t
max_serialized_size_LaneLineCubicCurve(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface

// functions for ros2_interface::msg::LaneLineCubicCurve already declared above

// functions for ros2_interface::msg::LaneLineCubicCurve already declared above

namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::Point3D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::Point3D &);
size_t get_serialized_size(
  const ros2_interface::msg::Point3D &,
  size_t current_alignment);
size_t
max_serialized_size_Point3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface

namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::Point2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::Point2D &);
size_t get_serialized_size(
  const ros2_interface::msg::Point2D &,
  size_t current_alignment);
size_t
max_serialized_size_Point2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface

// functions for ros2_interface::msg::Point3D already declared above

namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::EndPoints &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::EndPoints &);
size_t get_serialized_size(
  const ros2_interface::msg::EndPoints &,
  size_t current_alignment);
size_t
max_serialized_size_EndPoints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface

// functions for ros2_interface::msg::Point2D already declared above

namespace ros2_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2_interface::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2_interface::msg::Time &);
size_t get_serialized_size(
  const ros2_interface::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2_interface


namespace ros2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_serialize(
  const ros2_interface::msg::LaneLine & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lane_type
  cdr << ros_message.lane_type;
  // Member: lane_color
  cdr << ros_message.lane_color;
  // Member: pos_type
  cdr << ros_message.pos_type;
  // Member: curve_vehicle
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.curve_vehicle,
    cdr);
  // Member: curve_image
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.curve_image,
    cdr);
  // Member: curve_abs
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.curve_abs,
    cdr);
  // Member: pts_vehicle
  {
    size_t size = ros_message.pts_vehicle.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.pts_vehicle[i],
        cdr);
    }
  }
  // Member: pts_image
  {
    size_t size = ros_message.pts_image.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.pts_image[i],
        cdr);
    }
  }
  // Member: pts_abs
  {
    size_t size = ros_message.pts_abs.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.pts_abs[i],
        cdr);
    }
  }
  // Member: image_end_point
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.image_end_point,
    cdr);
  // Member: pts_key
  {
    size_t size = ros_message.pts_key.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.pts_key[i],
        cdr);
    }
  }
  // Member: hd_lane_id
  cdr << ros_message.hd_lane_id;
  // Member: confidence
  cdr << ros_message.confidence;
  // Member: lane_quality
  cdr << ros_message.lane_quality;
  // Member: fused_lane_type
  cdr << ros_message.fused_lane_type;
  // Member: homography_mat
  {
    cdr << ros_message.homography_mat;
  }
  // Member: homography_mat_inv
  {
    cdr << ros_message.homography_mat_inv;
  }
  // Member: lane_coordinate_type
  cdr << ros_message.lane_coordinate_type;
  // Member: use_type
  cdr << ros_message.use_type;
  // Member: create_time
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.create_time,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::LaneLine & ros_message)
{
  // Member: lane_type
  cdr >> ros_message.lane_type;

  // Member: lane_color
  cdr >> ros_message.lane_color;

  // Member: pos_type
  cdr >> ros_message.pos_type;

  // Member: curve_vehicle
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.curve_vehicle);

  // Member: curve_image
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.curve_image);

  // Member: curve_abs
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.curve_abs);

  // Member: pts_vehicle
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.pts_vehicle.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.pts_vehicle[i]);
    }
  }

  // Member: pts_image
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.pts_image.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.pts_image[i]);
    }
  }

  // Member: pts_abs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.pts_abs.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.pts_abs[i]);
    }
  }

  // Member: image_end_point
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.image_end_point);

  // Member: pts_key
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.pts_key.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.pts_key[i]);
    }
  }

  // Member: hd_lane_id
  cdr >> ros_message.hd_lane_id;

  // Member: confidence
  cdr >> ros_message.confidence;

  // Member: lane_quality
  cdr >> ros_message.lane_quality;

  // Member: fused_lane_type
  cdr >> ros_message.fused_lane_type;

  // Member: homography_mat
  {
    cdr >> ros_message.homography_mat;
  }

  // Member: homography_mat_inv
  {
    cdr >> ros_message.homography_mat_inv;
  }

  // Member: lane_coordinate_type
  cdr >> ros_message.lane_coordinate_type;

  // Member: use_type
  cdr >> ros_message.use_type;

  // Member: create_time
  ros2_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.create_time);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::LaneLine & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lane_type
  {
    size_t item_size = sizeof(ros_message.lane_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_color
  {
    size_t item_size = sizeof(ros_message.lane_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_type
  {
    size_t item_size = sizeof(ros_message.pos_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curve_vehicle

  current_alignment +=
    ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.curve_vehicle, current_alignment);
  // Member: curve_image

  current_alignment +=
    ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.curve_image, current_alignment);
  // Member: curve_abs

  current_alignment +=
    ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.curve_abs, current_alignment);
  // Member: pts_vehicle
  {
    size_t array_size = ros_message.pts_vehicle.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.pts_vehicle[index], current_alignment);
    }
  }
  // Member: pts_image
  {
    size_t array_size = ros_message.pts_image.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.pts_image[index], current_alignment);
    }
  }
  // Member: pts_abs
  {
    size_t array_size = ros_message.pts_abs.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.pts_abs[index], current_alignment);
    }
  }
  // Member: image_end_point

  current_alignment +=
    ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.image_end_point, current_alignment);
  // Member: pts_key
  {
    size_t array_size = ros_message.pts_key.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.pts_key[index], current_alignment);
    }
  }
  // Member: hd_lane_id
  {
    size_t item_size = sizeof(ros_message.hd_lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: confidence
  {
    size_t item_size = sizeof(ros_message.confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_quality
  {
    size_t item_size = sizeof(ros_message.lane_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fused_lane_type
  {
    size_t item_size = sizeof(ros_message.fused_lane_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: homography_mat
  {
    size_t array_size = ros_message.homography_mat.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.homography_mat[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: homography_mat_inv
  {
    size_t array_size = ros_message.homography_mat_inv.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.homography_mat_inv[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_coordinate_type
  {
    size_t item_size = sizeof(ros_message.lane_coordinate_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_type
  {
    size_t item_size = sizeof(ros_message.use_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: create_time

  current_alignment +=
    ros2_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.create_time, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_LaneLine(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: lane_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lane_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: curve_vehicle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneLineCubicCurve(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: curve_image
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneLineCubicCurve(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: curve_abs
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneLineCubicCurve(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: pts_vehicle
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: pts_image
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: pts_abs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: image_end_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_EndPoints(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: pts_key
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: hd_lane_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lane_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fused_lane_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: homography_mat
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: homography_mat_inv
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lane_coordinate_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: use_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: create_time
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface::msg::LaneLine;
    is_plain =
      (
      offsetof(DataType, create_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LaneLine__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::LaneLine *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneLine__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::LaneLine *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneLine__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::LaneLine *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneLine__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaneLine(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaneLine__callbacks = {
  "ros2_interface::msg",
  "LaneLine",
  _LaneLine__cdr_serialize,
  _LaneLine__cdr_deserialize,
  _LaneLine__get_serialized_size,
  _LaneLine__max_serialized_size
};

static rosidl_message_type_support_t _LaneLine__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneLine__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_interface::msg::LaneLine>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_LaneLine__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, LaneLine)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_LaneLine__handle;
}

#ifdef __cplusplus
}
#endif

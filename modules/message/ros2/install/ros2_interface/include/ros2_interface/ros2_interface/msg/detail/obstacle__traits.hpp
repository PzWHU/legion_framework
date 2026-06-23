// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
// Member 'create_time'
// Member 'last_updated_time'
#include "ros2_interface/msg/detail/time__traits.hpp"
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
#include "ros2_interface/msg/detail/point3_d__traits.hpp"
// Member 'image_key_points'
#include "ros2_interface/msg/detail/image_key_point__traits.hpp"
// Member 'anchor_point_image'
#include "ros2_interface/msg/detail/point2_d__traits.hpp"
// Member 'bbox2d'
// Member 'bbox2d_rear'
#include "ros2_interface/msg/detail/b_box2_d__traits.hpp"
// Member 'sensor_calibrator'
#include "ros2_interface/msg/detail/sensor_calibrator__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: existence_prob
  {
    out << "existence_prob: ";
    rosidl_generator_traits::value_to_yaml(msg.existence_prob, out);
    out << ", ";
  }

  // member: create_time
  {
    out << "create_time: ";
    to_flow_style_yaml(msg.create_time, out);
    out << ", ";
  }

  // member: last_updated_time
  {
    out << "last_updated_time: ";
    to_flow_style_yaml(msg.last_updated_time, out);
    out << ", ";
  }

  // member: center_pos_vehicle
  {
    out << "center_pos_vehicle: ";
    to_flow_style_yaml(msg.center_pos_vehicle, out);
    out << ", ";
  }

  // member: center_pos_abs
  {
    out << "center_pos_abs: ";
    to_flow_style_yaml(msg.center_pos_abs, out);
    out << ", ";
  }

  // member: theta_vehicle
  {
    out << "theta_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_vehicle, out);
    out << ", ";
  }

  // member: theta_abs
  {
    out << "theta_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_abs, out);
    out << ", ";
  }

  // member: velocity_vehicle
  {
    out << "velocity_vehicle: ";
    to_flow_style_yaml(msg.velocity_vehicle, out);
    out << ", ";
  }

  // member: velocity_abs
  {
    out << "velocity_abs: ";
    to_flow_style_yaml(msg.velocity_abs, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: image_key_points
  {
    if (msg.image_key_points.size() == 0) {
      out << "image_key_points: []";
    } else {
      out << "image_key_points: [";
      size_t pending_items = msg.image_key_points.size();
      for (auto item : msg.image_key_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: polygon_point_abs
  {
    if (msg.polygon_point_abs.size() == 0) {
      out << "polygon_point_abs: []";
    } else {
      out << "polygon_point_abs: [";
      size_t pending_items = msg.polygon_point_abs.size();
      for (auto item : msg.polygon_point_abs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: polygon_point_vehicle
  {
    if (msg.polygon_point_vehicle.size() == 0) {
      out << "polygon_point_vehicle: []";
    } else {
      out << "polygon_point_vehicle: [";
      size_t pending_items = msg.polygon_point_vehicle.size();
      for (auto item : msg.polygon_point_vehicle) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tracking_time
  {
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: confidence_type
  {
    out << "confidence_type: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_type, out);
    out << ", ";
  }

  // member: drops
  {
    if (msg.drops.size() == 0) {
      out << "drops: []";
    } else {
      out << "drops: [";
      size_t pending_items = msg.drops.size();
      for (auto item : msg.drops) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration_vehicle
  {
    out << "acceleration_vehicle: ";
    to_flow_style_yaml(msg.acceleration_vehicle, out);
    out << ", ";
  }

  // member: acceleration_abs
  {
    out << "acceleration_abs: ";
    to_flow_style_yaml(msg.acceleration_abs, out);
    out << ", ";
  }

  // member: anchor_point_image
  {
    out << "anchor_point_image: ";
    to_flow_style_yaml(msg.anchor_point_image, out);
    out << ", ";
  }

  // member: anchor_point_vehicle
  {
    out << "anchor_point_vehicle: ";
    to_flow_style_yaml(msg.anchor_point_vehicle, out);
    out << ", ";
  }

  // member: anchor_point_abs
  {
    out << "anchor_point_abs: ";
    to_flow_style_yaml(msg.anchor_point_abs, out);
    out << ", ";
  }

  // member: bbox2d
  {
    out << "bbox2d: ";
    to_flow_style_yaml(msg.bbox2d, out);
    out << ", ";
  }

  // member: bbox2d_rear
  {
    out << "bbox2d_rear: ";
    to_flow_style_yaml(msg.bbox2d_rear, out);
    out << ", ";
  }

  // member: sub_type
  {
    out << "sub_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_type, out);
    out << ", ";
  }

  // member: height_above_ground
  {
    out << "height_above_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_ground, out);
    out << ", ";
  }

  // member: position_abs_covariance
  {
    if (msg.position_abs_covariance.size() == 0) {
      out << "position_abs_covariance: []";
    } else {
      out << "position_abs_covariance: [";
      size_t pending_items = msg.position_abs_covariance.size();
      for (auto item : msg.position_abs_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity_abs_covariance
  {
    if (msg.velocity_abs_covariance.size() == 0) {
      out << "velocity_abs_covariance: []";
    } else {
      out << "velocity_abs_covariance: [";
      size_t pending_items = msg.velocity_abs_covariance.size();
      for (auto item : msg.velocity_abs_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration_abs_covariance
  {
    if (msg.acceleration_abs_covariance.size() == 0) {
      out << "acceleration_abs_covariance: []";
    } else {
      out << "acceleration_abs_covariance: [";
      size_t pending_items = msg.acceleration_abs_covariance.size();
      for (auto item : msg.acceleration_abs_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: theta_abs_covariance
  {
    out << "theta_abs_covariance: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_abs_covariance, out);
    out << ", ";
  }

  // member: position_vehicle_covariance
  {
    if (msg.position_vehicle_covariance.size() == 0) {
      out << "position_vehicle_covariance: []";
    } else {
      out << "position_vehicle_covariance: [";
      size_t pending_items = msg.position_vehicle_covariance.size();
      for (auto item : msg.position_vehicle_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity_vehicle_covariance
  {
    if (msg.velocity_vehicle_covariance.size() == 0) {
      out << "velocity_vehicle_covariance: []";
    } else {
      out << "velocity_vehicle_covariance: [";
      size_t pending_items = msg.velocity_vehicle_covariance.size();
      for (auto item : msg.velocity_vehicle_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration_vehicle_covariance
  {
    if (msg.acceleration_vehicle_covariance.size() == 0) {
      out << "acceleration_vehicle_covariance: []";
    } else {
      out << "acceleration_vehicle_covariance: [";
      size_t pending_items = msg.acceleration_vehicle_covariance.size();
      for (auto item : msg.acceleration_vehicle_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: theta_vehicle_covariance
  {
    out << "theta_vehicle_covariance: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_vehicle_covariance, out);
    out << ", ";
  }

  // member: sensor_calibrator
  {
    out << "sensor_calibrator: ";
    to_flow_style_yaml(msg.sensor_calibrator, out);
    out << ", ";
  }

  // member: cipv_flag
  {
    out << "cipv_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv_flag, out);
    out << ", ";
  }

  // member: lane_position
  {
    out << "lane_position: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_position, out);
    out << ", ";
  }

  // member: pihp_percentage
  {
    out << "pihp_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.pihp_percentage, out);
    out << ", ";
  }

  // member: blinker_flag
  {
    out << "blinker_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.blinker_flag, out);
    out << ", ";
  }

  // member: fusion_type
  {
    out << "fusion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fusion_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: existence_prob
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "existence_prob: ";
    rosidl_generator_traits::value_to_yaml(msg.existence_prob, out);
    out << "\n";
  }

  // member: create_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "create_time:\n";
    to_block_style_yaml(msg.create_time, out, indentation + 2);
  }

  // member: last_updated_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_updated_time:\n";
    to_block_style_yaml(msg.last_updated_time, out, indentation + 2);
  }

  // member: center_pos_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_pos_vehicle:\n";
    to_block_style_yaml(msg.center_pos_vehicle, out, indentation + 2);
  }

  // member: center_pos_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_pos_abs:\n";
    to_block_style_yaml(msg.center_pos_abs, out, indentation + 2);
  }

  // member: theta_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_vehicle, out);
    out << "\n";
  }

  // member: theta_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_abs, out);
    out << "\n";
  }

  // member: velocity_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_vehicle:\n";
    to_block_style_yaml(msg.velocity_vehicle, out, indentation + 2);
  }

  // member: velocity_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_abs:\n";
    to_block_style_yaml(msg.velocity_abs, out, indentation + 2);
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: image_key_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_key_points.size() == 0) {
      out << "image_key_points: []\n";
    } else {
      out << "image_key_points:\n";
      for (auto item : msg.image_key_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: polygon_point_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygon_point_abs.size() == 0) {
      out << "polygon_point_abs: []\n";
    } else {
      out << "polygon_point_abs:\n";
      for (auto item : msg.polygon_point_abs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: polygon_point_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygon_point_vehicle.size() == 0) {
      out << "polygon_point_vehicle: []\n";
    } else {
      out << "polygon_point_vehicle:\n";
      for (auto item : msg.polygon_point_vehicle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tracking_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: confidence_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_type: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_type, out);
    out << "\n";
  }

  // member: drops
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drops.size() == 0) {
      out << "drops: []\n";
    } else {
      out << "drops:\n";
      for (auto item : msg.drops) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: acceleration_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_vehicle:\n";
    to_block_style_yaml(msg.acceleration_vehicle, out, indentation + 2);
  }

  // member: acceleration_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_abs:\n";
    to_block_style_yaml(msg.acceleration_abs, out, indentation + 2);
  }

  // member: anchor_point_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor_point_image:\n";
    to_block_style_yaml(msg.anchor_point_image, out, indentation + 2);
  }

  // member: anchor_point_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor_point_vehicle:\n";
    to_block_style_yaml(msg.anchor_point_vehicle, out, indentation + 2);
  }

  // member: anchor_point_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor_point_abs:\n";
    to_block_style_yaml(msg.anchor_point_abs, out, indentation + 2);
  }

  // member: bbox2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox2d:\n";
    to_block_style_yaml(msg.bbox2d, out, indentation + 2);
  }

  // member: bbox2d_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox2d_rear:\n";
    to_block_style_yaml(msg.bbox2d_rear, out, indentation + 2);
  }

  // member: sub_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_type, out);
    out << "\n";
  }

  // member: height_above_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_above_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_ground, out);
    out << "\n";
  }

  // member: position_abs_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_abs_covariance.size() == 0) {
      out << "position_abs_covariance: []\n";
    } else {
      out << "position_abs_covariance:\n";
      for (auto item : msg.position_abs_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity_abs_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_abs_covariance.size() == 0) {
      out << "velocity_abs_covariance: []\n";
    } else {
      out << "velocity_abs_covariance:\n";
      for (auto item : msg.velocity_abs_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration_abs_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration_abs_covariance.size() == 0) {
      out << "acceleration_abs_covariance: []\n";
    } else {
      out << "acceleration_abs_covariance:\n";
      for (auto item : msg.acceleration_abs_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: theta_abs_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_abs_covariance: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_abs_covariance, out);
    out << "\n";
  }

  // member: position_vehicle_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_vehicle_covariance.size() == 0) {
      out << "position_vehicle_covariance: []\n";
    } else {
      out << "position_vehicle_covariance:\n";
      for (auto item : msg.position_vehicle_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity_vehicle_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_vehicle_covariance.size() == 0) {
      out << "velocity_vehicle_covariance: []\n";
    } else {
      out << "velocity_vehicle_covariance:\n";
      for (auto item : msg.velocity_vehicle_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration_vehicle_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration_vehicle_covariance.size() == 0) {
      out << "acceleration_vehicle_covariance: []\n";
    } else {
      out << "acceleration_vehicle_covariance:\n";
      for (auto item : msg.acceleration_vehicle_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: theta_vehicle_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_vehicle_covariance: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_vehicle_covariance, out);
    out << "\n";
  }

  // member: sensor_calibrator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_calibrator:\n";
    to_block_style_yaml(msg.sensor_calibrator, out, indentation + 2);
  }

  // member: cipv_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cipv_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv_flag, out);
    out << "\n";
  }

  // member: lane_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_position: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_position, out);
    out << "\n";
  }

  // member: pihp_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pihp_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.pihp_percentage, out);
    out << "\n";
  }

  // member: blinker_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blinker_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.blinker_flag, out);
    out << "\n";
  }

  // member: fusion_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fusion_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_interface::msg::Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Obstacle & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Obstacle>()
{
  return "ros2_interface::msg::Obstacle";
}

template<>
inline const char * name<ros2_interface::msg::Obstacle>()
{
  return "ros2_interface/msg/Obstacle";
}

template<>
struct has_fixed_size<ros2_interface::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::Obstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

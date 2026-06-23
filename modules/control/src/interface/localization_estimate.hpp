/**
 * @file    example.h
 * @author  editor
 * @date    2020-05-25
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <iostream>
#include <vector>

#include "modules/common/interface/trajectory_point.hpp"
#include "control/src/interface/lidar_slam_sensor_msg_status.hpp"
#include "control/src/interface/lidar_slam_status.hpp"
#include "modules/common/interface/pose.hpp"
#include "control/src/interface/uncertainty.hpp"
#include "modules/common/interface/header.hpp"

using namespace std;

namespace legion {
namespace interface {
using legion::interface::Pose;
/**
 * @class LocalizationEstimate
 *
 * @brief 消息的描述.
 */
class LocalizationEstimate {
 public:
  LocalizationEstimate() = default;
  ~LocalizationEstimate() = default;

  void set_header(legion::interface::Header header) { header_ = header; }

  legion::interface::Header header() const { return header_; }

  inline legion::interface::Header *mutable_header() { return &header_; }

  void set_pose(Pose pose) {
    pose_ = pose;
    pose_ptr_ = &pose_;
  }

  inline bool has_pose() const { return (pose_ptr_ != nullptr); }

  Pose pose() const { return pose_; }

  inline Pose *mutable_pose() { return &pose_; }

  void set_uncertainty(legion::localization::Uncertainty uncertainty) {
    uncertainty_ = uncertainty;
  }

  legion::localization::Uncertainty uncertainty() const { return uncertainty_; }

  inline legion::localization::Uncertainty *mutable_uncertainty() {
    return &uncertainty_;
  }

  void set_measurement_time(double measurement_time) {
    measurement_time_ = measurement_time;
  }

  inline bool has_measurement_time() const {
    return (measurement_time_ptr_ != nullptr);
  }

  double measurement_time() const { return measurement_time_; }

  inline double *mutable_measurement_time() { return &measurement_time_; }

  void set_trajectory_point(
      std::vector<legion::interface::TrajectoryPoint> trajectory_point) {
    trajectory_point_ = trajectory_point;
  }

  std::vector<legion::interface::TrajectoryPoint> trajectory_point() const {
    return trajectory_point_;
  }

  inline std::vector<legion::interface::TrajectoryPoint>
      *mutable_trajectory_point() {
    return &trajectory_point_;
  }

  inline legion::interface::TrajectoryPoint *add_trajectory_point() {
    legion::interface::TrajectoryPoint tmp;
    trajectory_point_.push_back(tmp);
    return &trajectory_point_[trajectory_point_.size() - 1];
  }

  inline int trajectory_points_size() const { return trajectory_point_.size(); }

  inline void clear_trajectory_point() { trajectory_point_.clear(); }

  void set_lidar_slam_status(
      legion::localization::LidarSlamStatus lidar_slam_status) {
    lidar_slam_status_ = lidar_slam_status;
  }

  legion::localization::LidarSlamStatus lidar_slam_status() const {
    return lidar_slam_status_;
  }

  inline legion::localization::LidarSlamStatus *mutable_lidar_slam_status() {
    return &lidar_slam_status_;
  }

  void set_sensor_status(
      legion::localization::LidarSlamSensorMsgStatus sensor_status) {
    sensor_status_ = sensor_status;
  }

  legion::localization::LidarSlamSensorMsgStatus sensor_status() const {
    return sensor_status_;
  }

  inline legion::localization::LidarSlamSensorMsgStatus *
  mutable_sensor_status() {
    return &sensor_status_;
  }

 protected:
  legion::interface::Header header_;
  Pose *pose_ptr_ = nullptr;
  // 定位模块中定义的Pose
  Pose pose_;
  // 定位模块中定义的Uncertainty
  legion::localization::Uncertainty uncertainty_;
  double *measurement_time_ptr_ = nullptr;
  // The time of pose measurement, seconds since 1970-1-1 (UNIX time)
  double measurement_time_;

  std::vector<legion::interface::TrajectoryPoint> trajectory_point_;
  // Lidar Slam 定位的状态
  legion::localization::LidarSlamStatus lidar_slam_status_;
  // 传感器消息的状态
  legion::localization::LidarSlamSensorMsgStatus sensor_status_;
};
}  // namespace localization
}  // namespace legion

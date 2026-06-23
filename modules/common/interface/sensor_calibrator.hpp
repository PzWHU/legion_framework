/**
 * @file    sensor_calibrator.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <iostream>
#include <stdint.h>

#include "modules/common/interface/point_3d.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class SensorCalibrator {
 public:
  SensorCalibrator() = default;
  ~SensorCalibrator() = default;

  inline void set_pose(const legion::interface::Point3D& pose) {
    pose_ = pose;
    pose_ptr_ = &pose_;
  }

  inline const legion::interface::Point3D& pose() const { return pose_; }

  inline legion::interface::Point3D* mutable_pose() { return &pose_; }

  inline bool has_pose() { return (pose_ptr_ != nullptr); }

  inline void set_angle(const legion::interface::Point3D& angle) {
    angle_ = angle;
    angle_ptr_ = &angle_;
  }

  inline const legion::interface::Point3D& angle() const { return angle_; }

  inline legion::interface::Point3D* mutable_angle() { return &angle_; }

  inline bool has_angle() { return (angle_ptr_ != nullptr); }

  void operator=(const SensorCalibrator& sensor_calibrator) {
    CopyFrom(sensor_calibrator);
  }

  void CopyFrom(const SensorCalibrator& sensor_calibrator) {
    pose_ = sensor_calibrator.pose();
    angle_ = sensor_calibrator.angle();
  }

 protected:
  //传感器安装位置(相对于后轴中心点)
  legion::interface::Point3D pose_;
  legion::interface::Point3D* pose_ptr_ = nullptr;
  //传感器安装角度(车体坐标系)
  legion::interface::Point3D angle_;
  legion::interface::Point3D* angle_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion

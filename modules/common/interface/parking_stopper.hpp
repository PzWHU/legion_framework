/**
 * @file    parking_stopper.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <mutex>
#include <vector>
#include <memory>
#include <iostream>
#include <stdint.h>

#include "modules/common/interface/header.hpp"
#include "modules/common/interface/point_3d.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class ParkingStopper {
 public:
  ParkingStopper() {
    stopper_points_vehicle_mutex_ = std::make_shared<std::mutex>();
    stopper_points_abs_mutex_ = std::make_shared<std::mutex>();

    clear_stopper_points_vehicle();
    clear_stopper_points_abs();
  }
  ~ParkingStopper() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_center_point_vehicle(
      const legion::interface::Point3D& center_point_vehicle) {
    center_point_vehicle_ = center_point_vehicle;
    center_point_vehicle_ptr_ = &center_point_vehicle_;
  }

  inline const legion::interface::Point3D& center_point_vehicle() const {
    return center_point_vehicle_;
  }

  inline legion::interface::Point3D* mutable_center_point_vehicle() {
    return &center_point_vehicle_;
  }

  inline bool has_center_point_vehicle() {
    return (center_point_vehicle_ptr_ != nullptr);
  }

  inline void set_center_point_abs(
      const legion::interface::Point3D& center_point_abs) {
    center_point_abs_ = center_point_abs;
    center_point_abs_ptr_ = &center_point_abs_;
  }

  inline const legion::interface::Point3D& center_point_abs() const {
    return center_point_abs_;
  }

  inline legion::interface::Point3D* mutable_center_point_abs() {
    return &center_point_abs_;
  }

  inline bool has_center_point_abs() {
    return (center_point_abs_ptr_ != nullptr);
  }

  inline void set_stopper_points_vehicle(
      std::vector<legion::interface::Point3D>* stopper_points_vehicle) {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    stopper_points_vehicle_.assign(stopper_points_vehicle->begin(),
                                   stopper_points_vehicle->end());
  }

  inline void set_stopper_points_vehicle(
      const std::vector<legion::interface::Point3D>& stopper_points_vehicle) {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    stopper_points_vehicle_ = stopper_points_vehicle;
  }

  inline void set_stopper_points_vehicle(
      const uint32_t index,
      legion::interface::Point3D& stopper_points_vehicle) {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    stopper_points_vehicle_[index] = stopper_points_vehicle;
  }

  inline void add_stopper_points_vehicle(
      const legion::interface::Point3D& stopper_points_vehicle) {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    stopper_points_vehicle_.emplace_back(stopper_points_vehicle);
  }

  inline const legion::interface::Point3D& stopper_points_vehicle(
      uint32_t index) const {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    return stopper_points_vehicle_[index];
  }

  inline std::vector<legion::interface::Point3D>*
  mutable_stopper_points_vehicle() {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    return &stopper_points_vehicle_;
  }

  inline void stopper_points_vehicle(
      std::vector<legion::interface::Point3D>& stopper_points_vehicle) const {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    stopper_points_vehicle.assign(stopper_points_vehicle_.begin(),
                                  stopper_points_vehicle_.end());
  }

  inline const std::vector<legion::interface::Point3D>& stopper_points_vehicle()
      const {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    return stopper_points_vehicle_;
  }

  inline uint32_t stopper_points_vehicle_size() const {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    return stopper_points_vehicle_.size();
  }

  inline void clear_stopper_points_vehicle() {
    std::lock_guard<std::mutex> lock(*stopper_points_vehicle_mutex_);
    stopper_points_vehicle_.clear();
    stopper_points_vehicle_.shrink_to_fit();
  }

  inline bool has_stopper_points_vehicle() {
    return (stopper_points_vehicle_size() != 0);
  }

  inline void set_stopper_points_abs(
      std::vector<legion::interface::Point3D>* stopper_points_abs) {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    stopper_points_abs_.assign(stopper_points_abs->begin(),
                               stopper_points_abs->end());
  }

  inline void set_stopper_points_abs(
      const std::vector<legion::interface::Point3D>& stopper_points_abs) {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    stopper_points_abs_ = stopper_points_abs;
  }

  inline void set_stopper_points_abs(
      const uint32_t index, legion::interface::Point3D& stopper_points_abs) {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    stopper_points_abs_[index] = stopper_points_abs;
  }

  inline void add_stopper_points_abs(
      const legion::interface::Point3D& stopper_points_abs) {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    stopper_points_abs_.emplace_back(stopper_points_abs);
  }

  inline const legion::interface::Point3D& stopper_points_abs(
      uint32_t index) const {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    return stopper_points_abs_[index];
  }

  inline std::vector<legion::interface::Point3D>* mutable_stopper_points_abs() {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    return &stopper_points_abs_;
  }

  inline void stopper_points_abs(
      std::vector<legion::interface::Point3D>& stopper_points_abs) const {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    stopper_points_abs.assign(stopper_points_abs_.begin(),
                              stopper_points_abs_.end());
  }

  inline const std::vector<legion::interface::Point3D>& stopper_points_abs()
      const {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    return stopper_points_abs_;
  }

  inline uint32_t stopper_points_abs_size() const {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    return stopper_points_abs_.size();
  }

  inline void clear_stopper_points_abs() {
    std::lock_guard<std::mutex> lock(*stopper_points_abs_mutex_);
    stopper_points_abs_.clear();
    stopper_points_abs_.shrink_to_fit();
  }

  inline bool has_stopper_points_abs() {
    return (stopper_points_abs_size() != 0);
  }

  void operator=(const ParkingStopper& parking_stopper) {
    CopyFrom(parking_stopper);
  }

  void CopyFrom(const ParkingStopper& parking_stopper) {
    header_ = parking_stopper.header();
    center_point_vehicle_ = parking_stopper.center_point_vehicle();
    center_point_abs_ = parking_stopper.center_point_abs();
    stopper_points_vehicle_ = parking_stopper.stopper_points_vehicle();
    stopper_points_abs_ = parking_stopper.stopper_points_abs();
  }

 protected:
  std::shared_ptr<std::mutex> stopper_points_vehicle_mutex_;
  std::shared_ptr<std::mutex> stopper_points_abs_mutex_;
  // timestamp is  included in header
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //车辆坐标系下限位器中心点坐标
  legion::interface::Point3D center_point_vehicle_;
  legion::interface::Point3D* center_point_vehicle_ptr_ = nullptr;
  //绝对坐标系下限位器中心点坐标
  legion::interface::Point3D center_point_abs_;
  legion::interface::Point3D* center_point_abs_ptr_ = nullptr;
  //车辆坐标系下限位器关键点
  std::vector<legion::interface::Point3D> stopper_points_vehicle_;
  //绝对坐标系下限位器关键点
  std::vector<legion::interface::Point3D> stopper_points_abs_;
};
}  // namespace interface
}  // namespace legion

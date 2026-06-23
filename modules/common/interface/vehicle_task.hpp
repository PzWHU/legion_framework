/**
 * @file    vehicle_task.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <iostream>
#include <stdint.h>

#include "modules/common/enum/enum.h"
#include "modules/common/interface/header.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class VehicleTask {
 public:
  VehicleTask() {
    clean_up_ctrl_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    watering_ctrl_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    water_add_ctrl_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    hatch_unlock_ctrl_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    decorative_light_ctrl_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
  }
  ~VehicleTask() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_clean_up_ctrl(
      const legion::common::SwitchStatus& clean_up_ctrl) {
    clean_up_ctrl_ = clean_up_ctrl;
    clean_up_ctrl_ptr_ = &clean_up_ctrl_;
  }

  inline const legion::common::SwitchStatus& clean_up_ctrl() const {
    return clean_up_ctrl_;
  }

  inline legion::common::SwitchStatus* mutable_clean_up_ctrl() {
    return &clean_up_ctrl_;
  }

  inline bool has_clean_up_ctrl() { return (clean_up_ctrl_ptr_ != nullptr); }

  inline void set_watering_ctrl(
      const legion::common::SwitchStatus& watering_ctrl) {
    watering_ctrl_ = watering_ctrl;
    watering_ctrl_ptr_ = &watering_ctrl_;
  }

  inline const legion::common::SwitchStatus& watering_ctrl() const {
    return watering_ctrl_;
  }

  inline legion::common::SwitchStatus* mutable_watering_ctrl() {
    return &watering_ctrl_;
  }

  inline bool has_watering_ctrl() { return (watering_ctrl_ptr_ != nullptr); }

  inline void set_water_add_ctrl(
      const legion::common::SwitchStatus& water_add_ctrl) {
    water_add_ctrl_ = water_add_ctrl;
    water_add_ctrl_ptr_ = &water_add_ctrl_;
  }

  inline const legion::common::SwitchStatus& water_add_ctrl() const {
    return water_add_ctrl_;
  }

  inline legion::common::SwitchStatus* mutable_water_add_ctrl() {
    return &water_add_ctrl_;
  }

  inline bool has_water_add_ctrl() { return (water_add_ctrl_ptr_ != nullptr); }

  inline void set_hatch_unlock_ctrl(
      const legion::common::SwitchStatus& hatch_unlock_ctrl) {
    hatch_unlock_ctrl_ = hatch_unlock_ctrl;
    hatch_unlock_ctrl_ptr_ = &hatch_unlock_ctrl_;
  }

  inline const legion::common::SwitchStatus& hatch_unlock_ctrl() const {
    return hatch_unlock_ctrl_;
  }

  inline legion::common::SwitchStatus* mutable_hatch_unlock_ctrl() {
    return &hatch_unlock_ctrl_;
  }

  inline bool has_hatch_unlock_ctrl() {
    return (hatch_unlock_ctrl_ptr_ != nullptr);
  }

  inline void set_decorative_light_ctrl(
      const legion::common::SwitchStatus& decorative_light_ctrl) {
    decorative_light_ctrl_ = decorative_light_ctrl;
    decorative_light_ctrl_ptr_ = &decorative_light_ctrl_;
  }

  inline const legion::common::SwitchStatus& decorative_light_ctrl() const {
    return decorative_light_ctrl_;
  }

  inline legion::common::SwitchStatus* mutable_decorative_light_ctrl() {
    return &decorative_light_ctrl_;
  }

  inline bool has_decorative_light_ctrl() {
    return (decorative_light_ctrl_ptr_ != nullptr);
  }

  void operator=(const VehicleTask& vehicle_task) { CopyFrom(vehicle_task); }

  void CopyFrom(const VehicleTask& vehicle_task) {
    header_ = vehicle_task.header();
    clean_up_ctrl_ = vehicle_task.clean_up_ctrl();
    watering_ctrl_ = vehicle_task.watering_ctrl();
    water_add_ctrl_ = vehicle_task.water_add_ctrl();
    hatch_unlock_ctrl_ = vehicle_task.hatch_unlock_ctrl();
    decorative_light_ctrl_ = vehicle_task.decorative_light_ctrl();
  }

 protected:
  //消息头
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //清扫功能控制  0 关闭 1 开启
  legion::common::SwitchStatus clean_up_ctrl_;
  legion::common::SwitchStatus* clean_up_ctrl_ptr_ = nullptr;
  //洒水功能控制  0 关闭 1 开启
  legion::common::SwitchStatus watering_ctrl_;
  legion::common::SwitchStatus* watering_ctrl_ptr_ = nullptr;
  //加水开关控制  0 关闭 1 开启
  legion::common::SwitchStatus water_add_ctrl_;
  legion::common::SwitchStatus* water_add_ctrl_ptr_ = nullptr;
  //舱盖解锁开关控制 0 关闭 1 开启
  legion::common::SwitchStatus hatch_unlock_ctrl_;
  legion::common::SwitchStatus* hatch_unlock_ctrl_ptr_ = nullptr;
  //灯带开关控制 0 关闭 1 开启
  legion::common::SwitchStatus decorative_light_ctrl_;
  legion::common::SwitchStatus* decorative_light_ctrl_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion

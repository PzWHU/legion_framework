/**
 * @file    security_decision.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <iostream>
#include <stdint.h>

#include "modules/common/interface/header.hpp"
#include "modules/common/interface/warning_command.hpp"
#include "modules/common/interface/trajectory_limit_command.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class SecurityDecision {
 public:
  SecurityDecision() {
    brake_report_ = legion::interface::SecurityDecision::BrakeReport::NO_BRAKE;
    change_lane_command_ = legion::interface::SecurityDecision::
        ChangeLaneCommand::NO_CHANGE_ACTION;
    park_command_ = legion::interface::SecurityDecision::ParkCommand::NO_PARK;
    drivingmode_report_ = legion::interface::SecurityDecision::
        DrivingModeReport::NO_DRIVINGMODE_ACTION;
  }
  ~SecurityDecision() = default;

  enum BrakeReport {
    NO_BRAKE = 0,
    ZERO_BRAKE = 1,
    NORMAL_BRAKE = 2,
    EMERGENT_BRAKE = 3,
  };

  enum ChangeLaneCommand {
    NO_CHANGE_ACTION = 0,
    LEFT_PROHIBIT = 1,
    RIGHT_PROHIBIT = 2,
    BOTH_PROHIBIT = 3,
  };

  enum ParkCommand {
    NO_PARK = 0,
    EMERGENT_LANE = 1,
    PULL_OVER = 2,
    STOP = 3,
  };

  enum DrivingModeReport {
    NO_DRIVINGMODE_ACTION = 0,
    EXIT_AFTER_STOP = 1,
    NO_ENTRY = 2,
    ABANDON_LONGITUDINAL = 3,
    ABANDON_LATERAL = 4,
    ABANDON_BOTH = 5,
  };

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_warning_command(
      const legion::interface::WarningCommand& warning_command) {
    warning_command_ = warning_command;
    warning_command_ptr_ = &warning_command_;
  }

  inline const legion::interface::WarningCommand& warning_command() const {
    return warning_command_;
  }

  inline legion::interface::WarningCommand* mutable_warning_command() {
    return &warning_command_;
  }

  inline bool has_warning_command() {
    return (warning_command_ptr_ != nullptr);
  }

  inline void set_brake_report(
      const legion::interface::SecurityDecision::BrakeReport& brake_report) {
    brake_report_ = brake_report;
    brake_report_ptr_ = &brake_report_;
  }

  inline const legion::interface::SecurityDecision::BrakeReport& brake_report()
      const {
    return brake_report_;
  }

  inline legion::interface::SecurityDecision::BrakeReport*
  mutable_brake_report() {
    return &brake_report_;
  }

  inline bool has_brake_report() { return (brake_report_ptr_ != nullptr); }

  inline void set_change_lane_command(
      const legion::interface::SecurityDecision::ChangeLaneCommand&
          change_lane_command) {
    change_lane_command_ = change_lane_command;
    change_lane_command_ptr_ = &change_lane_command_;
  }

  inline const legion::interface::SecurityDecision::ChangeLaneCommand&
  change_lane_command() const {
    return change_lane_command_;
  }

  inline legion::interface::SecurityDecision::ChangeLaneCommand*
  mutable_change_lane_command() {
    return &change_lane_command_;
  }

  inline bool has_change_lane_command() {
    return (change_lane_command_ptr_ != nullptr);
  }

  inline void set_trajectory_limit_command(
      const legion::interface::TrajectoryLimitCommand&
          trajectory_limit_command) {
    trajectory_limit_command_ = trajectory_limit_command;
    trajectory_limit_command_ptr_ = &trajectory_limit_command_;
  }

  inline const legion::interface::TrajectoryLimitCommand&
  trajectory_limit_command() const {
    return trajectory_limit_command_;
  }

  inline legion::interface::TrajectoryLimitCommand*
  mutable_trajectory_limit_command() {
    return &trajectory_limit_command_;
  }

  inline bool has_trajectory_limit_command() {
    return (trajectory_limit_command_ptr_ != nullptr);
  }

  inline void set_park_command(
      const legion::interface::SecurityDecision::ParkCommand& park_command) {
    park_command_ = park_command;
    park_command_ptr_ = &park_command_;
  }

  inline const legion::interface::SecurityDecision::ParkCommand& park_command()
      const {
    return park_command_;
  }

  inline legion::interface::SecurityDecision::ParkCommand*
  mutable_park_command() {
    return &park_command_;
  }

  inline bool has_park_command() { return (park_command_ptr_ != nullptr); }

  inline void set_drivingmode_report(
      const legion::interface::SecurityDecision::DrivingModeReport&
          drivingmode_report) {
    drivingmode_report_ = drivingmode_report;
    drivingmode_report_ptr_ = &drivingmode_report_;
  }

  inline const legion::interface::SecurityDecision::DrivingModeReport&
  drivingmode_report() const {
    return drivingmode_report_;
  }

  inline legion::interface::SecurityDecision::DrivingModeReport*
  mutable_drivingmode_report() {
    return &drivingmode_report_;
  }

  inline bool has_drivingmode_report() {
    return (drivingmode_report_ptr_ != nullptr);
  }

  void operator=(const SecurityDecision& security_decision) {
    CopyFrom(security_decision);
  }

  void CopyFrom(const SecurityDecision& security_decision) {
    header_ = security_decision.header();
    warning_command_ = security_decision.warning_command();
    brake_report_ = security_decision.brake_report();
    change_lane_command_ = security_decision.change_lane_command();
    trajectory_limit_command_ = security_decision.trajectory_limit_command();
    park_command_ = security_decision.park_command();
    drivingmode_report_ = security_decision.drivingmode_report();
  }

 protected:
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //告警指令
  legion::interface::WarningCommand warning_command_;
  legion::interface::WarningCommand* warning_command_ptr_ = nullptr;
  //刹车报告
  legion::interface::SecurityDecision::BrakeReport brake_report_;
  legion::interface::SecurityDecision::BrakeReport* brake_report_ptr_ = nullptr;
  //换道指令
  legion::interface::SecurityDecision::ChangeLaneCommand change_lane_command_;
  legion::interface::SecurityDecision::ChangeLaneCommand*
      change_lane_command_ptr_ = nullptr;
  //轨迹限制指令
  legion::interface::TrajectoryLimitCommand trajectory_limit_command_;
  legion::interface::TrajectoryLimitCommand* trajectory_limit_command_ptr_ =
      nullptr;
  //停车指令
  legion::interface::SecurityDecision::ParkCommand park_command_;
  legion::interface::SecurityDecision::ParkCommand* park_command_ptr_ = nullptr;
  //驾驶模式报告
  legion::interface::SecurityDecision::DrivingModeReport drivingmode_report_;
  legion::interface::SecurityDecision::DrivingModeReport*
      drivingmode_report_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion

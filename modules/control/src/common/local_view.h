/**
 * @file    local_view.h
 * @author  jiangchengjie
 * @date    2021-07-25
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include "modules/common/interface/chassis.hpp"
// #include "modules/common/interface/location.hpp"
#include "modules/common/interface/planning_cmd.hpp"
#include "modules/common/interface/obstacle_list.hpp"
#include "modules/common/interface/adc_trajectory.hpp"
#include "modules/control/src/interface/localization_estimate.hpp"

/**
 * @namespace legion::control
 * @brief legion::control
 */

namespace legion {
namespace control {
struct LocalView {
  legion::interface::ADCTrajectory adc_trajectory_;
  legion::interface::Chassis chassis_;
  legion::interface::ObstacleList obstacle_list_;
  // legion::interface::Location location_;
  legion::interface::LocalizationEstimate localization_;
  legion::interface::PlanningCmd planning_cmd_;
};
} // namespace control
} // namespace legion

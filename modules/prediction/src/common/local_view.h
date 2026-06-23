/**
 * @file    local_view.h
 * @author  legion
 * @date    2022-05-06
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include "modules/common/interface/location.hpp"
#include "modules/common/interface/odometry.hpp"
#include "modules/common/interface/lane_list.hpp"
#include "modules/common/interface/obstacle_list.hpp"
#include "modules/common/interface/adc_trajectory.hpp"
#include "modules/common/interface/traffic_events.hpp"
#include "modules/common/interface/routing_response.hpp"

/**
 * @namespace legion::prediction
 * @brief legion::prediction
 */

namespace legion {
namespace prediction {
struct LocalView {
  legion::interface::Location location_;
  legion::interface::ADCTrajectory adc_trajectory_;
  legion::interface::ObstacleList obstacle_list_;
  legion::interface::Odometry odometry_;
  // legion::interface::TrafficEvents traffic_events_;
  int localiztion_mode_;
  int map_mode_;
  legion::interface::RoutingResponse routing_response_;
  legion::interface::LaneList lane_list_;
};
} // namespace prediction
} // namespace legion

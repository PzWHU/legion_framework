/******************************************************************************
 * Copyright 2018 The legion Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 * @brief This file provides the declaration of the class "ParkingPlanner".
 */

#pragma once

#include <memory>
#include <string>
#include <vector>

#include "modules/common/interface/path.hpp"
#include "modules/common/interface/planning_analysis.hpp"
#include "modules/planning/src/planner/parking_planner/geometry/parking_manager.h"
#include "modules/planning/src/planner/planner.h"

/**
 * @namespace legion::planning
 * @brief legion::planning
 */
namespace legion {
namespace planning {

using namespace legion::common;
using legion::common::state_machine::StateContext;
/**
 * @class ParkingPlanner
 * @brief ParkingPlanner is a planner based on
 */
class ParkingPlanner : public Planner {
 public:
  ParkingPlanner() = default;

  virtual ~ParkingPlanner() = default;

  std::string Name() const override { return "PARKING"; }

  legion::common::Status Init(const legion::planning::PlanningConf *planning_conf) override;

  bool Reset() override;

  legion::common::Status IsParkingOk(Frame *framef);

  /**
   * @brief Compute trajectories for execution.
   * @param frame Current planning frame.
   * @return OK if planning succeeds; error otherwise.
   */
  legion::common::Status Plan(Frame *frame, legion::interface::ADCTrajectory *ptr_adc_trajectory,
                             legion::interface::PlanningAnalysis *ptr_analysis,
                             legion::interface::PlanningCmd *ptr_planning_cmd,
                             legion::interface::TrajectoryArray *ptr_trajectory_array) override;

  void Stop() override {}
  // TODO 放回protected
  ParkingManager parking_manager_;

 protected:
  VerticalParkingConf vertical_parking_conf_;  // 泊车配置参数
  legion::interface::VehicleParam vehicle_param_;
  ParkingManagerConf parking_manager_conf_;  // 泊车管理参数
  legion::interface::ParkingInfo parking_spot_;
  legion::interface::PlanningAnalysis planning_analysis_;
  VehicleState vehicle_state_;

  // ParkingManager parking_manager_;
};

}  // namespace planning
}  // namespace legion

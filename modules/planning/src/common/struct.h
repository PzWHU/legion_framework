
#pragma once
#include "modules/common/interface/adc_trajectory.hpp"
namespace legion {
namespace planning {
using namespace legion::common;
typedef struct {
  legion::interface::ADCTrajectory::BehaviourLatState lat_state;
  legion::interface::ADCTrajectory::BehaviourLonState lon_state;
  std::string lat_state_name;
  std::string lon_state_name;
  double collision_distance;
  double relative_distance;
  double follow_velocity;
  double follow_acceleration;
} BehaviourState;
}  // namespace planning
}  // namespace legion

#pragma once
// #include "trajectron_plus_plus_predictor/semantic_map.h"
#include "modules/common/interface/prediction_obstacle.hpp"
#include "modules/prediction/src/interface/prediction_trajectory.hpp"
#include "modules/common/interface/obstacle_intent.hpp"
#include "lanelet2_ex.h"
// using namespace legion::prediction;
// using namespace legion::common;

class IntentPrediction
{
public:
    IntentPrediction()
    {
    }

    // IntentPrediction(const double &param_prediction_horizon, const double &param_history_horizon, const double &param_predict_traj_num);

    ~IntentPrediction()
    {
    }

    /**
     * @brief Predict for pedestrian
     */
    bool PredictIntentForPedestrian(const lanelet::LaneletMapUPtr &map,
                                    const std::vector<legion::prediction::PredictionTrajectory> &trajectories,
                                    const double &predict_time,
                                    legion::interface::ObstacleIntent &intent);

    /**
     * @brief Predict for vehicle
     */
    bool PredictIntentForVehicle(const std::vector<legion::prediction::PredictionTrajectory> &trajectories,
                                 const double &predict_time,
                                 legion::interface::ObstacleIntent &intent);

    //params

private:
    //self pose
    double curr_pose_x_ = 0.0;
    double curr_pose_y_ = 0.0;
};

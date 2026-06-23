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
 * @brief This file provides the implementation of the class "LatticePlanner".
 */

#include "modules/planning/src/planner/lattice_planner/lattice_planner.h"

#include <memory>
#include <utility>

#include "modules/planning/src/proto/planning_conf.pb.h"

/**
 * @namespace legion::planning
 * @brief legion::planning
 */
namespace legion {
namespace planning {

// using legion::common::ErrorCode;
// using legion::common::SLPoint;
// using legion::common::SpeedPoint;
// using legion::common::Status;
// using legion::common::TrajectoryPoint;
// using legion::common::math::Vec2d;
using namespace legion::interface;
using legion::planning::Frame;

Status LatticePlanner::Init(const legion::planning::PlanningConf *planning_conf)
{
  // TODO:
  // read params
  frame_.Init(planning_conf);
  planning_conf_ = planning_conf;
  trajectory_generator_.Init(planning_conf);  // 轨迹生成器
  trajectory_evaluator_.Init(planning_conf);  // 轨迹评估器
  behaviour_selector_.Init(planning_conf);    // 行为选择器
  AINFO << "Lattice Planner Init is OK ." << endl;
  return Status::Ok();
}

Status LatticePlanner::Plan(Frame *frame, legion::interface::ADCTrajectory *ptr_adc_trajectory,
                            legion::interface::PlanningAnalysis *ptr_analysis,
                            legion::interface::PlanningCmd *ptr_planning_cmd,
                            legion::interface::TrajectoryArray *ptr_trajectory_array)
{
  legion::common::Status status;

  // double t1 = TimeTool::NowToSeconds();
  frame_ = *frame;
  ptr_analysis->set_dis_to_center_line(frame_.dis_to_route_center_line());

  if (frame_.CalTrajectoryMatchInfo() == false) {
    return Status(Status::ErrorCode::PLANNING_ERROR, "CalTrajectoryMatchInfo() failed.");
  }
  double t2 = TimeTool::NowToSeconds();
  status = trajectory_generator_.GenerateTrajectories(is_need_replan_, frame_,
                                                      planning_conf_->path_density());
  if (status != Status(Status::ErrorCode::OK)) return status;
  if (planning_conf_->lattice_planner_conf()
          .trajectory_generator_conf()
          .trajectory_array_debug_enable()) {
    SetTrajectoryArray(trajectory_generator_.TrajectoryArray(), ptr_trajectory_array);
  }

  double t3 = TimeTool::NowToSeconds();
  std::vector<TimeConsume> time_consume_vec;
  status = trajectory_evaluator_.EvaluateTrajectories(trajectory_generator_.TrajectoryArray(),
                                                      frame, time_consume_vec);
  if (status != Status(Status::ErrorCode::OK)) return status;
  double t4 = TimeTool::NowToSeconds();
  TimeConsume delta_eval;
  delta_eval.set_time_consume(t4 - t3);
  delta_eval.set_name("calculate evaluator");
  time_consume_vec.emplace_back(delta_eval);

  status = behaviour_selector_.SelectBehaviour(trajectory_evaluator_.TrajectoryArray(), frame,
                                               is_new_goal_);
  if (status != Status(Status::ErrorCode::OK)) return status;
  double t5 = TimeTool::NowToSeconds();
  if (behaviour_selector_.FinalTrajectory().has_trajectory_points() != true)
    return Status(Status::ErrorCode::PLANNING_ERROR, "Final Trajectory Has No Points.");
  GetADCTrajectory(behaviour_selector_.FinalTrajectory(), behaviour_selector_.CurrentBehaviour(),
                   ptr_adc_trajectory);
  ptr_planning_cmd->CopyFrom(behaviour_selector_.PlanningCommand());

  ptr_analysis->set_generator_time(t3 - t2);
  ptr_analysis->set_evaluator_time(time_consume_vec);
  ptr_analysis->set_selector_time(t5 - t4);
  legion::planning::PlanningParkingDebug planningdeug;
  if (!frame->col_obj_polygon().points().empty()) {
    std::vector<legion::interface::Point2D> points;
    for (auto it_polygon_point : frame->col_obj_polygon().points()) {
      legion::interface::Point2D point;
      point.set_x(it_polygon_point.x());
      point.set_y(it_polygon_point.y());

      points.emplace_back(point);
    }
    legion::interface::Polygon2D polygon_2d;
    polygon_2d.set_points(points);
    planningdeug.add_vehicle_preiew_polygon(polygon_2d);
  }
  ptr_analysis->set_planning_parking_debug(planningdeug);
  if (ptr_adc_trajectory->trajectory_points_size() > 0)
    return Status(Status::ErrorCode::OK);
  else
    return Status(Status::ErrorCode::PLANNING_ERROR, "Failed to plan on any reference line.");
  // AINFO<<"frame diff time 5: " << TimeTool::Now2Ms()- last_time <<endl;
}

int LatticePlanner::JudgeReplanFlag(const LocalView &local_view)
{
  // TODO 此处接口预留
  if (local_view.routing_response_.replan_flag() ==
      legion::interface::RoutingResponse::REPLAN_FLAG_NONE) {
    // is_new_goal_ = false;
    // is_need_replan_ = false;
  } else {
    is_new_goal_ = true;
  }
  return true;
}

int LatticePlanner::GetADCTrajectory(const PlanningTrajectory &trajectory,
                                     const BehaviourState &behaviour,
                                     legion::interface::ADCTrajectory *ptr_adc_trajectory)
{
  // TODO:ptr_adc_trajectory
  std::vector<legion::interface::TrajectoryPoint> tra_points;
  trajectory.trajectory_points(tra_points);

  ptr_adc_trajectory->set_trajectory_points(&tra_points);
  ptr_adc_trajectory->set_behaviour_lat_state(behaviour.lat_state);
  ptr_adc_trajectory->set_behaviour_lon_state(behaviour.lon_state);
  ptr_adc_trajectory->set_adc_trajectory_type(ADCTrajectory::TRAJECTORY_TYPE_ABSOLUTE);
  ptr_adc_trajectory->set_is_replan((bool)is_need_replan_);
  TrajectoryPoint last_point;
  last_point = trajectory.trajectory_points().back();
  ptr_adc_trajectory->set_total_path_length(last_point.path_point().s());
  ptr_adc_trajectory->set_driving_mode(common::DrivingMode::COMPLETE_AUTO_DRIVE);

  return 1;
}

void LatticePlanner::SetTrajectoryArray(const vector<vector<PlanningTrajectory>> &trajectory_array,
                                        legion::interface::TrajectoryArray *ptr_trajectory_array)
{
  // 二次样条曲线 spline_s
  std::vector<legion::interface::Path> spline_s_paths;
  for (auto smoothline : frame_.SmoothLines()) {
    legion::interface::PathPoint path_point;
    legion::interface::Path path;
    std::vector<legion::interface::PathPoint> spline_s_path_points;
    for (auto lane_point_inner : smoothline) {
      path_point.set_x(lane_point_inner.point().x());
      path_point.set_y(lane_point_inner.point().y());
      path_point.set_z(lane_point_inner.point().z());
      path_point.set_theta(lane_point_inner.theta());
      path_point.set_s(lane_point_inner.mileage());
      path_point.set_kappa(lane_point_inner.kappa());
      spline_s_path_points.push_back(path_point);
    }

    path.set_name("spline_s");
    path.set_path_points(spline_s_path_points);
    spline_s_paths.push_back(path);
  }
  ptr_trajectory_array->set_spline_s(&spline_s_paths);

  // qp_smooth
  std::vector<legion::interface::Path> qp_smooth_paths;
  for (auto referenceline : frame_.ReferenceLines()) {
    legion::interface::PathPoint path_point;
    legion::interface::Path path;
    std::vector<legion::interface::PathPoint> qp_smooth_path_points;
    unsigned int count_vaild = 0;
    for (auto referencepoint : referenceline.ReferencePoints()) {
      if (fabs(referencepoint.kappa()) > 0.05) {
        path_point.set_x(referencepoint.x());
        path_point.set_y(referencepoint.y());
        path_point.set_z(referencepoint.z());
        path_point.set_theta(referencepoint.theta());
        path_point.set_s(referencepoint.s());
        path_point.set_kappa(referencepoint.kappa());
        qp_smooth_path_points.push_back(path_point);

      } else {
        if (count_vaild % 20 == 0) {
          path_point.set_x(referencepoint.x());
          path_point.set_y(referencepoint.y());
          path_point.set_z(referencepoint.z());
          path_point.set_theta(referencepoint.theta());
          path_point.set_s(referencepoint.s());
          path_point.set_kappa(referencepoint.kappa());
          qp_smooth_path_points.push_back(path_point);
        }
        count_vaild++;
      }
    }
    path.set_name("qp_smooth");
    path.set_path_points(qp_smooth_path_points);
    qp_smooth_paths.push_back(path);
  }
  ptr_trajectory_array->set_qp_smooth(&qp_smooth_paths);

  // 轨迹簇
  legion::interface::Trajectory trajectory_clipping;
  std::vector<legion::interface::Trajectory> trajectory_list;
  int trajectory_index = 0;
  for (auto trajectories_perlane : trajectory_array) {
    for (auto trajectory : trajectories_perlane) {
      if (trajectory.trajectory_points_size() > 0) {
        // 根据曲率进行抽稀裁剪 Trajectory
        // clipping，避免数据量过大，lcm无法正常publish
        unsigned int count_vaild = 0;
        for (size_t i = 0; i < trajectory.trajectory_points_size() - 1; i++) {
          // 曲率大于0.05的轨迹点不进行抽样,否则每2m抽取一个点
          if (fabs(trajectory.trajectory_points(i).path_point().kappa()) > 0.05) {
            trajectory_clipping.add_trajectory_points(trajectory.trajectory_points(i));
            count_vaild = 0;
          } else {
            if (count_vaild % 20 == 0) {
              trajectory_clipping.add_trajectory_points(trajectory.trajectory_points(i));
            }
            count_vaild++;
          }
        }
        trajectory_clipping.add_trajectory_points(
            trajectory.trajectory_points(trajectory.trajectory_points_size() - 1));
        trajectory_list.push_back(trajectory_clipping);
        trajectory_clipping.clear_trajectory_points();
        // 不进行抽稀
        //  trajectory_temp.set_trajectory_points(trajectory.trajectory_points());
        //  trajectory_list.push_back(trajectory_temp);
        trajectory_index++;
      }
    }
  }
  if (trajectory_index > 0) {
    ptr_trajectory_array->set_trajectory_list(&trajectory_list);
  } else {
    return;
  }
}

bool LatticePlanner::Reset()
{
  behaviour_selector_.StateMachineReset();
  return true;
}

}  // namespace planning
}  // namespace legion

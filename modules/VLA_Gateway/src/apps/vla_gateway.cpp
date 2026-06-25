/**
 * @file    vla_gateway.cpp
 * @brief   VLA_Gateway 应用主类实现
 */

#include "apps/vla_gateway.h"

#include <algorithm>
#include <chrono>
#include <cmath>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <limits>
#include <sstream>

#include "modules/common/enum/enum.h"
#include "modules/common/math/math_utils.h"
#include "modules/common/math/path_matcher.h"
#include "rclcpp/rclcpp.hpp"

namespace legion {
namespace vla_gateway {

VlaGateway::VlaGateway(const std::string& config_path)
    : config_path_(config_path) {}

VlaGateway::~VlaGateway() { Join(); }

void VlaGateway::LoadConfig() {
  std::ifstream ifs(config_path_);
  if (ifs.is_open()) {
    try {
      ifs >> config_json_;
    } catch (const std::exception& e) {
      RCLCPP_WARN(rclcpp::get_logger("vla_gateway"),
                  "Failed to parse config file %s: %s. Using defaults.",
                  config_path_.c_str(), e.what());
      config_json_ = json::object();
    }
  } else {
    RCLCPP_WARN(rclcpp::get_logger("vla_gateway"),
                "Config file not found: %s. Using defaults.",
                config_path_.c_str());
    config_json_ = json::object();
  }

  auto get_or = [this](const std::string& key, auto default_val) -> auto {
    auto it = config_json_.find(key);
    if (it != config_json_.end()) {
      return it->get<decltype(default_val)>();
    }
    return default_val;
  };

  process_period_ms_ = get_or("process_period_ms", 100);
  history_duration_s_ = get_or("history_duration_s", 2.0);
  history_interval_s_ = get_or("history_interval_s", 0.5);
  prediction_horizon_s_ = get_or("prediction_horizon_s", 3.0);
  max_obstacles_ = static_cast<std::size_t>(get_or("max_obstacles", 8));
  // 车长/车宽从 modules/common/data/vehicle_param/vehicle_param.json 读取

  mqtt_broker_ = get_or("mqtt_broker", std::string("127.0.0.1"));
  mqtt_port_ = get_or("mqtt_port", 1883);
  mqtt_topic_ = get_or("mqtt_topic", std::string("vla/gateway/frame_data"));
  mqtt_response_topic_ =
      get_or("mqtt_response_topic", std::string("vla/gateway/result"));
  guide_info_topic_ = get_or("guide_info_topic", std::string("/routing/GuideInfo"));
  mqtt_client_id_ = get_or("mqtt_client_id", std::string("vla_gateway"));
  debug_prompt_log_ = get_or("debug_prompt_log", false);
}

void VlaGateway::LoadVehicleParam() {
  namespace fs = std::filesystem;
  // 兼容相对路径配置：先取绝对路径
  fs::path config_fs = fs::absolute(config_path_);
  // config_path_: .../modules/VLA_Gateway/bin/conf/xxx.json
  fs::path vehicle_param_path =
      config_fs.parent_path()  // conf
          .parent_path()       // bin
          .parent_path()       // VLA_Gateway
          .parent_path()       // modules
          .parent_path()       // project root
          / "modules/common/data/vehicle_param/vehicle_param.json";

  std::ifstream ifs(vehicle_param_path);
  if (!ifs.is_open()) {
    RCLCPP_WARN(rclcpp::get_logger("vla_gateway"),
                "Vehicle param file not found: %s. Using defaults %.2f/%.2f.",
                vehicle_param_path.c_str(), ego_width_, ego_length_);
    return;
  }

  try {
    json j;
    ifs >> j;
    ego_width_ = j.value("width", ego_width_);
    ego_length_ = j.value("length", ego_length_);
    RCLCPP_INFO(rclcpp::get_logger("vla_gateway"),
                "Loaded vehicle param: width=%.2f, length=%.2f",
                ego_width_, ego_length_);
  } catch (const std::exception& e) {
    RCLCPP_WARN(rclcpp::get_logger("vla_gateway"),
                "Failed to parse vehicle param: %s. Using defaults.", e.what());
  }
}

void VlaGateway::Init() {
  LoadConfig();
  LoadVehicleParam();

  if (debug_prompt_log_) {
    // 每次启动清空调试文件，后续所有写入都用 append 模式
    std::ofstream dbg("/tmp/vla_prompt_debug.txt", std::ios::trunc);
  }

  if (!mqtt_client_.Init(mqtt_broker_, mqtt_port_, mqtt_client_id_)) {
    RCLCPP_ERROR(rclcpp::get_logger("vla_gateway"),
                 "MQTT client init failed.");
  }

  mqtt_client_.Subscribe(
      mqtt_response_topic_,
      [this](const std::string& topic, const std::string& payload) {
        this->HandleMqttResponse(topic, payload);
      });

#if ROS2_ENABLE
  ros2_manager_ = std::make_shared<Ros2MessageManager<VlaGateway>>();
  ros2_manager_->Init(this);
  ros2_manager_->Run();
#endif
}

void VlaGateway::Join() {
#if ROS2_ENABLE
  if (ros2_manager_ != nullptr) {
    ros2_manager_->Stop();
  }
#endif
}

void VlaGateway::HandleLocation(const ros2_interface::msg::Location& loc) {
  std::lock_guard<std::mutex> lock(data_mutex_);
  latest_loc_ = loc;
  has_loc_ = true;
  UpdateHistory(loc);
  UpdateLocationHistory(loc);

  const double current_loc_time =
      static_cast<double>(loc.header.stamp.sec) +
      static_cast<double>(loc.header.stamp.nanosec) * 1e-9;
  TryWriteGroundTruth(current_loc_time);
}

void VlaGateway::HandlePredictionObstacles(
    const ros2_interface::msg::PredictionObstacles& obs) {
  std::lock_guard<std::mutex> lock(data_mutex_);
  latest_obs_ = obs;
  has_obs_ = true;
}

void VlaGateway::HandleTrajectoryArray(
    const ros2_interface::msg::TrajectoryArray& traj_array) {
  std::lock_guard<std::mutex> lock(data_mutex_);
  latest_traj_array_ = traj_array;
  has_traj_array_ = true;

  // 提取参考线：使用 TrajectoryArray.qp_smooth 中的第一条非空 Path
  std::vector<legion::interface::PathPoint> new_ref;
  for (const auto& path : traj_array.qp_smooth) {
    if (!path.path_points.empty()) {
      for (const auto& p : path.path_points) {
        legion::interface::PathPoint pp;
        pp.set_x(p.x);
        pp.set_y(p.y);
        pp.set_theta(p.theta);
        pp.set_kappa(p.kappa);
        pp.set_s(p.s);
        new_ref.push_back(pp);
      }
      if (!new_ref.empty()) {
        break;
      }
    }
  }
  // 只有拿到有效参考线才替换，避免空消息冲掉 RoutingResponse 的兜底参考线
  if (!new_ref.empty()) {
    ref_line_ = std::move(new_ref);
  }
}

namespace {

// 计算点到折线的最小距离
double MinDistanceToLane(double x, double y,
                         const ros2_interface::msg::LaneInfo& lane) {
  double min_dist = std::numeric_limits<double>::max();
  for (const auto& lp : lane.lane_points) {
    const double dx = lp.point.x - x;
    const double dy = lp.point.y - y;
    min_dist = std::min(min_dist, dx * dx + dy * dy);
  }
  return std::sqrt(min_dist);
}

// 将 LaneInfo 按固定步长（默认 0.2m）重采样，提升 Frenet 转换精度
std::vector<legion::interface::PathPoint> ResampleLanePoints(
    const ros2_interface::msg::LaneInfo& lane, double step) {
  std::vector<legion::interface::PathPoint> result;
  const std::size_t n = lane.lane_points.size();
  if (n == 0) {
    return result;
  }
  if (n == 1) {
    legion::interface::PathPoint pp;
    pp.set_x(lane.lane_points[0].point.x);
    pp.set_y(lane.lane_points[0].point.y);
    pp.set_theta(lane.lane_points[0].theta);
    pp.set_kappa(0.0);
    pp.set_s(0.0);
    result.push_back(pp);
    return result;
  }

  // 计算累积弧长
  std::vector<double> cum_s(n, 0.0);
  for (std::size_t i = 1; i < n; ++i) {
    const auto& prev = lane.lane_points[i - 1];
    const auto& curr = lane.lane_points[i];
    cum_s[i] = cum_s[i - 1] +
               std::hypot(curr.point.x - prev.point.x,
                          curr.point.y - prev.point.y);
  }
  const double total_s = cum_s.back();
  if (total_s < 1e-6) {
    return result;
  }

  // 使用 mileage 作为 s，如果没有则使用累积弧长
  const bool use_mileage =
      (lane.lane_points.back().mileage - lane.lane_points.front().mileage) > 1e-6;
  const double s0 = use_mileage ? lane.lane_points.front().mileage : 0.0;
  const double s_scale =
      use_mileage ? (lane.lane_points.back().mileage - s0) / total_s : 1.0;

  auto find_segment = [&](double s) -> std::size_t {
    for (std::size_t i = 0; i + 1 < n; ++i) {
      if (s >= cum_s[i] && s <= cum_s[i + 1]) {
        return i;
      }
    }
    return n - 2;
  };

  for (double s = 0.0; s <= total_s + 1e-6; s += step) {
    const double clamped_s = std::min(s, total_s);
    const std::size_t i = find_segment(clamped_s);
    const std::size_t j = i + 1;
    const double seg_len = cum_s[j] - cum_s[i];
    double ratio = 0.0;
    if (seg_len > 1e-6) {
      ratio = (clamped_s - cum_s[i]) / seg_len;
      ratio = std::clamp(ratio, 0.0, 1.0);
    }

    const auto& p0 = lane.lane_points[i];
    const auto& p1 = lane.lane_points[j];
    const double x = p0.point.x + ratio * (p1.point.x - p0.point.x);
    const double y = p0.point.y + ratio * (p1.point.y - p0.point.y);

    // theta  unwrap 后插值
    const double dtheta =
        legion::common::math::NormalizeAngle(p1.theta - p0.theta);
    const double theta =
        legion::common::math::NormalizeAngle(p0.theta + ratio * dtheta);

    legion::interface::PathPoint pp;
    pp.set_x(x);
    pp.set_y(y);
    pp.set_theta(theta);
    pp.set_kappa(0.0);
    pp.set_s(s0 + clamped_s * s_scale);
    result.push_back(pp);
  }
  return result;
}

}  // namespace

void VlaGateway::HandleRoutingResponse(
    const ros2_interface::msg::RoutingResponse& routing_response) {
  std::lock_guard<std::mutex> lock(data_mutex_);
  latest_routing_response_ = routing_response;
  has_routing_response_ = true;
  BuildRoutingRefLineLocked();
}

void VlaGateway::HandleChassis(const ros2_interface::msg::Chassis& chassis) {
  std::lock_guard<std::mutex> lock(data_mutex_);
  latest_chassis_ = chassis;
  has_chassis_ = true;
}

void VlaGateway::BuildRoutingRefLineLocked() {
  // 仅当 TrajectoryArray 没有提供有效参考线，且已有定位、已有 RoutingResponse 时才构建
  if (!ref_line_.empty() || !has_loc_ || !has_routing_response_ ||
      latest_routing_response_.lane_list.empty()) {
    return;
  }

  const double ego_x = latest_loc_.utm_position.x;
  const double ego_y = latest_loc_.utm_position.y;

  // 选距离自车最近的车道
  std::size_t best_idx = 0;
  double best_dist = std::numeric_limits<double>::max();
  for (std::size_t i = 0; i < latest_routing_response_.lane_list.size(); ++i) {
    const double d =
        MinDistanceToLane(ego_x, ego_y, latest_routing_response_.lane_list[i]);
    if (d < best_dist) {
      best_dist = d;
      best_idx = i;
    }
  }

  RCLCPP_INFO(rclcpp::get_logger("vla_gateway"),
              "RoutingResponse fallback: select lane %zu, min dist %.2fm",
              best_idx, best_dist);

  ref_line_ = ResampleLanePoints(latest_routing_response_.lane_list[best_idx], 0.2);
}

void VlaGateway::UpdateHistory(const ros2_interface::msg::Location& loc) {
  double t = static_cast<double>(loc.header.stamp.sec) +
             static_cast<double>(loc.header.stamp.nanosec) * 1e-9;
  if (last_history_time_ < 0.0 ||
      t >= last_history_time_ + history_interval_s_) {
    history_.push_back({t, loc.utm_position.x, loc.utm_position.y});
    last_history_time_ = t;
  }
  while (!history_.empty() && (t - history_.front().time > history_duration_s_)) {
    history_.pop_front();
  }
  // 如果定位先到而 RoutingResponse 后到，这里补上兜底参考线
  BuildRoutingRefLineLocked();
}

void VlaGateway::UpdateLocationHistory(const ros2_interface::msg::Location& loc) {
  const double t = static_cast<double>(loc.header.stamp.sec) +
                   static_cast<double>(loc.header.stamp.nanosec) * 1e-9;
  loc_history_.push_back({t, loc.utm_position.x, loc.utm_position.y});
  // 保留 5 秒，满足 3 秒真值计算及一定裕量
  while (!loc_history_.empty() && (t - loc_history_.front().time > 5.0)) {
    loc_history_.pop_front();
  }
}

void VlaGateway::TryWriteGroundTruth(double current_loc_time) {
  if (!debug_prompt_log_ || gt_pending_.empty() || loc_history_.empty()) {
    return;
  }

  std::ofstream dbg("/tmp/vla_prompt_debug.txt", std::ios::app);

  for (auto it = gt_pending_.begin(); it != gt_pending_.end();) {
    const double target_time = it->loc_time + 3.0;
    if (current_loc_time < target_time) {
      ++it;
      continue;
    }

    // 在 loc_history_ 中找到最接近 target_time 的位置
    const LocationSnapshot* best = nullptr;
    double best_dt = std::numeric_limits<double>::max();
    for (const auto& snap : loc_history_) {
      const double dt = std::abs(snap.time - target_time);
      if (dt < best_dt) {
        best_dt = dt;
        best = &snap;
      }
    }

    if (best != nullptr && !it->ref_line.empty()) {
      const auto [s_abs, d] =
          legion::common::math::PathMatcher::GetPathFrenetCoordinate(
              it->ref_line, best->x, best->y);
      const double s = s_abs - it->s0;
      const int di = static_cast<int>(std::round(d * 10.0));
      const int si = static_cast<int>(std::round(s * 10.0));
      dbg << "[Ground Truth at t=" << std::fixed << std::setprecision(3)
          << it->loc_time << "] (" << di << "," << si << ")\n";
    }

    it = gt_pending_.erase(it);
  }
}

std::pair<double, double> VlaGateway::GetFrenet(double x, double y) const {
  if (ref_line_.empty()) {
    return {0.0, 0.0};
  }
  return legion::common::math::PathMatcher::GetPathFrenetCoordinate(ref_line_,
                                                                    x, y);
}

std::string VlaGateway::ObstacleTypeToString(int type) const {
  switch (type) {
    case legion::common::OBSTACLE_PEDESTRIAN:
      return "pedestrian";
    case legion::common::OBSTACLE_BICYCLE:
      return "bicycle";
    case legion::common::OBSTACLE_VEHICLE:
      return "car";
    case legion::common::OBSTACLE_UNKNOWN_MOVABLE:
      return "unknown_movable";
    case legion::common::OBSTACLE_UNKNOWN_UNMOVABLE:
      return "unknown_unmovable";
    case legion::common::OBSTACLE_UNKNOWN:
    default:
      // 训练数据中 unknown 类型统一标注为 pedestrian
      return "pedestrian";
  }
}

std::string VlaGateway::BuildPrompt() {
  std::lock_guard<std::mutex> lock(data_mutex_);

  if (!has_loc_) {
    RCLCPP_WARN(rclcpp::get_logger("vla_gateway"), "No location message yet.");
    return "";
  }
  if (ref_line_.empty()) {
    RCLCPP_WARN(rclcpp::get_logger("vla_gateway"),
                "No reference line (TrajectoryArray.qp_smooth) yet.");
    return "";
  }

  const double ego_x = latest_loc_.utm_position.x;
  const double ego_y = latest_loc_.utm_position.y;
  const double ego_heading = latest_loc_.heading;

  const auto [ego_s_abs, ego_d] = GetFrenet(ego_x, ego_y);
  const auto ego_matched =
      legion::common::math::PathMatcher::MatchToPath(ref_line_, ego_x, ego_y);

  // Yaw 定义：相对于参考线的局部 ENU 坐标系，参考线切向（右）为 0，逆时针为正。
  const double ego_yaw =
      legion::common::math::NormalizeAngle(ego_heading - ego_matched.theta());

  // 自车速度优先使用 /drivers/canbus/Chassis 的 speed_mps，并分解到 (d, s) 方向
  // Velocity 输出顺序为 (v_d, v_s)：前者沿横向 d，后者沿纵向 s（参考线切向）。
  double ego_vd = 0.0;
  double ego_vs = 0.0;
  if (has_chassis_) {
    const double speed = latest_chassis_.speed_mps;
    ego_vd = speed * std::sin(ego_yaw);  // 横向
    ego_vs = speed * std::cos(ego_yaw);  // 纵向
  } else {
    rclcpp::Clock warn_clock;
    RCLCPP_WARN_THROTTLE(rclcpp::get_logger("vla_gateway"), warn_clock, 5000,
                         "No Chassis message yet, falling back to "
                         "Location.linear_velocity.");
    const double vx = latest_loc_.linear_velocity.x;
    const double vy = latest_loc_.linear_velocity.y;
    const double theta = ego_matched.theta();
    ego_vd = -vx * std::sin(theta) + vy * std::cos(theta);
    ego_vs = vx * std::cos(theta) + vy * std::sin(theta);
  }

  // Frenet s 以自车为原点：ego s = 0，障碍物 s 为相对于 ego 的纵向距离
  const double s0 = ego_s_abs;
  last_ego_s_abs_ = ego_s_abs;

  const double current_time =
      static_cast<double>(latest_loc_.header.stamp.sec) +
      static_cast<double>(latest_loc_.header.stamp.nanosec) * 1e-9;
  last_prompt_loc_time_ = current_time;

  std::ostringstream oss;
  oss << std::fixed << std::setprecision(2);

  oss << "###Ego-States:\n";
  // Frenet 坐标按 (d, s) 顺序输出
  oss << "- Position is (" << ego_d << "," << (ego_s_abs - s0) << ")m.\n";
  oss << "- Yaw is " << ego_yaw << "rad.\n";
  oss << "- Width is " << ego_width_ << "m.\n";
  oss << "- Length is " << ego_length_ << "m.\n";
  oss << "- Velocity is (" << ego_vd << "," << ego_vs << ")m/s.\n";
  oss << "- Historical trajectory (last " << static_cast<int>(history_duration_s_)
      << " seconds): [";

  bool first = true;
  for (const auto& h : history_) {
    if (current_time - h.time > history_duration_s_) {
      continue;
    }
    const auto [hs, hd] = GetFrenet(h.x, h.y);
    if (!first) {
      oss << ",";
    }
    first = false;
    oss << "(" << hd << "," << (hs - s0) << ")";
  }
  oss << "].\n";

  // 只考虑在 ego 前方（s>0）且横向距离 |d|<2m 的障碍物，再取最近最多 8 个
  std::vector<ObstacleItem> items;
  if (has_obs_) {
    for (const auto& po : latest_obs_.prediction_obstacles) {
      const auto& p = po.perception_obstacle;
      const double dx = p.position.x - ego_x;
      const double dy = p.position.y - ego_y;
      const double dist = std::sqrt(dx * dx + dy * dy);

      double future_x = p.position.x + p.velocity.x * prediction_horizon_s_;
      double future_y = p.position.y + p.velocity.y * prediction_horizon_s_;
      double future_theta = p.theta;

      if (!po.trajectory.empty() && !po.trajectory[0].trajectory_points.empty()) {
        const auto& traj = po.trajectory[0].trajectory_points;
        std::size_t best_idx = 0;
        double best_dt = std::abs(traj[0].relative_time - prediction_horizon_s_);
        for (std::size_t i = 1; i < traj.size(); ++i) {
          const double dt =
              std::abs(traj[i].relative_time - prediction_horizon_s_);
          if (dt < best_dt) {
            best_dt = dt;
            best_idx = i;
          }
        }
        future_x = traj[best_idx].path_point.x;
        future_y = traj[best_idx].path_point.y;
        future_theta = traj[best_idx].path_point.theta;
      }

      const auto [s_abs, d] = GetFrenet(p.position.x, p.position.y);
      const auto [sf_abs, df] = GetFrenet(future_x, future_y);
      const double s = s_abs - s0;
      const double sf = sf_abs - s0;

      // 过滤：当前位置必须在 ego 前方，且横向偏离车道不超过 2m
      if (s <= 0.0 || std::abs(d) >= 2.0) {
        continue;
      }

      items.push_back({dist, p, future_x, future_y, future_theta, s, d, sf, df});
    }
  }

  const std::size_t n = std::min(items.size(), max_obstacles_);
  if (n > 0) {
    std::partial_sort(items.begin(), items.begin() + n, items.end(),
                      [](const ObstacleItem& a, const ObstacleItem& b) {
                        return a.distance < b.distance;
                      });
  }

  oss << "###There are " << n << " obstacles around ego:\n";
  for (std::size_t i = 0; i < n; ++i) {
    const auto& it = items[i];
    const std::string type = ObstacleTypeToString(it.perception.type);

    const auto obs_matched = legion::common::math::PathMatcher::MatchToPath(
        ref_line_, it.perception.position.x, it.perception.position.y);
    const double obs_yaw = legion::common::math::NormalizeAngle(
        it.perception.theta - obs_matched.theta());

    const auto fut_matched = legion::common::math::PathMatcher::MatchToPath(
        ref_line_, it.future_x, it.future_y);
    const double future_yaw = legion::common::math::NormalizeAngle(
        it.future_theta - fut_matched.theta());

    // 障碍物速度同样分解到 (d, s) 方向后输出
    const double obs_vx = it.perception.velocity.x;
    const double obs_vy = it.perception.velocity.y;
    const double obs_theta = obs_matched.theta();
    const double obs_vd =
        -obs_vx * std::sin(obs_theta) + obs_vy * std::cos(obs_theta);
    const double obs_vs =
        obs_vx * std::cos(obs_theta) + obs_vy * std::sin(obs_theta);

    // Frenet 坐标按 (d, s) 顺序输出
    oss << (i + 1) << ". " << type << " at (" << it.d << "," << it.s
        << ")m, width is " << it.perception.width
        << "m, length is " << it.perception.length << "m, yaw is " << obs_yaw
        << "rad, velocity is (" << obs_vd << "," << obs_vs
        << ")m/s. After " << static_cast<int>(prediction_horizon_s_)
        << " seconds, the position will be (" << it.df << "," << it.sf
        << ")m, yaw will be " << future_yaw << "rad.\n";
  }

  oss << "###Traffic Light: \n- There is no traffic light.\n";
  oss << "Based on the ego position and velocity, predict which node in the "
         "map grid the ego vehicle is most likely to fall into after 3 "
         "seconds, and avoid collision with other obstacles.";

  return oss.str();
}

void VlaGateway::Process() {
  const auto t0 = std::chrono::steady_clock::now();
  const std::string prompt = BuildPrompt();
  const auto t1 = std::chrono::steady_clock::now();
  if (prompt.empty()) {
    return;
  }

  const double prompt_build_ms =
      std::chrono::duration<double, std::milli>(t1 - t0).count();

  {
    std::lock_guard<std::mutex> lock(data_mutex_);
    last_prompt_text_ = prompt;
    last_prompt_process_start_ = t0;
    last_prompt_send_time_ = t1;
    last_prompt_build_ms_ = prompt_build_ms;
    // last_prompt_loc_time_ 已在 BuildPrompt() 中设置
    last_prompt_pending_ = true;

    // 记录真值 pending：3 秒后按同一参考线计算未来 Frenet 坐标
    GtPendingItem gt_item;
    gt_item.loc_time = last_prompt_loc_time_;
    gt_item.s0 = last_ego_s_abs_;
    gt_item.ref_line = ref_line_;
    gt_pending_.push_back(std::move(gt_item));
  }

  RCLCPP_INFO(rclcpp::get_logger("vla_gateway"),
              "Generated prompt (%zu bytes, build %.2f ms). First 200 "
              "chars:\n%.200s...",
              prompt.size(), prompt_build_ms, prompt.c_str());

  if (!mqtt_client_.Publish(mqtt_topic_, prompt)) {
    RCLCPP_ERROR(rclcpp::get_logger("vla_gateway"),
                 "Failed to publish MQTT message to %s", mqtt_topic_.c_str());
  } else {
    RCLCPP_INFO(rclcpp::get_logger("vla_gateway"),
                "Published %zu bytes to MQTT topic %s", prompt.size(),
                mqtt_topic_.c_str());
  }
}

void VlaGateway::HandleMqttResponse(const std::string& topic,
                                    const std::string& payload) {
  const auto t_recv = std::chrono::steady_clock::now();
  RCLCPP_INFO(rclcpp::get_logger("vla_gateway"),
              "Received MQTT response on %s: %s", topic.c_str(),
              payload.c_str());

  // 解析 "row,col" 或 "row,col,inference_ms" 格式
  int intersection = 0;
  int roads = 0;
  double infer_ms = -1.0;
  char comma = 0;
  std::istringstream iss(payload);
  if (!(iss >> intersection >> comma >> roads)) {
    RCLCPP_WARN(rclcpp::get_logger("vla_gateway"),
                "Failed to parse MQTT response: %s", payload.c_str());
    return;
  }
  // 可选的远程推理耗时（由 vla_mqtt_server.py 提供）
  if (!(iss >> comma >> infer_ms)) {
    infer_ms = -1.0;
  }

  ros2_interface::msg::GuideInfo guide_info;
  guide_info.header.stamp = rclcpp::Clock().now();
  guide_info.header.frame_id = "vla_gateway";
  guide_info.intersection_status =
      static_cast<int8_t>(std::clamp(intersection, -128, 127));
  guide_info.roads_status = static_cast<int8_t>(std::clamp(roads, -128, 127));

  PublishGuideInfo(guide_info);
  const auto t_after_publish = std::chrono::steady_clock::now();

  // 记录各阶段耗时：
  //   - Prompt 构造时间
  //   - Network RTT（MQTT 发送 -> 远程收到；远程返回 -> 本地收到）
  //   - Remote Infer（远程 4B vLLM 实际推理耗时）
  //   - GuideInfo 解析/发布时间
  //   - 总端到端时延
  if (debug_prompt_log_) {
    std::lock_guard<std::mutex> lock(data_mutex_);
    if (last_prompt_pending_) {
      const double network_remote_ms =
          std::chrono::duration<double, std::milli>(t_recv -
                                                    last_prompt_send_time_)
              .count();
      const double parse_publish_ms =
          std::chrono::duration<double, std::milli>(t_after_publish - t_recv)
              .count();
      const double total_ms =
          std::chrono::duration<double, std::milli>(t_after_publish -
                                                    last_prompt_process_start_)
              .count();

      std::ofstream dbg("/tmp/vla_prompt_debug.txt", std::ios::app);
      dbg << "===== Prompt at t=" << std::fixed << std::setprecision(3)
          << last_prompt_loc_time_ << " =====\n"
          << last_prompt_text_ << "\n"
          << "[VLA Result] " << payload << "\n"
          << "[Prompt Build] " << std::fixed << std::setprecision(2)
          << last_prompt_build_ms_ << " ms\n";
      if (infer_ms >= 0.0) {
        const double network_rtt_ms =
            std::max(0.0, network_remote_ms - infer_ms);
        dbg << "[Network RTT] " << network_rtt_ms << " ms\n"
            << "[Remote Infer] " << infer_ms << " ms\n";
      } else {
        dbg << "[Network + Remote Infer] " << network_remote_ms << " ms\n";
      }
      dbg << "[GuideInfo Parse/Publish] " << parse_publish_ms << " ms\n"
          << "[End-to-End Latency] " << total_ms << " ms\n"
          << "[GuideInfo] intersection_status="
          << static_cast<int>(guide_info.intersection_status)
          << ", roads_status=" << static_cast<int>(guide_info.roads_status)
          << "\n\n";
      last_prompt_pending_ = false;
    }
  }
}

void VlaGateway::PublishGuideInfo(
    const ros2_interface::msg::GuideInfo& guide_info) {
#if ROS2_ENABLE
  if (ros2_manager_ != nullptr) {
    ros2_manager_->PublishGuideInfo(guide_info);
  }
#endif
}

}  // namespace vla_gateway
}  // namespace legion

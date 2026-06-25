/**
 * @file    vla_gateway.h
 * @brief   VLA_Gateway 应用主类
 */

#pragma once

#include <chrono>
#include <deque>
#include <mutex>
#include <string>
#include <utility>
#include <vector>

#include "modules/common/interface/location.hpp"
#include "modules/common/interface/path_point.hpp"
#include "modules/common/interface/trajectory_array.hpp"
#include "modules/common/interface/prediction_obstacles.hpp"
#include "modules/common/json/json.hpp"
#include "modules/VLA_Gateway/src/mqtt/mqtt_client.h"

#if ROS2_ENABLE
#include "modules/VLA_Gateway/src/message_manager/ros2/ros2_message_manager.h"
#include "ros2_interface/msg/location.hpp"
#include "ros2_interface/msg/guide_info.hpp"
#include "ros2_interface/msg/trajectory_array.hpp"
#include "ros2_interface/msg/routing_response.hpp"
#include "ros2_interface/msg/prediction_obstacles.hpp"
#include "ros2_interface/msg/chassis.hpp"
#endif

namespace legion {
namespace vla_gateway {

using json = nlohmann::json;

/**
 * @brief VLA Gateway 模块
 *
 * 订阅定位、障碍物和 /planning/TrajectoryArray，将自车历史轨迹及最近 8 个障碍物的
 * 笛卡尔坐标转换到 TrajectoryArray.qp_smooth 参考线对应的 Frenet 坐标系下，
 * 生成 prompt 字符串并通过 MQTT 发送。
 */
class VlaGateway {
 public:
  explicit VlaGateway(const std::string& config_path);
  ~VlaGateway();

  /**
   * @brief 加载配置、初始化 MQTT 和消息管理器
   */
  void Init();

  /**
   * @brief 等待消息循环结束
   */
  void Join();

  /**
   * @brief 处理定位消息
   */
  void HandleLocation(const ros2_interface::msg::Location& loc);

  /**
   * @brief 处理预测障碍物消息
   */
  void HandlePredictionObstacles(
      const ros2_interface::msg::PredictionObstacles& obs);

  /**
   * @brief 处理 TrajectoryArray 消息，并从中提取参考线
   */
  void HandleTrajectoryArray(
      const ros2_interface::msg::TrajectoryArray& traj_array);

  /**
   * @brief 处理 RoutingResponse 消息，从 lane_list 中匹配最近车道作为参考线兜底
   */
  void HandleRoutingResponse(
      const ros2_interface::msg::RoutingResponse& routing_response);

  /**
   * @brief 处理 Chassis 消息，获取自车速度
   */
  void HandleChassis(const ros2_interface::msg::Chassis& chassis);

  /**
   * @brief 发布 GuideInfo ROS2 消息
   */
  void PublishGuideInfo(const ros2_interface::msg::GuideInfo& guide_info);

  /**
   * @brief 处理 MQTT 服务端下发的推理结果
   */
  void HandleMqttResponse(const std::string& topic,
                          const std::string& payload);

  /**
   * @brief 周期处理入口：构造 prompt 并通过 MQTT 发送
   */
  void Process();

  /**
   * @brief 处理周期（供消息管理器读取）
   */
  int process_period_ms() const { return process_period_ms_; }

  /**
   * @brief GuideInfo 发布 topic（供消息管理器读取）
   */
  std::string guide_info_topic() const { return guide_info_topic_; }

 private:
  struct HistoryPose {
    double time;
    double x;
    double y;
  };

  struct ObstacleItem {
    double distance;
    ros2_interface::msg::PerceptionObstacle perception;
    double future_x;
    double future_y;
    double future_theta;
    double s;   // 相对于 ego 的纵向 Frenet 坐标
    double d;   // 横向 Frenet 坐标
    double sf;  // 未来位置相对于 ego 的纵向坐标
    double df;  // 未来位置横向坐标
  };

  struct LocationSnapshot {
    double time;
    double x;
    double y;
  };

  struct GtPendingItem {
    double loc_time;
    double s0;
    std::vector<legion::interface::PathPoint> ref_line;
  };

  void LoadConfig();
  void LoadVehicleParam();
  void UpdateHistory(const ros2_interface::msg::Location& loc);
  void UpdateLocationHistory(const ros2_interface::msg::Location& loc);
  void TryWriteGroundTruth(double current_loc_time);
  void BuildRoutingRefLineLocked();
  std::string BuildPrompt();
  std::string ObstacleTypeToString(int type) const;
  std::pair<double, double> GetFrenet(double x, double y) const;

  // 配置
  std::string config_path_;
  json config_json_;

  int process_period_ms_ = 100;
  double history_duration_s_ = 2.0;
  double history_interval_s_ = 0.5;
  double prediction_horizon_s_ = 3.0;
  std::size_t max_obstacles_ = 8;
  double ego_width_ = 1.85;
  double ego_length_ = 4.08;

  std::string mqtt_broker_ = "127.0.0.1";
  int mqtt_port_ = 1883;
  std::string mqtt_topic_ = "vla/gateway/frame_data";
  std::string mqtt_response_topic_ = "vla/gateway/result";
  std::string guide_info_topic_ = "/routing/GuideInfo";
  std::string mqtt_client_id_ = "vla_gateway";
  bool debug_prompt_log_ = false;

  // 调试：最近一次 prompt 文本、时间戳和各阶段耗时统计
  std::string last_prompt_text_;
  std::chrono::steady_clock::time_point last_prompt_process_start_;
  std::chrono::steady_clock::time_point last_prompt_send_time_;
  double last_prompt_build_ms_ = 0.0;
  double last_prompt_loc_time_ = 0.0;
  double last_ego_s_abs_ = 0.0;
  bool last_prompt_pending_ = false;

  // 真值：记录自车 3s 后的 Frenet 坐标
  std::deque<LocationSnapshot> loc_history_;
  std::deque<GtPendingItem> gt_pending_;

  // 数据缓存
  std::mutex data_mutex_;
  ros2_interface::msg::Location latest_loc_;
  ros2_interface::msg::PredictionObstacles latest_obs_;
  ros2_interface::msg::TrajectoryArray latest_traj_array_;
  ros2_interface::msg::RoutingResponse latest_routing_response_;
  ros2_interface::msg::Chassis latest_chassis_;
  bool has_loc_ = false;
  bool has_obs_ = false;
  bool has_traj_array_ = false;
  bool has_routing_response_ = false;
  bool has_chassis_ = false;

  std::deque<HistoryPose> history_;
  double last_history_time_ = -1.0;
  std::vector<legion::interface::PathPoint> ref_line_;

  // MQTT 客户端
  MqttClient mqtt_client_;

#if ROS2_ENABLE
  std::shared_ptr<Ros2MessageManager<VlaGateway>> ros2_manager_;
#endif
};

}  // namespace vla_gateway
}  // namespace legion

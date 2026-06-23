/**
 * @file    canbus.h
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <mutex>
#include <thread>
#include <iomanip>
#include <fstream>


#include "modules/common/json/json.hpp"
#include "modules/common/status/status.h"
#include "modules/common/logging/logging.h"
#include "modules/common/math/math_utils.h"
#include "modules/common/math/math_tools.h"
#include "message_manager/message_manager.h"
#include "modules/common/timer/timer_manager.h"
#include "modules/common/timer/ad_timer_manager.h"
#include "modules/drivers/canbus/src/common/local_view.h"
#include "modules/drivers/canbus/src/common/canbus_gflags.h"

#include "modules/common/state_machine/state_context.hpp"

#include "modules/drivers/canbus/src/drivers/canbus/can_client/can_client_factory.h"
#include "modules/drivers/canbus/src/drivers/canbus/common/can_card_parameter.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/can_receiver.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/can_sender.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_comm/can_message_manager.h"
#include "modules/drivers/canbus/src/drivers/canbus/can_client/can_client.h"

#include "modules/drivers/canbus/src/vehicles/vehicle_factory.h"
#include "modules/drivers/canbus/src/vehicles/vehicle_controller.h"


#if LCM_ENABLE
#include "modules/drivers/canbus/src/message_manager/lcm/lcm_message_manager.h"
#endif
#if DDS_ENABLE
#include "modules/drivers/canbus/src/message_manager/dds/dds_message_manager.h"
#endif
#if ROS_ENABLE
#include "modules/drivers/canbus/src/message_manager/ros/ros_message_manager.h"
#endif
#if ROS2_ENABLE
#include "modules/drivers/canbus/src/message_manager/ros2/ros2_message_manager.h"
#endif

#include "modules/drivers/canbus/src/proto/canbus_conf.pb.h"
// #include "modules/common/interface/vehicle_param.hpp"
#include "modules/common/data/vehicle_param/proto/vehicle_param.pb.h"
/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion 
{
namespace drivers 
{
using namespace legion::common;
using json = nlohmann::json;

using namespace legion::driver::drivers;
using namespace legion::drivers;
using namespace legion::interface;
using namespace legion::common::math;
/**
 * @class Canbus
 * @brief 控制类.
 */
class Canbus {
 public:
  Canbus(std::string file_path) : config_file_path_(file_path){};
  ~Canbus() = default;
  /**
   * @brief     初始化．
   * @param[in] void．
   * @return    void.
   */
  void Init();

  /**
   * @brief     join．
   * @param[in] void.
   * @return    void.
   */
  void Join();

  /**
   * @brief Get the Conf object
   * @return std::shared_ptr<CanbusConf>
   */
  std::shared_ptr<CanbusConf> GetConf() const;

 protected:
  //初始化状态
  bool is_init_;
  //配置文件路径
  std::string config_file_path_;
  //配置文件操作类
  json odom_json_;
  //控制逻辑设置
  std::shared_ptr<CanbusConf> canbus_conf_;
  //消息控制器
  std::map<std::string, std::shared_ptr<MessageManager<Canbus>>>message_manager_;
#if LCM_ENABLE
  std::shared_ptr<LcmMessageManager<Canbus>> lcm_message_manager_;
#endif
#if DDS_ENABLE
  // DDS消息控制器
  std::shared_ptr<DdsMessageManager<Canbus>> dds_message_manager_;
#endif
#if ROS_ENABLE
  std::shared_ptr<RosMessageManager<Canbus>> ros_message_manager_;
#endif
#if ROS2_ENABLE
  std::shared_ptr<Ros2MessageManager<Canbus>> ros2_message_manager_;
#endif
#if ADSFI_ENABLE
  std::shared_ptr<AdsfiMessageManager<Canbus>> adsfi_message_manager_;
#endif

 protected:
  /**
   * @brief     注册消息控制器.
   * @param[in] message_manager　消息控制器对象指针.
   * @return    void.
   */
  void ResigerMessageManager(
      std::string name,
      std::shared_ptr<MessageManager<Canbus>> message_manager);

  /**
   * @brief
   *
   */
  void VariableInit();

  /**
   * @brief     消息初始化.
   * @return    void.
   */
  void MessagesInit();

  /**
   * @brief 故障码监控初始化
   */
  void FaultMonitorInit();

  /**
   * @brief 周期发送控制输出到底盘,以及广播canbus状态
   * @return void.
   */
  void Task10ms(void* param);

  /**
   * @brief
   * @param  wheel_info
   */
  void PublishWheelInfo(legion::interface::WheelInfo wheel_info);

  /**
   * @brief
   * @param  chassis
   */
  void PublishChassis(legion::interface::Chassis chassis);

  /**
   * @brief
   * @param  vehicle
   */
  void PublishVehicle(legion::interface::Vehicle vehicle);

  /**
   * @brief
   * @param  faults
   */
  void PublishFaults(legion::interface::Faults faults);

  /**
   * @brief     打印调试.
   * @return    void.
   */
  void Print();

  /**
   * @brief     日志调试.
   * @return    void.
   */
  void Log();

 public:
  /**
   * @brief     ControlCommand消息接收.
   * @param[in] control_command .
   * @return    void.
   */
  void HandleControlCommand(legion::interface::ControlCommand control_command);

  /**
   * @brief     VehicleTask消息接收.
   * @param[in] vehicle_task .
   * @return    void.
   */
  void HandleVehicleTask(legion::interface::VehicleTask vehicle_task);

  /**
   * @brief     ControlCommand消息接收.
   * @param[in] teleop_control_command .
   * @return    void.
   */
  void HandleTeleopControlCommand(legion::interface::ControlCommand teleop_control_command);

  /**
   * @brief     计算算法输出.
   * @return    void.
   */
  void ComputeCanbusCommandOnTimer();

  /**
   * @brief
   *
   * @param local_view
   * @return Status
   */
  Status CheckInput(const LocalView &local_view);

  /**
   * @brief     状态监测.
   * @return    void.
   */
  void StatusDetectOnTimer();

  void CanClientInit();

  void Start();

  void UpdateCmd();

  void UpdateCanControlCmd(legion::interface::ControlCommand cmd);

  void ReSetCmd(legion::interface::ControlCommand *cmd);

  double LimitRange(double value, double minValue, double maxValue);

  void ComputerOdom();
  void SaveOdom();

  void HadTeleopStateMachineInit();
  void InitUpdate(const std::string& state_name, int state);
  void HadTakeOverUpdate(const std::string& state_name, int state);
  void TeleopTakeOverUpdate(const std::string& state_name, int state);

  Status CheckTimestamp(const legion::interface::ControlCommand& msg, const double max_miss_tms, const string name);
  Status CheckTimestamp(const legion::interface::VehicleTask& msg, const double max_miss_tms, const string name);

 protected:
  legion::interface::ControlCommand control_command_;
  legion::interface::VehicleTask vehicle_task_;
  legion::interface::ControlCommand teleop_control_command_;
  legion::interface::WheelInfo wheel_info_;
  legion::interface::Chassis chassis_;
  legion::interface::Vehicle vehicle_;
  legion::interface::Faults faults_;

  bool teleop_control_first_frame_recieved_= false;
  bool control_command_first_frame_recieved_= false;
  bool vehicle_task_first_frame_recieved_ = false;
  bool first_ = false;

  int32_t save_odom_duration_;
  //控制命令发送周期
  int32_t publish_canbus_command_duration_;
  //状态检测周期
  uint32_t status_detect_duration_;
  // task线程
  std::unique_ptr<std::thread> task_thread_;

  std::mutex mutex_;

  LocalView local_view_;

  std::fstream stream_io_;
  std::fstream streambackup_io_;
  double odometer_km_;
  double dt_teleoptimep_;
  double teleop_now_tms_;

  ///车辆控制器
  std::unique_ptr<VehicleController> vehicle_controller_;
  /// can发送者
  legion::driver::drivers::CanSender<ChassisDetail> can_sender_;
  /// can接收者
  legion::driver::drivers::CanReceiver<ChassisDetail> can_receiver_;
  /// can客户端
  std::unique_ptr<CanClient> can_client_;
  /// can消息控制器
  std::unique_ptr<CanMessageManager<::legion::drivers::ChassisDetail>> can_message_manager_;

  std::shared_ptr<state_machine::StateContext> status_sm_;

 protected:
  //定时器
  std::shared_ptr<ADTimerManager<Canbus, void>> ad_timer_manager_;
  std::shared_ptr<WheelTimer<Canbus, void>> task_10ms_;
  /**
   * @brief     Spin．
   * @param[in] void.
   * @return    void.
   */
  void Spin();

  private:
    /// can卡参数
    CANCardParameter can_card_parameter_;
    /// 车辆参数
    VehicleParameter vehicle_parameter_;
    /// 车辆参数protobuf
    legion::interface::VehicleParam vehicle_param_;
};
}  // namespace drivers
}  // namespace legion

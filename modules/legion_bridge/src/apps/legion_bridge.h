/**
 * @file    legion_bridge.h
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
#include <string.h>
#include <termios.h>

#include "modules/common/json/json.hpp"
#include "modules/common/status/status.h"
#include "modules/common/logging/logging.h"
#include "message_manager/message_manager.h"
#include "modules/common/timer/timer_manager.h"
#include "modules/common/timer/ad_timer_manager.h"
#include "modules/legion_bridge/src/common/local_view.h"
#include "modules/legion_bridge/src/common/legion_bridge_gflags.h"
#include "modules/legion_bridge/src/common/interpolation_1d.h"

#include "modules/common/state_machine/state_context.hpp"

#if LCM_ENABLE
#include "modules/legion_bridge/src/message_manager/lcm/lcm_message_manager.h"
#endif
#if DDS_ENABLE
#include "modules/legion_bridge/src/message_manager/dds/dds_message_manager.h"
#endif
#if ROS_ENABLE
#include "modules/legion_bridge/src/message_manager/ros/ros_message_manager.h"
#endif
#if ROS2_ENABLE
#include "modules/legion_bridge/src/message_manager/ros2/ros2_message_manager.h"
#endif

#include "modules/legion_bridge/src/proto/legion_bridge_conf.pb.h"
#include "modules/legion_bridge/src/proto/calibration_table.pb.h"
/**
 * @namespace legion::legion_bridge
 * @brief legion::legion_bridge
 */

namespace legion 
{
  namespace legion_bridge 
  {
    using namespace legion::common;
    using json = nlohmann::json;

    const uint32_t KEYCODE_Q_CAPITAL = 0x51;
    const uint32_t KEYCODE_Q_LOWER = 0x71;
    const uint32_t KEYCODE_W_CAPITAL = 0x57;
    const uint32_t KEYCODE_W_LOWER = 0x77;
    const uint32_t KEYCODE_E_CAPITAL = 0x45;
    const uint32_t KEYCODE_E_LOWER = 0x65;
    const uint32_t KEYCODE_R_CAPITAL = 0x52;
    const uint32_t KEYCODE_R_LOWER = 0x72;
    const uint32_t KEYCODE_T_CAPITAL = 0x54;
    const uint32_t KEYCODE_T_LOWER = 0x74;
    const uint32_t KEYCODE_Y_CAPITAL = 0x59;
    const uint32_t KEYCODE_Y_LOWER = 0x79;
    const uint32_t KEYCODE_U_CAPITAL = 0x55;
    const uint32_t KEYCODE_U_LOWER = 0x75;
    const uint32_t KEYCODE_I_CAPITAL = 0x49;
    const uint32_t KEYCODE_I_LOWER = 0x69;
    const uint32_t KEYCODE_O_CAPITAL = 0x4F;
    const uint32_t KEYCODE_O_LOWER = 0x6F;
    const uint32_t KEYCODE_P_CAPITAL = 0x50;
    const uint32_t KEYCODE_P_LOWER = 0x70;
    const uint32_t KEYCODE_A_CAPITAL = 0x41;
    const uint32_t KEYCODE_A_LOWER = 0x61;
    const uint32_t KEYCODE_S_CAPITAL = 0x53;
    const uint32_t KEYCODE_S_LOWER = 0x73;
    const uint32_t KEYCODE_D_CAPITAL = 0x44;
    const uint32_t KEYCODE_D_LOWER = 0x64;
    const uint32_t KEYCODE_F_CAPITAL = 0x46;
    const uint32_t KEYCODE_F_LOWER = 0x66;
    const uint32_t KEYCODE_G_CAPITAL = 0x47;
    const uint32_t KEYCODE_G_LOWER = 0x67;
    const uint32_t KEYCODE_H_CAPITAL = 0x48;
    const uint32_t KEYCODE_H_LOWER = 0x68;
    const uint32_t KEYCODE_J_CAPITAL = 0x4A;
    const uint32_t KEYCODE_J_LOWER = 0x6A;
    const uint32_t KEYCODE_K_CAPITAL = 0x4B;
    const uint32_t KEYCODE_K_LOWER = 0x6B;
    const uint32_t KEYCODE_L_CAPITAL = 0x4C;
    const uint32_t KEYCODE_L_LOWER = 0x6C;
    const uint32_t KEYCODE_Z_CAPITAL = 0x5A;
    const uint32_t KEYCODE_Z_LOWER = 0x7A;
    const uint32_t KEYCODE_X_CAPITAL = 0x58;
    const uint32_t KEYCODE_X_LOWER = 0x78;
    const uint32_t KEYCODE_C_CAPITAL = 0x43;
    const uint32_t KEYCODE_C_LOWER = 0x63;
    const uint32_t KEYCODE_V_CAPITAL = 0x56;
    const uint32_t KEYCODE_V_LOWER = 0x76;
    const uint32_t KEYCODE_B_CAPITAL = 0x42;
    const uint32_t KEYCODE_B_LOWER = 0x62;
    const uint32_t KEYCODE_N_CAPITAL = 0x4E;
    const uint32_t KEYCODE_N_LOWER = 0x6E;
    const uint32_t KEYCODE_M_CAPITAL = 0x4D;
    const uint32_t KEYCODE_M_LOWER = 0x6D;
    const uint32_t KEYCODE_0 = 0x30;
    const uint32_t KEYCODE_1 = 0x31;
    const uint32_t KEYCODE_2 = 0x32;
    const uint32_t KEYCODE_3 = 0x33;
    const uint32_t KEYCODE_4 = 0x34;
    const uint32_t KEYCODE_5 = 0x35;
    const uint32_t KEYCODE_6 = 0x36;
    const uint32_t KEYCODE_7 = 0x37;
    const uint32_t KEYCODE_8 = 0x38;
    const uint32_t KEYCODE_9 = 0x39;
    const uint32_t KEYCODE_ENTER = 0x20;

    /**
     * @class LegionBridge
     * @brief 控制类.
     */
    class LegionBridge {
    public:
      LegionBridge(std::string file_path) : config_file_path_(file_path){};
      ~LegionBridge() = default;

      enum Mode 
      {
        NO = 0,
        WECHAT = 1,
        HANDLE = 2,
        KEYBOARD = 3,
      };

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
       * @return std::shared_ptr<LegionBridgeConf>
       */
      std::shared_ptr<LegionBridgeConf> GetConf() const;

    protected:
      //初始化状态
      bool is_init_;
      //配置文件路径
      std::string config_file_path_;
      //配置文件操作类
      json legion_bridge_json_;
      //控制逻辑设置
      std::shared_ptr<LegionBridgeConf> legion_bridge_conf_;
      //消息控制器
      std::map<std::string, std::shared_ptr<MessageManager<LegionBridge>>>message_manager_;

      CalibrationTable calibration_table_;
      //2维线性插值器
      std::unique_ptr<Interpolation1D> brake_control_interpolation_;

    #if LCM_ENABLE
      std::shared_ptr<LcmMessageManager<LegionBridge>> lcm_message_manager_;
    #endif
    #if DDS_ENABLE
      // DDS消息控制器
      std::shared_ptr<DdsMessageManager<LegionBridge>> dds_message_manager_;
    #endif
    #if ROS_ENABLE
      std::shared_ptr<RosMessageManager<LegionBridge>> ros_message_manager_;
    #endif
    #if ROS2_ENABLE
      std::shared_ptr<Ros2MessageManager<LegionBridge>> ros2_message_manager_;
    #endif
    #if ADSFI_ENABLE
      std::shared_ptr<AdsfiMessageManager<LegionBridge>> adsfi_message_manager_;
    #endif

    protected:
      /**
       * @brief     注册消息控制器.
       * @param[in] message_manager　消息控制器对象指针.
       * @return    void.
       */
      void ResigerMessageManager(
          std::string name,
          std::shared_ptr<MessageManager<LegionBridge>> message_manager);

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
       * @brief 周期发送控制输出到底盘,以及广播legion_bridge状态
       * @return void.
       */
      void Task10ms(void* param);

      /**
       * @brief
       * @param  routing_request
       */
      void PublishRoutingRequest(legion::interface::RoutingRequest routing_request);

      /**
       * @brief
       * @param  obu_cmd_msg
       */
      void PublishObuCmdMsg(legion::interface::ObuCmdMsg obu_cmd_msg);

      /**
       * @brief
       * @param  vehicle_task
       */
      void PublishVehicleTask(legion::interface::VehicleTask vehicle_task);

      /**
       * @brief
       * @param  control_command
       */
      void PublishControlCommand(legion::interface::ControlCommand control_command);

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
       * @brief     Chassis消息接收.
       * @param[in] chassis .
       * @return    void.
       */
      void HandleChassis(legion::interface::Chassis chassis);

      void HandleControlCommandInput(legion::interface::ControlCommand control_cmd);

      /**
       * @brief     Events消息接收.
       * @param[in] events .
       * @return    void.
       */
      void HandleEvents(legion::interface::Events events);

      /**
       * @brief     Vehicle消息接收.
       * @param[in] vehicle .
       * @return    void.
       */
      void HandleVehicle(legion::interface::Vehicle vehicle);

      /**
       * @brief     计算算法输出.
       * @return    void.
       */
      void ComputeLegionBridgeCommandOnTimer();

      void LoadStopControlCalibrationTable(const CalibrationTable &table);

      /**
       * @brief
       *
       * @param local_view
       * @return Status
       */
      Status CheckInput(const LocalView &local_view);
      Status CheckTimestamp(const legion::interface::Chassis& msg, const double max_miss_tms, const string name);
      Status CheckTimestamp(const legion::interface::Vehicle& msg, const double max_miss_tms, const string name);
      Status CheckTimestamp(const legion::interface::ControlCommand& msg, const double max_miss_tms, const string name);

      /**
       * @brief     状态监测.
       * @return    void.
       */
      void StatusDetectOnTimer();

      void VehicleEnable();
      void VehicleDisable();

      void StatusTransitionInit();
      void InitUpdate(const std::string& state_name, int state);
      void HadTakeOverEntry(const std::string& state_name,int state);
      void HadTakeOverUpdate(const std::string& state_name, int state);
      void HadTakeOverExit(const std::string& state_name, int state);
      void TeleopTakeOverEntry(const std::string& state_name,int state);
      void TeleopTakeOverUpdate(const std::string& state_name, int state);
      void TeleopTakeOverExit(const std::string& state_name, int state);

      void ResetControlCommand();
      
      double GetValue(double val, double inc,double max,double min);

      double GetDivideRange(double num_divisions, double max ,double min);

      void KeyboardLoopThreadFunc();
      
      static void PrintKeycode();

    protected:
      legion::interface::Chassis chassis_;
      legion::interface::Events events_;
      legion::interface::Vehicle vehicle_;
      legion::interface::RoutingRequest routing_request_;
      legion::interface::ObuCmdMsg obu_cmd_msg_;
      legion::interface::VehicleTask vehicle_task_;
      legion::interface::ControlCommand control_command_;
      legion::interface::ControlCommand control_cmd_;
      legion::interface::Faults faults_;
      legion::common::Status status_control_tms_;

      //控制命令生产周期
      int32_t produce_legion_bridge_command_duration_;
      //控制命令发送周期
      int32_t publish_legion_bridge_command_duration_;
      //状态检测周期
      uint32_t status_detect_duration_;
      // task线程
      std::unique_ptr<std::thread> task_thread_;
      // keboard_thread_线程
      std::unique_ptr<std::thread> keboard_thread_;

      std::mutex mutex_;

      LocalView local_view_;

    protected:
      //定时器
      std::shared_ptr<ADTimerManager<LegionBridge, void>> ad_timer_manager_;
      std::shared_ptr<WheelTimer<LegionBridge, void>> task_timed_;
      /**
       * @brief     Spin．
       * @param[in] void.
       * @return    void.
       */
      void Spin();

      bool chassis_first_frame_recieved_;
      bool localization_first_frame_recieved_;
      bool vehicle_first_frame_recieved_;
      bool control_cmd_first_frame_recieved_;

      double steering_;
      double accel_;
      double speed_;

      double brake_inc_delta_;
      double steer_inc_delta_;
      double speed_inc_delta_;
      double accel_inc_delta_;

      double steer_num_divisions_;
      double brake_num_divisions_;
      double speed_num_divisions_;

      double max_steering_;
      double max_steering_rate_;
      double max_accel_value_;
      double max_brake_value_;
      double max_speed_value_;

      double min_steering_;
      double min_steering_rate_;
      double min_accel_value_;
      double min_brake_value_;
      double min_speed_value_;


      //status_state_machine状态机
      std::shared_ptr<state_machine::StateContext> status_sm_;
      bool enable_status_print_;
    };
  }  // namespace legion_bridge
}  // namespace legion

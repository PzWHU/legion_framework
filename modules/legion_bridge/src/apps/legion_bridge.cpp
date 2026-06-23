/**
 * @file    legion_bridge.cpp
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#include "legion_bridge.h"

#include <sys/time.h>
#include <time.h>

#include <fstream>

#include "modules/common/file/file.h"
#include "modules/common/interface/chassis.hpp"
#include "modules/common/interface/control_command.hpp"
#include "modules/common/interface/events.hpp"
#include "modules/common/interface/faults.hpp"
#include "modules/common/interface/obu_cmd_msg.hpp"
#include "modules/common/interface/routing_request.hpp"
#include "modules/common/interface/vehicle.hpp"
#include "modules/common/interface/vehicle_state.hpp"
#include "modules/common/interface/vehicle_task.hpp"
#include "modules/common/macros/macros.h"
#include "modules/common/time/time_tool.h"
#include "modules/legion_bridge/src/common/status_state_machine.hpp"

/**
 * @namespace legion::legion_bridge
 * @brief legion::legion_bridge
 */

namespace legion {
namespace legion_bridge {

void LegionBridge::Init() {
  // step1 初始化状态设置为false
  {
    is_init_ = false;
    chassis_first_frame_recieved_ = false;
    localization_first_frame_recieved_ = false;
    vehicle_first_frame_recieved_ = false;
    enable_status_print_ = false;
    status_control_tms_ = Status(Status::ErrorCode::CONTROL_INIT_ERROR,
                                 "Control cmd msg init error!");
    faults_.set_id(ModulesID::CONTROL);
  }

  // step2 配置文件初始化
  {
    legion_bridge_conf_ = std::make_shared<LegionBridgeConf>();
    if (GetProtoFromJsonFile(FLAGS_legion_bridge_config_file,
                             legion_bridge_conf_.get()) == false) {
      AERROR << "GetProtoFrom legion_bridge_config_file failed.";
      return;
    }

    legion::interface::VehicleParam vehicle_param;
    if (GetProtoFromJsonFile(FLAGS_vehicle_param_file_path, &vehicle_param) ==
        false) {
      AERROR << "GetProtoFrom vehicle_param_file failed.";
      return;
    }
    legion_bridge_conf_->mutable_vehicle_param()->CopyFrom(vehicle_param);

    if (GetProtoFromJsonFile(FLAGS_calibration_table_file_path,
                             &calibration_table_) == false) {
      AERROR << "GetProtoFrom calibration_table_file failed.";
      return;
    }
  }
  // step3 日志初始化
  {
    LOGGING_INIT(legion_bridge_conf_)
  }

  // step4 IPC初始化
  {
    MESSAGE_INIT(legion_bridge_conf_)
  }

  // step5 读取配置文件
  {
    produce_legion_bridge_command_duration_ =
        legion_bridge_conf_->produce_legion_bridge_command_duration();
    enable_status_print_ = legion_bridge_conf_->state_machine().enable_print();

    max_steering_ = legion_bridge_conf_->settings().max().max_steering();
    max_brake_value_ = legion_bridge_conf_->settings().max().max_brake_value();
    max_speed_value_ = legion_bridge_conf_->settings().max().max_speed_value();

    min_steering_ = legion_bridge_conf_->settings().min().min_steering();
    min_brake_value_ = legion_bridge_conf_->settings().min().min_brake_value();
    min_speed_value_ = legion_bridge_conf_->settings().min().min_speed_value();

    steer_num_divisions_ =
        legion_bridge_conf_->settings().num_divisions().steer_num_divisions();
    brake_num_divisions_ =
        legion_bridge_conf_->settings().num_divisions().brake_num_divisions();
    speed_num_divisions_ =
        legion_bridge_conf_->settings().num_divisions().speed_num_divisions();

    steer_inc_delta_ = GetDivideRange(steer_num_divisions_, max_steering_, 0);
    speed_inc_delta_ =
        GetDivideRange(speed_num_divisions_, max_speed_value_, 0);
    LoadStopControlCalibrationTable(calibration_table_);
    AINFO << "steer_inc_delta :" << steer_inc_delta_;
    AINFO << "speed_inc_delta :" << speed_inc_delta_;
  }

  // step6 故障码初始化
  FaultMonitorInit();

  // step7 变量初始化
  {
    VariableInit();
  }

  // step8 算法初始化
  {
    control_command_.set_front_steering_target(0.0);
    control_command_.set_brake_value(0.0);
    control_command_.set_gear_location(
        legion::common::GearPosition::GEAR_PARKING);
    StatusTransitionInit();
  }

  // step9 定时器和线程初始化
  {
    TimerManager<LegionBridge>::AddTimer(
        produce_legion_bridge_command_duration_,
        &LegionBridge::ComputeLegionBridgeCommandOnTimer, this);

    ad_timer_manager_ = std::make_shared<ADTimerManager<LegionBridge, void>>();

    task_thread_.reset(new std::thread([this] { Spin(); }));
    if (task_thread_ == nullptr) {
      AERROR << "Unable to create can task_thread_ thread.";
      return;
    }

    task_timed_ =
        std::make_shared<WheelTimer<LegionBridge, void>>(ad_timer_manager_);
    // task_timed_->AddTimer(legion_bridge_conf_->keboard_duration(),
    // &LegionBridge::TaskTimed, this);
    if (legion_bridge_conf_->teleop_mode() == int(KEYBOARD)) {
      keboard_thread_.reset(
          new std::thread([this] { KeyboardLoopThreadFunc(); }));
      if (keboard_thread_ == nullptr) {
        AERROR << "Unable to create can keboard_thread_ thread.";
        return;
      }
      PrintKeycode();
    }
  }

  // step10 初始化状态为true
  {
    is_init_ = true;
  }
}

void LegionBridge::Join() {
  if (task_thread_ != nullptr && task_thread_->joinable()) {
    task_thread_->join();
    task_thread_.reset();
    AINFO << "task_thread_ stopped [ok].";
  }
}

void LegionBridge::VariableInit() {
  if (legion_bridge_conf_->teleop_mode() == int(WECHAT)) {
    legion::interface::Header header;
    header.set_frame_id("teleop");
    control_command_.set_header(header);
  } else if (legion_bridge_conf_->teleop_mode() == int(KEYBOARD)) {
    legion::interface::Header header;
    header.set_frame_id("keyboard");
    control_command_.set_header(header);
  }
}

void LegionBridge::LoadStopControlCalibrationTable(
    const CalibrationTable& table) {
  AINFO << "Brake table loaded,the table size is: "
        << table.calibration_table().size();

  // 遍历配置文件的标定表
  Interpolation1D::DataType xy;
  for (const auto& data : table.calibration_table()) {
    xy.push_back(std::make_pair(data.speed(), data.brake()));
  }
  // reset 函数会首先释放这个对象control_interpolation_的内存,将
  // control_interpolation_ 重新绑定到一个新的 Interpolation1D 对象
  brake_control_interpolation_.reset(new Interpolation1D);
  // 插值器初始化
  if (brake_control_interpolation_->Init(xy) == false) {
    AERROR << "Fail to load table";
  }
  // double brake_calibration_value;
  // brake_calibration_value = brake_control_interpolation_->Interpolate(1.35);
  // AINFO << "brake_calibration_value: "<< brake_calibration_value;
}

void LegionBridge::Print() {}

void LegionBridge::Log() {}

void LegionBridge::ResigerMessageManager(
    std::string name,
    std::shared_ptr<MessageManager<LegionBridge>> message_manager) {
  message_manager_.insert(
      std::pair<std::string, std::shared_ptr<MessageManager<LegionBridge>>>(
          name, message_manager));
}

void LegionBridge::KeyboardLoopThreadFunc() {
  char c = 0;
  int32_t fd = 0;

  struct termios cooked;
  struct termios raw;
  tcgetattr(fd, &cooked);  // 将文件描叙符的属性放入结构体

  // 指向用于存储复制内容的目标数组&raw_，指向要复制的数据源options_,要被复制的字节数sizeof(struct
  // termios)
  memcpy(&raw, &cooked, sizeof(struct termios));
  //*ICANON：允许规范模式进行输入处理   *ECHO：允许输入字符的本地回显
  raw.c_lflag &= ~(ICANON | ECHO);

  raw.c_cc[VEOL] = 1;
  raw.c_cc[VEOF] = 2;

  tcsetattr(fd, TCSANOW, &raw);
  puts("Teleop:\nReading from keyboard now.");
  puts("---------------------------");
  puts("Use arrow keys to drive the car.");

  while (true) {
    if (read(fd, &c, 1) < 0)  // 返回值：成功返回读取的字节数，出错返回-1
    {
      perror("read():");
      exit(-1);  // 不为0都是异常退出
    }
    switch (c) {
      case KEYCODE_A_CAPITAL:
      case KEYCODE_A_LOWER: {
        steering_ = control_command_.front_steering_target();
        steering_ = GetValue(steering_, -steer_inc_delta_, max_steering_,
                             min_steering_);
        control_command_.set_front_steering_target(steering_);
      } break;

      case KEYCODE_D_CAPITAL:
      case KEYCODE_D_LOWER: {
        steering_ = control_command_.front_steering_target();
        steering_ =
            GetValue(steering_, steer_inc_delta_, max_steering_, min_steering_);
        control_command_.set_front_steering_target(steering_);
      } break;

      case KEYCODE_G_CAPITAL:
      case KEYCODE_G_LOWER: {
        if (read(fd, &c, 1) < 0) {
          exit(-1);
        }

        switch (c) {
          case KEYCODE_F_LOWER:
            control_command_.set_gear_location(
                legion::common::GearPosition::GEAR_DRIVE);
            // gear_step = 1;
            break;
          case KEYCODE_N_LOWER:
            control_command_.set_gear_location(
                legion::common::GearPosition::GEAR_NEUTRAL);
            // gear_step = 2;
            break;
          case KEYCODE_R_LOWER:
            control_command_.set_gear_location(
                legion::common::GearPosition::GEAR_REVERSE);
            // gear_step = 3;
            break;
          case KEYCODE_P_CAPITAL:
          case KEYCODE_P_LOWER:
            control_command_.set_gear_location(
                legion::common::GearPosition::GEAR_PARKING);
            // gear_step = 0;
            break;
          default:
            break;
        }
      } break;

      case KEYCODE_W_CAPITAL:
      case KEYCODE_W_LOWER: {
        accel_ = control_command_.accel_value();
        control_command_.set_accel_value(GetValue(
            accel_, accel_inc_delta_, max_accel_value_, min_accel_value_));
      } break;

      case KEYCODE_S_CAPITAL:
      case KEYCODE_S_LOWER: {
        accel_ = control_command_.accel_value();
        control_command_.set_accel_value(GetValue(
            accel_, -accel_inc_delta_, max_accel_value_, min_accel_value_));
        control_command_.set_brake_value(0.0);
      } break;

        // case KEYCODE_H_CAPITAL:
        // case KEYCODE_H_LOWER  :
        //   {
        //     if (vehicle_task_.clean_up_ctrl() == SWITCH_STATUS_OFF)
        //     {
        //       vehicle_task_.set_clean_up_ctrl(SWITCH_STATUS_ON);
        //     }
        //     else if(vehicle_task_.clean_up_ctrl() == SWITCH_STATUS_ON)
        //     {
        //       vehicle_task_.set_clean_up_ctrl(SWITCH_STATUS_OFF);
        //     }
        //   }
        //   break;

        // case KEYCODE_J_CAPITAL :
        // case KEYCODE_J_LOWER  :
        //   {
        //     if (vehicle_task_.watering_ctrl() == SWITCH_STATUS_OFF)
        //     {
        //       vehicle_task_.set_watering_ctrl(SWITCH_STATUS_ON);
        //     }
        //     else if (vehicle_task_.watering_ctrl() == SWITCH_STATUS_ON)
        //     {
        //       vehicle_task_.set_watering_ctrl(SWITCH_STATUS_OFF);
        //     }
        //   }
        //   break;

      case KEYCODE_1: {
        if (control_command_.steer_driving_mode() ==
            legion::common::DrivingMode::COMPLETE_MANUAL) {
          control_command_.set_steer_driving_mode(
              legion::common::DrivingMode::TELEOP_DRIVE);
        } else if (control_command_.steer_driving_mode() ==
                   legion::common::DrivingMode::TELEOP_DRIVE) {
          control_command_.set_steer_driving_mode(
              legion::common::DrivingMode::COMPLETE_MANUAL);
        }
      } break;

      case KEYCODE_2: {
        if (control_command_.accel_driving_mode() ==
            legion::common::DrivingMode::COMPLETE_MANUAL) {
          control_command_.set_accel_driving_mode(
              legion::common::DrivingMode::TELEOP_DRIVE);
        } else if (control_command_.accel_driving_mode() ==
                   legion::common::DrivingMode::TELEOP_DRIVE) {
          control_command_.set_accel_driving_mode(
              legion::common::DrivingMode::COMPLETE_MANUAL);
        }

        if (control_command_.brake_driving_mode() ==
            legion::common::DrivingMode::COMPLETE_MANUAL) {
          control_command_.set_brake_driving_mode(
              legion::common::DrivingMode::TELEOP_DRIVE);
        } else if (control_command_.brake_driving_mode() ==
                   legion::common::DrivingMode::TELEOP_DRIVE) {
          control_command_.set_brake_driving_mode(
              legion::common::DrivingMode::COMPLETE_MANUAL);
        }

        if (control_command_.epb_driving_mode() ==
            legion::common::DrivingMode::COMPLETE_MANUAL) {
          control_command_.set_epb_driving_mode(
              legion::common::DrivingMode::TELEOP_DRIVE);
        } else if (control_command_.epb_driving_mode() ==
                   legion::common::DrivingMode::TELEOP_DRIVE) {
          control_command_.set_epb_driving_mode(
              legion::common::DrivingMode::COMPLETE_MANUAL);
        }

        if (control_command_.gear_driving_mode() ==
            legion::common::DrivingMode::COMPLETE_MANUAL) {
          control_command_.set_gear_driving_mode(
              legion::common::DrivingMode::TELEOP_DRIVE);
        } else if (control_command_.gear_driving_mode() ==
                   legion::common::DrivingMode::TELEOP_DRIVE) {
          control_command_.set_gear_driving_mode(
              legion::common::DrivingMode::COMPLETE_MANUAL);
        }
      } break;

      case KEYCODE_3: {
        if (control_command_.emergency_brake_enable()) {
          control_command_.set_emergency_brake_enable(0);
        } else {
          control_command_.set_emergency_brake_enable(1);
        }
      } break;

      case KEYCODE_4: {
      } break;

      case KEYCODE_0:
        PrintKeycode();
        break;

      case KEYCODE_ENTER:
        system("clear");
        break;

      default:
        break;
    }
  }

  tcsetattr(fd, TCSANOW, &cooked);
  std::cout << "keyboard_loop thread quited." << std::endl;
  return;
}

void LegionBridge::PrintKeycode() {
  // system("clear");
  printf("=====================    KEYBOARD MAP   ===================\n");
  printf("                     1 horizontal active\n");
  printf("                     2 vertical   active\n");
  printf("\n-----------------------------------------------------------\n\n");
  printf("            Set steer_target:  press 'A' up,'D' down \n");
  printf(
      "            Set acc_value and brake_value:  press 'W' up,'S' down \n");
  printf("            Set  steering_angle_rate:  press 'Z' up,'X' down \n");
  printf("Set :  press ' ' ");

  printf("            press SPACE to normal terminal\n");
  printf("===========================================================\n");
}

void LegionBridge::PublishRoutingRequest(
    legion::interface::RoutingRequest routing_request) {
#if LCM_ENABLE
  message_manager_["LCM"]->PublishRoutingRequest(routing_request);
#endif

#if ROS_ENABLE
  message_manager_["ROS"]->PublishRoutingRequest(routing_request);
#endif

#if DDS_ENABLE
  message_manager_["DDS"]->PublishRoutingRequest(routing_request);
#endif

#if ROS2_ENABLE
  message_manager_["ROS2"]->PublishRoutingRequest(routing_request);
#endif
}
void LegionBridge::PublishObuCmdMsg(legion::interface::ObuCmdMsg obu_cmd_msg) {
#if LCM_ENABLE
  message_manager_["LCM"]->PublishObuCmdMsg(obu_cmd_msg);
#endif

#if ROS_ENABLE
  message_manager_["ROS"]->PublishObuCmdMsg(obu_cmd_msg);
#endif

#if DDS_ENABLE
  message_manager_["DDS"]->PublishObuCmdMsg(obu_cmd_msg);
#endif

#if ROS2_ENABLE
  message_manager_["ROS2"]->PublishObuCmdMsg(obu_cmd_msg);
#endif
}
void LegionBridge::PublishVehicleTask(
    legion::interface::VehicleTask vehicle_task) {
#if LCM_ENABLE
  message_manager_["LCM"]->PublishVehicleTask(vehicle_task);
#endif

#if ROS_ENABLE
  message_manager_["ROS"]->PublishVehicleTask(vehicle_task);
#endif

#if DDS_ENABLE
  message_manager_["DDS"]->PublishVehicleTask(vehicle_task);
#endif

#if ROS2_ENABLE
  message_manager_["ROS2"]->PublishVehicleTask(vehicle_task);
#endif
}
void LegionBridge::PublishControlCommand(
    legion::interface::ControlCommand control_command) {
#if LCM_ENABLE
  message_manager_["LCM"]->PublishControlCommand(control_command);
#endif

#if ROS_ENABLE
  message_manager_["ROS"]->PublishControlCommand(control_command);
#endif

#if DDS_ENABLE
  message_manager_["DDS"]->PublishControlCommand(control_command);
#endif

#if ROS2_ENABLE
  message_manager_["ROS2"]->PublishControlCommandOutput(control_command);
#endif
}
void LegionBridge::PublishFaults(legion::interface::Faults faults) {
#if LCM_ENABLE
  message_manager_["LCM"]->PublishFaults(faults);
#endif

#if ROS_ENABLE
  message_manager_["ROS"]->PublishFaults(faults);
#endif

#if DDS_ENABLE
  message_manager_["DDS"]->PublishFaults(faults);
#endif

#if ROS2_ENABLE
  message_manager_["ROS2"]->PublishFaults(faults);
#endif
}

std::shared_ptr<LegionBridgeConf> LegionBridge::GetConf() const {
  return legion_bridge_conf_;
}

void LegionBridge::HandleChassis(legion::interface::Chassis chassis) {
  if (is_init_ == false) {
    return;
  }
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (legion_bridge_conf_->use_system_timestamp() == true) {
      legion::interface::Header header = chassis.header();
      header.set_stamp(TimeTool::Now2TmeStruct());
      chassis.set_header(header);
    }
    chassis_ = chassis;
  }
  if (!chassis_first_frame_recieved_) {
    AINFO << "Chassis first frame recieved";
    chassis_first_frame_recieved_ = true;
  }
}

void LegionBridge::HandleEvents(legion::interface::Events events) {
  if (is_init_ == false) {
    return;
  }
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (legion_bridge_conf_->use_system_timestamp() == true) {
      legion::interface::Header header = events.header();
      header.set_stamp(TimeTool::Now2TmeStruct());
      events.set_header(header);
    }
    events_ = events;

    for (auto event : events_.events()) {
      if (legion_bridge_conf_->teleop_mode() == int(Mode::WECHAT)) {
        if (event.code() == 41 || event.code() == 40 || event.code() == 8 ||
            event.code() == 2 || event.code() == 4 || event.code() == 6 ||
            event.code() == 5) {
          VehicleEnable();
        }

        switch (event.code()) {
          // 41启动自动驾驶
          case 41:
            // std::vector<legion::interface::ObuCmd> temp_obu_cmd;
            // temp_obu_cmd.set_code(10001);
            // temp_obu_cmd.set_val(1);
            // obu_cmd_msg_.add_obu_cmd_list(temp_obu_cmd);
            AINFO << "Code Entry TakeOver!";
            break;
          // 40停止自动驾驶，小程序控车
          case 40:
            // temp_obu_cmd.set_code(10001);
            // temp_obu_cmd.set_val(2);
            // obu_cmd_msg_.add_obu_cmd_list(temp_obu_cmd);
            AINFO << "Code Entry TeleopOver!";
            break;
            // 42暂停自动驾驶，小程序控车
            // case 42 :
            //   temp_obu_cmd.set_code(10001);
            //   temp_obu_cmd.set_val(3);
            //   obu_cmd_msg_.add_obu_cmd_list(temp_obu_cmd);

          case 8:  // 前进加速或后退减速
            if (vehicle_.emergency_button_status() == SWITCH_STATUS_ON) {
              control_command_.set_speed(0);
              break;
            }
            // 车辆为D档，8表示前进加速
            if (chassis_.gear_location() == GearPosition::GEAR_DRIVE) {
              control_command_.set_brake_value(0);
              speed_ = control_command_.speed();
              control_command_.set_speed(GetValue(speed_, speed_inc_delta_,
                                                  max_speed_value_,
                                                  min_speed_value_));
            }
            // 车辆为R档
            else if (chassis_.gear_location() == GearPosition::GEAR_REVERSE) {
              // 车辆静止，再次按8则换D档前进加速
              if (chassis_.speed_mps() < legion_bridge_conf_->settings()
                                             .stop_threshold()
                                             .stop_speed_threshold()) {
                control_command_.set_gear_location(GearPosition::GEAR_DRIVE);
                control_command_.set_brake_value(0);
                speed_ = control_command_.speed();
                control_command_.set_speed(GetValue(speed_, speed_inc_delta_,
                                                    max_speed_value_,
                                                    min_speed_value_));
              }
              // 车辆非静止，按8表示后退减速
              else {
                control_command_.set_brake_value(0);
                speed_ = control_command_.speed();
                control_command_.set_speed(GetValue(speed_, -speed_inc_delta_,
                                                    max_speed_value_,
                                                    min_speed_value_));
                // 车辆下发速度已为0，车辆在惯性下未静止
                if (control_command_.speed() < legion_bridge_conf_->settings()
                                                   .stop_threshold()
                                                   .stop_speed_threshold()) {
                  control_command_.set_brake_value(
                      legion_bridge_conf_->settings()
                          .stop_threshold()
                          .stop_brake_threshold());
                }
              }
            }
            // 车辆为N档，或P档
            else {
              // 8表示挂D档，前进加速
              control_command_.set_brake_value(0);
              control_command_.set_gear_location(GearPosition::GEAR_DRIVE);
              speed_ = control_command_.speed();
              control_command_.set_speed(GetValue(speed_, speed_inc_delta_,
                                                  max_speed_value_,
                                                  min_speed_value_));
            }
            break;
          case 2:  // 后退加速或前进减速
            if (vehicle_.emergency_button_status() == SWITCH_STATUS_ON) {
              control_command_.set_speed(0);
              break;
            }
            // 车辆为D档
            if (chassis_.gear_location() == GearPosition::GEAR_DRIVE) {
              // 车辆静止，再次按2表示挂R档后退加速
              if (chassis_.speed_mps() < legion_bridge_conf_->settings()
                                             .stop_threshold()
                                             .stop_speed_threshold()) {
                control_command_.set_brake_value(0);
                control_command_.set_gear_location(GearPosition::GEAR_REVERSE);
                speed_ = control_command_.speed();
                control_command_.set_speed(GetValue(speed_, speed_inc_delta_,
                                                    max_speed_value_,
                                                    min_speed_value_));
              }
              // 车辆非静止，按2表示前进减速
              else {
                control_command_.set_brake_value(0);
                speed_ = control_command_.speed();
                control_command_.set_speed(GetValue(speed_, -speed_inc_delta_,
                                                    max_speed_value_,
                                                    min_speed_value_));
                // 车辆下发速度已为0，但车辆在惯性下未静止
                if (control_command_.speed() < legion_bridge_conf_->settings()
                                                   .stop_threshold()
                                                   .stop_speed_threshold()) {
                  control_command_.set_brake_value(
                      legion_bridge_conf_->settings()
                          .stop_threshold()
                          .stop_brake_threshold());
                }
              }
            }
            // 车辆为R档，2表示后退加速
            else if (chassis_.gear_location() == GearPosition::GEAR_REVERSE) {
              control_command_.set_brake_value(0);
              speed_ = control_command_.speed();
              control_command_.set_speed(GetValue(speed_, speed_inc_delta_,
                                                  max_speed_value_,
                                                  min_speed_value_));
            }
            // 车辆为N档，或P档；2表示挂R档，后退加速
            else {
              control_command_.set_brake_value(0);
              control_command_.set_gear_location(GearPosition::GEAR_REVERSE);
              speed_ = control_command_.speed();
              control_command_.set_speed(GetValue(speed_, speed_inc_delta_,
                                                  max_speed_value_,
                                                  min_speed_value_));
            }
            break;
          case 4:  // 左转
            steering_ = control_command_.front_steering_target();
            control_command_.set_front_steering_target(GetValue(
                steering_, -steer_inc_delta_, max_steering_, min_steering_));
            break;
          case 6:  // 右转
            steering_ = control_command_.front_steering_target();
            control_command_.set_front_steering_target(GetValue(
                steering_, steer_inc_delta_, max_steering_, min_steering_));
            break;
          case 5:
            control_command_.set_front_steering_target(0.0);
            control_command_.set_speed(0.0);
            control_command_.set_brake_value(legion_bridge_conf_->settings()
                                                 .stop_threshold()
                                                 .stop_brake_threshold());
            sleep(0.1);
            control_command_.set_gear_location(
                legion::common::GearPosition::GEAR_NEUTRAL);
            break;
          case 9:  // 快速刹车，退能
            ResetControlCommand();
            sleep(1);
            // VehicleDisable();
            break;

          case 11:
            vehicle_task_.set_clean_up_ctrl(SWITCH_STATUS_ON);
            break;
          case 10:
            vehicle_task_.set_clean_up_ctrl(SWITCH_STATUS_OFF);
            break;
          case 21:
            vehicle_task_.set_watering_ctrl(SWITCH_STATUS_ON);
            break;
          case 20:
            vehicle_task_.set_watering_ctrl(SWITCH_STATUS_OFF);
            break;
          case 31:
            vehicle_task_.set_decorative_light_ctrl(SWITCH_STATUS_ON);
            break;
          case 30:
            vehicle_task_.set_decorative_light_ctrl(SWITCH_STATUS_OFF);
            break;
          default:
            cout << "Input error" << endl;
        }
      }
    }
  }
}

void LegionBridge::HandleControlCommandInput(
    legion::interface::ControlCommand control_cmd) {
  if (is_init_ == false) {
    return;
  }
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (legion_bridge_conf_->use_system_timestamp() == true) {
      legion::interface::Header header = control_cmd.header();
      header.set_stamp(TimeTool::Now2TmeStruct());
      control_cmd.set_header(header);
    }
    control_cmd_ = control_cmd;
  }
  if (!control_cmd_first_frame_recieved_) {
    control_cmd_first_frame_recieved_ = true;
    AINFO << "Control command first frame recieved ";
  }
}


void LegionBridge::HandleVehicle(legion::interface::Vehicle vehicle) {
  if (is_init_ == false) {
    return;
  }
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (legion_bridge_conf_->use_system_timestamp() == true) {
      legion::interface::Header header = vehicle.header();
      header.set_stamp(TimeTool::Now2TmeStruct());
      vehicle.set_header(header);
    }
    vehicle_ = vehicle;
  }
  if (!vehicle_first_frame_recieved_) {
    AINFO << "Vehicle first frame recieved";
    vehicle_first_frame_recieved_ = true;
  }
}

void LegionBridge::ComputeLegionBridgeCommandOnTimer() {
  {
    std::lock_guard<std::mutex> lock(mutex_);
    local_view_.chassis_ = chassis_;
    local_view_.events_ = events_;
    local_view_.vehicle_ = vehicle_;
    local_view_.control_cmd_ = control_cmd_;
  }

  if (legion_bridge_conf_->check_chassis_and_vehicle()) {
    // 检测是否收到第一帧
    Status status = CheckInput(local_view_);
    // check data
    if (!status.ok()) {
      return;
    }
    Status status_chassis_tms = CheckTimestamp(
        local_view_.chassis_,
        legion_bridge_conf_->max_miss_tms().max_miss_tms_chassis(), "Chassis");
    Status status_vehicle_tms = CheckTimestamp(
        local_view_.vehicle_,
        legion_bridge_conf_->max_miss_tms().max_miss_tms_vehicle(), "Vehicle");

    if (!status_chassis_tms.ok()) {
      chassis_first_frame_recieved_ = false;
      return;
    }
    if (!status_vehicle_tms.ok()) {
      vehicle_first_frame_recieved_ = false;
      return;
    }
  }

  if (legion_bridge_conf_->check_control()) {
    status_control_tms_ = CheckTimestamp(
        local_view_.control_cmd_,
        legion_bridge_conf_->max_miss_tms().max_miss_tms_control(), "control");
  } else {
    status_control_tms_ = Status::Ok();
  }

  // legion::interface::Header header;
  // INTERFACE_HEADER_ASSIGN(vehicle_task_)
  // PublishVehicleTask(vehicle_task_);
  if (status_sm_) {
    status_sm_->OnUpdate();
  }

  // publish ObuCmdMsg periodically
  PublishObuCmdMsg(obu_cmd_msg_);

  // publish
  legion::interface::Header header;
  INTERFACE_HEADER_ASSIGN(faults_)
  PublishControlCommand(control_command_);
  if (status_control_tms_.ok()) {
    faults_.set_id(ModulesID::LEGION_BRIDGE);
  } else {
    faults_.set_id(ModulesID::CONTROL);
  }
  PublishFaults(faults_);
}

Status LegionBridge::CheckInput(const LocalView& local_view) {
  if (!chassis_first_frame_recieved_ || !vehicle_first_frame_recieved_) {
    AWARN << "Chassis or Vehicle lost.";
    return Status(Status::ErrorCode::CANBUS_ERROR,
                  "Chassis or Vehicle message lost");
  }

  return Status::Ok();
}

Status LegionBridge::CheckTimestamp(const legion::interface::Chassis& msg,
                                    const double max_miss_tms,
                                    const string name) {
  double time_diff_now = TimeTool::GetTimeDiffNow(msg.header().stamp());
  if (time_diff_now > max_miss_tms) {
    AERROR << name << "msg lost for " << std::fixed << std::setprecision(2)
           << time_diff_now << "s";
    return Status(Status::ErrorCode::CANBUS_ERROR, "Cmd msg timeout");
  }
  return Status::Ok();
}

Status LegionBridge::CheckTimestamp(const legion::interface::Vehicle& msg,
                                    const double max_miss_tms,
                                    const string name) {
  double time_diff_now = TimeTool::GetTimeDiffNow(msg.header().stamp());
  if (time_diff_now > max_miss_tms) {
    AERROR << name << "msg lost for " << std::fixed << std::setprecision(2)
           << time_diff_now << "s";
    return Status(Status::ErrorCode::CANBUS_ERROR, "Cmd msg timeout");
  }
  return Status::Ok();
}

Status LegionBridge::CheckTimestamp(
    const legion::interface::ControlCommand& msg, const double max_miss_tms,
    const string name) {
  double time_diff_now = TimeTool::GetTimeDiffNow(msg.header().stamp());
  if (time_diff_now > max_miss_tms) {
    AERROR << name << "msg lost for " << std::fixed << std::setprecision(2)
           << time_diff_now;
    return Status(Status::ErrorCode::CONTROL_ERROR, "Cmd msg timeout");
  }
  return Status::Ok();
}

void LegionBridge::MessagesInit() {
  if (legion_bridge_conf_ == nullptr) return;

  for (auto it : legion_bridge_conf_->messages().active_message()) {
    auto message = legion_bridge_conf_->messages().message_info().at(it);
    switch (message.type()) {
#if LCM_ENABLE
      case legion::common::MessageType::LCM: {
        AINFO << "message type:LCM";

        lcm_message_manager_ =
            std::make_shared<LcmMessageManager<LegionBridge>>();
        ResigerMessageManager(message.name(), lcm_message_manager_);

        lcm_message_manager_->Init(this);
      } break;
#endif
#if DDS_ENABLE
      case legion::common::MessageType::DDS: {
        AINFO << "message type:DDS";

        dds_message_manager_ =
            std::make_shared<DdsMessageManager<LegionBridge>>();
        ResigerMessageManager(message.name(), dds_message_manager_);

        dds_message_manager_->Init(this);
      } break;
#endif
#if ROS_ENABLE
      case legion::common::MessageType::ROS: {
        AINFO << "message type:ROS";

        ros_message_manager_ =
            std::make_shared<RosMessageManager<LegionBridge>>();
        ResigerMessageManager(message.name(), ros_message_manager_);
        ros_message_manager_->Init(this);
      } break;
#endif
#if ROS2_ENABLE
      case legion::common::MessageType::ROS2: {
        AINFO << "message type:ROS2";

        ros2_message_manager_ =
            std::make_shared<Ros2MessageManager<LegionBridge>>();
        ResigerMessageManager(message.name(), ros2_message_manager_);

        ros2_message_manager_->Init(this);
      } break;
#endif

#if ADSFI_ENABLE
      case legion::common::MessageType::ADSFI: {
        AINFO << "message type:ADSFI";

        adsfi_message_manager_ =
            std::make_shared<AdsfiMessageManager<LegionBridge>>();
        ResigerMessageManager(message.name, adsfi_message_manager_);

        adsfi_message_manager_->Init(this);
      } break;
#endif
      default: {
        AERROR << "unknown message type";
      } break;
    }
  }
}

void LegionBridge::ResetControlCommand() {
  control_command_.set_front_steering_target(0.0);
  control_command_.set_speed(0.0);
  control_command_.set_brake_value(
      legion_bridge_conf_->settings().max().max_brake_value());
  sleep(0.1);
  control_command_.set_gear_location(
      legion::common::GearPosition::GEAR_PARKING);
}

double LegionBridge::GetValue(double val, double inc, double max, double min) {
  val += inc;
  if (val > max) {
    val = max;
  } else if (val < min) {
    val = min;
  }
  return val;
}

double LegionBridge::GetDivideRange(double num_divisions, double max,
                                    double min) {
  double interval_size = (max - min) / num_divisions;
  return interval_size;
}

void LegionBridge::VehicleEnable() {
  // 横向使能
  if (control_command_.steer_driving_mode() ==
      legion::common::DrivingMode::COMPLETE_MANUAL) {
    control_command_.set_steer_driving_mode(
        legion::common::DrivingMode::TELEOP_DRIVE);
  }

  // 纵向使能
  if (control_command_.accel_driving_mode() ==
      legion::common::DrivingMode::COMPLETE_MANUAL) {
    control_command_.set_accel_driving_mode(
        legion::common::DrivingMode::TELEOP_DRIVE);
  }
  if (control_command_.brake_driving_mode() ==
      legion::common::DrivingMode::COMPLETE_MANUAL) {
    control_command_.set_brake_driving_mode(
        legion::common::DrivingMode::TELEOP_DRIVE);
  }
  if (control_command_.epb_driving_mode() ==
      legion::common::DrivingMode::COMPLETE_MANUAL) {
    control_command_.set_epb_driving_mode(
        legion::common::DrivingMode::TELEOP_DRIVE);
  }
  if (control_command_.gear_driving_mode() ==
      legion::common::DrivingMode::COMPLETE_MANUAL) {
    control_command_.set_gear_driving_mode(
        legion::common::DrivingMode::TELEOP_DRIVE);
  }
}

void LegionBridge::VehicleDisable() {
  // 横向退能
  if (control_command_.steer_driving_mode() ==
      legion::common::DrivingMode::TELEOP_DRIVE) {
    control_command_.set_steer_driving_mode(
        legion::common::DrivingMode::COMPLETE_MANUAL);
  }

  // 纵向退能
  if (control_command_.accel_driving_mode() ==
      legion::common::DrivingMode::TELEOP_DRIVE) {
    control_command_.set_accel_driving_mode(
        legion::common::DrivingMode::COMPLETE_MANUAL);
  }
  if (control_command_.brake_driving_mode() ==
      legion::common::DrivingMode::TELEOP_DRIVE) {
    control_command_.set_brake_driving_mode(
        legion::common::DrivingMode::COMPLETE_MANUAL);
  }
  if (control_command_.epb_driving_mode() ==
      legion::common::DrivingMode::TELEOP_DRIVE) {
    control_command_.set_epb_driving_mode(
        legion::common::DrivingMode::COMPLETE_MANUAL);
  }
  if (control_command_.gear_driving_mode() ==
      legion::common::DrivingMode::TELEOP_DRIVE) {
    control_command_.set_gear_driving_mode(
        legion::common::DrivingMode::COMPLETE_MANUAL);
  }
}

void LegionBridge::FaultMonitorInit() {}

void LegionBridge::StatusDetectOnTimer() {}

void LegionBridge::Spin() {
  while (1) {
    ad_timer_manager_->DetectTimers(NULL);
    usleep(10);
  }
}

}  // namespace legion_bridge
}  // namespace legion

/* Copyright 2018 The legion Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "patrol_controller.h"

#include "patrol_message_manager.h"
#include "vehicles/vehicle_controller.h"
#include "modules/common/logging/logging.h"
#include "modules/common/time/time_tool.h"
#include "canbus/can_comm/can_sender.h"
#include "canbus/can_comm/protocol_data.h"

namespace legion
{
  namespace drivers
  {
    namespace patrol
    {

      using ::legion::driver::drivers::ProtocolData;
      using namespace legion::common;
      using namespace legion::interface;

      namespace
      {

        const int32_t kMaxFailAttempt = 10;
        const int32_t CHECK_RESPONSE_STEER_UNIT_FLAG = 1;
        const int32_t CHECK_RESPONSE_SPEED_UNIT_FLAG = 2;
      }

      Status::ErrorCode PatrolController::Init(const VehicleParameter &params,
                                               CanSender<::legion::drivers::ChassisDetail> *const can_sender,
                                               CanMessageManager<::legion::drivers::ChassisDetail> *const message_manager,
                                               const double max_stop_time_threshold)
      {
        if (is_initialized_)
        {
          AINFO << "PatrolController has already been initiated.";
          return Status::ErrorCode::CANBUS_ERROR;
        }

        params_ = params;
        max_stop_time_threshold_ = max_stop_time_threshold;

        if (can_sender == nullptr)
        {
          return Status::ErrorCode::CANBUS_ERROR;
        }
        can_sender_ = can_sender;

        if (message_manager == nullptr)
        {
          AERROR << "protocol manager is null.";
          return Status::ErrorCode::CANBUS_ERROR;
        }
        message_manager_ = message_manager;

        // sender part
        ad_control_accelerate_504_control_ = dynamic_cast<Adcontrolaccelerate504control *>(message_manager_->GetMutableProtocolSendDataById(Adcontrolaccelerate504control::ID));
        if (ad_control_accelerate_504_control_ == nullptr)
        {
          AERROR << "Adcontrolaccelerate504control does not exist in the PatrolMessageManager!";
          return Status::ErrorCode::CANBUS_ERROR;
        }

        ad_control_body_506_control_ = dynamic_cast<Adcontrolbody506control *>(message_manager_->GetMutableProtocolSendDataById(Adcontrolbody506control::ID));
        if (ad_control_body_506_control_ == nullptr)
        {
          AERROR << "Adcontrolbody506control does not exist in the PatrolMessageManager!";
          return Status::ErrorCode::CANBUS_ERROR;
        }

        ad_control_brake_503_control_ = dynamic_cast<Adcontrolbrake503control *>(message_manager_->GetMutableProtocolSendDataById(Adcontrolbrake503control::ID));
        if (ad_control_brake_503_control_ == nullptr)
        {
          AERROR << "Adcontrolbrake503control does not exist in the PatrolMessageManager!";
          return Status::ErrorCode::CANBUS_ERROR;
        }

        ad_control_flag_501_control_ = dynamic_cast<Adcontrolflag501control *>(message_manager_->GetMutableProtocolSendDataById(Adcontrolflag501control::ID));
        if (ad_control_flag_501_control_ == nullptr)
        {
          AERROR << "Adcontrolflag501control does not exist in the PatrolMessageManager!";
          return Status::ErrorCode::CANBUS_ERROR;
        }

        ad_control_steering_502_control_ = dynamic_cast<Adcontrolsteering502control *>(message_manager_->GetMutableProtocolSendDataById(Adcontrolsteering502control::ID));
        if (ad_control_steering_502_control_ == nullptr)
        {
          AERROR << "Adcontrolsteering502control does not exist in the PatrolMessageManager!";
          return Status::ErrorCode::CANBUS_ERROR;
        }

        can_sender_->AddMessage(Adcontrolaccelerate504control::ID, ad_control_accelerate_504_control_, false);
        can_sender_->AddMessage(Adcontrolbody506control::ID, ad_control_body_506_control_, false);
        can_sender_->AddMessage(Adcontrolbrake503control::ID, ad_control_brake_503_control_, false);
        can_sender_->AddMessage(Adcontrolflag501control::ID, ad_control_flag_501_control_, false);
        can_sender_->AddMessage(Adcontrolsteering502control::ID, ad_control_steering_502_control_, false);

        // need sleep to ensure all messages received
        AINFO << "PatrolController is initialized.";

        is_initialized_ = true;
        return Status::ErrorCode::OK;
      }

      PatrolController::~PatrolController() {}

      bool PatrolController::Start()
      {
        if (!is_initialized_)
        {
          AERROR << "PatrolController has NOT been initiated.";
          return false;
        }
        // const auto& update_func = [this] { SecurityDogThreadFunc(); };
        // thread_.reset(new std::thread(update_func));

        return true;
      }

      void PatrolController::Stop()
      {
        if (!is_initialized_)
        {
          AERROR << "PatrolController stops or starts improperly!";
          return;
        }

        if (thread_ != nullptr && thread_->joinable())
        {
          thread_->join();
          thread_.reset();
          AINFO << "PatrolController stopped.";
        }
      }

      Chassis PatrolController::chassis()
      {
        ChassisDetail chassis_detail;
        message_manager_->GetSensorData(&chassis_detail);
        chassis_detail_ = chassis_detail;

        // 21, 22, previously 1, 2
        if (driving_mode() == DrivingMode::EMERGENCY_MODE)
        {
          set_chassis_error_code(Chassis::ErrorCode::NO_ERROR);
        }

        // 3
        /* ADD YOUR OWN CAR CHASSIS OPERATION
         */

        /*----------------------------------------------------------------------底盘chassis消息反馈-----------------------------------------------------------------------*/
        /*-----throttle feedback---*/
        //暂无油门踏板反馈

        /*-----Gear feedback-------*/
        switch (chassis_detail.vcu_vehicle_status_1_303_report_.vehicle_gear_)
        {
          //0  P
          case 0:
            chassis_.set_gear_location(GearPosition::GEAR_PARKING);
            break;
          //1  D
          case 1:
            chassis_.set_gear_location(GearPosition::GEAR_DRIVE);
            break;
          //2  N
          case 2:
            chassis_.set_gear_location(GearPosition::GEAR_NEUTRAL);
            break;
          //3  R
          case 3:
            chassis_.set_gear_location(GearPosition::GEAR_REVERSE);
            break;
          default :
            AERROR << "Gear feedback Error!== "<<(int)chassis_detail.vcu_vehicle_status_1_303_report_.vehicle_gear_;
        }

        /*-----brake padel feedback--*/
        //这里报文实际反馈为车辆制动管路压力，范围0~8Mpa
        // chassis_.set_brake_value(chassis_detail.vcu_vehicle_status_2_304_report_.vehicle_brake_pressure_);
        //将制动管路压力（0~8Mpa）转化为制动踏板开度（0~100%）
        chassis_.set_brake_value(100 * chassis_detail.vcu_vehicle_status_2_304_report_.vehicle_brake_pressure_ * 0.125);

        /*-----steer feedback-------*/
        //车辆轮端转角（-30°~30°）
        chassis_.set_front_steering_value(chassis_detail.vcu_vehicle_status_2_304_report_.vehicle_steering_angle_);

        /*-----speed feedback(km/h)-*/
        //chassis_.set_is_speed_valid(true);
        chassis_.set_speed_mps(fabs(chassis_detail.vcu_vehicle_status_2_304_report_.vehicle_speed_) / 3.6);

        /*-----epb  feedback--------*/
        if (chassis_detail.vcu_vehicle_status_1_303_report_.clamping_brake_status_)
        {
          chassis_.set_epb_level(EPBLevel::APPLIED);
        }
        else 
        {
          chassis_.set_epb_level(EPBLevel::RELEASED);
        }

        /*----------------------------油门、档位、制动、转向驾驶模式-------------------------------------*/
        switch (chassis_detail.vcu_vehicle_status_1_303_report_.drive_mode_state_)
        {
          case 0:
            chassis_.set_steer_driving_mode(DrivingMode::COMPLETE_MANUAL);
            chassis_.set_accel_driving_mode(DrivingMode::COMPLETE_MANUAL);
            chassis_.set_brake_driving_mode(DrivingMode::COMPLETE_MANUAL);
            chassis_.set_gear_driving_mode(DrivingMode::COMPLETE_MANUAL);
            break;
          case 1:
            chassis_.set_steer_driving_mode(DrivingMode::COMPLETE_AUTO_DRIVE);
            chassis_.set_accel_driving_mode(DrivingMode::COMPLETE_AUTO_DRIVE);
            chassis_.set_brake_driving_mode(DrivingMode::COMPLETE_AUTO_DRIVE);
            chassis_.set_gear_driving_mode(DrivingMode::COMPLETE_AUTO_DRIVE);
            break;
          case 2:
            chassis_.set_steer_driving_mode(DrivingMode::REMOTE_DRIVE);
            chassis_.set_accel_driving_mode(DrivingMode::REMOTE_DRIVE);
            chassis_.set_brake_driving_mode(DrivingMode::REMOTE_DRIVE);
            chassis_.set_gear_driving_mode(DrivingMode::REMOTE_DRIVE);
            break;
          case 3:
            // chassis_.set_steer_driving_mode(DrivingMode::MANUAL_TAKEOVER);
            // chassis_.set_accel_driving_mode(DrivingMode::MANUAL_TAKEOVER);
            // chassis_.set_brake_driving_mode(DrivingMode::MANUAL_TAKEOVER);
            // chassis_.set_gear_driving_mode(DrivingMode::MANUAL_TAKEOVER);
            AINFO << "Semi automatic!";
            break;
          default :
            AERROR << "Driving mode feedback error!== "<<(int)chassis_detail.vcu_vehicle_status_1_303_report_.drive_mode_state_;
        }

        // 总的driving_mode驾驶模式逻辑，目前横向接管/档位接管退出自动驾驶，制动和驱动为临时接管
        if (chassis_.steer_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
            chassis_.accel_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
            chassis_.brake_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
            chassis_.gear_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE)
        {
          chassis_.set_driving_mode(DrivingMode::COMPLETE_AUTO_DRIVE);
        }
        else if (chassis_.steer_driving_mode() == DrivingMode::REMOTE_DRIVE &&
                chassis_.accel_driving_mode() == DrivingMode::REMOTE_DRIVE &&
                chassis_.brake_driving_mode() == DrivingMode::REMOTE_DRIVE &&
                chassis_.gear_driving_mode() == DrivingMode::REMOTE_DRIVE)
        {
          chassis_.set_driving_mode(DrivingMode::REMOTE_DRIVE);
        }
        else if (chassis_.steer_driving_mode() == DrivingMode::COMPLETE_MANUAL &&
                 chassis_.accel_driving_mode() == DrivingMode::COMPLETE_MANUAL &&
                 chassis_.gear_driving_mode() == DrivingMode::COMPLETE_MANUAL &&
                 chassis_.brake_driving_mode() == DrivingMode::COMPLETE_MANUAL)
        {
          chassis_.set_driving_mode(DrivingMode::COMPLETE_MANUAL);
        }
        else if (chassis_.steer_driving_mode() == DrivingMode::COMPLETE_MANUAL &&
                  (chassis_.accel_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE ||
                   chassis_.gear_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE ||
                   chassis_.brake_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE))
        {
          chassis_.set_driving_mode(DrivingMode::AUTO_SPEED_ONLY);
        }
        else if (chassis_.steer_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
                 (chassis_.accel_driving_mode() == DrivingMode::COMPLETE_MANUAL ||
                  chassis_.gear_driving_mode() == DrivingMode::COMPLETE_MANUAL ||
                  chassis_.brake_driving_mode() == DrivingMode::COMPLETE_MANUAL))
        {
          chassis_.set_driving_mode(DrivingMode::AUTO_STEER_ONLY);
        }
        else if (chassis_.steer_driving_mode() == DrivingMode::MANUAL_TAKEOVER)
        {
          chassis_.set_driving_mode(DrivingMode::MANUAL_TAKEOVER);
        }
        if (chassis_.steer_driving_mode() == DrivingMode::MANUAL_TAKEOVER)
        {
          chassis_.set_driving_mode(DrivingMode::MANUAL_TAKEOVER);
        }
        if (chassis_.gear_driving_mode() == DrivingMode::MANUAL_TAKEOVER)
        {
          chassis_.set_driving_mode(DrivingMode::MANUAL_TAKEOVER);
        }

        if ((driving_mode() == DrivingMode::TELEOP_DRIVE ) &&
            chassis_.steer_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
            chassis_.accel_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
            chassis_.brake_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE &&
            chassis_.gear_driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE)
        {
          chassis_.set_driving_mode(DrivingMode::TELEOP_DRIVE);
        }

        // 增加MovingStatus
        if (fabs(chassis_.speed_mps()) < 0.001)
        {
          if (is_stopped_first_hit_ == true)
            last_time_vehicle_is_stopped_or_not_ = TimeTool::Now2Ms();

          if (is_stopped_first_hit_ == true)
          {
            is_stopped_first_hit_ = false;
          }
          int64_t cur_time = TimeTool::Now2Ms();
          int64_t diff = cur_time - last_time_vehicle_is_stopped_or_not_;
          if (diff >= max_stop_time_threshold_)
          {
            is_stopped_ = true;
          }
          else
          {
            is_stopped_ = false;
          }
        }
        else
        {
          is_stopped_ = false;
          is_stopped_first_hit_ = true;
        }

        if (is_stopped_)
        {
          chassis_.set_moving_status(MovingStatus::STATIONARY);
          chassis_.set_wheel_direction_rr(WheelSpeedType::STANDSTIL);
          chassis_.set_wheel_direction_rl(WheelSpeedType::STANDSTIL);
          chassis_.set_wheel_direction_fr(WheelSpeedType::STANDSTIL);
          chassis_.set_wheel_direction_fl(WheelSpeedType::STANDSTIL);
        }
        else if (chassis_.gear_location() == GearPosition::GEAR_DRIVE)
        {
          chassis_.set_moving_status(MovingStatus::MOVING_FORWARD);
          chassis_.set_wheel_direction_rr(WheelSpeedType::FORWARD);
          chassis_.set_wheel_direction_rl(WheelSpeedType::FORWARD);
          chassis_.set_wheel_direction_fr(WheelSpeedType::FORWARD);
          chassis_.set_wheel_direction_fl(WheelSpeedType::FORWARD);
        }
        else if (chassis_.gear_location() == GearPosition::GEAR_REVERSE)
        {
          chassis_.set_moving_status(MovingStatus::MOVING_BACKWARD);
          chassis_.set_wheel_direction_rr(WheelSpeedType::BACKWARD);
          chassis_.set_wheel_direction_rl(WheelSpeedType::BACKWARD);
          chassis_.set_wheel_direction_fr(WheelSpeedType::BACKWARD);
          chassis_.set_wheel_direction_fl(WheelSpeedType::BACKWARD);
        }
        else
        {
          chassis_.set_moving_status(MovingStatus::UNKNOWN_VEHICLE_STATE);
          chassis_.set_wheel_direction_rr(WheelSpeedType::WHEEL_INVALID);
          chassis_.set_wheel_direction_rl(WheelSpeedType::WHEEL_INVALID);
          chassis_.set_wheel_direction_fr(WheelSpeedType::WHEEL_INVALID);
          chassis_.set_wheel_direction_fl(WheelSpeedType::WHEEL_INVALID);
        }

        //-----------------------------------------Vehicle-----------------------------------------------
        // 照明灯
        if (chassis_detail.vcu_vehicle_diagnosis_301_report_.headlight_state_)
        {
          vehicle_.set_backlight_lamp_status(SWITCH_STATUS_ON);
        }
        else
        {
          vehicle_.set_backlight_lamp_status(SWITCH_STATUS_OFF);
        }

        //喇叭
        if (chassis_detail.vcu_vehicle_diagnosis_301_report_.horn_state_)
        {
          vehicle_.set_horn_status(SWITCH_STATUS_ON);
        }
        else
        {
          vehicle_.set_horn_status(SWITCH_STATUS_OFF);
        }

        //左转向
        if (chassis_detail.vcu_vehicle_diagnosis_301_report_.left_turn_light_state_)
        {
          vehicle_.set_left_lamp_status(SWITCH_STATUS_ON);
        }
        else
        {
          vehicle_.set_left_lamp_status(SWITCH_STATUS_OFF);
        }

        //右转向
        if (chassis_detail.vcu_vehicle_diagnosis_301_report_.right_turn_light_state_)
        {
          vehicle_.set_right_lamp_status(SWITCH_STATUS_ON);
        }
        else
        {
          vehicle_.set_right_lamp_status(SWITCH_STATUS_OFF);
        }

        //前防撞条
        if (chassis_detail.vcu_vehicle_diagnosis_301_report_.f_touch_switch_state_)
        {
          vehicle_.set_front_touch_status(SWITCH_STATUS_ON);
        }
        else
        {
          vehicle_.set_front_touch_status(SWITCH_STATUS_OFF);
        }

        //后防撞条
        if (chassis_detail.vcu_vehicle_diagnosis_301_report_.r_touch_switch_state_)
        {
          vehicle_.set_rear_touch_status(SWITCH_STATUS_ON);
        }
        else
        {
          vehicle_.set_rear_touch_status(SWITCH_STATUS_OFF);
        }

        //电池剩余电量%
        vehicle_.set_batterysoc(chassis_detail.vcu_vehicle_status_1_303_report_.vehicle_soc_);

        //急停按钮
        if (chassis_detail.vcu_vehicle_diagnosis_301_report_.emergency_button_state_)
        {
          vehicle_.set_emergency_button_status(SWITCH_STATUS_ON);
        }
        else
        {
          vehicle_.set_emergency_button_status(SWITCH_STATUS_OFF);
        }

        return chassis_;
      }

      void PatrolController::Emergency() 
      {
        set_driving_mode(DrivingMode::EMERGENCY_MODE);
        ResetProtocol();
      }

      Status::ErrorCode PatrolController::EnableAutoMode()
      {
        if (driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE)
        {
          //ad使能
          ad_control_flag_501_control_ -> set_ad_control_request_flag(Ad_control_flag_501_control::Ad_control_request_flagType::AD_CONTROL_REQUEST_FLAG_VALUE);
          //横向使能
          ad_control_steering_502_control_ -> set_ad_steering_valid(Ad_control_steering_502_control::Ad_steering_validType::AD_STEERING_VALID_VALID);
          //制动使能
          ad_control_brake_503_control_ -> set_ad_dbs_valid(Ad_control_brake_503_control::Ad_dbs_validType::AD_DBS_VALID_VALID);
          //驱动使能
          ad_control_accelerate_504_control_ -> set_ad_accelerate_valid(Ad_control_accelerate_504_control::Ad_accelerate_validType::AD_ACCELERATE_VALID_VALID);
          //驱动控制模式(速度控制)
          ad_control_accelerate_504_control_ -> set_ad_accelerate_work_mode(Ad_control_accelerate_504_control::Ad_accelerate_work_modeType::AD_ACCELERATE_WORK_MODE_SPEED_CONTROL);

          AINFO << "Switch to COMPLETE_AUTO_DRIVE mode";
          return Status::ErrorCode::OK;
        }
        else
        {
          AINFO << "Not enabled in COMPLETE_AUTO_DRIVE mode";
          return Status::ErrorCode::CANBUS_ERROR;
        }

      }

      Status::ErrorCode PatrolController::DisableAutoMode()
      {
        ResetProtocol();
        // can_sender_->Update();
        set_driving_mode(DrivingMode::COMPLETE_MANUAL);
        set_chassis_error_code(Chassis::ErrorCode::NO_ERROR);
        //ad退能
        ad_control_flag_501_control_ -> set_ad_control_request_flag(Ad_control_flag_501_control::Ad_control_request_flagType::AD_CONTROL_REQUEST_FLAG_INVALUE);
        //横向退能
        ad_control_steering_502_control_ -> set_ad_steering_valid(Ad_control_steering_502_control::Ad_steering_validType::AD_STEERING_VALID_INVALID);
        //制动退能
        ad_control_brake_503_control_ -> set_ad_dbs_valid(Ad_control_brake_503_control::Ad_dbs_validType::AD_DBS_VALID_INVALID);
        //驱动退能
        ad_control_accelerate_504_control_ -> set_ad_accelerate_valid(Ad_control_accelerate_504_control::Ad_accelerate_validType::AD_ACCELERATE_VALID_INVALID);
        AINFO << "Switch to COMPLETE_MANUAL mode.";
        return Status::ErrorCode::OK;
      }

      Status::ErrorCode PatrolController::EnableSteeringOnlyMode()
      {
        if (driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE || driving_mode() == DrivingMode::AUTO_STEER_ONLY)
        {
          set_driving_mode(DrivingMode::AUTO_STEER_ONLY);
          AINFO << "Already in AUTO_STEER_ONLY mode";
          return Status::ErrorCode::OK;
        }
        return Status::ErrorCode::OK;
        /* ADD YOUR OWN CAR CHASSIS OPERATION
        brake_60_->set_disable();
        throttle_62_->set_disable();
        steering_64_->set_enable();

        can_sender_->Update();
        if (CheckResponse(CHECK_RESPONSE_STEER_UNIT_FLAG, true) == false) {
          AERROR << "Failed to switch to AUTO_STEER_ONLY mode.";
          Emergency();
          set_chassis_error_code(Chassis::CHASSIS_ERROR);
          return Status::ErrorCode::CANBUS_ERROR;
        } else {
          set_driving_mode(DrivingMode::AUTO_STEER_ONLY);
          AINFO << "Switch to AUTO_STEER_ONLY mode ok.";
          return Status::ErrorCode::OK;
        }
        */
      }

      Status::ErrorCode PatrolController::EnableSpeedOnlyMode()
      {
        if (driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE || driving_mode() == DrivingMode::AUTO_SPEED_ONLY)
        {
          set_driving_mode(DrivingMode::AUTO_SPEED_ONLY);
          AINFO << "Already in AUTO_SPEED_ONLY mode";
          return Status::ErrorCode::OK;
        }
        return Status::ErrorCode::OK;
        /* ADD YOUR OWN CAR CHASSIS OPERATION
        brake_60_->set_enable();
        throttle_62_->set_enable();
        steering_64_->set_disable();

        can_sender_->Update();
        if (CheckResponse(CHECK_RESPONSE_SPEED_UNIT_FLAG, true) == false) {
          AERROR << "Failed to switch to AUTO_STEER_ONLY mode.";
          Emergency();
          set_chassis_error_code(Chassis::CHASSIS_ERROR);
          return Status::ErrorCode::CANBUS_ERROR;
        } else {
          set_driving_mode(DrivingMode::AUTO_SPEED_ONLY);
          AINFO << "Switch to AUTO_SPEED_ONLY mode ok.";
          return Status::ErrorCod::OK;
        }
        */
      }
      Status::ErrorCode PatrolController::EnableTeleopMode()
      {
        if(driving_mode() == DrivingMode::TELEOP_DRIVE)
        {
          //ad使能
          ad_control_flag_501_control_ -> set_ad_control_request_flag(Ad_control_flag_501_control::Ad_control_request_flagType::AD_CONTROL_REQUEST_FLAG_VALUE);
          //横向使能
          ad_control_steering_502_control_ -> set_ad_steering_valid(Ad_control_steering_502_control::Ad_steering_validType::AD_STEERING_VALID_VALID);
          //制动使能
          ad_control_brake_503_control_ -> set_ad_dbs_valid(Ad_control_brake_503_control::Ad_dbs_validType::AD_DBS_VALID_VALID);
          //驱动使能
          ad_control_accelerate_504_control_ -> set_ad_accelerate_valid(Ad_control_accelerate_504_control::Ad_accelerate_validType::AD_ACCELERATE_VALID_VALID);
          //驱动控制模式(速度控制)
          ad_control_accelerate_504_control_ -> set_ad_accelerate_work_mode(Ad_control_accelerate_504_control::Ad_accelerate_work_modeType::AD_ACCELERATE_WORK_MODE_SPEED_CONTROL);
          AINFO << "Switch to TELEOP_DRIVE mode";
          return Status::ErrorCode::OK;
        }
        else
        {
          AINFO << "Not enabled in TELEOP_DRIVE mode";
          return Status::ErrorCode::CANBUS_ERROR;
        }
      }

      Vehicle PatrolController::GetVehicle()
      {
        return vehicle_;
      }

      // NEUTRAL, REVERSE, DRIVE
      void PatrolController::Gear(const ControlCommand &control_command)
      {
        if (!(driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE || driving_mode() == DrivingMode::AUTO_SPEED_ONLY || driving_mode() == DrivingMode::TELEOP_DRIVE))
        {
          AINFO << "this drive mode no need to set gear.";
          return;
        }
        GearPosition gear_position = control_command.gear_location();
        switch (gear_position)
        { 
          case GearPosition::GEAR_NEUTRAL:
            ad_control_accelerate_504_control_ -> set_ad_accelerate_gear(Ad_control_accelerate_504_control::Ad_accelerate_gearType::AD_ACCELERATE_GEAR_N);
            break;
          case GearPosition::GEAR_DRIVE:
            ad_control_accelerate_504_control_ -> set_ad_accelerate_gear(Ad_control_accelerate_504_control::Ad_accelerate_gearType::AD_ACCELERATE_GEAR_D);
            break;
          case GearPosition::GEAR_REVERSE:
            ad_control_accelerate_504_control_ -> set_ad_accelerate_gear(Ad_control_accelerate_504_control::Ad_accelerate_gearType::AD_ACCELERATE_GEAR_R);
            break;
          case GearPosition::GEAR_PARKING:
            ad_control_accelerate_504_control_ -> set_ad_accelerate_gear(Ad_control_accelerate_504_control::Ad_accelerate_gearType::AD_ACCELERATE_GEAR_P);
            break;
          default:
            AINFO << "unknown gear control command ";
            break;
        }
        return;
      }

      // brake with new acceleration
      // acceleration:0.00~99.99, unit:
      // acceleration:0.0 ~ 7.0, unit:m/s^2
      // acceleration_spd:60 ~ 100, suggest: 90
      // -> pedal
      void PatrolController::Brake(double pedal)
      { 
        if (!(driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE || driving_mode() == DrivingMode::AUTO_SPEED_ONLY || driving_mode() == DrivingMode::TELEOP_DRIVE))
        {
          AINFO << "The current drive mode does not need to set brake.";
          return;
        }
        //pedal制动踏板行程（0~100%）
        ad_control_brake_503_control_ -> set_ad_brakepressure_cmd(pedal);
      }

      // drive with old acceleration
      // gas:0.00~99.99 unit:
      void PatrolController::Throttle(const ControlCommand &command)
      {
        //下发控制速度单位为m/s
        double speed = command.speed() * 3.6;
        if (!(driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE || driving_mode() == DrivingMode::AUTO_SPEED_ONLY || driving_mode() == DrivingMode::TELEOP_DRIVE))
        {
          AINFO << "The current drive mode does not need to set throttle.";
          return;
        }
        //速读控车(输入为速度0~80km/h)
        ad_control_accelerate_504_control_ -> set_ad_speed_control(speed);

        //扭矩控车,这里使用油门控车(输入为油门开度0~100%)，对应扭矩0~20N.m
        // ad_control_accelerate_504_control_ -> set_ad_torque_control();
      }

      int64_t PatrolController::GetTimeStamp(ECU_TYPE type)
      {
        ChassisDetail chassis_detail;
        message_manager_->GetSensorData(&chassis_detail);
        int64_t ret;
        switch (type)
        {
          case ECU_TYPE::VCU_INTERRUPT:
            // ret = chassis_detail.abs1_3a3_report_.timestamp_;
            break;
          case ECU_TYPE::GEAR_INTERRUPT:
            // ret = chassis_detail.vcu1_3a1_report_.timestamp_;
            break;
          case ECU_TYPE::ESC_INTERRUPT:
            // ret = chassis_detail.vcu2_3a2_report_.timestamp_;
            break;
          case ECU_TYPE::EPS_INTERRUPT:
            // ret = chassis_detail.vcu1_3a1_report_.timestamp_;
            break;
          case ECU_TYPE::EPB_INTERRUPT:
            // ret = chassis_detail.vcu1_3a1_report_.timestamp_;
            break;
          default:
            ret = 0;
            break;
        }
        return ret;
      }

      void PatrolController::SteerDrivingModeSet(int state)
      {
        // switch (state)
        // {
        // case 0:
        // {
        //   apa_control_153_control_->set_apa_epscontrolreq(Apa_control_153_control::Apa_epscontrolreqType::APA_EPSCONTROLREQ_NO_REQUEST);
        //   break;
        // }
        // case 1:
        // {
        //   apa_control_153_control_->set_apa_epscontrolreq(Apa_control_153_control::Apa_epscontrolreqType::APA_EPSCONTROLREQ_REQUEST_EPS_CONTROL);
        //   break;
        // }
        // case 2:
        // {
        //   apa_control_153_control_->set_apa_epscontrolreq(Apa_control_153_control::Apa_epscontrolreqType::APA_EPSCONTROLREQ_EPS_CONTROL_ACTIVE);
        //   break;
        // }
        // }
      }

      void PatrolController::Steer(double angle)
      {
        if (!(driving_mode() == DrivingMode::COMPLETE_AUTO_DRIVE || driving_mode() == DrivingMode::AUTO_STEER_ONLY || driving_mode() == DrivingMode::TELEOP_DRIVE))
        {
          AINFO << "The current driving mode does not need to set steer.";
          return;
        }
        //车端转角控制(-30°~30°)
        ad_control_steering_502_control_ -> set_ad_steering_angle_cmd(angle);
      }

      void PatrolController::SetEpbBreak(const ControlCommand &command)
      {
        if (command.epb_level() == EPBLevel::RELEASED)
        {
          // None
        }
        else if (command.epb_level() == EPBLevel::APPLIED)
        {
          // None
        }
        else if (command.epb_level() == EPBLevel::UNKNOWN)
        {
          // None
        }
      }

      void PatrolController::SetBcmSignal(const ControlCommand &command)
      {
      }

      void PatrolController::SetEmergency()
      {
      }

      void PatrolController::SetEmergencyDisable()
      {
      }

      void PatrolController::ResetProtocol()
      {
        message_manager_->ResetSendMessages();
      }

      bool PatrolController::CheckChassisError()
      {
        /* ADD YOUR OWN CAR CHASSIS OPERATION
         */
        return false;
      }

      void PatrolController::SecurityDogThreadFunc()
      {
        int32_t vertical_ctrl_fail = 0;
        int32_t horizontal_ctrl_fail = 0;

        if (can_sender_ == nullptr)
        {
          AERROR << "Fail to run SecurityDogThreadFunc() because can_sender_ is "
                    "nullptr.";
          return;
        }
        while (!can_sender_->IsRunning())
        {
          std::this_thread::yield();
        }

        std::chrono::duration<double, std::micro> default_period{50000};
        int64_t start = 0;
        int64_t end = 0;
        while (can_sender_->IsRunning())
        {
          start = TimeTool::Now2Us();
          const DrivingMode mode = driving_mode();
          bool emergency_mode = false;

          // 1. horizontal control check
          if ((mode == DrivingMode::COMPLETE_AUTO_DRIVE ||
               mode == DrivingMode::AUTO_STEER_ONLY) &&
              CheckResponse(CHECK_RESPONSE_STEER_UNIT_FLAG, false) == false)
          {
            ++horizontal_ctrl_fail;
            if (horizontal_ctrl_fail >= kMaxFailAttempt)
            {
              emergency_mode = true;
              set_chassis_error_code(Chassis::ErrorCode::MANUAL_INTERVENTION);
            }
          }
          else
          {
            horizontal_ctrl_fail = 0;
          }

          // 2. vertical control check
          if ((mode == DrivingMode::COMPLETE_AUTO_DRIVE ||
               mode == DrivingMode::AUTO_SPEED_ONLY) &&
              CheckResponse(CHECK_RESPONSE_SPEED_UNIT_FLAG, false) == false)
          {
            ++vertical_ctrl_fail;
            if (vertical_ctrl_fail >= kMaxFailAttempt)
            {
              emergency_mode = true;
              set_chassis_error_code(Chassis::ErrorCode::MANUAL_INTERVENTION);
            }
          }
          else
          {
            vertical_ctrl_fail = 0;
          }
          if (CheckChassisError())
          {
            set_chassis_error_code(Chassis::ErrorCode::CHASSIS_ERROR);
            emergency_mode = true;
          }

          if (emergency_mode && mode != DrivingMode::EMERGENCY_MODE)
          {
            set_driving_mode(DrivingMode::EMERGENCY_MODE);
            message_manager_->ResetSendMessages();
          }
          end = TimeTool::Now2Us();
          std::chrono::duration<double, std::micro> elapsed{end - start};
          if (elapsed < default_period)
          {
            std::this_thread::sleep_for(default_period - elapsed);
          }
          else
          {
            stringstream sstream;
            sstream
                << "Too much time consumption in PatrolController looping process:"
                << elapsed.count();
            AERROR << sstream.str();
          }
        }
      }

      bool PatrolController::CheckResponse(const int32_t flags, bool need_wait)
      {
        /* ADD YOUR OWN CAR CHASSIS OPERATION
         */
        return false;
      }

      void PatrolController::set_chassis_error_mask(const int32_t mask)
      {
        std::lock_guard<std::mutex> lock(chassis_mask_mutex_);
        chassis_error_mask_ = mask;
      }

      int32_t PatrolController::chassis_error_mask()
      {
        std::lock_guard<std::mutex> lock(chassis_mask_mutex_);
        return chassis_error_mask_;
      }

      Chassis::ErrorCode PatrolController::chassis_error_code()
      {
        std::lock_guard<std::mutex> lock(chassis_error_code_mutex_);
        return chassis_error_code_;
      }

      void PatrolController::set_chassis_error_code(const Chassis::ErrorCode &error_code)
      {
        std::lock_guard<std::mutex> lock(chassis_error_code_mutex_);
        chassis_error_code_ = error_code;
      }

    } // namespace patrol
  } // namespace drivers
} // namespace legion

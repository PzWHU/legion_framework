#pragma once
#include "modules/drivers/canbus/src/apps/canbus.h"

namespace legion 
{
  namespace drivers 
  {  
    void Canbus::HadTeleopStateMachineInit()
    {
      AINFO <<"had_teleop_state_machine VariableInit";
      status_sm_ = std::make_shared<state_machine::StateContext>("./conf/state_machine/had_teleop_state_machine.json",
      true, "./log/had_teleop_state_machine/","had_teleop_state_machine");

      status_sm_->SetCallback(state_machine::CallbackType::UPDATE, "Init",std::bind(&Canbus::InitUpdate, this,std::placeholders::_1, 0));
      status_sm_->SetCallback(state_machine::CallbackType::UPDATE, "HadTakeOver",std::bind(&Canbus::HadTakeOverUpdate, this,std::placeholders::_1, 0));
      status_sm_->SetCallback(state_machine::CallbackType::UPDATE, "TeleopTakeOver",std::bind(&Canbus::TeleopTakeOverUpdate, this,std::placeholders::_1, 0));

      status_sm_->NextState("started");
    }

    void Canbus::InitUpdate(const std::string& state_name,int state)
    {
      cout << "InitUpdate : State"<<endl;
      status_sm_->NextState("teleop_take_over");
    }

    void Canbus::HadTakeOverUpdate(const std::string& state_name,int state)
    {
      AINFO << "HadTakeOver";
      std::lock_guard<std::mutex> lock(mutex_);
      if (canbus_conf_ ->check_control())
      {
        Status status_control_tms = CheckTimestamp(local_view_.control_command_,
                                                  canbus_conf_ -> max_miss_tms().max_miss_tms_control(),
                                                  "control");
        std::chrono::system_clock::time_point start_time = std::chrono::system_clock::now();
        // ADEBUG << "start_time::"<< start_time;
        if (!status_control_tms.ok())
        {
          AWARN << "Control message lost.";
          legion::interface::ControlCommand temp_cmd;
          temp_cmd.set_front_steering_target(0.0);
          temp_cmd.set_accel_value(0.0);
          temp_cmd.set_speed(0.0);
          // temp_cmd.set_brake_value();
          // temp_cmd.set_epb_level(legion::common::EPBLevel::RELEASED);
          temp_cmd.set_gear_location(legion::common::GearPosition::GEAR_NEUTRAL);
          temp_cmd.set_steer_driving_mode(COMPLETE_AUTO_DRIVE);
          temp_cmd.set_accel_driving_mode(COMPLETE_AUTO_DRIVE);
          temp_cmd.set_epb_driving_mode(COMPLETE_AUTO_DRIVE);
          temp_cmd.set_brake_driving_mode(COMPLETE_AUTO_DRIVE);
          UpdateCanControlCmd(temp_cmd);
          auto elapse_time = TimeTool::ElapseSeconds(start_time);
          ADEBUG << "elapse_time::"<< elapse_time;
          if (elapse_time > canbus_conf_ -> max_miss_tms().max_miss_duration_tms_control())
          {
            status_sm_->NextState("teleop_take_over");
          }
          return;
        }
      }

      if (local_view_.teleop_control_command_.header().frame_id() == "teleop")
      {
        status_sm_->NextState("teleop_take_over");
      }
      else
      {
        UpdateCanControlCmd(local_view_.control_command_);
      }
    }

    void Canbus::TeleopTakeOverUpdate(const std::string& state_name,int state)
    {
      // AINFO << "TeleopTakeOver";
      std::lock_guard<std::mutex> lock(mutex_);
      if (local_view_.teleop_control_command_.header().frame_id() == "teleop")
      {
        UpdateCanControlCmd(local_view_.teleop_control_command_);
      }
      else
      {
        status_sm_->NextState("had_take_over");
      }
    }

  }
}

#pragma once
#include "modules/legion_bridge/src/apps/legion_bridge.h"
#include "modules/common/interface/obu_cmd_msg.hpp"

namespace legion 
{
  namespace legion_bridge 
  {
    void LegionBridge::StatusTransitionInit()
    {
      status_sm_ = std::make_shared<state_machine::StateContext>("./conf/state_machine/status_state_machine.json",true, "./log/state_machine/","status_state_machine");

      status_sm_->SetCallback(state_machine::CallbackType::UPDATE, "Init",std::bind(&LegionBridge::InitUpdate, this,std::placeholders::_1, 0));
      status_sm_->SetCallback(state_machine::CallbackType::ENTRY, "HadTakeOver",std::bind(&LegionBridge::HadTakeOverEntry, this,std::placeholders::_1, 0));
      status_sm_->SetCallback(state_machine::CallbackType::UPDATE, "HadTakeOver",std::bind(&LegionBridge::HadTakeOverUpdate, this,std::placeholders::_1, 0));
      status_sm_->SetCallback(state_machine::CallbackType::EXIT, "HadTakeOver",std::bind(&LegionBridge::HadTakeOverExit, this,std::placeholders::_1, 0));
      status_sm_->SetCallback(state_machine::CallbackType::ENTRY, "TeleopTakeOver",std::bind(&LegionBridge::TeleopTakeOverEntry, this,std::placeholders::_1, 0));
      status_sm_->SetCallback(state_machine::CallbackType::UPDATE, "TeleopTakeOver",std::bind(&LegionBridge::TeleopTakeOverUpdate, this,std::placeholders::_1, 0));
      status_sm_->SetCallback(state_machine::CallbackType::EXIT, "TeleopTakeOver",std::bind(&LegionBridge::TeleopTakeOverExit, this,std::placeholders::_1, 0));
      status_sm_->NextState("started");
    }


    void LegionBridge::InitUpdate(const std::string& state_name,int state)
    {
      if (enable_status_print_)
      {
        AINFO << "InitUpdate";
      }

      status_sm_->NextState("teleop_take_over");
    }

    void LegionBridge::HadTakeOverEntry(const std::string& state_name,int state)
    {
      //41 转为自动驾驶模式单次发送（进入）
      //进入自动驾驶模式obu单次发送自动驾驶模式
      if (enable_status_print_)
      {
        AINFO << "HadTakeOverEntry";
      }

      obu_cmd_msg_.clear_obu_cmd_list();
      legion::interface::ObuCmd temp_obu_cmd;
      temp_obu_cmd.set_code(10001);
      temp_obu_cmd.set_val(1);
      obu_cmd_msg_.add_obu_cmd_list(temp_obu_cmd);
    }

    void LegionBridge::HadTakeOverUpdate(const std::string& state_name,int state)
    {
      //41
      if (enable_status_print_)
      {
        AINFO << "HadTakeOver";
      }

      legion::interface::Header header;
      header.set_frame_id("control");
      header.set_stamp(TimeTool::Now2TmeStruct());

      control_command_.set_header(header);

      bool has_event_40 = false;
      if (!events_.events().empty()) {
        for (const auto& evt : events_.events()) {
          if (evt.code() == 40) {
            has_event_40 = true;
            break;
          }
        }
      }
      if (has_event_40 || 
          vehicle_.front_touch_status() == SWITCH_STATUS_ON || 
          vehicle_.rear_touch_status() == SWITCH_STATUS_ON ||
          !status_control_tms_.ok() )
      {
        status_sm_->NextState("teleop_take_over");
      }
    }

    void LegionBridge::HadTakeOverExit(const std::string& state_name,int state)
    {
      if (enable_status_print_)
      {
        AINFO << "HadTakeOverExit";
      }

      obu_cmd_msg_.clear_obu_cmd_list();

      if (vehicle_.front_touch_status() == SWITCH_STATUS_ON || 
          vehicle_.rear_touch_status() == SWITCH_STATUS_ON ||
          !status_control_tms_.ok())
      {
        control_command_.set_brake_value(legion_bridge_conf_ -> settings().max().max_brake_value());
      }
      legion::interface::Header header;
      header.set_frame_id("control");
      header.set_stamp(TimeTool::Now2TmeStruct());
      control_command_.set_header(header);
    }

    void LegionBridge::TeleopTakeOverEntry(const std::string& state_name,int state)
    {
      //40 转为遥控模式单次发送（进入）
      //进入遥控模式obu单次发送人工模式
      if (enable_status_print_)
      {
        AINFO << "TeleopTakeOverEntry";
      }

      obu_cmd_msg_.clear_obu_cmd_list();
      legion::interface::ObuCmd temp_obu_cmd;
      temp_obu_cmd.set_code(10001);
      temp_obu_cmd.set_val(2);
      obu_cmd_msg_.add_obu_cmd_list(temp_obu_cmd);
    }

    void LegionBridge::TeleopTakeOverUpdate(const std::string& state_name,int state)
    {
      //40 转为遥控模式周期发送
      //遥控模式周期发送control_command_
      if (enable_status_print_)
      {
        // AINFO << "TeleopTakeOver";
      }

      legion::interface::Header header;
      header.set_frame_id("teleop");
      header.set_stamp(TimeTool::Now2TmeStruct());
      control_command_.set_header(header);

      bool has_event_41 = false;
      if (!events_.events().empty()) {
        for (const auto& evt : events_.events()) {
          if (evt.code() == 41) {
            has_event_41 = true;
            break;
          }
        }
      }

      if (has_event_41 && 
          vehicle_.front_touch_status() == SWITCH_STATUS_OFF && 
          vehicle_.rear_touch_status() == SWITCH_STATUS_OFF &&
          status_control_tms_.ok())
      {
        status_sm_->NextState("had_take_over");
      }
    }

    void LegionBridge::TeleopTakeOverExit(const std::string& state_name,int state)
    {
      //40 转为遥控模式单次发送（退出）
      //重置control_command_，退能，单次发送control_command_
      if (enable_status_print_)
      {
        AINFO << "TeleopTakeOverExit";
      }

      obu_cmd_msg_.clear_obu_cmd_list();

      legion::interface::Header header;
      header.set_frame_id("teleop");
      header.set_stamp(TimeTool::Now2TmeStruct());
      control_command_.set_header(header);
      ResetControlCommand();
      VehicleDisable();
    }

  }
}
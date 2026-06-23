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

#include "patrol_message_manager.h"

#include "protocol/ad_control_accelerate_504_control.h"
#include "protocol/ad_control_body_506_control.h"
#include "protocol/ad_control_brake_503_control.h"
#include "protocol/ad_control_flag_501_control.h"
#include "protocol/ad_control_steering_502_control.h"

#include "protocol/bms_max_min_cell_voltage_a1_report.h"
#include "protocol/bms_system_info_a0_report.h"
#include "protocol/dbs_status2_143_report.h"
#include "protocol/dbs_status_142_report.h"
#include "protocol/eps_status_18f_report.h"
#include "protocol/mcu_drive_motor_feedback_msg_60_report.h"
#include "protocol/mcu_torque_feedback_10_report.h"
#include "protocol/parallel_control_accelerate_514_report.h"
#include "protocol/parallel_control_body_516_report.h"
#include "protocol/parallel_control_brake_513_report.h"
#include "protocol/parallel_control_flag_511_report.h"
#include "protocol/parallel_control_steering_512_report.h"
#include "protocol/remotet10_control_io_10a_report.h"
#include "protocol/remotet10_control_shake_2_10b_report.h"
#include "protocol/vcu_dbs_request_154_report.h"
#include "protocol/vcu_eps_control_request_314_report.h"
#include "protocol/vcu_icm_req_612_report.h"
#include "protocol/vcu_mcu_request_160_report.h"
#include "protocol/vcu_meter_req_712_report.h"
#include "protocol/vcu_vehicle_diagnosis_301_report.h"
#include "protocol/vcu_vehicle_status_1_303_report.h"
#include "protocol/vcu_vehicle_status_2_304_report.h"

namespace legion {
namespace drivers {
namespace patrol {

PatrolMessageManager::PatrolMessageManager() {
  // Report Messages
  AddRecvProtocolData<Bmsmaxmincellvoltagea1report, true>();
  AddRecvProtocolData<Bmssysteminfoa0report, true>();
  AddRecvProtocolData<Dbsstatus142report, true>();
  AddRecvProtocolData<Dbsstatus2143report, true>();
  AddRecvProtocolData<Epsstatus18freport, true>();
  AddRecvProtocolData<Mcudrivemotorfeedbackmsg60report, true>();
  AddRecvProtocolData<Mcutorquefeedback10report, true>();
  AddRecvProtocolData<Parallelcontrolaccelerate514report, true>();
  AddRecvProtocolData<Parallelcontrolbody516report, true>();
  AddRecvProtocolData<Parallelcontrolbrake513report, true>();
  AddRecvProtocolData<Parallelcontrolflag511report, true>();
  AddRecvProtocolData<Parallelcontrolsteering512report, true>();
  AddRecvProtocolData<Remotet10controlio10areport, true>();
  AddRecvProtocolData<Remotet10controlshake210breport, true>();
  AddRecvProtocolData<Vcudbsrequest154report, true>();
  AddRecvProtocolData<Vcuepscontrolrequest314report, true>();
  AddRecvProtocolData<Vcuicmreq612report, true>();
  AddRecvProtocolData<Vcumcurequest160report, true>();
  AddRecvProtocolData<Vcumeterreq712report, true>();
  AddRecvProtocolData<Vcuvehiclediagnosis301report, true>();
  AddRecvProtocolData<Vcuvehiclestatus1303report, true>();
  AddRecvProtocolData<Vcuvehiclestatus2304report, true>();

  // Control Messages
  AddSendProtocolData<Adcontrolaccelerate504control, true>();
  AddSendProtocolData<Adcontrolbody506control, true>();
  AddSendProtocolData<Adcontrolbrake503control, true>();
  AddSendProtocolData<Adcontrolflag501control, true>();
  AddSendProtocolData<Adcontrolsteering502control, true>();
}

PatrolMessageManager::~PatrolMessageManager() {}

}  // namespace patrol
}  // namespace drivers
}  // namespace legion

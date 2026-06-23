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

#pragma once


#include "canbus/can_comm/protocol_data.h"
#include "../../chassis_detail/chassis_detail.h"

namespace legion {
namespace drivers {
namespace patrol {

class Vcuvehiclediagnosis301report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Vcuvehiclediagnosis301report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 22, 'description': 'battery voltage', 'is_signed_var': False, 'len': 10, 'name': 'Vehicle_Voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|90]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
  double vehicle_voltage(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 1, 'name': 'Light_states_Brake', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool light_states_brake(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 10, 'is_signed_var': False, 'len': 1, 'name': 'EPS_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool eps_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 41, 'description': '0normal,1abnormal', 'is_signed_var': False, 'len': 1, 'name': 'Oil_pot_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool oil_pot_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 60, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'Vehicle_Diagnosis_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vehicle_diagnosis_msgcntr(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 43, 'is_signed_var': False, 'len': 1, 'name': 'Horn_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool horn_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 15, 'is_signed_var': False, 'len': 1, 'name': 'HeadLight_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool headlight_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 48, 'description': '0off    1on', 'is_signed_var': False, 'len': 1, 'name': 'Right_Turn_Light_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool right_turn_light_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 1, 'name': 'Left_Turn_Light_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool left_turn_light_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 13, 'is_signed_var': False, 'len': 1, 'name': 'R_Touch_Switch_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool r_touch_switch_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 12, 'is_signed_var': False, 'len': 1, 'name': 'F_Touch_Switch_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool f_touch_switch_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 9, 'description': '0normal,1faulty', 'is_signed_var': False, 'len': 1, 'name': 'BMS_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bms_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'Emergency_Button_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool emergency_button_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 8, 'description': '0 indicates parallel driving, 1 indicates not parallel driving', 'is_signed_var': False, 'len': 1, 'name': 'Parallel_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool parallel_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'DBS_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool dbs_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 6, 'description': '0recieve,1norecieve', 'is_signed_var': False, 'len': 1, 'name': 'AD_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool ad_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 5, 'is_signed_var': False, 'len': 1, 'name': 'Remote_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool remote_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'Motor_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
  bool motor_state(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



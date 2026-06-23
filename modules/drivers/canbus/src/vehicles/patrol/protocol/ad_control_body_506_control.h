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

class Adcontrolbody506control : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;

  Adcontrolbody506control();

  uint32_t GetPeriod() const override;

  bool GetCycleType() const override;

  uint32_t GetSendCount() const override;

  void UpdateData(uint8_t* data) override;

  void Reset() override;

  // config detail: {'bit': 8, 'description': '0on,1off', 'enum': {0: 'AD_BRAKE_LIGHT_TURN_OFF', 1: 'AD_BRAKE_LIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Brake_Light', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolbody506control* set_ad_brake_light(Ad_control_body_506_control::Ad_brake_lightType ad_brake_light);

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Body_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  Adcontrolbody506control* set_ad_body_msgcntr(long long ad_body_msgcntr);

  // config detail: {'bit': 2, 'description': '0off,1on', 'enum': {0: 'AD_HORN_CONTROL_TURN_OFF', 1: 'AD_HORN_CONTROL_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Horn_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolbody506control* set_ad_horn_control(Ad_control_body_506_control::Ad_horn_controlType ad_horn_control);

  // config detail: {'bit': 3, 'description': '0off,1on', 'enum': {0: 'AD_HEADLIGHT_TURN_OFF', 1: 'AD_HEADLIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_HeadLight', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolbody506control* set_ad_headlight(Ad_control_body_506_control::Ad_headlightType ad_headlight);

  // config detail: {'bit': 1, 'description': '0off,1on', 'enum': {0: 'AD_RIGHT_TURN_LIGHT_TURN_OFF', 1: 'AD_RIGHT_TURN_LIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Right_Turn_Light', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolbody506control* set_ad_right_turn_light(Ad_control_body_506_control::Ad_right_turn_lightType ad_right_turn_light);

  // config detail: {'bit': 0, 'description': '0off,1on', 'enum': {0: 'AD_LEFT_TURN_LIGHT_TURN_OFF', 1: 'AD_LEFT_TURN_LIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Left_Turn_Light', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolbody506control* set_ad_left_turn_light(Ad_control_body_506_control::Ad_left_turn_lightType ad_left_turn_light);

 private:

  // config detail: {'bit': 8, 'description': '0on,1off', 'enum': {0: 'AD_BRAKE_LIGHT_TURN_OFF', 1: 'AD_BRAKE_LIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Brake_Light', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_brake_light(uint8_t* data, Ad_control_body_506_control::Ad_brake_lightType ad_brake_light);

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Body_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  void set_p_ad_body_msgcntr(uint8_t* data, long long ad_body_msgcntr);

  // config detail: {'bit': 2, 'description': '0off,1on', 'enum': {0: 'AD_HORN_CONTROL_TURN_OFF', 1: 'AD_HORN_CONTROL_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Horn_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_horn_control(uint8_t* data, Ad_control_body_506_control::Ad_horn_controlType ad_horn_control);

  // config detail: {'bit': 3, 'description': '0off,1on', 'enum': {0: 'AD_HEADLIGHT_TURN_OFF', 1: 'AD_HEADLIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_HeadLight', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_headlight(uint8_t* data, Ad_control_body_506_control::Ad_headlightType ad_headlight);

  // config detail: {'bit': 1, 'description': '0off,1on', 'enum': {0: 'AD_RIGHT_TURN_LIGHT_TURN_OFF', 1: 'AD_RIGHT_TURN_LIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Right_Turn_Light', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_right_turn_light(uint8_t* data, Ad_control_body_506_control::Ad_right_turn_lightType ad_right_turn_light);

  // config detail: {'bit': 0, 'description': '0off,1on', 'enum': {0: 'AD_LEFT_TURN_LIGHT_TURN_OFF', 1: 'AD_LEFT_TURN_LIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Left_Turn_Light', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_left_turn_light(uint8_t* data, Ad_control_body_506_control::Ad_left_turn_lightType ad_left_turn_light);

 private:
  Ad_control_body_506_control::Ad_brake_lightType ad_brake_light_;
  long long ad_body_msgcntr_;
  Ad_control_body_506_control::Ad_horn_controlType ad_horn_control_;
  Ad_control_body_506_control::Ad_headlightType ad_headlight_;
  Ad_control_body_506_control::Ad_right_turn_lightType ad_right_turn_light_;
  Ad_control_body_506_control::Ad_left_turn_lightType ad_left_turn_light_;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



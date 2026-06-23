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

#include "ad_control_body_506_control.h"

#include "canbus/common/byte.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

const int32_t Adcontrolbody506control::ID = 0x506;

// public
Adcontrolbody506control::Adcontrolbody506control() { Reset(); }

uint32_t Adcontrolbody506control::GetPeriod() const {
  // TODO(All) :  modify every protocol's period manually
  static const uint32_t PERIOD = 50 * 1000;
  return PERIOD;
}

bool Adcontrolbody506control::GetCycleType() const {
  static bool CYCLE_TYPE = true;
  return CYCLE_TYPE;
}

uint32_t Adcontrolbody506control::GetSendCount() const {
  static const uint32_t SEND_COUNT = 0;
  return SEND_COUNT;
}

void Adcontrolbody506control::UpdateData(uint8_t* data) {
  set_p_ad_left_turn_light(data, ad_left_turn_light_);
  set_p_ad_right_turn_light(data, ad_right_turn_light_);
  set_p_ad_headlight(data, ad_headlight_);
  set_p_ad_horn_control(data, ad_horn_control_);
  set_p_ad_body_msgcntr(data, ad_body_msgcntr_);
  set_p_ad_brake_light(data, ad_brake_light_);
}

void Adcontrolbody506control::Reset() {
  // TODO(All) :  you should check this manually
  ad_brake_light_ = Ad_control_body_506_control::AD_BRAKE_LIGHT_TURN_OFF;
  ad_body_msgcntr_ = 0;
  ad_horn_control_ = Ad_control_body_506_control::AD_HORN_CONTROL_TURN_OFF;
  ad_headlight_ = Ad_control_body_506_control::AD_HEADLIGHT_TURN_OFF;
  ad_right_turn_light_ = Ad_control_body_506_control::AD_RIGHT_TURN_LIGHT_TURN_OFF;
  ad_left_turn_light_ = Ad_control_body_506_control::AD_LEFT_TURN_LIGHT_TURN_OFF;
}

Adcontrolbody506control* Adcontrolbody506control::set_ad_left_turn_light(
    Ad_control_body_506_control::Ad_left_turn_lightType ad_left_turn_light) {
  ad_left_turn_light_ = ad_left_turn_light;
  return this;
 }

// config detail: {'bit': 0, 'description': '0off,1on', 'enum': {0: 'AD_LEFT_TURN_LIGHT_TURN_OFF', 1: 'AD_LEFT_TURN_LIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Left_Turn_Light', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolbody506control::set_p_ad_left_turn_light(uint8_t* data,
    Ad_control_body_506_control::Ad_left_turn_lightType ad_left_turn_light) {
  long long x = ad_left_turn_light;

  Byte to_set(data + 0);
  to_set.set_value(x, 0, 1);
}


Adcontrolbody506control* Adcontrolbody506control::set_ad_right_turn_light(
    Ad_control_body_506_control::Ad_right_turn_lightType ad_right_turn_light) {
  ad_right_turn_light_ = ad_right_turn_light;
  return this;
 }

// config detail: {'bit': 1, 'description': '0off,1on', 'enum': {0: 'AD_RIGHT_TURN_LIGHT_TURN_OFF', 1: 'AD_RIGHT_TURN_LIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Right_Turn_Light', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolbody506control::set_p_ad_right_turn_light(uint8_t* data,
    Ad_control_body_506_control::Ad_right_turn_lightType ad_right_turn_light) {
  long long x = ad_right_turn_light;

  Byte to_set(data + 0);
  to_set.set_value(x, 1, 1);
}


Adcontrolbody506control* Adcontrolbody506control::set_ad_headlight(
    Ad_control_body_506_control::Ad_headlightType ad_headlight) {
  ad_headlight_ = ad_headlight;
  return this;
 }

// config detail: {'bit': 3, 'description': '0off,1on', 'enum': {0: 'AD_HEADLIGHT_TURN_OFF', 1: 'AD_HEADLIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_HeadLight', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolbody506control::set_p_ad_headlight(uint8_t* data,
    Ad_control_body_506_control::Ad_headlightType ad_headlight) {
  long long x = ad_headlight;

  Byte to_set(data + 0);
  to_set.set_value(x, 3, 1);
}


Adcontrolbody506control* Adcontrolbody506control::set_ad_horn_control(
    Ad_control_body_506_control::Ad_horn_controlType ad_horn_control) {
  ad_horn_control_ = ad_horn_control;
  return this;
 }

// config detail: {'bit': 2, 'description': '0off,1on', 'enum': {0: 'AD_HORN_CONTROL_TURN_OFF', 1: 'AD_HORN_CONTROL_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Horn_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolbody506control::set_p_ad_horn_control(uint8_t* data,
    Ad_control_body_506_control::Ad_horn_controlType ad_horn_control) {
  long long x = ad_horn_control;

  Byte to_set(data + 0);
  to_set.set_value(x, 2, 1);
}


Adcontrolbody506control* Adcontrolbody506control::set_ad_body_msgcntr(
    long long ad_body_msgcntr) {
  ad_body_msgcntr_ = ad_body_msgcntr;
  return this;
 }

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Body_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
void Adcontrolbody506control::set_p_ad_body_msgcntr(uint8_t* data,
    long long ad_body_msgcntr) {
  ad_body_msgcntr = ProtocolData::BoundedValue((long long)0, (long long)15, ad_body_msgcntr);
  long long x = ad_body_msgcntr;

  Byte to_set(data + 0);
  to_set.set_value(x, 4, 4);
}


Adcontrolbody506control* Adcontrolbody506control::set_ad_brake_light(
    Ad_control_body_506_control::Ad_brake_lightType ad_brake_light) {
  ad_brake_light_ = ad_brake_light;
  return this;
 }

// config detail: {'bit': 8, 'description': '0on,1off', 'enum': {0: 'AD_BRAKE_LIGHT_TURN_OFF', 1: 'AD_BRAKE_LIGHT_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'AD_Brake_Light', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolbody506control::set_p_ad_brake_light(uint8_t* data,
    Ad_control_body_506_control::Ad_brake_lightType ad_brake_light) {
  long long x = ad_brake_light;

  Byte to_set(data + 1);
  to_set.set_value(x, 0, 1);
}

}  // namespace patrol
}  // namespace drivers
}  // namespace legion

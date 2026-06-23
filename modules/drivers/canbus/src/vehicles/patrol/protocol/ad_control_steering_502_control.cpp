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

#include "ad_control_steering_502_control.h"

#include "canbus/common/byte.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

const int32_t Adcontrolsteering502control::ID = 0x502;

// public
Adcontrolsteering502control::Adcontrolsteering502control() { Reset(); }

uint32_t Adcontrolsteering502control::GetPeriod() const {
  // TODO(All) :  modify every protocol's period manually
  static const uint32_t PERIOD = 20 * 1000;
  return PERIOD;
}

bool Adcontrolsteering502control::GetCycleType() const {
  static bool CYCLE_TYPE = true;
  return CYCLE_TYPE;
}

uint32_t Adcontrolsteering502control::GetSendCount() const {
  static const uint32_t SEND_COUNT = 0;
  return SEND_COUNT;
}

void Adcontrolsteering502control::UpdateData(uint8_t* data) {
  set_p_ad_steering_valid(data, ad_steering_valid_);
  set_p_ad_steering_angle_cmd(data, ad_steering_angle_cmd_);
  set_p_ad_steering_msgcntr(data, ad_steering_msgcntr_);
}

void Adcontrolsteering502control::Reset() {
  // TODO(All) :  you should check this manually
  ad_steering_msgcntr_ = 0;
  ad_steering_angle_cmd_ = 0.0;
  ad_steering_valid_ = Ad_control_steering_502_control::AD_STEERING_VALID_INVALID;
}

Adcontrolsteering502control* Adcontrolsteering502control::set_ad_steering_valid(
    Ad_control_steering_502_control::Ad_steering_validType ad_steering_valid) {
  ad_steering_valid_ = ad_steering_valid;
  return this;
 }

// config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_STEERING_VALID_INVALID', 1: 'AD_STEERING_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_Steering_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolsteering502control::set_p_ad_steering_valid(uint8_t* data,
    Ad_control_steering_502_control::Ad_steering_validType ad_steering_valid) {
  long long x = ad_steering_valid;

  Byte to_set(data + 0);
  to_set.set_value(x, 0, 4);
}


Adcontrolsteering502control* Adcontrolsteering502control::set_ad_steering_angle_cmd(
    double ad_steering_angle_cmd) {
  ad_steering_angle_cmd_ = ad_steering_angle_cmd;
  return this;
 }

// config detail: {'bit': 32, 'description': 'AD,(-30~30) ', 'is_signed_var': False, 'len': 16, 'name': 'AD_Steering_Angle_Cmd', 'offset': -30.0, 'order': 'intel', 'physical_range': '[-30|30]', 'physical_unit': 'deg', 'precision': 0.1, 'type': 'double'}
void Adcontrolsteering502control::set_p_ad_steering_angle_cmd(uint8_t* data,
    double ad_steering_angle_cmd) {
  ad_steering_angle_cmd = ProtocolData::BoundedValue((double)-30.0, (double)30.0, ad_steering_angle_cmd);
  long long x = (ad_steering_angle_cmd - -30.000000) / 0.100000;
  uint8_t t = 0;

  t = x & 0xFF;
  Byte to_set0(data + 4);
  to_set0.set_value(t, 0, 8);
  x >>= 8;

  t = x & 0xFF;
  Byte to_set1(data + 5);
  to_set1.set_value(t, 0, 8);
}


Adcontrolsteering502control* Adcontrolsteering502control::set_ad_steering_msgcntr(
    long long ad_steering_msgcntr) {
  ad_steering_msgcntr_ = ad_steering_msgcntr;
  return this;
 }

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Steering_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
void Adcontrolsteering502control::set_p_ad_steering_msgcntr(uint8_t* data,
    long long ad_steering_msgcntr) {
  ad_steering_msgcntr = ProtocolData::BoundedValue((long long)0, (long long)15, ad_steering_msgcntr);
  long long x = ad_steering_msgcntr;

  Byte to_set(data + 0);
  to_set.set_value(x, 4, 4);
}

}  // namespace patrol
}  // namespace drivers
}  // namespace legion

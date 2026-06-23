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

#include "ad_control_brake_503_control.h"

#include "canbus/common/byte.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

const int32_t Adcontrolbrake503control::ID = 0x503;

// public
Adcontrolbrake503control::Adcontrolbrake503control() { Reset(); }

uint32_t Adcontrolbrake503control::GetPeriod() const {
  // TODO(All) :  modify every protocol's period manually
  static const uint32_t PERIOD = 20 * 1000;
  return PERIOD;
}

bool Adcontrolbrake503control::GetCycleType() const {
  static bool CYCLE_TYPE = true;
  return CYCLE_TYPE;
}

uint32_t Adcontrolbrake503control::GetSendCount() const {
  static const uint32_t SEND_COUNT = 0;
  return SEND_COUNT;
}

void Adcontrolbrake503control::UpdateData(uint8_t* data) {
  set_p_ad_dbs_valid(data, ad_dbs_valid_);
  set_p_ad_brakepressure_cmd(data, ad_brakepressure_cmd_);
  set_p_ad_dbs_msgcntr(data, ad_dbs_msgcntr_);
}

void Adcontrolbrake503control::Reset() {
  // TODO(All) :  you should check this manually
  ad_dbs_msgcntr_ = 0;
  ad_brakepressure_cmd_ = 0;
  ad_dbs_valid_ = Ad_control_brake_503_control::AD_DBS_VALID_INVALID;
}

Adcontrolbrake503control* Adcontrolbrake503control::set_ad_dbs_valid(
    Ad_control_brake_503_control::Ad_dbs_validType ad_dbs_valid) {
  ad_dbs_valid_ = ad_dbs_valid;
  return this;
 }

// config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_DBS_VALID_INVALID', 1: 'AD_DBS_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_DBS_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolbrake503control::set_p_ad_dbs_valid(uint8_t* data,
    Ad_control_brake_503_control::Ad_dbs_validType ad_dbs_valid) {
  long long x = ad_dbs_valid;

  Byte to_set(data + 0);
  to_set.set_value(x, 0, 4);
}


Adcontrolbrake503control* Adcontrolbrake503control::set_ad_brakepressure_cmd(
    long long ad_brakepressure_cmd) {
  ad_brakepressure_cmd_ = ad_brakepressure_cmd;
  return this;
 }

// config detail: {'bit': 8, 'description': '(0~100%)0-8Mpa', 'is_signed_var': False, 'len': 8, 'name': 'AD_BrakePressure_Cmd', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
void Adcontrolbrake503control::set_p_ad_brakepressure_cmd(uint8_t* data,
    long long ad_brakepressure_cmd) {
  ad_brakepressure_cmd = ProtocolData::BoundedValue((long long)0, (long long)100, ad_brakepressure_cmd);
  long long x = ad_brakepressure_cmd;

  Byte to_set(data + 1);
  to_set.set_value(x, 0, 8);
}


Adcontrolbrake503control* Adcontrolbrake503control::set_ad_dbs_msgcntr(
    long long ad_dbs_msgcntr) {
  ad_dbs_msgcntr_ = ad_dbs_msgcntr;
  return this;
 }

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_DBS_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
void Adcontrolbrake503control::set_p_ad_dbs_msgcntr(uint8_t* data,
    long long ad_dbs_msgcntr) {
  ad_dbs_msgcntr = ProtocolData::BoundedValue((long long)0, (long long)15, ad_dbs_msgcntr);
  long long x = ad_dbs_msgcntr;

  Byte to_set(data + 0);
  to_set.set_value(x, 4, 4);
}

}  // namespace patrol
}  // namespace drivers
}  // namespace legion

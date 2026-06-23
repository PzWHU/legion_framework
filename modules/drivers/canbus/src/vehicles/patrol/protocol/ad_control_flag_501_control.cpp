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

#include "ad_control_flag_501_control.h"

#include "canbus/common/byte.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

const int32_t Adcontrolflag501control::ID = 0x501;

// public
Adcontrolflag501control::Adcontrolflag501control() { Reset(); }

uint32_t Adcontrolflag501control::GetPeriod() const {
  // TODO(All) :  modify every protocol's period manually
  static const uint32_t PERIOD = 20 * 1000;
  return PERIOD;
}

bool Adcontrolflag501control::GetCycleType() const {
  static bool CYCLE_TYPE = true;
  return CYCLE_TYPE;
}

uint32_t Adcontrolflag501control::GetSendCount() const {
  static const uint32_t SEND_COUNT = 0;
  return SEND_COUNT;
}

void Adcontrolflag501control::UpdateData(uint8_t* data) {
  set_p_ad_control_request_flag(data, ad_control_request_flag_);
  set_p_ad_flag_msgcntr(data, ad_flag_msgcntr_);
}

void Adcontrolflag501control::Reset() {
  // TODO(All) :  you should check this manually
  ad_flag_msgcntr_ = 0;
  ad_control_request_flag_ = Ad_control_flag_501_control::AD_CONTROL_REQUEST_FLAG_INVALUE;
}

Adcontrolflag501control* Adcontrolflag501control::set_ad_control_request_flag(
    Ad_control_flag_501_control::Ad_control_request_flagType ad_control_request_flag) {
  ad_control_request_flag_ = ad_control_request_flag;
  return this;
 }

// config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_CONTROL_REQUEST_FLAG_INVALUE', 1: 'AD_CONTROL_REQUEST_FLAG_VALUE'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_Control_Request_Flag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolflag501control::set_p_ad_control_request_flag(uint8_t* data,
    Ad_control_flag_501_control::Ad_control_request_flagType ad_control_request_flag) {
  long long x = ad_control_request_flag;

  Byte to_set(data + 0);
  to_set.set_value(x, 0, 4);
}


Adcontrolflag501control* Adcontrolflag501control::set_ad_flag_msgcntr(
    long long ad_flag_msgcntr) {
  ad_flag_msgcntr_ = ad_flag_msgcntr;
  return this;
 }

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Flag_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
void Adcontrolflag501control::set_p_ad_flag_msgcntr(uint8_t* data,
    long long ad_flag_msgcntr) {
  ad_flag_msgcntr = ProtocolData::BoundedValue((long long)0, (long long)15, ad_flag_msgcntr);
  long long x = ad_flag_msgcntr;

  Byte to_set(data + 0);
  to_set.set_value(x, 4, 4);
}

}  // namespace patrol
}  // namespace drivers
}  // namespace legion

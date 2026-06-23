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

#include "ad_control_accelerate_504_control.h"

#include "canbus/common/byte.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

const int32_t Adcontrolaccelerate504control::ID = 0x504;

// public
Adcontrolaccelerate504control::Adcontrolaccelerate504control() { Reset(); }

uint32_t Adcontrolaccelerate504control::GetPeriod() const {
  // TODO(All) :  modify every protocol's period manually
  static const uint32_t PERIOD = 20 * 1000;
  return PERIOD;
}

bool Adcontrolaccelerate504control::GetCycleType() const {
  static bool CYCLE_TYPE = true;
  return CYCLE_TYPE;
}

uint32_t Adcontrolaccelerate504control::GetSendCount() const {
  static const uint32_t SEND_COUNT = 0;
  return SEND_COUNT;
}

void Adcontrolaccelerate504control::UpdateData(uint8_t* data) {
  set_p_ad_accelerate_valid(data, ad_accelerate_valid_);
  set_p_ad_accelerate_work_mode(data, ad_accelerate_work_mode_);
  set_p_ad_accelerate_gear(data, ad_accelerate_gear_);
  set_p_ad_torque_control(data, ad_torque_control_);
  set_p_ad_speed_control(data, ad_speed_control_);
  set_p_ad_acc_de(data, ad_acc_de_);
  set_p_ad_accelerate_msgcntr(data, ad_accelerate_msgcntr_);
}

void Adcontrolaccelerate504control::Reset() {
  // TODO(All) :  you should check this manually
  ad_accelerate_msgcntr_ = 0;
  ad_acc_de_ = 0.0;
  ad_speed_control_ = 0.0;
  ad_torque_control_ = 0;
  ad_accelerate_gear_ = Ad_control_accelerate_504_control::AD_ACCELERATE_GEAR_P;
  ad_accelerate_work_mode_ = Ad_control_accelerate_504_control::AD_ACCELERATE_WORK_MODE_TORQUE_CONTROL;
  ad_accelerate_valid_ = Ad_control_accelerate_504_control::AD_ACCELERATE_VALID_INVALID;
}

Adcontrolaccelerate504control* Adcontrolaccelerate504control::set_ad_accelerate_valid(
    Ad_control_accelerate_504_control::Ad_accelerate_validType ad_accelerate_valid) {
  ad_accelerate_valid_ = ad_accelerate_valid;
  return this;
 }

// config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_ACCELERATE_VALID_INVALID', 1: 'AD_ACCELERATE_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_Accelerate_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolaccelerate504control::set_p_ad_accelerate_valid(uint8_t* data,
    Ad_control_accelerate_504_control::Ad_accelerate_validType ad_accelerate_valid) {
  long long x = ad_accelerate_valid;

  Byte to_set(data + 0);
  to_set.set_value(x, 0, 4);
}


Adcontrolaccelerate504control* Adcontrolaccelerate504control::set_ad_accelerate_work_mode(
    Ad_control_accelerate_504_control::Ad_accelerate_work_modeType ad_accelerate_work_mode) {
  ad_accelerate_work_mode_ = ad_accelerate_work_mode;
  return this;
 }

// config detail: {'bit': 16, 'description': '0torque,1speed', 'enum': {0: 'AD_ACCELERATE_WORK_MODE_TORQUE_CONTROL', 1: 'AD_ACCELERATE_WORK_MODE_SPEED_CONTROL', 2: 'AD_ACCELERATE_WORK_MODE_ACC_CONTROL'}, 'is_signed_var': False, 'len': 8, 'name': 'AD_Accelerate_Work_Mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolaccelerate504control::set_p_ad_accelerate_work_mode(uint8_t* data,
    Ad_control_accelerate_504_control::Ad_accelerate_work_modeType ad_accelerate_work_mode) {
  long long x = ad_accelerate_work_mode;

  Byte to_set(data + 2);
  to_set.set_value(x, 0, 8);
}


Adcontrolaccelerate504control* Adcontrolaccelerate504control::set_ad_accelerate_gear(
    Ad_control_accelerate_504_control::Ad_accelerate_gearType ad_accelerate_gear) {
  ad_accelerate_gear_ = ad_accelerate_gear;
  return this;
 }

// config detail: {'bit': 24, 'description': '0:P,1:D,2:N,3:R', 'enum': {0: 'AD_ACCELERATE_GEAR_P', 1: 'AD_ACCELERATE_GEAR_D', 2: 'AD_ACCELERATE_GEAR_N', 3: 'AD_ACCELERATE_GEAR_R'}, 'is_signed_var': False, 'len': 8, 'name': 'AD_Accelerate_Gear', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
void Adcontrolaccelerate504control::set_p_ad_accelerate_gear(uint8_t* data,
    Ad_control_accelerate_504_control::Ad_accelerate_gearType ad_accelerate_gear) {
  long long x = ad_accelerate_gear;

  Byte to_set(data + 3);
  to_set.set_value(x, 0, 8);
}


Adcontrolaccelerate504control* Adcontrolaccelerate504control::set_ad_torque_control(
    long long ad_torque_control) {
  ad_torque_control_ = ad_torque_control;
  return this;
 }

// config detail: {'bit': 40, 'description': 'throttle0~100%,torque0~20N.m', 'is_signed_var': False, 'len': 8, 'name': 'AD_Torque_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
void Adcontrolaccelerate504control::set_p_ad_torque_control(uint8_t* data,
    long long ad_torque_control) {
  ad_torque_control = ProtocolData::BoundedValue((long long)0, (long long)100, ad_torque_control);
  long long x = ad_torque_control;

  Byte to_set(data + 5);
  to_set.set_value(x, 0, 8);
}


Adcontrolaccelerate504control* Adcontrolaccelerate504control::set_ad_speed_control(
    double ad_speed_control) {
  ad_speed_control_ = ad_speed_control;
  return this;
 }

// config detail: {'bit': 48, 'description': 'speed', 'is_signed_var': False, 'len': 16, 'name': 'AD_Speed_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|80]', 'physical_unit': 'km/h', 'precision': 0.1, 'type': 'double'}
void Adcontrolaccelerate504control::set_p_ad_speed_control(uint8_t* data,
    double ad_speed_control) {
  ad_speed_control = ProtocolData::BoundedValue((double)0.0, (double)80.0, ad_speed_control);
  long long x = ad_speed_control / 0.100000;
  uint8_t t = 0;

  t = x & 0xFF;
  Byte to_set0(data + 6);
  to_set0.set_value(t, 0, 8);
  x >>= 8;

  t = x & 0xFF;
  Byte to_set1(data + 7);
  to_set1.set_value(t, 0, 8);
}


Adcontrolaccelerate504control* Adcontrolaccelerate504control::set_ad_acc_de(
    double ad_acc_de) {
  ad_acc_de_ = ad_acc_de;
  return this;
 }

// config detail: {'bit': 32, 'description': 'AD -5~5m/ss', 'is_signed_var': False, 'len': 8, 'name': 'AD_Acc_De', 'offset': -5.0, 'order': 'intel', 'physical_range': '[-5|5]', 'physical_unit': 'm/ss', 'precision': 0.1, 'type': 'double'}
void Adcontrolaccelerate504control::set_p_ad_acc_de(uint8_t* data,
    double ad_acc_de) {
  ad_acc_de = ProtocolData::BoundedValue((double)-5.0, (double)5.0, ad_acc_de);
  long long x = (ad_acc_de - -5.000000) / 0.100000;

  Byte to_set(data + 4);
  to_set.set_value(x, 0, 8);
}


Adcontrolaccelerate504control* Adcontrolaccelerate504control::set_ad_accelerate_msgcntr(
    long long ad_accelerate_msgcntr) {
  ad_accelerate_msgcntr_ = ad_accelerate_msgcntr;
  return this;
 }

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Accelerate_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
void Adcontrolaccelerate504control::set_p_ad_accelerate_msgcntr(uint8_t* data,
    long long ad_accelerate_msgcntr) {
  ad_accelerate_msgcntr = ProtocolData::BoundedValue((long long)0, (long long)15, ad_accelerate_msgcntr);
  long long x = ad_accelerate_msgcntr;

  Byte to_set(data + 0);
  to_set.set_value(x, 4, 4);
}

}  // namespace patrol
}  // namespace drivers
}  // namespace legion

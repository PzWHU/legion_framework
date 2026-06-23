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

class Adcontrolaccelerate504control : public ::legion::driver::drivers::ProtocolData<::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;

  Adcontrolaccelerate504control();

  uint32_t GetPeriod() const override;

  bool GetCycleType() const override;

  uint32_t GetSendCount() const override;

  void UpdateData(uint8_t* data) override;

  void Reset() override;

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Accelerate_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  Adcontrolaccelerate504control* set_ad_accelerate_msgcntr(long long ad_accelerate_msgcntr);

  // config detail: {'bit': 32, 'description': 'AD -5~5m/ss', 'is_signed_var': False, 'len': 8, 'name': 'AD_Acc_De', 'offset': -5.0, 'order': 'intel', 'physical_range': '[-5|5]', 'physical_unit': 'm/ss', 'precision': 0.1, 'type': 'double'}
  Adcontrolaccelerate504control* set_ad_acc_de(double ad_acc_de);

  // config detail: {'bit': 48, 'description': 'speed', 'is_signed_var': False, 'len': 16, 'name': 'AD_Speed_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|80]', 'physical_unit': 'km/h', 'precision': 0.1, 'type': 'double'}
  Adcontrolaccelerate504control* set_ad_speed_control(double ad_speed_control);

  // config detail: {'bit': 40, 'description': 'throttle0~100%,torque0~20N.m', 'is_signed_var': False, 'len': 8, 'name': 'AD_Torque_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
  Adcontrolaccelerate504control* set_ad_torque_control(long long ad_torque_control);

  // config detail: {'bit': 24, 'description': '0:P,1:D,2:N,3:R', 'enum': {0: 'AD_ACCELERATE_GEAR_P', 1: 'AD_ACCELERATE_GEAR_D', 2: 'AD_ACCELERATE_GEAR_N', 3: 'AD_ACCELERATE_GEAR_R'}, 'is_signed_var': False, 'len': 8, 'name': 'AD_Accelerate_Gear', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolaccelerate504control* set_ad_accelerate_gear(Ad_control_accelerate_504_control::Ad_accelerate_gearType ad_accelerate_gear);

  // config detail: {'bit': 16, 'description': '0torque,1speed', 'enum': {0: 'AD_ACCELERATE_WORK_MODE_TORQUE_CONTROL', 1: 'AD_ACCELERATE_WORK_MODE_SPEED_CONTROL', 2: 'AD_ACCELERATE_WORK_MODE_ACC_CONTROL'}, 'is_signed_var': False, 'len': 8, 'name': 'AD_Accelerate_Work_Mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolaccelerate504control* set_ad_accelerate_work_mode(Ad_control_accelerate_504_control::Ad_accelerate_work_modeType ad_accelerate_work_mode);

  // config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_ACCELERATE_VALID_INVALID', 1: 'AD_ACCELERATE_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_Accelerate_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolaccelerate504control* set_ad_accelerate_valid(Ad_control_accelerate_504_control::Ad_accelerate_validType ad_accelerate_valid);

 private:

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Accelerate_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  void set_p_ad_accelerate_msgcntr(uint8_t* data, long long ad_accelerate_msgcntr);

  // config detail: {'bit': 32, 'description': 'AD -5~5m/ss', 'is_signed_var': False, 'len': 8, 'name': 'AD_Acc_De', 'offset': -5.0, 'order': 'intel', 'physical_range': '[-5|5]', 'physical_unit': 'm/ss', 'precision': 0.1, 'type': 'double'}
  void set_p_ad_acc_de(uint8_t* data, double ad_acc_de);

  // config detail: {'bit': 48, 'description': 'speed', 'is_signed_var': False, 'len': 16, 'name': 'AD_Speed_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|80]', 'physical_unit': 'km/h', 'precision': 0.1, 'type': 'double'}
  void set_p_ad_speed_control(uint8_t* data, double ad_speed_control);

  // config detail: {'bit': 40, 'description': 'throttle0~100%,torque0~20N.m', 'is_signed_var': False, 'len': 8, 'name': 'AD_Torque_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
  void set_p_ad_torque_control(uint8_t* data, long long ad_torque_control);

  // config detail: {'bit': 24, 'description': '0:P,1:D,2:N,3:R', 'enum': {0: 'AD_ACCELERATE_GEAR_P', 1: 'AD_ACCELERATE_GEAR_D', 2: 'AD_ACCELERATE_GEAR_N', 3: 'AD_ACCELERATE_GEAR_R'}, 'is_signed_var': False, 'len': 8, 'name': 'AD_Accelerate_Gear', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_accelerate_gear(uint8_t* data, Ad_control_accelerate_504_control::Ad_accelerate_gearType ad_accelerate_gear);

  // config detail: {'bit': 16, 'description': '0torque,1speed', 'enum': {0: 'AD_ACCELERATE_WORK_MODE_TORQUE_CONTROL', 1: 'AD_ACCELERATE_WORK_MODE_SPEED_CONTROL', 2: 'AD_ACCELERATE_WORK_MODE_ACC_CONTROL'}, 'is_signed_var': False, 'len': 8, 'name': 'AD_Accelerate_Work_Mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_accelerate_work_mode(uint8_t* data, Ad_control_accelerate_504_control::Ad_accelerate_work_modeType ad_accelerate_work_mode);

  // config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_ACCELERATE_VALID_INVALID', 1: 'AD_ACCELERATE_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_Accelerate_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_accelerate_valid(uint8_t* data, Ad_control_accelerate_504_control::Ad_accelerate_validType ad_accelerate_valid);

 private:
  long long ad_accelerate_msgcntr_;
  double ad_acc_de_;
  double ad_speed_control_;
  long long ad_torque_control_;
  Ad_control_accelerate_504_control::Ad_accelerate_gearType ad_accelerate_gear_;
  Ad_control_accelerate_504_control::Ad_accelerate_work_modeType ad_accelerate_work_mode_;
  Ad_control_accelerate_504_control::Ad_accelerate_validType ad_accelerate_valid_;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



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

class Adcontrolsteering502control : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;

  Adcontrolsteering502control();

  uint32_t GetPeriod() const override;

  bool GetCycleType() const override;

  uint32_t GetSendCount() const override;

  void UpdateData(uint8_t* data) override;

  void Reset() override;

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Steering_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  Adcontrolsteering502control* set_ad_steering_msgcntr(long long ad_steering_msgcntr);

  // config detail: {'bit': 32, 'description': 'AD,(-30~30) ', 'is_signed_var': False, 'len': 16, 'name': 'AD_Steering_Angle_Cmd', 'offset': -30.0, 'order': 'intel', 'physical_range': '[-30|30]', 'physical_unit': 'deg', 'precision': 0.1, 'type': 'double'}
  Adcontrolsteering502control* set_ad_steering_angle_cmd(double ad_steering_angle_cmd);

  // config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_STEERING_VALID_INVALID', 1: 'AD_STEERING_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_Steering_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolsteering502control* set_ad_steering_valid(Ad_control_steering_502_control::Ad_steering_validType ad_steering_valid);

 private:

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Steering_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  void set_p_ad_steering_msgcntr(uint8_t* data, long long ad_steering_msgcntr);

  // config detail: {'bit': 32, 'description': 'AD,(-30~30) ', 'is_signed_var': False, 'len': 16, 'name': 'AD_Steering_Angle_Cmd', 'offset': -30.0, 'order': 'intel', 'physical_range': '[-30|30]', 'physical_unit': 'deg', 'precision': 0.1, 'type': 'double'}
  void set_p_ad_steering_angle_cmd(uint8_t* data, double ad_steering_angle_cmd);

  // config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_STEERING_VALID_INVALID', 1: 'AD_STEERING_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_Steering_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_steering_valid(uint8_t* data, Ad_control_steering_502_control::Ad_steering_validType ad_steering_valid);

 private:
  long long ad_steering_msgcntr_;
  double ad_steering_angle_cmd_;
  Ad_control_steering_502_control::Ad_steering_validType ad_steering_valid_;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



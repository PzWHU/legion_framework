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

class Adcontrolflag501control : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;

  Adcontrolflag501control();

  uint32_t GetPeriod() const override;

  bool GetCycleType() const override;

  uint32_t GetSendCount() const override;

  void UpdateData(uint8_t* data) override;

  void Reset() override;

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Flag_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  Adcontrolflag501control* set_ad_flag_msgcntr(long long ad_flag_msgcntr);

  // config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_CONTROL_REQUEST_FLAG_INVALUE', 1: 'AD_CONTROL_REQUEST_FLAG_VALUE'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_Control_Request_Flag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Adcontrolflag501control* set_ad_control_request_flag(Ad_control_flag_501_control::Ad_control_request_flagType ad_control_request_flag);

 private:

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'AD_Flag_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  void set_p_ad_flag_msgcntr(uint8_t* data, long long ad_flag_msgcntr);

  // config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'AD_CONTROL_REQUEST_FLAG_INVALUE', 1: 'AD_CONTROL_REQUEST_FLAG_VALUE'}, 'is_signed_var': False, 'len': 4, 'name': 'AD_Control_Request_Flag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  void set_p_ad_control_request_flag(uint8_t* data, Ad_control_flag_501_control::Ad_control_request_flagType ad_control_request_flag);

 private:
  long long ad_flag_msgcntr_;
  Ad_control_flag_501_control::Ad_control_request_flagType ad_control_request_flag_;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



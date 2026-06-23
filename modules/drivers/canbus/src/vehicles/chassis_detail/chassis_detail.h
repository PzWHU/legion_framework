#ifndef CHASSIS_DETAIL_H_
#define CHASSIS_DETAIL_H_
#include <stdint.h>
namespace legion{
namespace drivers{

class Mcu_torque_feedback_10_report {
public:
// Report Message
int64_t timestamp_;
  // [N/A] [0|255]
long long mcu_errorcode_;
  // [degree] [-50|205]
long long mcu_motortemp_;
  // [A] [0|1000]
long long mcu_current_;
  // [Nm] [-1000|5553.5]
double mcu_torque_;
  // [rpm] [-100000|162143]
long long mcu_speed_;
  // [N/A] [0|3]
long long mcu_shift_;
};

class Remotet10_control_io_10a_report {
public:
// Report Message
int64_t timestamp_;
  // [] [0|2]
long long remote_f_horn_;
  // [N/A] [0|2]
long long remote_d_headlight_;
  // [N/A] [0|2]
long long remote_b_motor_holding_brake_;
  // [N/A] [0|2]
long long remote_a_mode_switch_;
  // [N/A] [0|2]
long long remote_c_speed_torque_;
  // [N/A] [0|2]
long long remote_e_gear_;
};

class Remotet10_control_shake_2_10b_report {
public:
// Report Message
int64_t timestamp_;
  // [N/A] [-450|450]
long long remote_y1_longitudinal_control_;
  // [N/A] [-450|450]
long long remote_x2_lateral_control_;
};

class Dbs_status_142_report {
public:
// Report Message
int64_t timestamp_;
  // Estop [] [0|1]
bool dbs_estopflag_;
  // Accelerator pedal Insert flag bit:0: The pedal is not inserted;1: The pedal is inserted [] [0|1]
bool dbs_pedaiflag_;
  // current [] [-20|107.5]
double dbs_ref_iq_;
  // [] [0|2]
long long dbs_work_mode_;
  // Brake pressure request response, DBS execution completed response is valid 0x0:Not ACK 0x1: ACK [] [0|1]
long long brakepressurereqack_;
  // [] [0|15]
long long dbs_rollingcounter_;
  // Parking time warning signal [] [0|1]
long long dbs_park_warning_;
  // Accelerator pedal(0%~100%) [%] [0|100]
long long dbs_peadalopening_;
  // Checksum [] [0|255]
long long dbs_checksum_;
  // Front brake system pressure feedback [Mpa] [0|8]
double dbs_hp_pressure_;
  // 0:System No Fault 1:System Waring;2:System Fault [N/A] [0|3]
long long dbs_system_status_;
};

class Dbs_status2_143_report {
public:
// Report Message
int64_t timestamp_;
  // Checksum [] [0|255]
long long dbs_checksum_;
  // [] [0|15]
long long dbs_rollingcounter_;
  // [] [0|16777215]
long long dbs_waringcode_;
  // fault type [] [0|16777215]
long long dbs_faultcode_;
};

class Vcu_dbs_request_154_report {
public:
// Report Message
int64_t timestamp_;
  // ABS working flag bit0: off; 1: on [] [0|1]
long long vcu_abs_active_;
  // VCU brake request Enable bit 0: power assist mode; 1 On-line mode [] [0|1]
long long vcu_dbs_request_flag_;
  // Sending target pressure [Mpa] [0|8]
double vcu_dbs_pressure_request_;
  // Exhaust mode (0: wire mode, 1: exhaust mode) [] [0|0]
long long vcu_dbs_work_mode_;
};

class Vcu_mcu_request_160_report {
public:
// Report Message
int64_t timestamp_;
  // [] [0|1]
bool mcu_clamping_brake_req_;
  // [RPM] [-7000|7000]
long long mcu_speed_req_;
  // [Nm] [-1000|1000]
double mcu_torque_req_;
  // [] [0|3]
long long mcu_drivemode_;
  // [] [0|1]
bool mcu_vcu_motor_request_valid_;
};

class Eps_status_18f_report {
public:
// Report Message
int64_t timestamp_;
  // [] [-720|720]
long long eps_strangle_act_;
  // [degree] [-128|127]
long long eps_temperature_;
  // (mA) [mA] [-32768|32767]
long long eps_motor_current_;
  // [] [0|1]
bool eps_fault_;
  // [] [0|1]
bool eps_calibration_status_;
  // [N/A] [0|1]
bool eps_work_mode_;
};

class Vcu_vehicle_diagnosis_301_report {
public:
// Report Message
int64_t timestamp_;
  // battery voltage [V] [0|90]
double vehicle_voltage_;
  // [] [0|1]
bool light_states_brake_;
  // [N/A] [0|1]
bool eps_state_;
  // 0normal,1abnormal [N/A] [0|1]
bool oil_pot_state_;
  // T(0-15) [] [0|15]
long long vehicle_diagnosis_msgcntr_;
  // [] [0|1]
bool horn_state_;
  // [] [0|1]
bool headlight_state_;
  // 0off    1on [] [0|1]
bool right_turn_light_state_;
  // [] [0|1]
bool left_turn_light_state_;
  // [] [0|1]
bool r_touch_switch_state_;
  // [] [0|1]
bool f_touch_switch_state_;
  // 0normal,1faulty [] [0|1]
bool bms_state_;
  // [] [0|1]
bool emergency_button_state_;
  // 0 indicates parallel driving, 1 indicates not parallel driving [N/A] [0|1]
bool parallel_state_;
  // [N/A] [0|1]
bool dbs_state_;
  // 0recieve,1norecieve [N/A] [0|1]
bool ad_state_;
  // [N/A] [0|1]
bool remote_state_;
  // [N/A] [0|1]
bool motor_state_;
};

class Vcu_vehicle_status_1_303_report {
public:
// Report Message
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long vehicle_status_msgcntr_;
  // [] [0|15]
long long drive_mode_state_;
  // Vehicle remaining power(%) [%] [0|100]
long long vehicle_soc_;
  // VCU speed request(km/h) [km/h] [-80|80]
double vcu_speed_req_;
  // Locked status:0off,1on [] [0|1]
bool clamping_brake_status_;
  // gear status:0:P,1:D,2:N,3:R [N/A] [0|3]
long long vehicle_gear_;
};

class Vcu_vehicle_status_2_304_report {
public:
// Report Message
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long vehicle_status_2_msgcntr_;
  // wheel angle [deg] [-35|67.3]
double vehicle_steering_angle_;
  // Vehicle brake line pressure [Mpa] [0|8]
double vehicle_brake_pressure_;
  // speed(km/h) [km/h] [-80|80]
double vehicle_speed_;
};

class Vcu_eps_control_request_314_report {
public:
// Report Message
int64_t timestamp_;
  // steering angle [deg] [-720|720]
long long vcu_eps_strangle_req_;
  // EPS enabled,1on,0off [N/A] [0|1]
bool vcu_eps_ctrlenable_;
  // Calibrate the control bit, 0 is invalid, 1 sets the current position to the median [N/A] [0|1]
bool vcu_eps_calibration_req_;
};

class Ad_control_flag_501_control {
public:
// Control Message
  enum Ad_control_request_flagType {
    AD_CONTROL_REQUEST_FLAG_INVALUE = 0,
    AD_CONTROL_REQUEST_FLAG_VALUE = 1,
  };
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long ad_flag_msgcntr_;
  // 0invalid,1valid [N/A] [0|15]
Ad_control_request_flagType ad_control_request_flag_;
};

class Ad_control_steering_502_control {
public:
// Control Message
  enum Ad_steering_validType {
    AD_STEERING_VALID_INVALID = 0,
    AD_STEERING_VALID_VALID = 1,
  };
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long ad_steering_msgcntr_;
  // AD,(-30~30)  [deg] [-30|30]
double ad_steering_angle_cmd_;
  // 0invalid,1valid [N/A] [0|15]
Ad_steering_validType ad_steering_valid_;
};

class Ad_control_brake_503_control {
public:
// Control Message
  enum Ad_dbs_validType {
    AD_DBS_VALID_INVALID = 0,
    AD_DBS_VALID_VALID = 1,
  };
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long ad_dbs_msgcntr_;
  // (0~100%)0-8Mpa [%] [0|100]
long long ad_brakepressure_cmd_;
  // 0invalid,1valid [N/A] [0|1]
Ad_dbs_validType ad_dbs_valid_;
};

class Ad_control_accelerate_504_control {
public:
// Control Message
  enum Ad_accelerate_gearType {
    AD_ACCELERATE_GEAR_P = 0,
    AD_ACCELERATE_GEAR_D = 1,
    AD_ACCELERATE_GEAR_N = 2,
    AD_ACCELERATE_GEAR_R = 3,
  };
  enum Ad_accelerate_work_modeType {
    AD_ACCELERATE_WORK_MODE_TORQUE_CONTROL = 0,
    AD_ACCELERATE_WORK_MODE_SPEED_CONTROL = 1,
    AD_ACCELERATE_WORK_MODE_ACC_CONTROL = 2,
  };
  enum Ad_accelerate_validType {
    AD_ACCELERATE_VALID_INVALID = 0,
    AD_ACCELERATE_VALID_VALID = 1,
  };
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long ad_accelerate_msgcntr_;
  // AD -5~5m/ss [m/ss] [-5|5]
double ad_acc_de_;
  // speed [km/h] [0|80]
double ad_speed_control_;
  // throttle0~100%,torque0~20N.m [%] [0|100]
long long ad_torque_control_;
  // 0:P,1:D,2:N,3:R [N/A] [0|3]
Ad_accelerate_gearType ad_accelerate_gear_;
  // 0torque,1speed [N/A] [0|2]
Ad_accelerate_work_modeType ad_accelerate_work_mode_;
  // 0invalid,1valid [N/A] [0|1]
Ad_accelerate_validType ad_accelerate_valid_;
};

class Ad_control_body_506_control {
public:
// Control Message
  enum Ad_brake_lightType {
    AD_BRAKE_LIGHT_TURN_OFF = 0,
    AD_BRAKE_LIGHT_TURN_ON = 1,
  };
  enum Ad_horn_controlType {
    AD_HORN_CONTROL_TURN_OFF = 0,
    AD_HORN_CONTROL_TURN_ON = 1,
  };
  enum Ad_headlightType {
    AD_HEADLIGHT_TURN_OFF = 0,
    AD_HEADLIGHT_TURN_ON = 1,
  };
  enum Ad_right_turn_lightType {
    AD_RIGHT_TURN_LIGHT_TURN_OFF = 0,
    AD_RIGHT_TURN_LIGHT_TURN_ON = 1,
  };
  enum Ad_left_turn_lightType {
    AD_LEFT_TURN_LIGHT_TURN_OFF = 0,
    AD_LEFT_TURN_LIGHT_TURN_ON = 1,
  };
int64_t timestamp_;
  // 0on,1off [N/A] [0|1]
Ad_brake_lightType ad_brake_light_;
  // T(0-15) [] [0|15]
long long ad_body_msgcntr_;
  // 0off,1on [N/A] [0|1]
Ad_horn_controlType ad_horn_control_;
  // 0off,1on [N/A] [0|1]
Ad_headlightType ad_headlight_;
  // 0off,1on [N/A] [0|1]
Ad_right_turn_lightType ad_right_turn_light_;
  // 0off,1on [N/A] [0|1]
Ad_left_turn_lightType ad_left_turn_light_;
};

class Parallel_control_flag_511_report {
public:
// Report Message
  enum Parallel_control_request_flagType {
    PARALLEL_CONTROL_REQUEST_FLAG_INVALUE = 0,
    PARALLEL_CONTROL_REQUEST_FLAG_VALUE = 1,
  };
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long parallel_flag_msgcntr_;
  // 0:invalid,1:valid. [N/A] [0|1]
Parallel_control_request_flagType parallel_control_request_flag_;
};

class Parallel_control_steering_512_report {
public:
// Report Message
  enum Parallel_steering_validType {
    PARALLEL_STEERING_VALID_INVALID = 0,
    PARALLEL_STEERING_VALID_VALID = 1,
  };
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long parallel_steering_msgcntr_;
  // [N/A] [0|1]
Parallel_steering_validType parallel_steering_valid_;
  // (-30~30)degree [deg] [-30|30]
double parallel_steering_angle_cmd_;
};

class Parallel_control_brake_513_report {
public:
// Report Message
  enum Parallel_dbs_validType {
    PARALLEL_DBS_VALID_INVALID = 0,
    PARALLEL_DBS_VALID_VALID = 1,
  };
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long parallel_dbs_msgcntr_;
  // brake pedal(0~100%) [%] [0|100]
long long parallel_brakepressure_cmd_;
  // 0invalid,1valid [] [0|15]
Parallel_dbs_validType parallel_dbs_valid_;
};

class Parallel_control_accelerate_514_report {
public:
// Report Message
  enum Parallel_accelerate_gearType {
    PARALLEL_ACCELERATE_GEAR_P = 0,
    PARALLEL_ACCELERATE_GEAR_D = 1,
    PARALLEL_ACCELERATE_GEAR_N = 2,
    PARALLEL_ACCELERATE_GEAR_R = 3,
  };
  enum Parallel_accelerate_work_modeType {
    PARALLEL_ACCELERATE_WORK_MODE_TORQUE_CONTROL = 0,
    PARALLEL_ACCELERATE_WORK_MODE_SPEED_CONTROL = 1,
    PARALLEL_ACCELERATE_WORK_MODE_ACC_CONTROL = 2,
  };
  enum Parallel_accelerate_validType {
    PARALLEL_ACCELERATE_VALID_INVALID = 0,
    PARALLEL_ACCELERATE_VALID_VALID = 1,
  };
int64_t timestamp_;
  // T(0-15) [] [0|15]
long long parallel_accelerate_msgcntr_;
  // Parallel driving -5~5m/ss acceleration request [m/ss] [-5|5]
double parallel_acc_de_;
  // speedCtl(km/h) [km/h] [0|20]
double parallel_driving_speed_control_;
  // throttleCtl(0~100%) [%] [0|100]
long long parallel_driving_torque_control_;
  // 0:P,1:D,2:N,3:R [] [0|3]
Parallel_accelerate_gearType parallel_accelerate_gear_;
  // 0: torque control, 1:speed control, 2 acc control [] [0|2]
Parallel_accelerate_work_modeType parallel_accelerate_work_mode_;
  // 0invalid,1valid [] [0|15]
Parallel_accelerate_validType parallel_accelerate_valid_;
};

class Parallel_control_body_516_report {
public:
// Report Message
  enum Parallel_brakelight_switchType {
    PARALLEL_BRAKELIGHT_SWITCH_TURN_OFF = 0,
    PARALLEL_BRAKELIGHT_SWITCH_TURN_ON = 1,
  };
  enum Parallel_hom_switchType {
    PARALLEL_HOM_SWITCH_TURN_OFF = 0,
    PARALLEL_HOM_SWITCH_TURN_ON = 1,
  };
  enum Parallel_headlight_switchType {
    PARALLEL_HEADLIGHT_SWITCH_TURN_OFF = 0,
    PARALLEL_HEADLIGHT_SWITCH_TURN_ON = 1,
  };
  enum Parallel_right_light_switchType {
    PARALLEL_RIGHT_LIGHT_SWITCH_TURN_OFF = 0,
    PARALLEL_RIGHT_LIGHT_SWITCH_TURN_ON = 1,
  };
  enum Parallel_left_light_switchType {
    PARALLEL_LEFT_LIGHT_SWITCH_TURN_OFF = 0,
    PARALLEL_LEFT_LIGHT_SWITCH_TURN_ON = 1,
  };
int64_t timestamp_;
  // 0off,1on [N/A] [0|1]
Parallel_brakelight_switchType parallel_brakelight_switch_;
  // T(0-15) [] [0|15]
long long parallel_body_msgcntr_;
  // 0off,1on [N/A] [0|1]
Parallel_hom_switchType parallel_hom_switch_;
  // 0off,1on [N/A] [0|1]
Parallel_headlight_switchType parallel_headlight_switch_;
  // 0off,1on [N/A] [0|1]
Parallel_right_light_switchType parallel_right_light_switch_;
  // 0off,1on [N/A] [0|1]
Parallel_left_light_switchType parallel_left_light_switch_;
};

class Mcu_drive_motor_feedback_msg_60_report {
public:
// Report Message
int64_t timestamp_;
  // Locked status:0off,1on [N/A] [0|1]
bool clamping_brake_status_;
  // [N/A] [0|3]
long long mcu_motor_error_grade_;
  // [degree] [-50|205]
long long motor_controltemp_;
  // [A] [-1000|5553.5]
double motor_idc_;
  // [V] [0|6553.5]
double motor_udc_;
};

class Vcu_icm_req_612_report {
public:
// Report Message
int64_t timestamp_;
  // ICM Req5 [] [-2147483648|2147483647]
long long vcu_icm_req_msg5_;
  // ICM_Req4 [] [0|255]
long long vcu_icm_req_msg4_;
  // ICM_Req3 [] [0|255]
long long vcu_icm_req_msg3_;
  // ICM_Req2 [] [0|255]
long long vcu_icm_req_msg2_;
  // ICM_Req1 [] [0|255]
long long vcu_icm_req_msg1_;
};

class Vcu_meter_req_712_report {
public:
// Report Message
int64_t timestamp_;
  // VCU meter request voltage [] [0|1023]
long long vcu_meter_req_voltage_;
  // VCU request SOC [] [0|255]
long long vcu_meter_req_soc_;
  // 0:Not Ready 1:Ready [] [0|1]
bool vcu_meter_req_ready_;
  // VCU request odometer [km] [0|1048575]
long long vcu_meter_req_mileage_;
  // VCU request fault [] [0|1023]
long long vcu_meter_req_errorcode_;
  // VCU request current [] [-500|500]
long long vcu_meter_req_current_;
  // 0:no charge;1:charging [] [0|1]
bool vcu_meter_req_charge_state_;
};

class Bms_system_info_a0_report {
public:
// Report Message
int64_t timestamp_;
  // BMS system status.0x0:Normal;0x1:Level 1 Fault;0x2:Level 2 Fault;0x3:Level 3 Fault [bit] [0|3]
long long bms_sys_status_;
  // Capacity of the powertrain battery.0x0:No power;0x64:Full charge;0xFB-0xFF: Invalid [%] [0|100]
long long bms_sys_soc_;
  // BMS Precharge Signal Status.0x0:init;0x1:Precharging;0x2:Precharge success;0x3:Precharge failure [bit] [0|3]
long long bms_precharge_signal_status_;
  // BMS charge status.0x0:Uncharge;0x1:AC slow charging;0x2-0x3:Not Used [bit] [0|3]
long long bms_charge_status_;
  // Output voltage of the powertrain battery:0x0-0x1388:output voltage;0x1389-0xFFFF:Invalid [V] [0|500]
double bms_battery_out_voltage_;
  // Output current of the powertrain battery:0x0-0x1770: Output current (negative value for charge, positive value for discharge);0x1771-0xFFFF:Invalid [A] [-300|300]
double bms_battery_out_current_;
  // Max Temperature of the powertrain battery:0x0-0xC8:temperature;0xC8-FF:invalid [degree] [-100|100]
long long bms_battery_max_temperature_;
};

class Bms_max_min_cell_voltage_a1_report {
public:
// Report Message
int64_t timestamp_;
  // Number of min cell voltage [] [0|255]
long long bms_min_cell_voltage_num_;
  // Number of max cell voltage [] [0|255]
long long bms_max_cell_voltage_num_;
  // Min Cell voltage:0x0-0x64:output voltage;0x64-0xFF:Invalid [V] [0|25.5]
double bms_min_cell_voltage_;
  // Max Cell  voltage :0x0-0x64:output voltage;0x64-0xFF: Invalid [V] [0|25.5]
double bms_max_cell_voltage_;
};
class ChassisDetail {
public:
Mcu_torque_feedback_10_report mcu_torque_feedback_10_report_; // report message
Remotet10_control_io_10a_report remotet10_control_io_10a_report_; // report message
Remotet10_control_shake_2_10b_report remotet10_control_shake_2_10b_report_; // report message
Dbs_status_142_report dbs_status_142_report_; // report message
Dbs_status2_143_report dbs_status2_143_report_; // report message
Vcu_dbs_request_154_report vcu_dbs_request_154_report_; // report message
Vcu_mcu_request_160_report vcu_mcu_request_160_report_; // report message
Eps_status_18f_report eps_status_18f_report_; // report message
Vcu_vehicle_diagnosis_301_report vcu_vehicle_diagnosis_301_report_; // report message
Vcu_vehicle_status_1_303_report vcu_vehicle_status_1_303_report_; // report message
Vcu_vehicle_status_2_304_report vcu_vehicle_status_2_304_report_; // report message
Vcu_eps_control_request_314_report vcu_eps_control_request_314_report_; // report message
Ad_control_flag_501_control ad_control_flag_501_control_; // control message
Ad_control_steering_502_control ad_control_steering_502_control_; // control message
Ad_control_brake_503_control ad_control_brake_503_control_; // control message
Ad_control_accelerate_504_control ad_control_accelerate_504_control_; // control message
Ad_control_body_506_control ad_control_body_506_control_; // control message
Parallel_control_flag_511_report parallel_control_flag_511_report_; // report message
Parallel_control_steering_512_report parallel_control_steering_512_report_; // report message
Parallel_control_brake_513_report parallel_control_brake_513_report_; // report message
Parallel_control_accelerate_514_report parallel_control_accelerate_514_report_; // report message
Parallel_control_body_516_report parallel_control_body_516_report_; // report message
Mcu_drive_motor_feedback_msg_60_report mcu_drive_motor_feedback_msg_60_report_; // report message
Vcu_icm_req_612_report vcu_icm_req_612_report_; // report message
Vcu_meter_req_712_report vcu_meter_req_712_report_; // report message
Bms_system_info_a0_report bms_system_info_a0_report_; // report message
Bms_max_min_cell_voltage_a1_report bms_max_min_cell_voltage_a1_report_; // report message
};
}
}
#endif

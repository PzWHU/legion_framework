/**
 * @file    lcm_message_manager.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#include "lcm_message_manager.h"
#include "modules/common/macros/macros.h"
#include "modules/common/logging/logging.h"
#include "modules/common/base_message/message.h"
#include "modules/common/math/euler_angles_zxy.h"

#if LCM_ENABLE
/**
 * @namespace legion::legion_bridge
 * @brief legion::legion_bridge
 */

namespace legion {
namespace legion_bridge {
using namespace legion::common;
template <typename T>
void LcmMessageManager<T>::Init(T* t) {
  is_init_ = false;
  instance_ = t;
  auto messages_map = instance_->GetConf()->messages().messages_map();
  lcm_ = std::make_shared<lcm::LCM>(messages_map["LCM"].url());

  if (!lcm_->good()) {
    AERROR << "lcm init error!";
    return;
  }

  lcm_->subscribe("/control/ControlCommand",
                  &LcmMessageManager::HandleControlCommandInputMessage, this);

  lcm_->subscribe("/drivers/canbus/Chassis",
                  &LcmMessageManager::HandleChassisMessage, this);

  lcm_->subscribe("/drivers/canbus/Events",
                  &LcmMessageManager::HandleEventsMessage, this);

  lcm_->subscribe("/drivers/canbus/Vehicle",
                  &LcmMessageManager::HandleVehicleMessage, this);

  //线程执行开始
  handle_message_thread_.reset(new std::thread([this] { Run(); }));
  if (handle_message_thread_ == nullptr) {
    AERROR << "Unable to create handle_message_thread thread.";
    return;
  }
  is_init_ = true;
}

template <typename T>
void LcmMessageManager<T>::PublishRoutingRequest(
    legion::interface::RoutingRequest msg) {
  if (is_init_ == false) return;
  lcm_interface::RoutingRequest routing_request;
  MESSAGE_HEADER_ASSIGN(lcm_interface, routing_request)
  routing_request.request_source = msg.request_source();
  routing_request.request_type = msg.request_type();
  routing_request.num_of_kp = msg.num_of_kp();
  std::vector<lcm_interface::KeyPoint> lcm_key_point_list_vec;
  std::vector<legion::interface::KeyPoint> legion_key_point_list_vec;
  msg.key_point_list(legion_key_point_list_vec);
  for (auto it_key_point_list_vec : legion_key_point_list_vec) {
    lcm_interface::KeyPoint routing_request_key_point;
    routing_request_key_point.id = it_key_point_list_vec.id();
    routing_request_key_point.latitude = it_key_point_list_vec.latitude();
    routing_request_key_point.longitude = it_key_point_list_vec.longitude();
    routing_request_key_point.ele = it_key_point_list_vec.ele();
    routing_request_key_point.heading = it_key_point_list_vec.heading();
    routing_request_key_point.name = it_key_point_list_vec.name();
    lcm_key_point_list_vec.emplace_back(routing_request_key_point);
  }
  routing_request.key_point_list_size = lcm_key_point_list_vec.size();
  routing_request.key_point_list = lcm_key_point_list_vec;

  lcm_->publish("/legion_bridge/RoutingRequest", &routing_request);
}

template <typename T>
void LcmMessageManager<T>::PublishObuCmdMsg(legion::interface::ObuCmdMsg msg) {
  if (is_init_ == false) return;
  lcm_interface::ObuCmdMsg obu_cmd_msg;
  MESSAGE_HEADER_ASSIGN(lcm_interface, obu_cmd_msg)
  obu_cmd_msg.id = msg.id();
  obu_cmd_msg.name = msg.name();
  std::vector<lcm_interface::ObuCmd> lcm_obu_cmd_list_vec;
  std::vector<legion::interface::ObuCmd> legion_obu_cmd_list_vec;
  msg.obu_cmd_list(legion_obu_cmd_list_vec);
  for (auto it_obu_cmd_list_vec : legion_obu_cmd_list_vec) {
    lcm_interface::ObuCmd obu_cmd_msg_obu_cmd;
    obu_cmd_msg_obu_cmd.code = it_obu_cmd_list_vec.code();
    obu_cmd_msg_obu_cmd.val = it_obu_cmd_list_vec.val();
    lcm_obu_cmd_list_vec.emplace_back(obu_cmd_msg_obu_cmd);
  }
  obu_cmd_msg.obu_cmd_list_size = lcm_obu_cmd_list_vec.size();
  obu_cmd_msg.obu_cmd_list = lcm_obu_cmd_list_vec;

  lcm_->publish("/legion_bridge/ObuCmdMsg", &obu_cmd_msg);
}

template <typename T>
void LcmMessageManager<T>::PublishVehicleTask(
    legion::interface::VehicleTask msg) {
  if (is_init_ == false) return;
  lcm_interface::VehicleTask vehicle_task;
  MESSAGE_HEADER_ASSIGN(lcm_interface, vehicle_task)
  vehicle_task.clean_up_ctrl = msg.clean_up_ctrl();
  vehicle_task.watering_ctrl = msg.watering_ctrl();
  vehicle_task.water_add_ctrl = msg.water_add_ctrl();
  vehicle_task.hatch_unlock_ctrl = msg.hatch_unlock_ctrl();
  vehicle_task.decorative_light_ctrl = msg.decorative_light_ctrl();

  lcm_->publish("/legion_bridge/VehicleTask", &vehicle_task);
}

template <typename T>
void LcmMessageManager<T>::PublishControlCommandOutput(
    legion::interface::ControlCommand msg) {
  if (is_init_ == false) return;
  lcm_interface::ControlCommand control_command;
  MESSAGE_HEADER_ASSIGN(lcm_interface, control_command)
  control_command.steer_driving_mode = msg.steer_driving_mode();
  control_command.front_steering_target = msg.front_steering_target();
  control_command.rear_steering_target = msg.rear_steering_target();
  control_command.front_steering_rate = msg.front_steering_rate();
  control_command.rear_steering_rate = msg.rear_steering_rate();
  control_command.accel_driving_mode = msg.accel_driving_mode();
  control_command.accel_value = msg.accel_value();
  control_command.brake_driving_mode = msg.brake_driving_mode();
  control_command.brake_value = msg.brake_value();
  control_command.backup_brake_driving_mode = msg.backup_brake_driving_mode();
  control_command.backup_brake_value = msg.backup_brake_value();
  control_command.epb_driving_mode = msg.epb_driving_mode();
  control_command.epb_level = msg.epb_level();
  control_command.gear_driving_mode = msg.gear_driving_mode();
  control_command.emergency_brake_enable = msg.emergency_brake_enable();
  control_command.gear_location = msg.gear_location();
  control_command.speed = msg.speed();
  control_command.acceleration = msg.acceleration();
  control_command.turn_lamp_ctrl = msg.turn_lamp_ctrl();
  control_command.high_beam_ctrl = msg.high_beam_ctrl();
  control_command.low_beam_ctrl = msg.low_beam_ctrl();
  control_command.horn_ctrl = msg.horn_ctrl();
  control_command.front_wiper_ctrl = msg.front_wiper_ctrl();
  control_command.rear_wiper_ctrl = msg.rear_wiper_ctrl();
  control_command.position_lamp_ctrl = msg.position_lamp_ctrl();
  control_command.front_fog_lamp_ctrl = msg.front_fog_lamp_ctrl();
  control_command.rear_fog_lamp_ctrl = msg.rear_fog_lamp_ctrl();
  control_command.brake_lamp_ctrl = msg.brake_lamp_ctrl();
  control_command.alarm_lamp_ctrl = msg.alarm_lamp_ctrl();
  control_command.lf_door_ctrl = msg.lf_door_ctrl();
  control_command.rf_door_ctrl = msg.rf_door_ctrl();
  control_command.lr_door_ctrl = msg.lr_door_ctrl();
  control_command.rr_door_ctrl = msg.rr_door_ctrl();

  lcm_->publish("/legion_bridge/TeleopControlCommand", &control_command);
}

template <typename T>
void LcmMessageManager<T>::PublishFaults(legion::interface::Faults msg) {
  if (is_init_ == false) return;
  lcm_interface::Faults faults;
  MESSAGE_HEADER_ASSIGN(lcm_interface, faults)
  FAULTS_PARSER(lcm, faults)
  faults.faults_size = faults.faults.size();

  lcm_->publish("/legion_bridge/Faults", &faults);
}

template <typename T>
void LcmMessageManager<T>::HandleControlCommandInputMessage(
    const lcm::ReceiveBuffer* rbuf, const std::string& chan,
    const lcm_interface::ControlCommand* msg) {
  if (is_init_ == false) return;

  legion::interface::ControlCommand control_command;
  MESSAGE_HEADER_PARSER(control_command)
  control_command.set_steer_driving_mode(
      (legion::common::DrivingMode)msg->steer_driving_mode);
  control_command.set_front_steering_target(msg->front_steering_target);
  control_command.set_rear_steering_target(msg->rear_steering_target);
  control_command.set_front_steering_rate(msg->front_steering_rate);
  control_command.set_rear_steering_rate(msg->rear_steering_rate);
  control_command.set_accel_driving_mode(
      (legion::common::DrivingMode)msg->accel_driving_mode);
  control_command.set_accel_value(msg->accel_value);
  control_command.set_brake_driving_mode(
      (legion::common::DrivingMode)msg->brake_driving_mode);
  control_command.set_brake_value(msg->brake_value);
  control_command.set_backup_brake_driving_mode(
      (legion::common::DrivingMode)msg->backup_brake_driving_mode);
  control_command.set_backup_brake_value(msg->backup_brake_value);
  control_command.set_epb_driving_mode(
      (legion::common::DrivingMode)msg->epb_driving_mode);
  control_command.set_epb_level((legion::common::EPBLevel)msg->epb_level);
  control_command.set_gear_driving_mode(
      (legion::common::DrivingMode)msg->gear_driving_mode);
  control_command.set_emergency_brake_enable(msg->emergency_brake_enable);
  control_command.set_gear_location(
      (legion::common::GearPosition)msg->gear_location);
  control_command.set_speed(msg->speed);
  control_command.set_acceleration(msg->acceleration);
  control_command.set_turn_lamp_ctrl(
      (legion::common::TurnSignal)msg->turn_lamp_ctrl);
  control_command.set_high_beam_ctrl(
      (legion::common::SwitchStatus)msg->high_beam_ctrl);
  control_command.set_low_beam_ctrl(
      (legion::common::SwitchStatus)msg->low_beam_ctrl);
  control_command.set_horn_ctrl((legion::common::SwitchStatus)msg->horn_ctrl);
  control_command.set_front_wiper_ctrl(
      (legion::common::SwitchStatus)msg->front_wiper_ctrl);
  control_command.set_rear_wiper_ctrl(
      (legion::common::SwitchStatus)msg->rear_wiper_ctrl);
  control_command.set_position_lamp_ctrl(
      (legion::common::SwitchStatus)msg->position_lamp_ctrl);
  control_command.set_front_fog_lamp_ctrl(
      (legion::common::SwitchStatus)msg->front_fog_lamp_ctrl);
  control_command.set_rear_fog_lamp_ctrl(
      (legion::common::SwitchStatus)msg->rear_fog_lamp_ctrl);
  control_command.set_brake_lamp_ctrl(
      (legion::common::SwitchStatus)msg->brake_lamp_ctrl);
  control_command.set_alarm_lamp_ctrl(
      (legion::common::SwitchStatus)msg->alarm_lamp_ctrl);
  control_command.set_lf_door_ctrl(
      (legion::common::DoorStatus)msg->lf_door_ctrl);
  control_command.set_rf_door_ctrl(
      (legion::common::DoorStatus)msg->rf_door_ctrl);
  control_command.set_lr_door_ctrl(
      (legion::common::DoorStatus)msg->lr_door_ctrl);
  control_command.set_rr_door_ctrl(
      (legion::common::DoorStatus)msg->rr_door_ctrl);

  instance_->HandleControlCommandInput(control_command);
}

template <typename T>
void LcmMessageManager<T>::HandleChassisMessage(
    const lcm::ReceiveBuffer* rbuf, const std::string& chan,
    const lcm_interface::Chassis* msg) {
  if (is_init_ == false) return;

  legion::interface::Chassis chassis;
  MESSAGE_HEADER_PARSER(chassis)
  chassis.set_moving_status((legion::common::MovingStatus)msg->moving_status);
  chassis.set_driving_mode((legion::common::DrivingMode)msg->driving_mode);
  chassis.set_steer_driving_mode(
      (legion::common::DrivingMode)msg->steer_driving_mode);
  chassis.set_steering_status(
      (legion::common::ControlStatus)msg->steering_status);
  chassis.set_front_steering_value(msg->front_steering_value);
  chassis.set_rear_steering_value(msg->rear_steering_value);
  chassis.set_steering_torque_nm(msg->steering_torque_nm);
  chassis.set_front_steering_rate_dps(msg->front_steering_rate_dps);
  chassis.set_rear_steering_rate_dps(msg->rear_steering_rate_dps);
  chassis.set_accel_driving_mode(
      (legion::common::DrivingMode)msg->accel_driving_mode);
  chassis.set_accel_status((legion::common::ControlStatus)msg->accel_status);
  chassis.set_accel_value(msg->accel_value);
  chassis.set_brake_driving_mode(
      (legion::common::DrivingMode)msg->brake_driving_mode);
  chassis.set_brake_status((legion::common::ControlStatus)msg->brake_status);
  chassis.set_brake_value(msg->brake_value);
  chassis.set_backup_brake_driving_mode(
      (legion::common::DrivingMode)msg->backup_brake_driving_mode);
  chassis.set_backup_brake_status(
      (legion::common::ControlStatus)msg->backup_brake_status);
  chassis.set_backup_brake_value(msg->backup_brake_value);
  chassis.set_epb_driving_mode(
      (legion::common::DrivingMode)msg->epb_driving_mode);
  chassis.set_epb_status((legion::common::ControlStatus)msg->epb_status);
  chassis.set_epb_level((legion::common::EPBLevel)msg->epb_level);
  chassis.set_engine_status((legion::common::EngineStauts)msg->engine_status);
  chassis.set_engine_rpm(msg->engine_rpm);
  chassis.set_engine_torque(msg->engine_torque);
  chassis.set_speed_mps(msg->speed_mps);
  chassis.set_odometer_m(msg->odometer_m);
  chassis.set_fuel_range_m(msg->fuel_range_m);
  chassis.set_gear_driving_mode(
      (legion::common::DrivingMode)msg->gear_driving_mode);
  chassis.set_gear_status((legion::common::ControlStatus)msg->gear_status);
  chassis.set_gear_location((legion::common::GearPosition)msg->gear_location);
  chassis.set_driver_seat_belt(
      (legion::common::SwitchStatus)msg->driver_seat_belt);
  chassis.set_high_beam_status(
      (legion::common::SwitchStatus)msg->high_beam_status);
  chassis.set_low_beam_status(
      (legion::common::SwitchStatus)msg->low_beam_status);
  chassis.set_horn_status((legion::common::SwitchStatus)msg->horn_status);
  chassis.set_turn_lamp_status(
      (legion::common::TurnSignal)msg->turn_lamp_status);
  chassis.set_front_wiper_status(
      (legion::common::SwitchStatus)msg->front_wiper_status);
  chassis.set_rear_wiper_status(
      (legion::common::SwitchStatus)msg->rear_wiper_status);
  chassis.set_position_lamp_status(
      (legion::common::SwitchStatus)msg->position_lamp_status);
  chassis.set_front_fog_lamp_status(
      (legion::common::SwitchStatus)msg->front_fog_lamp_status);
  chassis.set_rear_fog_lamp_status(
      (legion::common::SwitchStatus)msg->rear_fog_lamp_status);
  chassis.set_brake_lamp_status(
      (legion::common::SwitchStatus)msg->brake_lamp_status);
  chassis.set_alarm_lamp_status(
      (legion::common::SwitchStatus)msg->alarm_lamp_status);
  chassis.set_lf_door_status((legion::common::DoorStatus)msg->lf_door_status);
  chassis.set_rf_door_status((legion::common::DoorStatus)msg->rf_door_status);
  chassis.set_lr_door_status((legion::common::DoorStatus)msg->lr_door_status);
  chassis.set_rr_door_status((legion::common::DoorStatus)msg->rr_door_status);
  chassis.set_rearview_mirror_status(
      (legion::common::FoldUnfoldStatus)msg->rearview_mirror_status);
  chassis.set_trunk_status((legion::common::DoorStatus)msg->trunk_status);
  chassis.set_engine_bay_door_status(
      (legion::common::DoorStatus)msg->engine_bay_door_status);
  chassis.set_wheel_direction_rr(
      (legion::common::WheelSpeedType)msg->wheel_direction_rr);
  chassis.set_wheel_spd_rr(msg->wheel_spd_rr);
  chassis.set_wheel_direction_rl(
      (legion::common::WheelSpeedType)msg->wheel_direction_rl);
  chassis.set_wheel_spd_rl(msg->wheel_spd_rl);
  chassis.set_wheel_direction_fr(
      (legion::common::WheelSpeedType)msg->wheel_direction_fr);
  chassis.set_wheel_spd_fr(msg->wheel_spd_fr);
  chassis.set_wheel_direction_fl(
      (legion::common::WheelSpeedType)msg->wheel_direction_fl);
  chassis.set_wheel_spd_fl(msg->wheel_spd_fl);
  chassis.set_is_tire_pressure_ok(
      (legion::common::FailureStatus)msg->is_tire_pressure_ok);
  chassis.set_is_tire_pressure_lf_valid(
      (legion::common::IsValid)msg->is_tire_pressure_lf_valid);
  chassis.set_tire_pressure_lf(msg->tire_pressure_lf);
  chassis.set_is_tire_pressure_rf_valid(
      (legion::common::IsValid)msg->is_tire_pressure_rf_valid);
  chassis.set_tire_pressure_rf(msg->tire_pressure_rf);
  chassis.set_is_tire_pressure_lr_valid(
      (legion::common::IsValid)msg->is_tire_pressure_lr_valid);
  chassis.set_tire_pressure_lr(msg->tire_pressure_lr);
  chassis.set_is_tire_pressure_rr_valid(
      (legion::common::IsValid)msg->is_tire_pressure_rr_valid);
  chassis.set_tire_pressure_rr(msg->tire_pressure_rr);
  chassis.set_battery_power_percentage(msg->battery_power_percentage);
  chassis.set_air_bag_status(
      (legion::common::FailureStatus)msg->air_bag_status);
  chassis.set_charging_gun_status(
      (legion::common::PlugStatus)msg->charging_gun_status);
  chassis.set_vehicle_power_status(
      (legion::common::FailureStatus)msg->vehicle_power_status);
  std::vector<legion::interface::Chassis::ErrorCode> chassis_error_code_vec;
  for (auto it_chassis_error_code_vec : msg->chassis_error_code) {
    legion::interface::Chassis::ErrorCode error_code;
    error_code =
        (legion::interface::Chassis::ErrorCode)it_chassis_error_code_vec;
    chassis_error_code_vec.emplace_back(error_code);
  }
  chassis.set_chassis_error_code(&chassis_error_code_vec);

  instance_->HandleChassis(chassis);
}

template <typename T>
void LcmMessageManager<T>::HandleEventsMessage(
    const lcm::ReceiveBuffer* rbuf, const std::string& chan,
    const lcm_interface::Events* msg) {
  if (is_init_ == false) return;

  legion::interface::Events events;

  instance_->HandleEvents(events);
}

template <typename T>
void LcmMessageManager<T>::HandleVehicleMessage(
    const lcm::ReceiveBuffer* rbuf, const std::string& chan,
    const lcm_interface::Vehicle* msg) {
  if (is_init_ == false) return;

  legion::interface::Vehicle vehicle;
  MESSAGE_HEADER_PARSER(vehicle)
  vehicle.set_vehicle_type(
      (legion::interface::Vehicle::VehicleType)msg->vehicle_type);
  vehicle.set_vid(msg->vid);
  vehicle.set_vehicle_num(msg->vehicle_num);
  vehicle.set_oid(msg->oid);
  vehicle.set_operation(
      (legion::interface::Vehicle::OperationStatus)msg->operation);
  vehicle.set_totalcurrent(msg->totalcurrent);
  vehicle.set_batterysoc(msg->batterysoc);
  vehicle.set_totalvoltage(msg->totalvoltage);
  vehicle.set_recharge(msg->recharge);
  vehicle.set_dcdc((legion::common::SwitchStatus)msg->dcdc);
  vehicle.set_resistance(msg->resistance);
  std::vector<uint8_t> seats_vec;
  for (auto it_seats_vec : msg->seats) {
    uint8_t seats_vec_item;
    seats_vec_item = it_seats_vec;
    seats_vec.emplace_back(seats_vec_item);
  }
  vehicle.set_seats(&seats_vec);
  vehicle.set_servicemode(
      (legion::interface::Vehicle::ServicemodeStatus)msg->servicemode);
  std::vector<legion::common::SwitchStatus> seat_belt_vec;
  for (auto it_seat_belt_vec : msg->seat_belt) {
    legion::common::SwitchStatus switch_status;
    switch_status = (legion::common::SwitchStatus)it_seat_belt_vec;
    seat_belt_vec.emplace_back(switch_status);
  }
  vehicle.set_seat_belt(&seat_belt_vec);
  vehicle.set_engine_status((legion::common::EngineStauts)msg->engine_status);
  vehicle.set_battery_voltage(msg->battery_voltage);
  vehicle.set_battery_ammeter(msg->battery_ammeter);
  vehicle.set_battery_consumption(msg->battery_consumption);
  vehicle.set_battery_probe(msg->battery_probe);
  std::vector<double> battery_temperatures_vec;
  for (auto it_battery_temperatures_vec : msg->battery_temperatures) {
    double battery_temperatures_vec_item;
    battery_temperatures_vec_item = it_battery_temperatures_vec;
    battery_temperatures_vec.emplace_back(battery_temperatures_vec_item);
  }
  vehicle.set_battery_temperatures(&battery_temperatures_vec);
  vehicle.set_battery_h_tepemperatures(msg->battery_h_tepemperatures);
  vehicle.set_battery_ltepemperatures(msg->battery_ltepemperatures);
  vehicle.set_battery_probe_code(msg->battery_probe_code);
  vehicle.set_battery_h_concentration(msg->battery_h_concentration);
  vehicle.set_battery_c_sensor_code(msg->battery_c_sensor_code);
  vehicle.set_battery_stress(msg->battery_stress);
  vehicle.set_battery_s_sensor_code(msg->battery_s_sensor_code);
  vehicle.set_battery_h_dc_dc(msg->battery_h_dc_dc);
  vehicle.set_battery_capacity(msg->battery_capacity);
  vehicle.set_airconditioning_idx(msg->airconditioning_idx);
  vehicle.set_airconditioning_status(msg->airconditioning_status);
  vehicle.set_airconditioning_model(
      (legion::interface::Vehicle::AirConditioningModelStatus)
          msg->airconditioning_model);
  vehicle.set_airconditioning_volume(
      (legion::interface::Vehicle::AirConditioningVolumeStatus)
          msg->airconditioning_volume);
  vehicle.set_airconditioning_defrost(
      (legion::common::SwitchStatus)msg->airconditioning_defrost);
  std::vector<legion::common::DoorStatus> door_status_vec;
  for (auto it_door_status_vec : msg->door_status) {
    legion::common::DoorStatus door_status;
    door_status = (legion::common::DoorStatus)it_door_status_vec;
    door_status_vec.emplace_back(door_status);
  }
  vehicle.set_door_status(&door_status_vec);
  vehicle.set_rsrp(msg->rsrp);
  vehicle.set_sinr(msg->sinr);
  vehicle.set_uspeed(msg->uspeed);
  vehicle.set_dspeed(msg->dspeed);
  vehicle.set_loss(msg->loss);
  vehicle.set_delay(msg->delay);
  vehicle.set_refrigeration_idx(msg->refrigeration_idx);
  vehicle.set_refrigeration_status(
      (legion::common::SwitchStatus)msg->refrigeration_status);
  vehicle.set_refrigeration_stemp(msg->refrigeration_stemp);
  vehicle.set_refrigeration_ctemp(msg->refrigeration_ctemp);
  vehicle.set_driving_motor_idx(msg->driving_motor_idx);
  vehicle.set_driving_motor_status(msg->driving_motor_status);
  vehicle.set_driving_motor_ctemp(msg->driving_motor_ctemp);
  vehicle.set_driving_motor_rspeed(msg->driving_motor_rspeed);
  vehicle.set_driving_motor_torque(msg->driving_motor_torque);
  vehicle.set_driving_motor_etemp(msg->driving_motor_etemp);
  vehicle.set_driving_motor_voltage(msg->driving_motor_voltage);
  vehicle.set_driving_motor_ammeter(msg->driving_motor_ammeter);
  vehicle.set_outline_lamp_status(
      (legion::common::SwitchStatus)msg->outline_lamp_status);
  vehicle.set_warning_lamp_status(
      (legion::common::SwitchStatus)msg->warning_lamp_status);
  vehicle.set_backlight_lamp_status(
      (legion::common::SwitchStatus)msg->backlight_lamp_status);
  vehicle.set_brakelamp_lamp_status(
      (legion::common::SwitchStatus)msg->brakelamp_lamp_status);
  vehicle.set_left_lamp_status(
      (legion::common::SwitchStatus)msg->left_lamp_status);
  vehicle.set_right_lamp_status(
      (legion::common::SwitchStatus)msg->right_lamp_status);
  vehicle.set_front_touch_status(
      (legion::common::SwitchStatus)msg->front_touch_status);
  vehicle.set_rear_touch_status(
      (legion::common::SwitchStatus)msg->rear_touch_status);
  vehicle.set_horn_status((legion::common::SwitchStatus)msg->horn_status);
  vehicle.set_length(msg->length);
  vehicle.set_width(msg->width);
  vehicle.set_height(msg->height);
  vehicle.set_cleanup_switch_status(
      (legion::common::SwitchStatus)msg->cleanup_switch_status);
  vehicle.set_watering_switch_status(
      (legion::common::SwitchStatus)msg->watering_switch_status);
  vehicle.set_trash_can_status(
      (legion::interface::Vehicle::TrashCanStatus)msg->trash_can_status);
  vehicle.set_water_tank_status(
      (legion::interface::Vehicle::WaterTankStatus)msg->water_tank_status);
  vehicle.set_water_add_switch_status(
      (legion::common::SwitchStatus)msg->water_add_switch_status);
  vehicle.set_hatch_unlock_switch_status(
      (legion::common::SwitchStatus)msg->hatch_unlock_switch_status);
  vehicle.set_water_tank_level(msg->water_tank_level);
  vehicle.set_hmi_highbeam(
      (legion::interface::Vehicle::HMIHighBeamCmdState)msg->hmi_highbeam);
  vehicle.set_hmi_cleanup(
      (legion::interface::Vehicle::HMICleanUpCmdState)msg->hmi_cleanup);
  vehicle.set_hmi_watering(
      (legion::interface::Vehicle::HMIWateringCmdState)msg->hmi_watering);
  vehicle.set_bms_charge_status(
      (legion::interface::Vehicle::BMSChargeStatus)msg->bms_charge_status);
  vehicle.set_emergency_button_status(
      (legion::common::SwitchStatus)msg->emergency_button_status);
  vehicle.set_traction(
      (legion::interface::Vehicle::EquipmentState)msg->traction);
  vehicle.set_abs((legion::interface::Vehicle::EquipmentState)msg->abs);
  vehicle.set_scs((legion::interface::Vehicle::EquipmentState)msg->scs);
  vehicle.set_brake_boost(
      (legion::interface::Vehicle::EquipmentState)msg->brake_boost);
  vehicle.set_aux_brakes(
      (legion::interface::Vehicle::EquipmentState)msg->aux_brakes);

  instance_->HandleVehicle(vehicle);
}

template <typename T>
void LcmMessageManager<T>::Run() {
  while (0 == lcm_->handle())
    ;
}

template <typename T>
void LcmMessageManager<T>::Stop() {
  if (handle_message_thread_ != nullptr && handle_message_thread_->joinable()) {
    handle_message_thread_->join();
    handle_message_thread_.reset();
    AINFO << "handle_message_thread stopped [ok].";
  }
}
}  // namespace legion_bridge
}  // namespace legion
#endif
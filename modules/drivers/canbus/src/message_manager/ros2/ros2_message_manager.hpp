/**
 * @file    ros_2_message_manager.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#include "ros2_message_manager.h"
#include "modules/common/macros/macros.h"
#include "modules/common/logging/logging.h"

#if ROS2_ENABLE
/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion {
namespace drivers {
using namespace legion::common;

using ::ros2_interface::msg::Chassis;
using ::ros2_interface::msg::ControlCommand;
using ::ros2_interface::msg::Faults;
using ::ros2_interface::msg::Vehicle;
using ::ros2_interface::msg::VehicleTask;
using ::ros2_interface::msg::WheelInfo;

template <typename T>
Ros2MessageManager<T>::Ros2MessageManager() : Node{"drivers"} {}
template <typename T>
void Ros2MessageManager<T>::Init(T* t) {
  is_init_ = false;
  instance_ = t;

  using rclcpp::QoS;
  using SubAllocT =
      rclcpp::SubscriptionOptionsWithAllocator<std::allocator<void>>;
  using PubAllocT = rclcpp::PublisherOptionsWithAllocator<std::allocator<void>>;

  wheel_info_pub_ = create_publisher<::ros2_interface::msg::WheelInfo>(
      "/drivers/canbus/WheelInfo",
      ROS2_QOS_PERIODIC_STATUS());

  chassis_pub_ = create_publisher<::ros2_interface::msg::Chassis>(
      "/drivers/canbus/Chassis",
      ROS2_QOS_PERIODIC_STATUS());

  vehicle_pub_ = create_publisher<::ros2_interface::msg::Vehicle>(
      "/drivers/canbus/Vehicle",
      ROS2_QOS_PERIODIC_STATUS());

  faults_pub_ = create_publisher<::ros2_interface::msg::Faults>(
      "/drivers/canbus/Faults",
      ROS2_QOS_DIAGNOSTIC());

  control_command_sub_ = create_subscription<ControlCommand>(
      "/control/ControlCommand",
      ROS2_QOS_CRITICAL_CMD(),
      [this](const ros2_interface::msg::ControlCommand::SharedPtr msg) {
        Ros2MessageManager::HandleControlCommandMessage(msg);
      },
      SubAllocT{});

  vehicle_task_sub_ = create_subscription<VehicleTask>(
      "/legion_bridge/VehicleTask",
      ROS2_QOS_CRITICAL_CMD(),
      [this](const ros2_interface::msg::VehicleTask::SharedPtr msg) {
        Ros2MessageManager::HandleVehicleTaskMessage(msg);
      },
      SubAllocT{});

  teleop_control_command_sub_ = create_subscription<ControlCommand>(
      "/legion_bridge/TeleopControlCommand",
      ROS2_QOS_CRITICAL_CMD(),
      [this](const ros2_interface::msg::ControlCommand::SharedPtr msg) {
        Ros2MessageManager::HandleTeleopControlCommandMessage(msg);
      },
      SubAllocT{});

  //线程执行开始
  handle_message_thread_.reset(new std::thread([this] { Run(); }));
  if (handle_message_thread_ == nullptr) {
    AERROR << "Unable to create handle_message_thread thread.";
    return;
  }
  is_init_ = true;
}

template <typename T>
void Ros2MessageManager<T>::PublishWheelInfo(legion::interface::WheelInfo msg) {
  if (is_init_ == false) return;
  ::ros2_interface::msg::WheelInfo wheel_info;
  MESSAGE_HEADER_ROS2_ASSIGN(std_msgs::msg, wheel_info)
  wheel_info.moving_status = msg.moving_status();
  wheel_info.steer_driving_mode = msg.steer_driving_mode();
  wheel_info.steering_value = msg.steering_value();
  wheel_info.steering_torque_nm = msg.steering_torque_nm();
  wheel_info.steering_rate_dps = msg.steering_rate_dps();
  wheel_info.speed_mps = msg.speed_mps();
  wheel_info.veh_spd_vld = msg.veh_spd_vld();
  wheel_info.gear = msg.gear();
  wheel_info.gear_vld = msg.gear_vld();
  wheel_info.wheel_direction_rr = msg.wheel_direction_rr();
  wheel_info.wheel_spd_rr = msg.wheel_spd_rr();
  wheel_info.wheel_direction_rl = msg.wheel_direction_rl();
  wheel_info.wheel_spd_rl = msg.wheel_spd_rl();
  wheel_info.wheel_direction_fr = msg.wheel_direction_fr();
  wheel_info.wheel_spd_fr = msg.wheel_spd_fr();
  wheel_info.wheel_direction_fl = msg.wheel_direction_fl();
  wheel_info.wheel_spd_fl = msg.wheel_spd_fl();
  wheel_info.yaw_rate = msg.yaw_rate();
  wheel_info.wss_fl_edges_sum = msg.wss_fl_edges_sum();
  wheel_info.wss_fr_edges_sum = msg.wss_fr_edges_sum();
  wheel_info.wss_rl_edges_sum = msg.wss_rl_edges_sum();
  wheel_info.wss_rr_edges_sum = msg.wss_rr_edges_sum();
  wheel_info.wss_fl_edges_sum_vld = msg.wss_fl_edges_sum_vld();
  wheel_info.wss_fr_edges_sum_vld = msg.wss_fr_edges_sum_vld();
  wheel_info.wss_rl_edges_sum_vld = msg.wss_rl_edges_sum_vld();
  wheel_info.wss_rr_edges_sum_vld = msg.wss_rr_edges_sum_vld();
  wheel_info.veh_lat_accel = msg.veh_lat_accel();
  wheel_info.veh_lgt_accel = msg.veh_lgt_accel();
  wheel_info.veh_lat_accel_vld = msg.veh_lat_accel_vld();
  wheel_info.veh_lgt_accel_vld = msg.veh_lgt_accel_vld();

  wheel_info_pub_->publish(wheel_info);
}

template <typename T>
void Ros2MessageManager<T>::PublishChassis(legion::interface::Chassis msg) {
  if (is_init_ == false) return;
  ::ros2_interface::msg::Chassis chassis;
  MESSAGE_HEADER_ROS2_ASSIGN(std_msgs::msg, chassis)
  chassis.moving_status = msg.moving_status();
  chassis.driving_mode = msg.driving_mode();
  chassis.steer_driving_mode = msg.steer_driving_mode();
  chassis.steering_status = msg.steering_status();
  chassis.front_steering_value = msg.front_steering_value();
  chassis.rear_steering_value = msg.rear_steering_value();
  chassis.steering_torque_nm = msg.steering_torque_nm();
  chassis.front_steering_rate_dps = msg.front_steering_rate_dps();
  chassis.rear_steering_rate_dps = msg.rear_steering_rate_dps();
  chassis.accel_driving_mode = msg.accel_driving_mode();
  chassis.accel_status = msg.accel_status();
  chassis.accel_value = msg.accel_value();
  chassis.brake_driving_mode = msg.brake_driving_mode();
  chassis.brake_status = msg.brake_status();
  chassis.brake_value = msg.brake_value();
  chassis.backup_brake_driving_mode = msg.backup_brake_driving_mode();
  chassis.backup_brake_status = msg.backup_brake_status();
  chassis.backup_brake_value = msg.backup_brake_value();
  chassis.epb_driving_mode = msg.epb_driving_mode();
  chassis.epb_status = msg.epb_status();
  chassis.epb_level = msg.epb_level();
  chassis.engine_status = msg.engine_status();
  chassis.engine_rpm = msg.engine_rpm();
  chassis.engine_torque = msg.engine_torque();
  chassis.speed_mps = msg.speed_mps();
  chassis.odometer_m = msg.odometer_m();
  chassis.fuel_range_m = msg.fuel_range_m();
  chassis.gear_driving_mode = msg.gear_driving_mode();
  chassis.gear_status = msg.gear_status();
  chassis.gear_location = msg.gear_location();
  chassis.driver_seat_belt = msg.driver_seat_belt();
  chassis.high_beam_status = msg.high_beam_status();
  chassis.low_beam_status = msg.low_beam_status();
  chassis.horn_status = msg.horn_status();
  chassis.turn_lamp_status = msg.turn_lamp_status();
  chassis.front_wiper_status = msg.front_wiper_status();
  chassis.rear_wiper_status = msg.rear_wiper_status();
  chassis.position_lamp_status = msg.position_lamp_status();
  chassis.front_fog_lamp_status = msg.front_fog_lamp_status();
  chassis.rear_fog_lamp_status = msg.rear_fog_lamp_status();
  chassis.brake_lamp_status = msg.brake_lamp_status();
  chassis.alarm_lamp_status = msg.alarm_lamp_status();
  chassis.lf_door_status = msg.lf_door_status();
  chassis.rf_door_status = msg.rf_door_status();
  chassis.lr_door_status = msg.lr_door_status();
  chassis.rr_door_status = msg.rr_door_status();
  chassis.rearview_mirror_status = msg.rearview_mirror_status();
  chassis.trunk_status = msg.trunk_status();
  chassis.engine_bay_door_status = msg.engine_bay_door_status();
  chassis.wheel_direction_rr = msg.wheel_direction_rr();
  chassis.wheel_spd_rr = msg.wheel_spd_rr();
  chassis.wheel_direction_rl = msg.wheel_direction_rl();
  chassis.wheel_spd_rl = msg.wheel_spd_rl();
  chassis.wheel_direction_fr = msg.wheel_direction_fr();
  chassis.wheel_spd_fr = msg.wheel_spd_fr();
  chassis.wheel_direction_fl = msg.wheel_direction_fl();
  chassis.wheel_spd_fl = msg.wheel_spd_fl();
  chassis.is_tire_pressure_ok = msg.is_tire_pressure_ok();
  chassis.is_tire_pressure_lf_valid = msg.is_tire_pressure_lf_valid();
  chassis.tire_pressure_lf = msg.tire_pressure_lf();
  chassis.is_tire_pressure_rf_valid = msg.is_tire_pressure_rf_valid();
  chassis.tire_pressure_rf = msg.tire_pressure_rf();
  chassis.is_tire_pressure_lr_valid = msg.is_tire_pressure_lr_valid();
  chassis.tire_pressure_lr = msg.tire_pressure_lr();
  chassis.is_tire_pressure_rr_valid = msg.is_tire_pressure_rr_valid();
  chassis.tire_pressure_rr = msg.tire_pressure_rr();
  chassis.battery_power_percentage = msg.battery_power_percentage();
  chassis.air_bag_status = msg.air_bag_status();
  chassis.charging_gun_status = msg.charging_gun_status();
  chassis.vehicle_power_status = msg.vehicle_power_status();
  std::vector<int32_t> chassis_error_code_vec;
  std::vector<legion::interface::Chassis::ErrorCode>
      legion_chassis_error_code_vec;
  msg.chassis_error_code(legion_chassis_error_code_vec);
  for (auto it_chassis_error_code_vec : legion_chassis_error_code_vec) {
    int32_t error_code_item;
    error_code_item = (int32_t)it_chassis_error_code_vec;
    chassis_error_code_vec.emplace_back(error_code_item);
  }
  chassis.chassis_error_code = chassis_error_code_vec;

  chassis_pub_->publish(chassis);
}

template <typename T>
void Ros2MessageManager<T>::PublishVehicle(legion::interface::Vehicle msg) {
  if (is_init_ == false) return;
  ::ros2_interface::msg::Vehicle vehicle;
  MESSAGE_HEADER_ROS2_ASSIGN(std_msgs::msg, vehicle)
  vehicle.vehicle_type = msg.vehicle_type();
  vehicle.vid = msg.vid();
  vehicle.vehicle_num = msg.vehicle_num();
  vehicle.oid = msg.oid();
  vehicle.operation = msg.operation();
  vehicle.totalcurrent = msg.totalcurrent();
  vehicle.batterysoc = msg.batterysoc();
  vehicle.totalvoltage = msg.totalvoltage();
  vehicle.recharge = msg.recharge();
  vehicle.dcdc = msg.dcdc();
  vehicle.resistance = msg.resistance();
  std::vector<uint8_t> seats;
  msg.seats(seats);
  vehicle.seats = seats;
  vehicle.servicemode = msg.servicemode();
  std::vector<int32_t> seat_belt_vec;
  std::vector<legion::common::SwitchStatus> legion_seat_belt_vec;
  msg.seat_belt(legion_seat_belt_vec);
  for (auto it_seat_belt_vec : legion_seat_belt_vec) {
    int32_t switch_status_item;
    switch_status_item = (int32_t)it_seat_belt_vec;
    seat_belt_vec.emplace_back(switch_status_item);
  }
  vehicle.seat_belt = seat_belt_vec;
  vehicle.engine_status = msg.engine_status();
  vehicle.battery_voltage = msg.battery_voltage();
  vehicle.battery_ammeter = msg.battery_ammeter();
  vehicle.battery_consumption = msg.battery_consumption();
  vehicle.battery_probe = msg.battery_probe();
  std::vector<double> battery_temperatures;
  msg.battery_temperatures(battery_temperatures);
  vehicle.battery_temperatures = battery_temperatures;
  vehicle.battery_h_tepemperatures = msg.battery_h_tepemperatures();
  vehicle.battery_ltepemperatures = msg.battery_ltepemperatures();
  vehicle.battery_probe_code = msg.battery_probe_code();
  vehicle.battery_h_concentration = msg.battery_h_concentration();
  vehicle.battery_c_sensor_code = msg.battery_c_sensor_code();
  vehicle.battery_stress = msg.battery_stress();
  vehicle.battery_s_sensor_code = msg.battery_s_sensor_code();
  vehicle.battery_h_dc_dc = msg.battery_h_dc_dc();
  vehicle.battery_capacity = msg.battery_capacity();
  vehicle.airconditioning_idx = msg.airconditioning_idx();
  vehicle.airconditioning_status = msg.airconditioning_status();
  vehicle.airconditioning_model = msg.airconditioning_model();
  vehicle.airconditioning_volume = msg.airconditioning_volume();
  vehicle.airconditioning_defrost = msg.airconditioning_defrost();
  std::vector<int32_t> door_status_vec;
  std::vector<legion::common::DoorStatus> legion_door_status_vec;
  msg.door_status(legion_door_status_vec);
  for (auto it_door_status_vec : legion_door_status_vec) {
    int32_t door_status_item;
    door_status_item = (int32_t)it_door_status_vec;
    door_status_vec.emplace_back(door_status_item);
  }
  vehicle.door_status = door_status_vec;
  vehicle.rsrp = msg.rsrp();
  vehicle.sinr = msg.sinr();
  vehicle.uspeed = msg.uspeed();
  vehicle.dspeed = msg.dspeed();
  vehicle.loss = msg.loss();
  vehicle.delay = msg.delay();
  vehicle.refrigeration_idx = msg.refrigeration_idx();
  vehicle.refrigeration_status = msg.refrigeration_status();
  vehicle.refrigeration_stemp = msg.refrigeration_stemp();
  vehicle.refrigeration_ctemp = msg.refrigeration_ctemp();
  vehicle.driving_motor_idx = msg.driving_motor_idx();
  vehicle.driving_motor_status = msg.driving_motor_status();
  vehicle.driving_motor_ctemp = msg.driving_motor_ctemp();
  vehicle.driving_motor_rspeed = msg.driving_motor_rspeed();
  vehicle.driving_motor_torque = msg.driving_motor_torque();
  vehicle.driving_motor_etemp = msg.driving_motor_etemp();
  vehicle.driving_motor_voltage = msg.driving_motor_voltage();
  vehicle.driving_motor_ammeter = msg.driving_motor_ammeter();
  vehicle.outline_lamp_status = msg.outline_lamp_status();
  vehicle.warning_lamp_status = msg.warning_lamp_status();
  vehicle.backlight_lamp_status = msg.backlight_lamp_status();
  vehicle.brakelamp_lamp_status = msg.brakelamp_lamp_status();
  vehicle.left_lamp_status = msg.left_lamp_status();
  vehicle.right_lamp_status = msg.right_lamp_status();
  vehicle.front_touch_status = msg.front_touch_status();
  vehicle.rear_touch_status = msg.rear_touch_status();
  vehicle.horn_status = msg.horn_status();
  vehicle.length = msg.length();
  vehicle.width = msg.width();
  vehicle.height = msg.height();
  vehicle.cleanup_switch_status = msg.cleanup_switch_status();
  vehicle.watering_switch_status = msg.watering_switch_status();
  vehicle.trash_can_status = msg.trash_can_status();
  vehicle.water_tank_status = msg.water_tank_status();
  vehicle.water_add_switch_status = msg.water_add_switch_status();
  vehicle.hatch_unlock_switch_status = msg.hatch_unlock_switch_status();
  vehicle.water_tank_level = msg.water_tank_level();
  vehicle.hmi_highbeam = msg.hmi_highbeam();
  vehicle.hmi_cleanup = msg.hmi_cleanup();
  vehicle.hmi_watering = msg.hmi_watering();
  vehicle.bms_charge_status = msg.bms_charge_status();
  vehicle.emergency_button_status = msg.emergency_button_status();
  vehicle.traction = msg.traction();
  vehicle.abs = msg.abs();
  vehicle.scs = msg.scs();
  vehicle.brake_boost = msg.brake_boost();
  vehicle.aux_brakes = msg.aux_brakes();

  vehicle_pub_->publish(vehicle);
}

template <typename T>
void Ros2MessageManager<T>::PublishFaults(legion::interface::Faults msg) {
  if (is_init_ == false) return;
  ::ros2_interface::msg::Faults faults;
  MESSAGE_HEADER_ROS2_ASSIGN(std_msgs::msg, faults)
  FAULTS_PARSER_ROS2(ros2, faults)

  faults_pub_->publish(faults);
}

template <typename T>
void Ros2MessageManager<T>::HandleControlCommandMessage(
    const ros2_interface::msg::ControlCommand::SharedPtr msg_obj_ptr) {
  if (is_init_ == false) return;
  std::shared_ptr<ros2_interface::msg::ControlCommand> msg =
      std::const_pointer_cast<ros2_interface::msg::ControlCommand>(msg_obj_ptr);

  legion::interface::ControlCommand control_command;
  MESSAGE_HEADER_ROS2_PARSER(control_command)
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

  instance_->HandleControlCommand(control_command);
}

template <typename T>
void Ros2MessageManager<T>::HandleVehicleTaskMessage(
    const ros2_interface::msg::VehicleTask::SharedPtr msg_obj_ptr) {
  if (is_init_ == false) return;
  std::shared_ptr<ros2_interface::msg::VehicleTask> msg =
      std::const_pointer_cast<ros2_interface::msg::VehicleTask>(msg_obj_ptr);

  legion::interface::VehicleTask vehicle_task;
  MESSAGE_HEADER_ROS2_PARSER(vehicle_task)
  vehicle_task.set_clean_up_ctrl(
      (legion::common::SwitchStatus)msg->clean_up_ctrl);
  vehicle_task.set_watering_ctrl(
      (legion::common::SwitchStatus)msg->watering_ctrl);
  vehicle_task.set_water_add_ctrl(
      (legion::common::SwitchStatus)msg->water_add_ctrl);
  vehicle_task.set_hatch_unlock_ctrl(
      (legion::common::SwitchStatus)msg->hatch_unlock_ctrl);
  vehicle_task.set_decorative_light_ctrl(
      (legion::common::SwitchStatus)msg->decorative_light_ctrl);

  instance_->HandleVehicleTask(vehicle_task);
}

template <typename T>
void Ros2MessageManager<T>::HandleTeleopControlCommandMessage(
    const ros2_interface::msg::ControlCommand::SharedPtr msg_obj_ptr) {
  if (is_init_ == false) return;
  std::shared_ptr<ros2_interface::msg::ControlCommand> msg =
      std::const_pointer_cast<ros2_interface::msg::ControlCommand>(msg_obj_ptr);

  legion::interface::ControlCommand control_command;
  MESSAGE_HEADER_ROS2_PARSER(control_command)
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

  instance_->HandleTeleopControlCommand(control_command);
}

template <typename T>
void Ros2MessageManager<T>::Run() {
  rclcpp::spin(shared_from_this());
  rclcpp::shutdown();
  exit(0);
}

template <typename T>
void Ros2MessageManager<T>::Stop() {
  if (handle_message_thread_ != nullptr && handle_message_thread_->joinable()) {
    handle_message_thread_->join();
    handle_message_thread_.reset();
    AINFO << "handle_message_thread stopped [ok].";
  }
}
}  // namespace drivers
}  // namespace legion
#endif

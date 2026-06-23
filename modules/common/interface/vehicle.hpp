/**
 * @file    vehicle.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <mutex>
#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <stdint.h>

#include "modules/common/enum/enum.h"
#include "modules/common/interface/header.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class Vehicle {
 public:
  Vehicle() {
    seats_mutex_ = std::make_shared<std::mutex>();
    seat_belt_mutex_ = std::make_shared<std::mutex>();
    battery_temperatures_mutex_ = std::make_shared<std::mutex>();
    door_status_mutex_ = std::make_shared<std::mutex>();

    vehicle_type_ = legion::interface::Vehicle::VehicleType::OTHER_VEHICLE_TYPE;
    vid_.clear();
    vehicle_num_.clear();
    oid_.clear();
    operation_ =
        legion::interface::Vehicle::OperationStatus::OTHER_OPERATION_STATUS;
    totalcurrent_ = 0.0;
    batterysoc_ = 0.0;
    totalvoltage_ = 0.0;
    recharge_ = 0.0;
    dcdc_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    resistance_ = 0;
    clear_seats();
    servicemode_ = legion::interface::Vehicle::ServicemodeStatus::UNNOME;
    clear_seat_belt();
    engine_status_ = legion::common::EngineStauts::STOPPED;
    battery_voltage_ = 0.0;
    battery_ammeter_ = 0.0;
    battery_consumption_ = 0.0;
    battery_probe_ = 0.0;
    clear_battery_temperatures();
    battery_h_tepemperatures_ = 0.0;
    battery_ltepemperatures_ = 0.0;
    battery_probe_code_ = 0.0;
    battery_h_concentration_ = 0.0;
    battery_c_sensor_code_ = 0.0;
    battery_stress_ = 0.0;
    battery_s_sensor_code_ = 0.0;
    battery_h_dc_dc_ = 0.0;
    battery_capacity_ = 0.0;
    airconditioning_idx_ = 0.0;
    airconditioning_status_ = 0.0;
    airconditioning_model_ =
        legion::interface::Vehicle::AirConditioningModelStatus::MODEL_OFF;
    airconditioning_volume_ =
        legion::interface::Vehicle::AirConditioningVolumeStatus::VOLUME_OFF;
    airconditioning_defrost_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    clear_door_status();
    rsrp_ = 0.0;
    sinr_ = 0.0;
    uspeed_ = 0.0;
    dspeed_ = 0.0;
    loss_ = 0.0;
    delay_ = 0;
    refrigeration_idx_ = 0;
    refrigeration_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    refrigeration_stemp_ = 0.0;
    refrigeration_ctemp_ = 0.0;
    driving_motor_idx_ = 0;
    driving_motor_status_ = 0;
    driving_motor_ctemp_ = 0.0;
    driving_motor_rspeed_ = 0;
    driving_motor_torque_ = 0.0;
    driving_motor_etemp_ = 0.0;
    driving_motor_voltage_ = 0.0;
    driving_motor_ammeter_ = 0.0;
    outline_lamp_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    warning_lamp_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    backlight_lamp_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    brakelamp_lamp_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    left_lamp_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    right_lamp_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    front_touch_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    rear_touch_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    horn_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    length_ = 0;
    width_ = 0;
    height_ = 0;
    cleanup_switch_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    watering_switch_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    trash_can_status_ = legion::interface::Vehicle::TrashCanStatus::NOT_FULL;
    water_tank_status_ = legion::interface::Vehicle::WaterTankStatus::NOT_EMPTY;
    water_add_switch_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    hatch_unlock_switch_status_ =
        legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    water_tank_level_ = 0.0;
    hmi_highbeam_ =
        legion::interface::Vehicle::HMIHighBeamCmdState::HIGHTBEAM_NOINPUT;
    hmi_cleanup_ =
        legion::interface::Vehicle::HMICleanUpCmdState::CLEANUP_NOINPUT;
    hmi_watering_ =
        legion::interface::Vehicle::HMIWateringCmdState::WATERING_NOINPUT;
    bms_charge_status_ =
        legion::interface::Vehicle::BMSChargeStatus::NOT_CHARGED;
    emergency_button_status_ = legion::common::SwitchStatus::SWITCH_STATUS_OFF;
    traction_ = legion::interface::Vehicle::EquipmentState::
        NOT_INSTALLED_OR_UNAVAILABLE;
    abs_ = legion::interface::Vehicle::EquipmentState::
        NOT_INSTALLED_OR_UNAVAILABLE;
    scs_ = legion::interface::Vehicle::EquipmentState::
        NOT_INSTALLED_OR_UNAVAILABLE;
    brake_boost_ = legion::interface::Vehicle::EquipmentState::
        NOT_INSTALLED_OR_UNAVAILABLE;
    aux_brakes_ = legion::interface::Vehicle::EquipmentState::
        NOT_INSTALLED_OR_UNAVAILABLE;
  }
  ~Vehicle() = default;

  enum VehicleType {
    OTHER_VEHICLE_TYPE = 0,
    SHARING_VAN_1_0 = 1,
    SHARING_VAN_1_0_PLUS = 2,
    SHARING_VAN_SWEEPER = 3,
    SHARING_VAN_PATROL = 4,
    SHARING_VAN_2_0 = 5,
    SHARING_VAN_DEFROST = 6,
    SHARING_BUS = 7,
    SIGHTSEEING_BUS = 8,
    SHARING_TAXI = 9,
    SELLER = 10,
    DELIVER = 11,
    CONTAINER_TRUCKS = 12,
  };

  enum AirConditioningModelStatus {
    MODEL_OFF = 0,
    AUTOCOOL = 1,
    AUTOHEAT = 2,
    FORCECOOL = 3,
    FORCEHEAT = 4,
    VENTILATE = 5,
  };

  enum AirConditioningVolumeStatus {
    VOLUME_OFF = 0,
    FIRST = 1,
    SECEND = 2,
    THIRD = 3,
    FOURTH = 4,
    FIFTH = 5,
    SIXTH = 6,
  };

  enum OperationStatus {
    OTHER_OPERATION_STATUS = 0,
    ELECTRICITY = 1,
    HYBRID = 2,
    FUEl = 3,
  };

  enum ServicemodeStatus {
    UNNOME = 0,
    NOME = 1,
    OFFLINE = 2,
    MANUAL = 11,
    SCRAM = 12,
    AUTO = 100,
  };

  enum EquipmentState {
    NOT_INSTALLED_OR_UNAVAILABLE = 0,
    IN_THE_OFF_STATE = 1,
    IS_ON = 2,
    IN_ACTION = 3,
  };

  enum TrashCanStatus {
    NOT_FULL = 0,
    FULL = 1,
    TRASH_CAN_STATUS_INVALID = 2,
  };

  enum WaterTankStatus {
    NOT_EMPTY = 0,
    EMPTY = 1,
    WATER_TANK_STATUS_INVALID = 2,
  };

  enum HMIHighBeamCmdState {
    HIGHTBEAM_NOINPUT = 0,
    HIGHTBEAM_ON = 1,
    HIGHTBEAM_OFF = 2,
  };

  enum HMICleanUpCmdState {
    CLEANUP_NOINPUT = 0,
    CLEANUP_ON = 1,
    CLEANUP_OFF = 2,
  };

  enum HMIWateringCmdState {
    WATERING_NOINPUT = 0,
    WATERING_ON = 1,
    WATERING_OFF = 2,
  };

  enum BMSChargeStatus {
    NOT_CHARGED = 0,
    CHARGING = 1,
    CHARGE_COMPLETE = 2,
    RESERVE = 3,
  };

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_vehicle_type(
      const legion::interface::Vehicle::VehicleType& vehicle_type) {
    vehicle_type_ = vehicle_type;
    vehicle_type_ptr_ = &vehicle_type_;
  }

  inline const legion::interface::Vehicle::VehicleType& vehicle_type() const {
    return vehicle_type_;
  }

  inline legion::interface::Vehicle::VehicleType* mutable_vehicle_type() {
    return &vehicle_type_;
  }

  inline bool has_vehicle_type() { return (vehicle_type_ptr_ != nullptr); }

  inline void set_vid(const std::string& vid) {
    vid_ = vid;
    vid_ptr_ = &vid_;
  }

  inline const std::string& vid() const { return vid_; }

  inline std::string* mutable_vid() { return &vid_; }

  inline bool has_vid() { return (vid_ptr_ != nullptr); }

  inline void set_vehicle_num(const std::string& vehicle_num) {
    vehicle_num_ = vehicle_num;
    vehicle_num_ptr_ = &vehicle_num_;
  }

  inline const std::string& vehicle_num() const { return vehicle_num_; }

  inline std::string* mutable_vehicle_num() { return &vehicle_num_; }

  inline bool has_vehicle_num() { return (vehicle_num_ptr_ != nullptr); }

  inline void set_oid(const std::string& oid) {
    oid_ = oid;
    oid_ptr_ = &oid_;
  }

  inline const std::string& oid() const { return oid_; }

  inline std::string* mutable_oid() { return &oid_; }

  inline bool has_oid() { return (oid_ptr_ != nullptr); }

  inline void set_operation(
      const legion::interface::Vehicle::OperationStatus& operation) {
    operation_ = operation;
    operation_ptr_ = &operation_;
  }

  inline const legion::interface::Vehicle::OperationStatus& operation() const {
    return operation_;
  }

  inline legion::interface::Vehicle::OperationStatus* mutable_operation() {
    return &operation_;
  }

  inline bool has_operation() { return (operation_ptr_ != nullptr); }

  inline void set_totalcurrent(const double& totalcurrent) {
    totalcurrent_ = totalcurrent;
    totalcurrent_ptr_ = &totalcurrent_;
  }

  inline const double& totalcurrent() const { return totalcurrent_; }

  inline double* mutable_totalcurrent() { return &totalcurrent_; }

  inline bool has_totalcurrent() { return (totalcurrent_ptr_ != nullptr); }

  inline void set_batterysoc(const double& batterysoc) {
    batterysoc_ = batterysoc;
    batterysoc_ptr_ = &batterysoc_;
  }

  inline const double& batterysoc() const { return batterysoc_; }

  inline double* mutable_batterysoc() { return &batterysoc_; }

  inline bool has_batterysoc() { return (batterysoc_ptr_ != nullptr); }

  inline void set_totalvoltage(const double& totalvoltage) {
    totalvoltage_ = totalvoltage;
    totalvoltage_ptr_ = &totalvoltage_;
  }

  inline const double& totalvoltage() const { return totalvoltage_; }

  inline double* mutable_totalvoltage() { return &totalvoltage_; }

  inline bool has_totalvoltage() { return (totalvoltage_ptr_ != nullptr); }

  inline void set_recharge(const double& recharge) {
    recharge_ = recharge;
    recharge_ptr_ = &recharge_;
  }

  inline const double& recharge() const { return recharge_; }

  inline double* mutable_recharge() { return &recharge_; }

  inline bool has_recharge() { return (recharge_ptr_ != nullptr); }

  inline void set_dcdc(const legion::common::SwitchStatus& dcdc) {
    dcdc_ = dcdc;
    dcdc_ptr_ = &dcdc_;
  }

  inline const legion::common::SwitchStatus& dcdc() const { return dcdc_; }

  inline legion::common::SwitchStatus* mutable_dcdc() { return &dcdc_; }

  inline bool has_dcdc() { return (dcdc_ptr_ != nullptr); }

  inline void set_resistance(const uint32_t& resistance) {
    resistance_ = resistance;
    resistance_ptr_ = &resistance_;
  }

  inline const uint32_t& resistance() const { return resistance_; }

  inline uint32_t* mutable_resistance() { return &resistance_; }

  inline bool has_resistance() { return (resistance_ptr_ != nullptr); }

  inline void set_seats(std::vector<uint8_t>* seats) {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    seats_.assign(seats->begin(), seats->end());
  }

  inline void set_seats(const std::vector<uint8_t>& seats) {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    seats_ = seats;
  }

  inline void set_seats(const uint32_t index, uint8_t& seats) {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    seats_[index] = seats;
  }

  inline void add_seats(const uint8_t& seats) {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    seats_.emplace_back(seats);
  }

  inline const uint8_t& seats(uint32_t index) const {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    return seats_[index];
  }

  inline std::vector<uint8_t>* mutable_seats() {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    return &seats_;
  }

  inline void seats(std::vector<uint8_t>& seats) const {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    seats.assign(seats_.begin(), seats_.end());
  }

  inline const std::vector<uint8_t>& seats() const {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    return seats_;
  }

  inline uint32_t seats_size() const {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    return seats_.size();
  }

  inline void clear_seats() {
    std::lock_guard<std::mutex> lock(*seats_mutex_);
    seats_.clear();
    seats_.shrink_to_fit();
  }

  inline bool has_seats() { return (seats_size() != 0); }

  inline void set_servicemode(
      const legion::interface::Vehicle::ServicemodeStatus& servicemode) {
    servicemode_ = servicemode;
    servicemode_ptr_ = &servicemode_;
  }

  inline const legion::interface::Vehicle::ServicemodeStatus& servicemode()
      const {
    return servicemode_;
  }

  inline legion::interface::Vehicle::ServicemodeStatus* mutable_servicemode() {
    return &servicemode_;
  }

  inline bool has_servicemode() { return (servicemode_ptr_ != nullptr); }

  inline void set_seat_belt(
      std::vector<legion::common::SwitchStatus>* seat_belt) {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    seat_belt_.assign(seat_belt->begin(), seat_belt->end());
  }

  inline void set_seat_belt(
      const std::vector<legion::common::SwitchStatus>& seat_belt) {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    seat_belt_ = seat_belt;
  }

  inline void set_seat_belt(const uint32_t index,
                            legion::common::SwitchStatus& seat_belt) {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    seat_belt_[index] = seat_belt;
  }

  inline void add_seat_belt(const legion::common::SwitchStatus& seat_belt) {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    seat_belt_.emplace_back(seat_belt);
  }

  inline const legion::common::SwitchStatus& seat_belt(uint32_t index) const {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    return seat_belt_[index];
  }

  inline std::vector<legion::common::SwitchStatus>* mutable_seat_belt() {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    return &seat_belt_;
  }

  inline void seat_belt(
      std::vector<legion::common::SwitchStatus>& seat_belt) const {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    seat_belt.assign(seat_belt_.begin(), seat_belt_.end());
  }

  inline const std::vector<legion::common::SwitchStatus>& seat_belt() const {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    return seat_belt_;
  }

  inline uint32_t seat_belt_size() const {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    return seat_belt_.size();
  }

  inline void clear_seat_belt() {
    std::lock_guard<std::mutex> lock(*seat_belt_mutex_);
    seat_belt_.clear();
    seat_belt_.shrink_to_fit();
  }

  inline bool has_seat_belt() { return (seat_belt_size() != 0); }

  inline void set_engine_status(
      const legion::common::EngineStauts& engine_status) {
    engine_status_ = engine_status;
    engine_status_ptr_ = &engine_status_;
  }

  inline const legion::common::EngineStauts& engine_status() const {
    return engine_status_;
  }

  inline legion::common::EngineStauts* mutable_engine_status() {
    return &engine_status_;
  }

  inline bool has_engine_status() { return (engine_status_ptr_ != nullptr); }

  inline void set_battery_voltage(const double& battery_voltage) {
    battery_voltage_ = battery_voltage;
    battery_voltage_ptr_ = &battery_voltage_;
  }

  inline const double& battery_voltage() const { return battery_voltage_; }

  inline double* mutable_battery_voltage() { return &battery_voltage_; }

  inline bool has_battery_voltage() {
    return (battery_voltage_ptr_ != nullptr);
  }

  inline void set_battery_ammeter(const double& battery_ammeter) {
    battery_ammeter_ = battery_ammeter;
    battery_ammeter_ptr_ = &battery_ammeter_;
  }

  inline const double& battery_ammeter() const { return battery_ammeter_; }

  inline double* mutable_battery_ammeter() { return &battery_ammeter_; }

  inline bool has_battery_ammeter() {
    return (battery_ammeter_ptr_ != nullptr);
  }

  inline void set_battery_consumption(const double& battery_consumption) {
    battery_consumption_ = battery_consumption;
    battery_consumption_ptr_ = &battery_consumption_;
  }

  inline const double& battery_consumption() const {
    return battery_consumption_;
  }

  inline double* mutable_battery_consumption() { return &battery_consumption_; }

  inline bool has_battery_consumption() {
    return (battery_consumption_ptr_ != nullptr);
  }

  inline void set_battery_probe(const double& battery_probe) {
    battery_probe_ = battery_probe;
    battery_probe_ptr_ = &battery_probe_;
  }

  inline const double& battery_probe() const { return battery_probe_; }

  inline double* mutable_battery_probe() { return &battery_probe_; }

  inline bool has_battery_probe() { return (battery_probe_ptr_ != nullptr); }

  inline void set_battery_temperatures(
      std::vector<double>* battery_temperatures) {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    battery_temperatures_.assign(battery_temperatures->begin(),
                                 battery_temperatures->end());
  }

  inline void set_battery_temperatures(
      const std::vector<double>& battery_temperatures) {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    battery_temperatures_ = battery_temperatures;
  }

  inline void set_battery_temperatures(const uint32_t index,
                                       double& battery_temperatures) {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    battery_temperatures_[index] = battery_temperatures;
  }

  inline void add_battery_temperatures(const double& battery_temperatures) {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    battery_temperatures_.emplace_back(battery_temperatures);
  }

  inline const double& battery_temperatures(uint32_t index) const {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    return battery_temperatures_[index];
  }

  inline std::vector<double>* mutable_battery_temperatures() {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    return &battery_temperatures_;
  }

  inline void battery_temperatures(
      std::vector<double>& battery_temperatures) const {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    battery_temperatures.assign(battery_temperatures_.begin(),
                                battery_temperatures_.end());
  }

  inline const std::vector<double>& battery_temperatures() const {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    return battery_temperatures_;
  }

  inline uint32_t battery_temperatures_size() const {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    return battery_temperatures_.size();
  }

  inline void clear_battery_temperatures() {
    std::lock_guard<std::mutex> lock(*battery_temperatures_mutex_);
    battery_temperatures_.clear();
    battery_temperatures_.shrink_to_fit();
  }

  inline bool has_battery_temperatures() {
    return (battery_temperatures_size() != 0);
  }

  inline void set_battery_h_tepemperatures(
      const double& battery_h_tepemperatures) {
    battery_h_tepemperatures_ = battery_h_tepemperatures;
    battery_h_tepemperatures_ptr_ = &battery_h_tepemperatures_;
  }

  inline const double& battery_h_tepemperatures() const {
    return battery_h_tepemperatures_;
  }

  inline double* mutable_battery_h_tepemperatures() {
    return &battery_h_tepemperatures_;
  }

  inline bool has_battery_h_tepemperatures() {
    return (battery_h_tepemperatures_ptr_ != nullptr);
  }

  inline void set_battery_ltepemperatures(
      const double& battery_ltepemperatures) {
    battery_ltepemperatures_ = battery_ltepemperatures;
    battery_ltepemperatures_ptr_ = &battery_ltepemperatures_;
  }

  inline const double& battery_ltepemperatures() const {
    return battery_ltepemperatures_;
  }

  inline double* mutable_battery_ltepemperatures() {
    return &battery_ltepemperatures_;
  }

  inline bool has_battery_ltepemperatures() {
    return (battery_ltepemperatures_ptr_ != nullptr);
  }

  inline void set_battery_probe_code(const double& battery_probe_code) {
    battery_probe_code_ = battery_probe_code;
    battery_probe_code_ptr_ = &battery_probe_code_;
  }

  inline const double& battery_probe_code() const {
    return battery_probe_code_;
  }

  inline double* mutable_battery_probe_code() { return &battery_probe_code_; }

  inline bool has_battery_probe_code() {
    return (battery_probe_code_ptr_ != nullptr);
  }

  inline void set_battery_h_concentration(
      const double& battery_h_concentration) {
    battery_h_concentration_ = battery_h_concentration;
    battery_h_concentration_ptr_ = &battery_h_concentration_;
  }

  inline const double& battery_h_concentration() const {
    return battery_h_concentration_;
  }

  inline double* mutable_battery_h_concentration() {
    return &battery_h_concentration_;
  }

  inline bool has_battery_h_concentration() {
    return (battery_h_concentration_ptr_ != nullptr);
  }

  inline void set_battery_c_sensor_code(const double& battery_c_sensor_code) {
    battery_c_sensor_code_ = battery_c_sensor_code;
    battery_c_sensor_code_ptr_ = &battery_c_sensor_code_;
  }

  inline const double& battery_c_sensor_code() const {
    return battery_c_sensor_code_;
  }

  inline double* mutable_battery_c_sensor_code() {
    return &battery_c_sensor_code_;
  }

  inline bool has_battery_c_sensor_code() {
    return (battery_c_sensor_code_ptr_ != nullptr);
  }

  inline void set_battery_stress(const double& battery_stress) {
    battery_stress_ = battery_stress;
    battery_stress_ptr_ = &battery_stress_;
  }

  inline const double& battery_stress() const { return battery_stress_; }

  inline double* mutable_battery_stress() { return &battery_stress_; }

  inline bool has_battery_stress() { return (battery_stress_ptr_ != nullptr); }

  inline void set_battery_s_sensor_code(const double& battery_s_sensor_code) {
    battery_s_sensor_code_ = battery_s_sensor_code;
    battery_s_sensor_code_ptr_ = &battery_s_sensor_code_;
  }

  inline const double& battery_s_sensor_code() const {
    return battery_s_sensor_code_;
  }

  inline double* mutable_battery_s_sensor_code() {
    return &battery_s_sensor_code_;
  }

  inline bool has_battery_s_sensor_code() {
    return (battery_s_sensor_code_ptr_ != nullptr);
  }

  inline void set_battery_h_dc_dc(const double& battery_h_dc_dc) {
    battery_h_dc_dc_ = battery_h_dc_dc;
    battery_h_dc_dc_ptr_ = &battery_h_dc_dc_;
  }

  inline const double& battery_h_dc_dc() const { return battery_h_dc_dc_; }

  inline double* mutable_battery_h_dc_dc() { return &battery_h_dc_dc_; }

  inline bool has_battery_h_dc_dc() {
    return (battery_h_dc_dc_ptr_ != nullptr);
  }

  inline void set_battery_capacity(const double& battery_capacity) {
    battery_capacity_ = battery_capacity;
    battery_capacity_ptr_ = &battery_capacity_;
  }

  inline const double& battery_capacity() const { return battery_capacity_; }

  inline double* mutable_battery_capacity() { return &battery_capacity_; }

  inline bool has_battery_capacity() {
    return (battery_capacity_ptr_ != nullptr);
  }

  inline void set_airconditioning_idx(const double& airconditioning_idx) {
    airconditioning_idx_ = airconditioning_idx;
    airconditioning_idx_ptr_ = &airconditioning_idx_;
  }

  inline const double& airconditioning_idx() const {
    return airconditioning_idx_;
  }

  inline double* mutable_airconditioning_idx() { return &airconditioning_idx_; }

  inline bool has_airconditioning_idx() {
    return (airconditioning_idx_ptr_ != nullptr);
  }

  inline void set_airconditioning_status(const double& airconditioning_status) {
    airconditioning_status_ = airconditioning_status;
    airconditioning_status_ptr_ = &airconditioning_status_;
  }

  inline const double& airconditioning_status() const {
    return airconditioning_status_;
  }

  inline double* mutable_airconditioning_status() {
    return &airconditioning_status_;
  }

  inline bool has_airconditioning_status() {
    return (airconditioning_status_ptr_ != nullptr);
  }

  inline void set_airconditioning_model(
      const legion::interface::Vehicle::AirConditioningModelStatus&
          airconditioning_model) {
    airconditioning_model_ = airconditioning_model;
    airconditioning_model_ptr_ = &airconditioning_model_;
  }

  inline const legion::interface::Vehicle::AirConditioningModelStatus&
  airconditioning_model() const {
    return airconditioning_model_;
  }

  inline legion::interface::Vehicle::AirConditioningModelStatus*
  mutable_airconditioning_model() {
    return &airconditioning_model_;
  }

  inline bool has_airconditioning_model() {
    return (airconditioning_model_ptr_ != nullptr);
  }

  inline void set_airconditioning_volume(
      const legion::interface::Vehicle::AirConditioningVolumeStatus&
          airconditioning_volume) {
    airconditioning_volume_ = airconditioning_volume;
    airconditioning_volume_ptr_ = &airconditioning_volume_;
  }

  inline const legion::interface::Vehicle::AirConditioningVolumeStatus&
  airconditioning_volume() const {
    return airconditioning_volume_;
  }

  inline legion::interface::Vehicle::AirConditioningVolumeStatus*
  mutable_airconditioning_volume() {
    return &airconditioning_volume_;
  }

  inline bool has_airconditioning_volume() {
    return (airconditioning_volume_ptr_ != nullptr);
  }

  inline void set_airconditioning_defrost(
      const legion::common::SwitchStatus& airconditioning_defrost) {
    airconditioning_defrost_ = airconditioning_defrost;
    airconditioning_defrost_ptr_ = &airconditioning_defrost_;
  }

  inline const legion::common::SwitchStatus& airconditioning_defrost() const {
    return airconditioning_defrost_;
  }

  inline legion::common::SwitchStatus* mutable_airconditioning_defrost() {
    return &airconditioning_defrost_;
  }

  inline bool has_airconditioning_defrost() {
    return (airconditioning_defrost_ptr_ != nullptr);
  }

  inline void set_door_status(
      std::vector<legion::common::DoorStatus>* door_status) {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    door_status_.assign(door_status->begin(), door_status->end());
  }

  inline void set_door_status(
      const std::vector<legion::common::DoorStatus>& door_status) {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    door_status_ = door_status;
  }

  inline void set_door_status(const uint32_t index,
                              legion::common::DoorStatus& door_status) {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    door_status_[index] = door_status;
  }

  inline void add_door_status(const legion::common::DoorStatus& door_status) {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    door_status_.emplace_back(door_status);
  }

  inline const legion::common::DoorStatus& door_status(uint32_t index) const {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    return door_status_[index];
  }

  inline std::vector<legion::common::DoorStatus>* mutable_door_status() {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    return &door_status_;
  }

  inline void door_status(
      std::vector<legion::common::DoorStatus>& door_status) const {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    door_status.assign(door_status_.begin(), door_status_.end());
  }

  inline const std::vector<legion::common::DoorStatus>& door_status() const {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    return door_status_;
  }

  inline uint32_t door_status_size() const {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    return door_status_.size();
  }

  inline void clear_door_status() {
    std::lock_guard<std::mutex> lock(*door_status_mutex_);
    door_status_.clear();
    door_status_.shrink_to_fit();
  }

  inline bool has_door_status() { return (door_status_size() != 0); }

  inline void set_rsrp(const double& rsrp) {
    rsrp_ = rsrp;
    rsrp_ptr_ = &rsrp_;
  }

  inline const double& rsrp() const { return rsrp_; }

  inline double* mutable_rsrp() { return &rsrp_; }

  inline bool has_rsrp() { return (rsrp_ptr_ != nullptr); }

  inline void set_sinr(const double& sinr) {
    sinr_ = sinr;
    sinr_ptr_ = &sinr_;
  }

  inline const double& sinr() const { return sinr_; }

  inline double* mutable_sinr() { return &sinr_; }

  inline bool has_sinr() { return (sinr_ptr_ != nullptr); }

  inline void set_uspeed(const double& uspeed) {
    uspeed_ = uspeed;
    uspeed_ptr_ = &uspeed_;
  }

  inline const double& uspeed() const { return uspeed_; }

  inline double* mutable_uspeed() { return &uspeed_; }

  inline bool has_uspeed() { return (uspeed_ptr_ != nullptr); }

  inline void set_dspeed(const double& dspeed) {
    dspeed_ = dspeed;
    dspeed_ptr_ = &dspeed_;
  }

  inline const double& dspeed() const { return dspeed_; }

  inline double* mutable_dspeed() { return &dspeed_; }

  inline bool has_dspeed() { return (dspeed_ptr_ != nullptr); }

  inline void set_loss(const double& loss) {
    loss_ = loss;
    loss_ptr_ = &loss_;
  }

  inline const double& loss() const { return loss_; }

  inline double* mutable_loss() { return &loss_; }

  inline bool has_loss() { return (loss_ptr_ != nullptr); }

  inline void set_delay(const uint32_t& delay) {
    delay_ = delay;
    delay_ptr_ = &delay_;
  }

  inline const uint32_t& delay() const { return delay_; }

  inline uint32_t* mutable_delay() { return &delay_; }

  inline bool has_delay() { return (delay_ptr_ != nullptr); }

  inline void set_refrigeration_idx(const uint8_t& refrigeration_idx) {
    refrigeration_idx_ = refrigeration_idx;
    refrigeration_idx_ptr_ = &refrigeration_idx_;
  }

  inline const uint8_t& refrigeration_idx() const { return refrigeration_idx_; }

  inline uint8_t* mutable_refrigeration_idx() { return &refrigeration_idx_; }

  inline bool has_refrigeration_idx() {
    return (refrigeration_idx_ptr_ != nullptr);
  }

  inline void set_refrigeration_status(
      const legion::common::SwitchStatus& refrigeration_status) {
    refrigeration_status_ = refrigeration_status;
    refrigeration_status_ptr_ = &refrigeration_status_;
  }

  inline const legion::common::SwitchStatus& refrigeration_status() const {
    return refrigeration_status_;
  }

  inline legion::common::SwitchStatus* mutable_refrigeration_status() {
    return &refrigeration_status_;
  }

  inline bool has_refrigeration_status() {
    return (refrigeration_status_ptr_ != nullptr);
  }

  inline void set_refrigeration_stemp(const double& refrigeration_stemp) {
    refrigeration_stemp_ = refrigeration_stemp;
    refrigeration_stemp_ptr_ = &refrigeration_stemp_;
  }

  inline const double& refrigeration_stemp() const {
    return refrigeration_stemp_;
  }

  inline double* mutable_refrigeration_stemp() { return &refrigeration_stemp_; }

  inline bool has_refrigeration_stemp() {
    return (refrigeration_stemp_ptr_ != nullptr);
  }

  inline void set_refrigeration_ctemp(const double& refrigeration_ctemp) {
    refrigeration_ctemp_ = refrigeration_ctemp;
    refrigeration_ctemp_ptr_ = &refrigeration_ctemp_;
  }

  inline const double& refrigeration_ctemp() const {
    return refrigeration_ctemp_;
  }

  inline double* mutable_refrigeration_ctemp() { return &refrigeration_ctemp_; }

  inline bool has_refrigeration_ctemp() {
    return (refrigeration_ctemp_ptr_ != nullptr);
  }

  inline void set_driving_motor_idx(const uint8_t& driving_motor_idx) {
    driving_motor_idx_ = driving_motor_idx;
    driving_motor_idx_ptr_ = &driving_motor_idx_;
  }

  inline const uint8_t& driving_motor_idx() const { return driving_motor_idx_; }

  inline uint8_t* mutable_driving_motor_idx() { return &driving_motor_idx_; }

  inline bool has_driving_motor_idx() {
    return (driving_motor_idx_ptr_ != nullptr);
  }

  inline void set_driving_motor_status(const uint8_t& driving_motor_status) {
    driving_motor_status_ = driving_motor_status;
    driving_motor_status_ptr_ = &driving_motor_status_;
  }

  inline const uint8_t& driving_motor_status() const {
    return driving_motor_status_;
  }

  inline uint8_t* mutable_driving_motor_status() {
    return &driving_motor_status_;
  }

  inline bool has_driving_motor_status() {
    return (driving_motor_status_ptr_ != nullptr);
  }

  inline void set_driving_motor_ctemp(const double& driving_motor_ctemp) {
    driving_motor_ctemp_ = driving_motor_ctemp;
    driving_motor_ctemp_ptr_ = &driving_motor_ctemp_;
  }

  inline const double& driving_motor_ctemp() const {
    return driving_motor_ctemp_;
  }

  inline double* mutable_driving_motor_ctemp() { return &driving_motor_ctemp_; }

  inline bool has_driving_motor_ctemp() {
    return (driving_motor_ctemp_ptr_ != nullptr);
  }

  inline void set_driving_motor_rspeed(const uint8_t& driving_motor_rspeed) {
    driving_motor_rspeed_ = driving_motor_rspeed;
    driving_motor_rspeed_ptr_ = &driving_motor_rspeed_;
  }

  inline const uint8_t& driving_motor_rspeed() const {
    return driving_motor_rspeed_;
  }

  inline uint8_t* mutable_driving_motor_rspeed() {
    return &driving_motor_rspeed_;
  }

  inline bool has_driving_motor_rspeed() {
    return (driving_motor_rspeed_ptr_ != nullptr);
  }

  inline void set_driving_motor_torque(const double& driving_motor_torque) {
    driving_motor_torque_ = driving_motor_torque;
    driving_motor_torque_ptr_ = &driving_motor_torque_;
  }

  inline const double& driving_motor_torque() const {
    return driving_motor_torque_;
  }

  inline double* mutable_driving_motor_torque() {
    return &driving_motor_torque_;
  }

  inline bool has_driving_motor_torque() {
    return (driving_motor_torque_ptr_ != nullptr);
  }

  inline void set_driving_motor_etemp(const double& driving_motor_etemp) {
    driving_motor_etemp_ = driving_motor_etemp;
    driving_motor_etemp_ptr_ = &driving_motor_etemp_;
  }

  inline const double& driving_motor_etemp() const {
    return driving_motor_etemp_;
  }

  inline double* mutable_driving_motor_etemp() { return &driving_motor_etemp_; }

  inline bool has_driving_motor_etemp() {
    return (driving_motor_etemp_ptr_ != nullptr);
  }

  inline void set_driving_motor_voltage(const double& driving_motor_voltage) {
    driving_motor_voltage_ = driving_motor_voltage;
    driving_motor_voltage_ptr_ = &driving_motor_voltage_;
  }

  inline const double& driving_motor_voltage() const {
    return driving_motor_voltage_;
  }

  inline double* mutable_driving_motor_voltage() {
    return &driving_motor_voltage_;
  }

  inline bool has_driving_motor_voltage() {
    return (driving_motor_voltage_ptr_ != nullptr);
  }

  inline void set_driving_motor_ammeter(const double& driving_motor_ammeter) {
    driving_motor_ammeter_ = driving_motor_ammeter;
    driving_motor_ammeter_ptr_ = &driving_motor_ammeter_;
  }

  inline const double& driving_motor_ammeter() const {
    return driving_motor_ammeter_;
  }

  inline double* mutable_driving_motor_ammeter() {
    return &driving_motor_ammeter_;
  }

  inline bool has_driving_motor_ammeter() {
    return (driving_motor_ammeter_ptr_ != nullptr);
  }

  inline void set_outline_lamp_status(
      const legion::common::SwitchStatus& outline_lamp_status) {
    outline_lamp_status_ = outline_lamp_status;
    outline_lamp_status_ptr_ = &outline_lamp_status_;
  }

  inline const legion::common::SwitchStatus& outline_lamp_status() const {
    return outline_lamp_status_;
  }

  inline legion::common::SwitchStatus* mutable_outline_lamp_status() {
    return &outline_lamp_status_;
  }

  inline bool has_outline_lamp_status() {
    return (outline_lamp_status_ptr_ != nullptr);
  }

  inline void set_warning_lamp_status(
      const legion::common::SwitchStatus& warning_lamp_status) {
    warning_lamp_status_ = warning_lamp_status;
    warning_lamp_status_ptr_ = &warning_lamp_status_;
  }

  inline const legion::common::SwitchStatus& warning_lamp_status() const {
    return warning_lamp_status_;
  }

  inline legion::common::SwitchStatus* mutable_warning_lamp_status() {
    return &warning_lamp_status_;
  }

  inline bool has_warning_lamp_status() {
    return (warning_lamp_status_ptr_ != nullptr);
  }

  inline void set_backlight_lamp_status(
      const legion::common::SwitchStatus& backlight_lamp_status) {
    backlight_lamp_status_ = backlight_lamp_status;
    backlight_lamp_status_ptr_ = &backlight_lamp_status_;
  }

  inline const legion::common::SwitchStatus& backlight_lamp_status() const {
    return backlight_lamp_status_;
  }

  inline legion::common::SwitchStatus* mutable_backlight_lamp_status() {
    return &backlight_lamp_status_;
  }

  inline bool has_backlight_lamp_status() {
    return (backlight_lamp_status_ptr_ != nullptr);
  }

  inline void set_brakelamp_lamp_status(
      const legion::common::SwitchStatus& brakelamp_lamp_status) {
    brakelamp_lamp_status_ = brakelamp_lamp_status;
    brakelamp_lamp_status_ptr_ = &brakelamp_lamp_status_;
  }

  inline const legion::common::SwitchStatus& brakelamp_lamp_status() const {
    return brakelamp_lamp_status_;
  }

  inline legion::common::SwitchStatus* mutable_brakelamp_lamp_status() {
    return &brakelamp_lamp_status_;
  }

  inline bool has_brakelamp_lamp_status() {
    return (brakelamp_lamp_status_ptr_ != nullptr);
  }

  inline void set_left_lamp_status(
      const legion::common::SwitchStatus& left_lamp_status) {
    left_lamp_status_ = left_lamp_status;
    left_lamp_status_ptr_ = &left_lamp_status_;
  }

  inline const legion::common::SwitchStatus& left_lamp_status() const {
    return left_lamp_status_;
  }

  inline legion::common::SwitchStatus* mutable_left_lamp_status() {
    return &left_lamp_status_;
  }

  inline bool has_left_lamp_status() {
    return (left_lamp_status_ptr_ != nullptr);
  }

  inline void set_right_lamp_status(
      const legion::common::SwitchStatus& right_lamp_status) {
    right_lamp_status_ = right_lamp_status;
    right_lamp_status_ptr_ = &right_lamp_status_;
  }

  inline const legion::common::SwitchStatus& right_lamp_status() const {
    return right_lamp_status_;
  }

  inline legion::common::SwitchStatus* mutable_right_lamp_status() {
    return &right_lamp_status_;
  }

  inline bool has_right_lamp_status() {
    return (right_lamp_status_ptr_ != nullptr);
  }

  inline void set_front_touch_status(
      const legion::common::SwitchStatus& front_touch_status) {
    front_touch_status_ = front_touch_status;
    front_touch_status_ptr_ = &front_touch_status_;
  }

  inline const legion::common::SwitchStatus& front_touch_status() const {
    return front_touch_status_;
  }

  inline legion::common::SwitchStatus* mutable_front_touch_status() {
    return &front_touch_status_;
  }

  inline bool has_front_touch_status() {
    return (front_touch_status_ptr_ != nullptr);
  }

  inline void set_rear_touch_status(
      const legion::common::SwitchStatus& rear_touch_status) {
    rear_touch_status_ = rear_touch_status;
    rear_touch_status_ptr_ = &rear_touch_status_;
  }

  inline const legion::common::SwitchStatus& rear_touch_status() const {
    return rear_touch_status_;
  }

  inline legion::common::SwitchStatus* mutable_rear_touch_status() {
    return &rear_touch_status_;
  }

  inline bool has_rear_touch_status() {
    return (rear_touch_status_ptr_ != nullptr);
  }

  inline void set_horn_status(const legion::common::SwitchStatus& horn_status) {
    horn_status_ = horn_status;
    horn_status_ptr_ = &horn_status_;
  }

  inline const legion::common::SwitchStatus& horn_status() const {
    return horn_status_;
  }

  inline legion::common::SwitchStatus* mutable_horn_status() {
    return &horn_status_;
  }

  inline bool has_horn_status() { return (horn_status_ptr_ != nullptr); }

  inline void set_length(const int8_t& length) {
    length_ = length;
    length_ptr_ = &length_;
  }

  inline const int8_t& length() const { return length_; }

  inline int8_t* mutable_length() { return &length_; }

  inline bool has_length() { return (length_ptr_ != nullptr); }

  inline void set_width(const int8_t& width) {
    width_ = width;
    width_ptr_ = &width_;
  }

  inline const int8_t& width() const { return width_; }

  inline int8_t* mutable_width() { return &width_; }

  inline bool has_width() { return (width_ptr_ != nullptr); }

  inline void set_height(const int8_t& height) {
    height_ = height;
    height_ptr_ = &height_;
  }

  inline const int8_t& height() const { return height_; }

  inline int8_t* mutable_height() { return &height_; }

  inline bool has_height() { return (height_ptr_ != nullptr); }

  inline void set_cleanup_switch_status(
      const legion::common::SwitchStatus& cleanup_switch_status) {
    cleanup_switch_status_ = cleanup_switch_status;
    cleanup_switch_status_ptr_ = &cleanup_switch_status_;
  }

  inline const legion::common::SwitchStatus& cleanup_switch_status() const {
    return cleanup_switch_status_;
  }

  inline legion::common::SwitchStatus* mutable_cleanup_switch_status() {
    return &cleanup_switch_status_;
  }

  inline bool has_cleanup_switch_status() {
    return (cleanup_switch_status_ptr_ != nullptr);
  }

  inline void set_watering_switch_status(
      const legion::common::SwitchStatus& watering_switch_status) {
    watering_switch_status_ = watering_switch_status;
    watering_switch_status_ptr_ = &watering_switch_status_;
  }

  inline const legion::common::SwitchStatus& watering_switch_status() const {
    return watering_switch_status_;
  }

  inline legion::common::SwitchStatus* mutable_watering_switch_status() {
    return &watering_switch_status_;
  }

  inline bool has_watering_switch_status() {
    return (watering_switch_status_ptr_ != nullptr);
  }

  inline void set_trash_can_status(
      const legion::interface::Vehicle::TrashCanStatus& trash_can_status) {
    trash_can_status_ = trash_can_status;
    trash_can_status_ptr_ = &trash_can_status_;
  }

  inline const legion::interface::Vehicle::TrashCanStatus& trash_can_status()
      const {
    return trash_can_status_;
  }

  inline legion::interface::Vehicle::TrashCanStatus*
  mutable_trash_can_status() {
    return &trash_can_status_;
  }

  inline bool has_trash_can_status() {
    return (trash_can_status_ptr_ != nullptr);
  }

  inline void set_water_tank_status(
      const legion::interface::Vehicle::WaterTankStatus& water_tank_status) {
    water_tank_status_ = water_tank_status;
    water_tank_status_ptr_ = &water_tank_status_;
  }

  inline const legion::interface::Vehicle::WaterTankStatus& water_tank_status()
      const {
    return water_tank_status_;
  }

  inline legion::interface::Vehicle::WaterTankStatus*
  mutable_water_tank_status() {
    return &water_tank_status_;
  }

  inline bool has_water_tank_status() {
    return (water_tank_status_ptr_ != nullptr);
  }

  inline void set_water_add_switch_status(
      const legion::common::SwitchStatus& water_add_switch_status) {
    water_add_switch_status_ = water_add_switch_status;
    water_add_switch_status_ptr_ = &water_add_switch_status_;
  }

  inline const legion::common::SwitchStatus& water_add_switch_status() const {
    return water_add_switch_status_;
  }

  inline legion::common::SwitchStatus* mutable_water_add_switch_status() {
    return &water_add_switch_status_;
  }

  inline bool has_water_add_switch_status() {
    return (water_add_switch_status_ptr_ != nullptr);
  }

  inline void set_hatch_unlock_switch_status(
      const legion::common::SwitchStatus& hatch_unlock_switch_status) {
    hatch_unlock_switch_status_ = hatch_unlock_switch_status;
    hatch_unlock_switch_status_ptr_ = &hatch_unlock_switch_status_;
  }

  inline const legion::common::SwitchStatus& hatch_unlock_switch_status()
      const {
    return hatch_unlock_switch_status_;
  }

  inline legion::common::SwitchStatus* mutable_hatch_unlock_switch_status() {
    return &hatch_unlock_switch_status_;
  }

  inline bool has_hatch_unlock_switch_status() {
    return (hatch_unlock_switch_status_ptr_ != nullptr);
  }

  inline void set_water_tank_level(const double& water_tank_level) {
    water_tank_level_ = water_tank_level;
    water_tank_level_ptr_ = &water_tank_level_;
  }

  inline const double& water_tank_level() const { return water_tank_level_; }

  inline double* mutable_water_tank_level() { return &water_tank_level_; }

  inline bool has_water_tank_level() {
    return (water_tank_level_ptr_ != nullptr);
  }

  inline void set_hmi_highbeam(
      const legion::interface::Vehicle::HMIHighBeamCmdState& hmi_highbeam) {
    hmi_highbeam_ = hmi_highbeam;
    hmi_highbeam_ptr_ = &hmi_highbeam_;
  }

  inline const legion::interface::Vehicle::HMIHighBeamCmdState& hmi_highbeam()
      const {
    return hmi_highbeam_;
  }

  inline legion::interface::Vehicle::HMIHighBeamCmdState*
  mutable_hmi_highbeam() {
    return &hmi_highbeam_;
  }

  inline bool has_hmi_highbeam() { return (hmi_highbeam_ptr_ != nullptr); }

  inline void set_hmi_cleanup(
      const legion::interface::Vehicle::HMICleanUpCmdState& hmi_cleanup) {
    hmi_cleanup_ = hmi_cleanup;
    hmi_cleanup_ptr_ = &hmi_cleanup_;
  }

  inline const legion::interface::Vehicle::HMICleanUpCmdState& hmi_cleanup()
      const {
    return hmi_cleanup_;
  }

  inline legion::interface::Vehicle::HMICleanUpCmdState* mutable_hmi_cleanup() {
    return &hmi_cleanup_;
  }

  inline bool has_hmi_cleanup() { return (hmi_cleanup_ptr_ != nullptr); }

  inline void set_hmi_watering(
      const legion::interface::Vehicle::HMIWateringCmdState& hmi_watering) {
    hmi_watering_ = hmi_watering;
    hmi_watering_ptr_ = &hmi_watering_;
  }

  inline const legion::interface::Vehicle::HMIWateringCmdState& hmi_watering()
      const {
    return hmi_watering_;
  }

  inline legion::interface::Vehicle::HMIWateringCmdState*
  mutable_hmi_watering() {
    return &hmi_watering_;
  }

  inline bool has_hmi_watering() { return (hmi_watering_ptr_ != nullptr); }

  inline void set_bms_charge_status(
      const legion::interface::Vehicle::BMSChargeStatus& bms_charge_status) {
    bms_charge_status_ = bms_charge_status;
    bms_charge_status_ptr_ = &bms_charge_status_;
  }

  inline const legion::interface::Vehicle::BMSChargeStatus& bms_charge_status()
      const {
    return bms_charge_status_;
  }

  inline legion::interface::Vehicle::BMSChargeStatus*
  mutable_bms_charge_status() {
    return &bms_charge_status_;
  }

  inline bool has_bms_charge_status() {
    return (bms_charge_status_ptr_ != nullptr);
  }

  inline void set_emergency_button_status(
      const legion::common::SwitchStatus& emergency_button_status) {
    emergency_button_status_ = emergency_button_status;
    emergency_button_status_ptr_ = &emergency_button_status_;
  }

  inline const legion::common::SwitchStatus& emergency_button_status() const {
    return emergency_button_status_;
  }

  inline legion::common::SwitchStatus* mutable_emergency_button_status() {
    return &emergency_button_status_;
  }

  inline bool has_emergency_button_status() {
    return (emergency_button_status_ptr_ != nullptr);
  }

  inline void set_traction(
      const legion::interface::Vehicle::EquipmentState& traction) {
    traction_ = traction;
    traction_ptr_ = &traction_;
  }

  inline const legion::interface::Vehicle::EquipmentState& traction() const {
    return traction_;
  }

  inline legion::interface::Vehicle::EquipmentState* mutable_traction() {
    return &traction_;
  }

  inline bool has_traction() { return (traction_ptr_ != nullptr); }

  inline void set_abs(const legion::interface::Vehicle::EquipmentState& abs) {
    abs_ = abs;
    abs_ptr_ = &abs_;
  }

  inline const legion::interface::Vehicle::EquipmentState& abs() const {
    return abs_;
  }

  inline legion::interface::Vehicle::EquipmentState* mutable_abs() {
    return &abs_;
  }

  inline bool has_abs() { return (abs_ptr_ != nullptr); }

  inline void set_scs(const legion::interface::Vehicle::EquipmentState& scs) {
    scs_ = scs;
    scs_ptr_ = &scs_;
  }

  inline const legion::interface::Vehicle::EquipmentState& scs() const {
    return scs_;
  }

  inline legion::interface::Vehicle::EquipmentState* mutable_scs() {
    return &scs_;
  }

  inline bool has_scs() { return (scs_ptr_ != nullptr); }

  inline void set_brake_boost(
      const legion::interface::Vehicle::EquipmentState& brake_boost) {
    brake_boost_ = brake_boost;
    brake_boost_ptr_ = &brake_boost_;
  }

  inline const legion::interface::Vehicle::EquipmentState& brake_boost() const {
    return brake_boost_;
  }

  inline legion::interface::Vehicle::EquipmentState* mutable_brake_boost() {
    return &brake_boost_;
  }

  inline bool has_brake_boost() { return (brake_boost_ptr_ != nullptr); }

  inline void set_aux_brakes(
      const legion::interface::Vehicle::EquipmentState& aux_brakes) {
    aux_brakes_ = aux_brakes;
    aux_brakes_ptr_ = &aux_brakes_;
  }

  inline const legion::interface::Vehicle::EquipmentState& aux_brakes() const {
    return aux_brakes_;
  }

  inline legion::interface::Vehicle::EquipmentState* mutable_aux_brakes() {
    return &aux_brakes_;
  }

  inline bool has_aux_brakes() { return (aux_brakes_ptr_ != nullptr); }

  void operator=(const Vehicle& vehicle) { CopyFrom(vehicle); }

  void CopyFrom(const Vehicle& vehicle) {
    header_ = vehicle.header();
    vehicle_type_ = vehicle.vehicle_type();
    vid_ = vehicle.vid();
    vehicle_num_ = vehicle.vehicle_num();
    oid_ = vehicle.oid();
    operation_ = vehicle.operation();
    totalcurrent_ = vehicle.totalcurrent();
    batterysoc_ = vehicle.batterysoc();
    totalvoltage_ = vehicle.totalvoltage();
    recharge_ = vehicle.recharge();
    dcdc_ = vehicle.dcdc();
    resistance_ = vehicle.resistance();
    seats_ = vehicle.seats();
    servicemode_ = vehicle.servicemode();
    seat_belt_ = vehicle.seat_belt();
    engine_status_ = vehicle.engine_status();
    battery_voltage_ = vehicle.battery_voltage();
    battery_ammeter_ = vehicle.battery_ammeter();
    battery_consumption_ = vehicle.battery_consumption();
    battery_probe_ = vehicle.battery_probe();
    battery_temperatures_ = vehicle.battery_temperatures();
    battery_h_tepemperatures_ = vehicle.battery_h_tepemperatures();
    battery_ltepemperatures_ = vehicle.battery_ltepemperatures();
    battery_probe_code_ = vehicle.battery_probe_code();
    battery_h_concentration_ = vehicle.battery_h_concentration();
    battery_c_sensor_code_ = vehicle.battery_c_sensor_code();
    battery_stress_ = vehicle.battery_stress();
    battery_s_sensor_code_ = vehicle.battery_s_sensor_code();
    battery_h_dc_dc_ = vehicle.battery_h_dc_dc();
    battery_capacity_ = vehicle.battery_capacity();
    airconditioning_idx_ = vehicle.airconditioning_idx();
    airconditioning_status_ = vehicle.airconditioning_status();
    airconditioning_model_ = vehicle.airconditioning_model();
    airconditioning_volume_ = vehicle.airconditioning_volume();
    airconditioning_defrost_ = vehicle.airconditioning_defrost();
    door_status_ = vehicle.door_status();
    rsrp_ = vehicle.rsrp();
    sinr_ = vehicle.sinr();
    uspeed_ = vehicle.uspeed();
    dspeed_ = vehicle.dspeed();
    loss_ = vehicle.loss();
    delay_ = vehicle.delay();
    refrigeration_idx_ = vehicle.refrigeration_idx();
    refrigeration_status_ = vehicle.refrigeration_status();
    refrigeration_stemp_ = vehicle.refrigeration_stemp();
    refrigeration_ctemp_ = vehicle.refrigeration_ctemp();
    driving_motor_idx_ = vehicle.driving_motor_idx();
    driving_motor_status_ = vehicle.driving_motor_status();
    driving_motor_ctemp_ = vehicle.driving_motor_ctemp();
    driving_motor_rspeed_ = vehicle.driving_motor_rspeed();
    driving_motor_torque_ = vehicle.driving_motor_torque();
    driving_motor_etemp_ = vehicle.driving_motor_etemp();
    driving_motor_voltage_ = vehicle.driving_motor_voltage();
    driving_motor_ammeter_ = vehicle.driving_motor_ammeter();
    outline_lamp_status_ = vehicle.outline_lamp_status();
    warning_lamp_status_ = vehicle.warning_lamp_status();
    backlight_lamp_status_ = vehicle.backlight_lamp_status();
    brakelamp_lamp_status_ = vehicle.brakelamp_lamp_status();
    left_lamp_status_ = vehicle.left_lamp_status();
    right_lamp_status_ = vehicle.right_lamp_status();
    front_touch_status_ = vehicle.front_touch_status();
    rear_touch_status_ = vehicle.rear_touch_status();
    horn_status_ = vehicle.horn_status();
    length_ = vehicle.length();
    width_ = vehicle.width();
    height_ = vehicle.height();
    cleanup_switch_status_ = vehicle.cleanup_switch_status();
    watering_switch_status_ = vehicle.watering_switch_status();
    trash_can_status_ = vehicle.trash_can_status();
    water_tank_status_ = vehicle.water_tank_status();
    water_add_switch_status_ = vehicle.water_add_switch_status();
    hatch_unlock_switch_status_ = vehicle.hatch_unlock_switch_status();
    water_tank_level_ = vehicle.water_tank_level();
    hmi_highbeam_ = vehicle.hmi_highbeam();
    hmi_cleanup_ = vehicle.hmi_cleanup();
    hmi_watering_ = vehicle.hmi_watering();
    bms_charge_status_ = vehicle.bms_charge_status();
    emergency_button_status_ = vehicle.emergency_button_status();
    traction_ = vehicle.traction();
    abs_ = vehicle.abs();
    scs_ = vehicle.scs();
    brake_boost_ = vehicle.brake_boost();
    aux_brakes_ = vehicle.aux_brakes();
  }

 protected:
  std::shared_ptr<std::mutex> seats_mutex_;
  std::shared_ptr<std::mutex> seat_belt_mutex_;
  std::shared_ptr<std::mutex> battery_temperatures_mutex_;
  std::shared_ptr<std::mutex> door_status_mutex_;
  //消息头
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //车辆类型
  legion::interface::Vehicle::VehicleType vehicle_type_;
  legion::interface::Vehicle::VehicleType* vehicle_type_ptr_ = nullptr;
  //车辆 ID
  std::string vid_;
  std::string* vid_ptr_ = nullptr;
  //车牌号
  std::string vehicle_num_;
  std::string* vehicle_num_ptr_ = nullptr;
  // OBU ID
  std::string oid_;
  std::string* oid_ptr_ = nullptr;
  //运行模式
  legion::interface::Vehicle::OperationStatus operation_;
  legion::interface::Vehicle::OperationStatus* operation_ptr_ = nullptr;
  //总电流， 单位： A  (0~20 000)
  double totalcurrent_;
  double* totalcurrent_ptr_ = nullptr;
  //电池电量值（％）
  double batterysoc_;
  double* batterysoc_ptr_ = nullptr;
  //电池电压（单位：V）
  double totalvoltage_;
  double* totalvoltage_ptr_ = nullptr;
  //续航里程，单位： Km
  double recharge_;
  double* recharge_ptr_ = nullptr;
  // DC-DC 状态
  legion::common::SwitchStatus dcdc_;
  legion::common::SwitchStatus* dcdc_ptr_ = nullptr;
  //绝缘电阻，单位：kΩ(0~60 000)
  uint32_t resistance_;
  uint32_t* resistance_ptr_ = nullptr;
  //座椅状态数组： 0.未坐人， 1.坐人
  std::vector<uint8_t> seats_;
  //车辆运营模式
  legion::interface::Vehicle::ServicemodeStatus servicemode_;
  legion::interface::Vehicle::ServicemodeStatus* servicemode_ptr_ = nullptr;
  //主驾驶位安全带状态
  std::vector<legion::common::SwitchStatus> seat_belt_;
  //发动机状态
  legion::common::EngineStauts engine_status_;
  legion::common::EngineStauts* engine_status_ptr_ = nullptr;
  //电压 (V)
  double battery_voltage_;
  double* battery_voltage_ptr_ = nullptr;
  //电流 (A)
  double battery_ammeter_;
  double* battery_ammeter_ptr_ = nullptr;
  //能耗 (W)
  double battery_consumption_;
  double* battery_consumption_ptr_ = nullptr;
  //探针数
  double battery_probe_;
  double* battery_probe_ptr_ = nullptr;
  //温度数组，无则数组为空
  std::vector<double> battery_temperatures_;
  //最高温度
  double battery_h_tepemperatures_;
  double* battery_h_tepemperatures_ptr_ = nullptr;
  //最低温度
  double battery_ltepemperatures_;
  double* battery_ltepemperatures_ptr_ = nullptr;
  //最高温度探针代号
  double battery_probe_code_;
  double* battery_probe_code_ptr_ = nullptr;
  //最高浓度
  double battery_h_concentration_;
  double* battery_h_concentration_ptr_ = nullptr;
  //最高浓度传感器代号
  double battery_c_sensor_code_;
  double* battery_c_sensor_code_ptr_ = nullptr;
  //最高压力
  double battery_stress_;
  double* battery_stress_ptr_ = nullptr;
  //最高压力传感器代号
  double battery_s_sensor_code_;
  double* battery_s_sensor_code_ptr_ = nullptr;
  //高压 DC/DC 状态
  double battery_h_dc_dc_;
  double* battery_h_dc_dc_ptr_ = nullptr;
  //电池包额定容量(mAh )
  double battery_capacity_;
  double* battery_capacity_ptr_ = nullptr;
  //电压 (V)
  double airconditioning_idx_;
  double* airconditioning_idx_ptr_ = nullptr;
  //电流 (A)
  double airconditioning_status_;
  double* airconditioning_status_ptr_ = nullptr;
  //空调模式状态
  legion::interface::Vehicle::AirConditioningModelStatus airconditioning_model_;
  legion::interface::Vehicle::AirConditioningModelStatus*
      airconditioning_model_ptr_ = nullptr;
  //风量状态
  legion::interface::Vehicle::AirConditioningVolumeStatus
      airconditioning_volume_;
  legion::interface::Vehicle::AirConditioningVolumeStatus*
      airconditioning_volume_ptr_ = nullptr;
  //除霜/除雾模式状态
  legion::common::SwitchStatus airconditioning_defrost_;
  legion::common::SwitchStatus* airconditioning_defrost_ptr_ = nullptr;
  //车门状态
  std::vector<legion::common::DoorStatus> door_status_;
  //接收功率
  double rsrp_;
  double* rsrp_ptr_ = nullptr;
  //信噪比
  double sinr_;
  double* sinr_ptr_ = nullptr;
  //上行速率，单位： Mbit/s
  double uspeed_;
  double* uspeed_ptr_ = nullptr;
  //下行速率， 单位： Mbit/s
  double dspeed_;
  double* dspeed_ptr_ = nullptr;
  //丢包率，单位：%
  double loss_;
  double* loss_ptr_ = nullptr;
  //网络延时，单位： ms
  uint32_t delay_;
  uint32_t* delay_ptr_ = nullptr;
  //序号
  uint8_t refrigeration_idx_;
  uint8_t* refrigeration_idx_ptr_ = nullptr;
  //状态， 0.关， 1.开
  legion::common::SwitchStatus refrigeration_status_;
  legion::common::SwitchStatus* refrigeration_status_ptr_ = nullptr;
  //设定温度
  double refrigeration_stemp_;
  double* refrigeration_stemp_ptr_ = nullptr;
  //实际温度
  double refrigeration_ctemp_;
  double* refrigeration_ctemp_ptr_ = nullptr;
  //电机序号
  uint8_t driving_motor_idx_;
  uint8_t* driving_motor_idx_ptr_ = nullptr;
  //电机状态： 0:异常； 1：正常
  uint8_t driving_motor_status_;
  uint8_t* driving_motor_status_ptr_ = nullptr;
  //控制器温度，单位：℃
  double driving_motor_ctemp_;
  double* driving_motor_ctemp_ptr_ = nullptr;
  //转速 (r/min)
  uint8_t driving_motor_rspeed_;
  uint8_t* driving_motor_rspeed_ptr_ = nullptr;
  //转矩 ( N.m)
  double driving_motor_torque_;
  double* driving_motor_torque_ptr_ = nullptr;
  //电机温度 (℃)
  double driving_motor_etemp_;
  double* driving_motor_etemp_ptr_ = nullptr;
  //电压 (V)
  double driving_motor_voltage_;
  double* driving_motor_voltage_ptr_ = nullptr;
  //电流 (A)
  double driving_motor_ammeter_;
  double* driving_motor_ammeter_ptr_ = nullptr;
  //示廊灯
  legion::common::SwitchStatus outline_lamp_status_;
  legion::common::SwitchStatus* outline_lamp_status_ptr_ = nullptr;
  //双闪灯状态
  legion::common::SwitchStatus warning_lamp_status_;
  legion::common::SwitchStatus* warning_lamp_status_ptr_ = nullptr;
  //照明灯状态
  legion::common::SwitchStatus backlight_lamp_status_;
  legion::common::SwitchStatus* backlight_lamp_status_ptr_ = nullptr;
  //制动灯状态
  legion::common::SwitchStatus brakelamp_lamp_status_;
  legion::common::SwitchStatus* brakelamp_lamp_status_ptr_ = nullptr;
  //左转向灯状态
  legion::common::SwitchStatus left_lamp_status_;
  legion::common::SwitchStatus* left_lamp_status_ptr_ = nullptr;
  //右转向灯状态
  legion::common::SwitchStatus right_lamp_status_;
  legion::common::SwitchStatus* right_lamp_status_ptr_ = nullptr;
  //前防撞条状态
  legion::common::SwitchStatus front_touch_status_;
  legion::common::SwitchStatus* front_touch_status_ptr_ = nullptr;
  //后防撞条状态
  legion::common::SwitchStatus rear_touch_status_;
  legion::common::SwitchStatus* rear_touch_status_ptr_ = nullptr;
  //喇叭状态
  legion::common::SwitchStatus horn_status_;
  legion::common::SwitchStatus* horn_status_ptr_ = nullptr;
  //车长
  int8_t length_;
  int8_t* length_ptr_ = nullptr;
  //车宽
  int8_t width_;
  int8_t* width_ptr_ = nullptr;
  //车高
  int8_t height_;
  int8_t* height_ptr_ = nullptr;
  //清扫功能开关状态
  legion::common::SwitchStatus cleanup_switch_status_;
  legion::common::SwitchStatus* cleanup_switch_status_ptr_ = nullptr;
  //洒水功能开关状态
  legion::common::SwitchStatus watering_switch_status_;
  legion::common::SwitchStatus* watering_switch_status_ptr_ = nullptr;
  //垃圾箱满状态指示
  legion::interface::Vehicle::TrashCanStatus trash_can_status_;
  legion::interface::Vehicle::TrashCanStatus* trash_can_status_ptr_ = nullptr;
  //水箱空状态指示
  legion::interface::Vehicle::WaterTankStatus water_tank_status_;
  legion::interface::Vehicle::WaterTankStatus* water_tank_status_ptr_ = nullptr;
  //加水开关状态指示
  legion::common::SwitchStatus water_add_switch_status_;
  legion::common::SwitchStatus* water_add_switch_status_ptr_ = nullptr;
  //舱盖解锁开关状态指示
  legion::common::SwitchStatus hatch_unlock_switch_status_;
  legion::common::SwitchStatus* hatch_unlock_switch_status_ptr_ = nullptr;
  //水箱液位状态
  double water_tank_level_;
  double* water_tank_level_ptr_ = nullptr;
  // HMI灯光指令
  legion::interface::Vehicle::HMIHighBeamCmdState hmi_highbeam_;
  legion::interface::Vehicle::HMIHighBeamCmdState* hmi_highbeam_ptr_ = nullptr;
  // HMI清扫指令
  legion::interface::Vehicle::HMICleanUpCmdState hmi_cleanup_;
  legion::interface::Vehicle::HMICleanUpCmdState* hmi_cleanup_ptr_ = nullptr;
  // HMI洒水指令
  legion::interface::Vehicle::HMIWateringCmdState hmi_watering_;
  legion::interface::Vehicle::HMIWateringCmdState* hmi_watering_ptr_ = nullptr;
  //充电状态
  legion::interface::Vehicle::BMSChargeStatus bms_charge_status_;
  legion::interface::Vehicle::BMSChargeStatus* bms_charge_status_ptr_ = nullptr;
  //车辆急停按钮状态
  legion::common::SwitchStatus emergency_button_status_;
  legion::common::SwitchStatus* emergency_button_status_ptr_ = nullptr;
  //牵引力控制系统作用状态  0-系统未装备或不可用 1-系统处于关闭状态
  //2-系统处于开启状态，但未触发3-系统被触发，处于作用状态
  legion::interface::Vehicle::EquipmentState traction_;
  legion::interface::Vehicle::EquipmentState* traction_ptr_ = nullptr;
  // ABS作用状态 0-系统未装备或不可用  1-系统处于关闭状态
  // 2-系统处于开启状态，但未触发 3-系统被触发，处于作用状态
  legion::interface::Vehicle::EquipmentState abs_;
  legion::interface::Vehicle::EquipmentState* abs_ptr_ = nullptr;
  //车身稳定控制系统作用状态  0-系统未装备或不可用 1-系统处于关闭状态
  //2-系统处于开启状态，但未触发3-系统被触发，处于作用状态
  legion::interface::Vehicle::EquipmentState scs_;
  legion::interface::Vehicle::EquipmentState* scs_ptr_ = nullptr;
  //刹车助力系统作用状态  0-系统未装备或不可用 1-系统处于关闭状态
  //2-系统处于开启状态，但未触发 3-系统被触发，处于作用状态
  legion::interface::Vehicle::EquipmentState brake_boost_;
  legion::interface::Vehicle::EquipmentState* brake_boost_ptr_ = nullptr;
  //刹车辅助系统作用状态（通常为手刹）  0-未装备或不可用 1-系统处于关闭状态
  //2-系统处于开启状态，但未触发 3-保留
  legion::interface::Vehicle::EquipmentState aux_brakes_;
  legion::interface::Vehicle::EquipmentState* aux_brakes_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion

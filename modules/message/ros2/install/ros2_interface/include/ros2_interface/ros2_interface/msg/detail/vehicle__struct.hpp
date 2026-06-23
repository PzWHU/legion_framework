// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/Vehicle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__Vehicle __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__Vehicle __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vehicle_
{
  using Type = Vehicle_<ContainerAllocator>;

  explicit Vehicle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_type = 0l;
      this->vid = "";
      this->vehicle_num = "";
      this->oid = "";
      this->operation = 0l;
      this->totalcurrent = 0.0;
      this->batterysoc = 0.0;
      this->totalvoltage = 0.0;
      this->recharge = 0.0;
      this->dcdc = 0l;
      this->resistance = 0ul;
      this->servicemode = 0l;
      this->engine_status = 0l;
      this->battery_voltage = 0.0;
      this->battery_ammeter = 0.0;
      this->battery_consumption = 0.0;
      this->battery_probe = 0.0;
      this->battery_h_tepemperatures = 0.0;
      this->battery_ltepemperatures = 0.0;
      this->battery_probe_code = 0.0;
      this->battery_h_concentration = 0.0;
      this->battery_c_sensor_code = 0.0;
      this->battery_stress = 0.0;
      this->battery_s_sensor_code = 0.0;
      this->battery_h_dc_dc = 0.0;
      this->battery_capacity = 0.0;
      this->airconditioning_idx = 0.0;
      this->airconditioning_status = 0.0;
      this->airconditioning_model = 0l;
      this->airconditioning_volume = 0l;
      this->airconditioning_defrost = 0l;
      this->rsrp = 0.0;
      this->sinr = 0.0;
      this->uspeed = 0.0;
      this->dspeed = 0.0;
      this->loss = 0.0;
      this->delay = 0ul;
      this->refrigeration_idx = 0;
      this->refrigeration_status = 0l;
      this->refrigeration_stemp = 0.0;
      this->refrigeration_ctemp = 0.0;
      this->driving_motor_idx = 0;
      this->driving_motor_status = 0;
      this->driving_motor_ctemp = 0.0;
      this->driving_motor_rspeed = 0;
      this->driving_motor_torque = 0.0;
      this->driving_motor_etemp = 0.0;
      this->driving_motor_voltage = 0.0;
      this->driving_motor_ammeter = 0.0;
      this->outline_lamp_status = 0l;
      this->warning_lamp_status = 0l;
      this->backlight_lamp_status = 0l;
      this->brakelamp_lamp_status = 0l;
      this->left_lamp_status = 0l;
      this->right_lamp_status = 0l;
      this->front_touch_status = 0l;
      this->rear_touch_status = 0l;
      this->horn_status = 0l;
      this->length = 0;
      this->width = 0;
      this->height = 0;
      this->cleanup_switch_status = 0l;
      this->watering_switch_status = 0l;
      this->trash_can_status = 0l;
      this->water_tank_status = 0l;
      this->water_add_switch_status = 0l;
      this->hatch_unlock_switch_status = 0l;
      this->water_tank_level = 0.0;
      this->hmi_highbeam = 0l;
      this->hmi_cleanup = 0l;
      this->hmi_watering = 0l;
      this->bms_charge_status = 0l;
      this->emergency_button_status = 0l;
      this->traction = 0l;
      this->abs = 0l;
      this->scs = 0l;
      this->brake_boost = 0l;
      this->aux_brakes = 0l;
    }
  }

  explicit Vehicle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    vid(_alloc),
    vehicle_num(_alloc),
    oid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_type = 0l;
      this->vid = "";
      this->vehicle_num = "";
      this->oid = "";
      this->operation = 0l;
      this->totalcurrent = 0.0;
      this->batterysoc = 0.0;
      this->totalvoltage = 0.0;
      this->recharge = 0.0;
      this->dcdc = 0l;
      this->resistance = 0ul;
      this->servicemode = 0l;
      this->engine_status = 0l;
      this->battery_voltage = 0.0;
      this->battery_ammeter = 0.0;
      this->battery_consumption = 0.0;
      this->battery_probe = 0.0;
      this->battery_h_tepemperatures = 0.0;
      this->battery_ltepemperatures = 0.0;
      this->battery_probe_code = 0.0;
      this->battery_h_concentration = 0.0;
      this->battery_c_sensor_code = 0.0;
      this->battery_stress = 0.0;
      this->battery_s_sensor_code = 0.0;
      this->battery_h_dc_dc = 0.0;
      this->battery_capacity = 0.0;
      this->airconditioning_idx = 0.0;
      this->airconditioning_status = 0.0;
      this->airconditioning_model = 0l;
      this->airconditioning_volume = 0l;
      this->airconditioning_defrost = 0l;
      this->rsrp = 0.0;
      this->sinr = 0.0;
      this->uspeed = 0.0;
      this->dspeed = 0.0;
      this->loss = 0.0;
      this->delay = 0ul;
      this->refrigeration_idx = 0;
      this->refrigeration_status = 0l;
      this->refrigeration_stemp = 0.0;
      this->refrigeration_ctemp = 0.0;
      this->driving_motor_idx = 0;
      this->driving_motor_status = 0;
      this->driving_motor_ctemp = 0.0;
      this->driving_motor_rspeed = 0;
      this->driving_motor_torque = 0.0;
      this->driving_motor_etemp = 0.0;
      this->driving_motor_voltage = 0.0;
      this->driving_motor_ammeter = 0.0;
      this->outline_lamp_status = 0l;
      this->warning_lamp_status = 0l;
      this->backlight_lamp_status = 0l;
      this->brakelamp_lamp_status = 0l;
      this->left_lamp_status = 0l;
      this->right_lamp_status = 0l;
      this->front_touch_status = 0l;
      this->rear_touch_status = 0l;
      this->horn_status = 0l;
      this->length = 0;
      this->width = 0;
      this->height = 0;
      this->cleanup_switch_status = 0l;
      this->watering_switch_status = 0l;
      this->trash_can_status = 0l;
      this->water_tank_status = 0l;
      this->water_add_switch_status = 0l;
      this->hatch_unlock_switch_status = 0l;
      this->water_tank_level = 0.0;
      this->hmi_highbeam = 0l;
      this->hmi_cleanup = 0l;
      this->hmi_watering = 0l;
      this->bms_charge_status = 0l;
      this->emergency_button_status = 0l;
      this->traction = 0l;
      this->abs = 0l;
      this->scs = 0l;
      this->brake_boost = 0l;
      this->aux_brakes = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicle_type_type =
    int32_t;
  _vehicle_type_type vehicle_type;
  using _vid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vid_type vid;
  using _vehicle_num_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vehicle_num_type vehicle_num;
  using _oid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _oid_type oid;
  using _operation_type =
    int32_t;
  _operation_type operation;
  using _totalcurrent_type =
    double;
  _totalcurrent_type totalcurrent;
  using _batterysoc_type =
    double;
  _batterysoc_type batterysoc;
  using _totalvoltage_type =
    double;
  _totalvoltage_type totalvoltage;
  using _recharge_type =
    double;
  _recharge_type recharge;
  using _dcdc_type =
    int32_t;
  _dcdc_type dcdc;
  using _resistance_type =
    uint32_t;
  _resistance_type resistance;
  using _seats_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _seats_type seats;
  using _servicemode_type =
    int32_t;
  _servicemode_type servicemode;
  using _seat_belt_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _seat_belt_type seat_belt;
  using _engine_status_type =
    int32_t;
  _engine_status_type engine_status;
  using _battery_voltage_type =
    double;
  _battery_voltage_type battery_voltage;
  using _battery_ammeter_type =
    double;
  _battery_ammeter_type battery_ammeter;
  using _battery_consumption_type =
    double;
  _battery_consumption_type battery_consumption;
  using _battery_probe_type =
    double;
  _battery_probe_type battery_probe;
  using _battery_temperatures_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _battery_temperatures_type battery_temperatures;
  using _battery_h_tepemperatures_type =
    double;
  _battery_h_tepemperatures_type battery_h_tepemperatures;
  using _battery_ltepemperatures_type =
    double;
  _battery_ltepemperatures_type battery_ltepemperatures;
  using _battery_probe_code_type =
    double;
  _battery_probe_code_type battery_probe_code;
  using _battery_h_concentration_type =
    double;
  _battery_h_concentration_type battery_h_concentration;
  using _battery_c_sensor_code_type =
    double;
  _battery_c_sensor_code_type battery_c_sensor_code;
  using _battery_stress_type =
    double;
  _battery_stress_type battery_stress;
  using _battery_s_sensor_code_type =
    double;
  _battery_s_sensor_code_type battery_s_sensor_code;
  using _battery_h_dc_dc_type =
    double;
  _battery_h_dc_dc_type battery_h_dc_dc;
  using _battery_capacity_type =
    double;
  _battery_capacity_type battery_capacity;
  using _airconditioning_idx_type =
    double;
  _airconditioning_idx_type airconditioning_idx;
  using _airconditioning_status_type =
    double;
  _airconditioning_status_type airconditioning_status;
  using _airconditioning_model_type =
    int32_t;
  _airconditioning_model_type airconditioning_model;
  using _airconditioning_volume_type =
    int32_t;
  _airconditioning_volume_type airconditioning_volume;
  using _airconditioning_defrost_type =
    int32_t;
  _airconditioning_defrost_type airconditioning_defrost;
  using _door_status_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _door_status_type door_status;
  using _rsrp_type =
    double;
  _rsrp_type rsrp;
  using _sinr_type =
    double;
  _sinr_type sinr;
  using _uspeed_type =
    double;
  _uspeed_type uspeed;
  using _dspeed_type =
    double;
  _dspeed_type dspeed;
  using _loss_type =
    double;
  _loss_type loss;
  using _delay_type =
    uint32_t;
  _delay_type delay;
  using _refrigeration_idx_type =
    uint8_t;
  _refrigeration_idx_type refrigeration_idx;
  using _refrigeration_status_type =
    int32_t;
  _refrigeration_status_type refrigeration_status;
  using _refrigeration_stemp_type =
    double;
  _refrigeration_stemp_type refrigeration_stemp;
  using _refrigeration_ctemp_type =
    double;
  _refrigeration_ctemp_type refrigeration_ctemp;
  using _driving_motor_idx_type =
    uint8_t;
  _driving_motor_idx_type driving_motor_idx;
  using _driving_motor_status_type =
    uint8_t;
  _driving_motor_status_type driving_motor_status;
  using _driving_motor_ctemp_type =
    double;
  _driving_motor_ctemp_type driving_motor_ctemp;
  using _driving_motor_rspeed_type =
    uint8_t;
  _driving_motor_rspeed_type driving_motor_rspeed;
  using _driving_motor_torque_type =
    double;
  _driving_motor_torque_type driving_motor_torque;
  using _driving_motor_etemp_type =
    double;
  _driving_motor_etemp_type driving_motor_etemp;
  using _driving_motor_voltage_type =
    double;
  _driving_motor_voltage_type driving_motor_voltage;
  using _driving_motor_ammeter_type =
    double;
  _driving_motor_ammeter_type driving_motor_ammeter;
  using _outline_lamp_status_type =
    int32_t;
  _outline_lamp_status_type outline_lamp_status;
  using _warning_lamp_status_type =
    int32_t;
  _warning_lamp_status_type warning_lamp_status;
  using _backlight_lamp_status_type =
    int32_t;
  _backlight_lamp_status_type backlight_lamp_status;
  using _brakelamp_lamp_status_type =
    int32_t;
  _brakelamp_lamp_status_type brakelamp_lamp_status;
  using _left_lamp_status_type =
    int32_t;
  _left_lamp_status_type left_lamp_status;
  using _right_lamp_status_type =
    int32_t;
  _right_lamp_status_type right_lamp_status;
  using _front_touch_status_type =
    int32_t;
  _front_touch_status_type front_touch_status;
  using _rear_touch_status_type =
    int32_t;
  _rear_touch_status_type rear_touch_status;
  using _horn_status_type =
    int32_t;
  _horn_status_type horn_status;
  using _length_type =
    int8_t;
  _length_type length;
  using _width_type =
    int8_t;
  _width_type width;
  using _height_type =
    int8_t;
  _height_type height;
  using _cleanup_switch_status_type =
    int32_t;
  _cleanup_switch_status_type cleanup_switch_status;
  using _watering_switch_status_type =
    int32_t;
  _watering_switch_status_type watering_switch_status;
  using _trash_can_status_type =
    int32_t;
  _trash_can_status_type trash_can_status;
  using _water_tank_status_type =
    int32_t;
  _water_tank_status_type water_tank_status;
  using _water_add_switch_status_type =
    int32_t;
  _water_add_switch_status_type water_add_switch_status;
  using _hatch_unlock_switch_status_type =
    int32_t;
  _hatch_unlock_switch_status_type hatch_unlock_switch_status;
  using _water_tank_level_type =
    double;
  _water_tank_level_type water_tank_level;
  using _hmi_highbeam_type =
    int32_t;
  _hmi_highbeam_type hmi_highbeam;
  using _hmi_cleanup_type =
    int32_t;
  _hmi_cleanup_type hmi_cleanup;
  using _hmi_watering_type =
    int32_t;
  _hmi_watering_type hmi_watering;
  using _bms_charge_status_type =
    int32_t;
  _bms_charge_status_type bms_charge_status;
  using _emergency_button_status_type =
    int32_t;
  _emergency_button_status_type emergency_button_status;
  using _traction_type =
    int32_t;
  _traction_type traction;
  using _abs_type =
    int32_t;
  _abs_type abs;
  using _scs_type =
    int32_t;
  _scs_type scs;
  using _brake_boost_type =
    int32_t;
  _brake_boost_type brake_boost;
  using _aux_brakes_type =
    int32_t;
  _aux_brakes_type aux_brakes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicle_type(
    const int32_t & _arg)
  {
    this->vehicle_type = _arg;
    return *this;
  }
  Type & set__vid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vid = _arg;
    return *this;
  }
  Type & set__vehicle_num(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vehicle_num = _arg;
    return *this;
  }
  Type & set__oid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->oid = _arg;
    return *this;
  }
  Type & set__operation(
    const int32_t & _arg)
  {
    this->operation = _arg;
    return *this;
  }
  Type & set__totalcurrent(
    const double & _arg)
  {
    this->totalcurrent = _arg;
    return *this;
  }
  Type & set__batterysoc(
    const double & _arg)
  {
    this->batterysoc = _arg;
    return *this;
  }
  Type & set__totalvoltage(
    const double & _arg)
  {
    this->totalvoltage = _arg;
    return *this;
  }
  Type & set__recharge(
    const double & _arg)
  {
    this->recharge = _arg;
    return *this;
  }
  Type & set__dcdc(
    const int32_t & _arg)
  {
    this->dcdc = _arg;
    return *this;
  }
  Type & set__resistance(
    const uint32_t & _arg)
  {
    this->resistance = _arg;
    return *this;
  }
  Type & set__seats(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->seats = _arg;
    return *this;
  }
  Type & set__servicemode(
    const int32_t & _arg)
  {
    this->servicemode = _arg;
    return *this;
  }
  Type & set__seat_belt(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->seat_belt = _arg;
    return *this;
  }
  Type & set__engine_status(
    const int32_t & _arg)
  {
    this->engine_status = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const double & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__battery_ammeter(
    const double & _arg)
  {
    this->battery_ammeter = _arg;
    return *this;
  }
  Type & set__battery_consumption(
    const double & _arg)
  {
    this->battery_consumption = _arg;
    return *this;
  }
  Type & set__battery_probe(
    const double & _arg)
  {
    this->battery_probe = _arg;
    return *this;
  }
  Type & set__battery_temperatures(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->battery_temperatures = _arg;
    return *this;
  }
  Type & set__battery_h_tepemperatures(
    const double & _arg)
  {
    this->battery_h_tepemperatures = _arg;
    return *this;
  }
  Type & set__battery_ltepemperatures(
    const double & _arg)
  {
    this->battery_ltepemperatures = _arg;
    return *this;
  }
  Type & set__battery_probe_code(
    const double & _arg)
  {
    this->battery_probe_code = _arg;
    return *this;
  }
  Type & set__battery_h_concentration(
    const double & _arg)
  {
    this->battery_h_concentration = _arg;
    return *this;
  }
  Type & set__battery_c_sensor_code(
    const double & _arg)
  {
    this->battery_c_sensor_code = _arg;
    return *this;
  }
  Type & set__battery_stress(
    const double & _arg)
  {
    this->battery_stress = _arg;
    return *this;
  }
  Type & set__battery_s_sensor_code(
    const double & _arg)
  {
    this->battery_s_sensor_code = _arg;
    return *this;
  }
  Type & set__battery_h_dc_dc(
    const double & _arg)
  {
    this->battery_h_dc_dc = _arg;
    return *this;
  }
  Type & set__battery_capacity(
    const double & _arg)
  {
    this->battery_capacity = _arg;
    return *this;
  }
  Type & set__airconditioning_idx(
    const double & _arg)
  {
    this->airconditioning_idx = _arg;
    return *this;
  }
  Type & set__airconditioning_status(
    const double & _arg)
  {
    this->airconditioning_status = _arg;
    return *this;
  }
  Type & set__airconditioning_model(
    const int32_t & _arg)
  {
    this->airconditioning_model = _arg;
    return *this;
  }
  Type & set__airconditioning_volume(
    const int32_t & _arg)
  {
    this->airconditioning_volume = _arg;
    return *this;
  }
  Type & set__airconditioning_defrost(
    const int32_t & _arg)
  {
    this->airconditioning_defrost = _arg;
    return *this;
  }
  Type & set__door_status(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->door_status = _arg;
    return *this;
  }
  Type & set__rsrp(
    const double & _arg)
  {
    this->rsrp = _arg;
    return *this;
  }
  Type & set__sinr(
    const double & _arg)
  {
    this->sinr = _arg;
    return *this;
  }
  Type & set__uspeed(
    const double & _arg)
  {
    this->uspeed = _arg;
    return *this;
  }
  Type & set__dspeed(
    const double & _arg)
  {
    this->dspeed = _arg;
    return *this;
  }
  Type & set__loss(
    const double & _arg)
  {
    this->loss = _arg;
    return *this;
  }
  Type & set__delay(
    const uint32_t & _arg)
  {
    this->delay = _arg;
    return *this;
  }
  Type & set__refrigeration_idx(
    const uint8_t & _arg)
  {
    this->refrigeration_idx = _arg;
    return *this;
  }
  Type & set__refrigeration_status(
    const int32_t & _arg)
  {
    this->refrigeration_status = _arg;
    return *this;
  }
  Type & set__refrigeration_stemp(
    const double & _arg)
  {
    this->refrigeration_stemp = _arg;
    return *this;
  }
  Type & set__refrigeration_ctemp(
    const double & _arg)
  {
    this->refrigeration_ctemp = _arg;
    return *this;
  }
  Type & set__driving_motor_idx(
    const uint8_t & _arg)
  {
    this->driving_motor_idx = _arg;
    return *this;
  }
  Type & set__driving_motor_status(
    const uint8_t & _arg)
  {
    this->driving_motor_status = _arg;
    return *this;
  }
  Type & set__driving_motor_ctemp(
    const double & _arg)
  {
    this->driving_motor_ctemp = _arg;
    return *this;
  }
  Type & set__driving_motor_rspeed(
    const uint8_t & _arg)
  {
    this->driving_motor_rspeed = _arg;
    return *this;
  }
  Type & set__driving_motor_torque(
    const double & _arg)
  {
    this->driving_motor_torque = _arg;
    return *this;
  }
  Type & set__driving_motor_etemp(
    const double & _arg)
  {
    this->driving_motor_etemp = _arg;
    return *this;
  }
  Type & set__driving_motor_voltage(
    const double & _arg)
  {
    this->driving_motor_voltage = _arg;
    return *this;
  }
  Type & set__driving_motor_ammeter(
    const double & _arg)
  {
    this->driving_motor_ammeter = _arg;
    return *this;
  }
  Type & set__outline_lamp_status(
    const int32_t & _arg)
  {
    this->outline_lamp_status = _arg;
    return *this;
  }
  Type & set__warning_lamp_status(
    const int32_t & _arg)
  {
    this->warning_lamp_status = _arg;
    return *this;
  }
  Type & set__backlight_lamp_status(
    const int32_t & _arg)
  {
    this->backlight_lamp_status = _arg;
    return *this;
  }
  Type & set__brakelamp_lamp_status(
    const int32_t & _arg)
  {
    this->brakelamp_lamp_status = _arg;
    return *this;
  }
  Type & set__left_lamp_status(
    const int32_t & _arg)
  {
    this->left_lamp_status = _arg;
    return *this;
  }
  Type & set__right_lamp_status(
    const int32_t & _arg)
  {
    this->right_lamp_status = _arg;
    return *this;
  }
  Type & set__front_touch_status(
    const int32_t & _arg)
  {
    this->front_touch_status = _arg;
    return *this;
  }
  Type & set__rear_touch_status(
    const int32_t & _arg)
  {
    this->rear_touch_status = _arg;
    return *this;
  }
  Type & set__horn_status(
    const int32_t & _arg)
  {
    this->horn_status = _arg;
    return *this;
  }
  Type & set__length(
    const int8_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const int8_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int8_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__cleanup_switch_status(
    const int32_t & _arg)
  {
    this->cleanup_switch_status = _arg;
    return *this;
  }
  Type & set__watering_switch_status(
    const int32_t & _arg)
  {
    this->watering_switch_status = _arg;
    return *this;
  }
  Type & set__trash_can_status(
    const int32_t & _arg)
  {
    this->trash_can_status = _arg;
    return *this;
  }
  Type & set__water_tank_status(
    const int32_t & _arg)
  {
    this->water_tank_status = _arg;
    return *this;
  }
  Type & set__water_add_switch_status(
    const int32_t & _arg)
  {
    this->water_add_switch_status = _arg;
    return *this;
  }
  Type & set__hatch_unlock_switch_status(
    const int32_t & _arg)
  {
    this->hatch_unlock_switch_status = _arg;
    return *this;
  }
  Type & set__water_tank_level(
    const double & _arg)
  {
    this->water_tank_level = _arg;
    return *this;
  }
  Type & set__hmi_highbeam(
    const int32_t & _arg)
  {
    this->hmi_highbeam = _arg;
    return *this;
  }
  Type & set__hmi_cleanup(
    const int32_t & _arg)
  {
    this->hmi_cleanup = _arg;
    return *this;
  }
  Type & set__hmi_watering(
    const int32_t & _arg)
  {
    this->hmi_watering = _arg;
    return *this;
  }
  Type & set__bms_charge_status(
    const int32_t & _arg)
  {
    this->bms_charge_status = _arg;
    return *this;
  }
  Type & set__emergency_button_status(
    const int32_t & _arg)
  {
    this->emergency_button_status = _arg;
    return *this;
  }
  Type & set__traction(
    const int32_t & _arg)
  {
    this->traction = _arg;
    return *this;
  }
  Type & set__abs(
    const int32_t & _arg)
  {
    this->abs = _arg;
    return *this;
  }
  Type & set__scs(
    const int32_t & _arg)
  {
    this->scs = _arg;
    return *this;
  }
  Type & set__brake_boost(
    const int32_t & _arg)
  {
    this->brake_boost = _arg;
    return *this;
  }
  Type & set__aux_brakes(
    const int32_t & _arg)
  {
    this->aux_brakes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::Vehicle_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::Vehicle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::Vehicle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::Vehicle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Vehicle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Vehicle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::Vehicle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::Vehicle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::Vehicle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::Vehicle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__Vehicle
    std::shared_ptr<ros2_interface::msg::Vehicle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__Vehicle
    std::shared_ptr<ros2_interface::msg::Vehicle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vehicle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicle_type != other.vehicle_type) {
      return false;
    }
    if (this->vid != other.vid) {
      return false;
    }
    if (this->vehicle_num != other.vehicle_num) {
      return false;
    }
    if (this->oid != other.oid) {
      return false;
    }
    if (this->operation != other.operation) {
      return false;
    }
    if (this->totalcurrent != other.totalcurrent) {
      return false;
    }
    if (this->batterysoc != other.batterysoc) {
      return false;
    }
    if (this->totalvoltage != other.totalvoltage) {
      return false;
    }
    if (this->recharge != other.recharge) {
      return false;
    }
    if (this->dcdc != other.dcdc) {
      return false;
    }
    if (this->resistance != other.resistance) {
      return false;
    }
    if (this->seats != other.seats) {
      return false;
    }
    if (this->servicemode != other.servicemode) {
      return false;
    }
    if (this->seat_belt != other.seat_belt) {
      return false;
    }
    if (this->engine_status != other.engine_status) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->battery_ammeter != other.battery_ammeter) {
      return false;
    }
    if (this->battery_consumption != other.battery_consumption) {
      return false;
    }
    if (this->battery_probe != other.battery_probe) {
      return false;
    }
    if (this->battery_temperatures != other.battery_temperatures) {
      return false;
    }
    if (this->battery_h_tepemperatures != other.battery_h_tepemperatures) {
      return false;
    }
    if (this->battery_ltepemperatures != other.battery_ltepemperatures) {
      return false;
    }
    if (this->battery_probe_code != other.battery_probe_code) {
      return false;
    }
    if (this->battery_h_concentration != other.battery_h_concentration) {
      return false;
    }
    if (this->battery_c_sensor_code != other.battery_c_sensor_code) {
      return false;
    }
    if (this->battery_stress != other.battery_stress) {
      return false;
    }
    if (this->battery_s_sensor_code != other.battery_s_sensor_code) {
      return false;
    }
    if (this->battery_h_dc_dc != other.battery_h_dc_dc) {
      return false;
    }
    if (this->battery_capacity != other.battery_capacity) {
      return false;
    }
    if (this->airconditioning_idx != other.airconditioning_idx) {
      return false;
    }
    if (this->airconditioning_status != other.airconditioning_status) {
      return false;
    }
    if (this->airconditioning_model != other.airconditioning_model) {
      return false;
    }
    if (this->airconditioning_volume != other.airconditioning_volume) {
      return false;
    }
    if (this->airconditioning_defrost != other.airconditioning_defrost) {
      return false;
    }
    if (this->door_status != other.door_status) {
      return false;
    }
    if (this->rsrp != other.rsrp) {
      return false;
    }
    if (this->sinr != other.sinr) {
      return false;
    }
    if (this->uspeed != other.uspeed) {
      return false;
    }
    if (this->dspeed != other.dspeed) {
      return false;
    }
    if (this->loss != other.loss) {
      return false;
    }
    if (this->delay != other.delay) {
      return false;
    }
    if (this->refrigeration_idx != other.refrigeration_idx) {
      return false;
    }
    if (this->refrigeration_status != other.refrigeration_status) {
      return false;
    }
    if (this->refrigeration_stemp != other.refrigeration_stemp) {
      return false;
    }
    if (this->refrigeration_ctemp != other.refrigeration_ctemp) {
      return false;
    }
    if (this->driving_motor_idx != other.driving_motor_idx) {
      return false;
    }
    if (this->driving_motor_status != other.driving_motor_status) {
      return false;
    }
    if (this->driving_motor_ctemp != other.driving_motor_ctemp) {
      return false;
    }
    if (this->driving_motor_rspeed != other.driving_motor_rspeed) {
      return false;
    }
    if (this->driving_motor_torque != other.driving_motor_torque) {
      return false;
    }
    if (this->driving_motor_etemp != other.driving_motor_etemp) {
      return false;
    }
    if (this->driving_motor_voltage != other.driving_motor_voltage) {
      return false;
    }
    if (this->driving_motor_ammeter != other.driving_motor_ammeter) {
      return false;
    }
    if (this->outline_lamp_status != other.outline_lamp_status) {
      return false;
    }
    if (this->warning_lamp_status != other.warning_lamp_status) {
      return false;
    }
    if (this->backlight_lamp_status != other.backlight_lamp_status) {
      return false;
    }
    if (this->brakelamp_lamp_status != other.brakelamp_lamp_status) {
      return false;
    }
    if (this->left_lamp_status != other.left_lamp_status) {
      return false;
    }
    if (this->right_lamp_status != other.right_lamp_status) {
      return false;
    }
    if (this->front_touch_status != other.front_touch_status) {
      return false;
    }
    if (this->rear_touch_status != other.rear_touch_status) {
      return false;
    }
    if (this->horn_status != other.horn_status) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->cleanup_switch_status != other.cleanup_switch_status) {
      return false;
    }
    if (this->watering_switch_status != other.watering_switch_status) {
      return false;
    }
    if (this->trash_can_status != other.trash_can_status) {
      return false;
    }
    if (this->water_tank_status != other.water_tank_status) {
      return false;
    }
    if (this->water_add_switch_status != other.water_add_switch_status) {
      return false;
    }
    if (this->hatch_unlock_switch_status != other.hatch_unlock_switch_status) {
      return false;
    }
    if (this->water_tank_level != other.water_tank_level) {
      return false;
    }
    if (this->hmi_highbeam != other.hmi_highbeam) {
      return false;
    }
    if (this->hmi_cleanup != other.hmi_cleanup) {
      return false;
    }
    if (this->hmi_watering != other.hmi_watering) {
      return false;
    }
    if (this->bms_charge_status != other.bms_charge_status) {
      return false;
    }
    if (this->emergency_button_status != other.emergency_button_status) {
      return false;
    }
    if (this->traction != other.traction) {
      return false;
    }
    if (this->abs != other.abs) {
      return false;
    }
    if (this->scs != other.scs) {
      return false;
    }
    if (this->brake_boost != other.brake_boost) {
      return false;
    }
    if (this->aux_brakes != other.aux_brakes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vehicle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vehicle_

// alias to use template instance with default allocator
using Vehicle =
  ros2_interface::msg::Vehicle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE__STRUCT_HPP_

%module fastdds_vehicle 
%{
#include "FastddsDataReader.hpp"
#include "FastddsDataWriter.hpp"
#include "VehiclePubSubTypes.h"
#include "HeaderPubSubTypes.h"
#include "TimePubSubTypes.h"
%}
%include "std_string.i"
%include "std_vector.i"
 typedef unsigned int uint32_t;
 typedef unsigned int uint8_t;
 typedef int int8_t;



template <class CustomTopicDataType>
class FastddsDataWriter
{
public:
    typedef typename CustomTopicDataType::type type;

    FastddsDataWriter(
        uint32_t did,
        const std::string &topic_name);
    ~FastddsDataWriter();

    bool write_sample(
        type& msg);
};

template <class CustomTopicDataType>
class FastddsDataReader
{
public:
    typedef typename CustomTopicDataType::type type;

    FastddsDataReader(
        uint32_t did,
        const std::string &topic_name);
    ~FastddsDataReader();

    bool wait_for_sample(
        uint32_t seconds);
    bool take_sample(
        type& msg);
};
namespace std {
    %template(Vectorint) vector<int>;
    %template(VectorSwitchStatus) vector<ros2_interface::msg::SwitchStatus>;
    %template(Vectordouble) vector<double>;
    %template(VectorDoorStatus) vector<ros2_interface::msg::DoorStatus>;
}
%module ros2_interface
%module msg
namespace ros2_interface{
namespace msg{
    class Vehicle
    {
    public:
        Vehicle();
        ~Vehicle();

        void header(
                const ros2_interface::msg::Header &_header);
        const ros2_interface::msg::Header &header() const;
        void vehicle_type(
            int _vehicle_type);
        int vehicle_type() const;
        void vid(
           const std::string &_vid);
        std::string vid() const;
        void vehicle_num(
           const std::string &_vehicle_num);
        std::string vehicle_num() const;
        void oid(
           const std::string &_oid);
        std::string oid() const;
        void operation(
            int _operation);
        int operation() const;
        void totalcurrent(
            double _totalcurrent);
        double totalcurrent() const;
        void batterysoc(
            double _batterysoc);
        double batterysoc() const;
        void totalvoltage(
            double _totalvoltage);
        double totalvoltage() const;
        void recharge(
            double _recharge);
        double recharge() const;
        void dcdc(
            int _dcdc);
        int dcdc() const;
        void resistance(
            int _resistance);
        int resistance() const;
        void seats(
            const std::vector<int> &_seats);
        const std::vector<int>& seats() const;
        void servicemode(
            int _servicemode);
        int servicemode() const;
        void seat_belt(
            const std::vector<int> &_seat_belt);
        const std::vector<int>& seat_belt() const;
        void engine_status(
            int _engine_status);
        int engine_status() const;
        void battery_voltage(
            double _battery_voltage);
        double battery_voltage() const;
        void battery_ammeter(
            double _battery_ammeter);
        double battery_ammeter() const;
        void battery_consumption(
            double _battery_consumption);
        double battery_consumption() const;
        void battery_probe(
            double _battery_probe);
        double battery_probe() const;
        void battery_temperatures(
            const std::vector<double> &_battery_temperatures);
        const std::vector<double>& battery_temperatures() const;
        void battery_h_tepemperatures(
            double _battery_h_tepemperatures);
        double battery_h_tepemperatures() const;
        void battery_ltepemperatures(
            double _battery_ltepemperatures);
        double battery_ltepemperatures() const;
        void battery_probe_code(
            double _battery_probe_code);
        double battery_probe_code() const;
        void battery_h_concentration(
            double _battery_h_concentration);
        double battery_h_concentration() const;
        void battery_c_sensor_code(
            double _battery_c_sensor_code);
        double battery_c_sensor_code() const;
        void battery_stress(
            double _battery_stress);
        double battery_stress() const;
        void battery_s_sensor_code(
            double _battery_s_sensor_code);
        double battery_s_sensor_code() const;
        void battery_h_dc_dc(
            double _battery_h_dc_dc);
        double battery_h_dc_dc() const;
        void battery_capacity(
            double _battery_capacity);
        double battery_capacity() const;
        void airconditioning_idx(
            double _airconditioning_idx);
        double airconditioning_idx() const;
        void airconditioning_status(
            double _airconditioning_status);
        double airconditioning_status() const;
        void airconditioning_model(
            int _airconditioning_model);
        int airconditioning_model() const;
        void airconditioning_volume(
            int _airconditioning_volume);
        int airconditioning_volume() const;
        void airconditioning_defrost(
            int _airconditioning_defrost);
        int airconditioning_defrost() const;
        void door_status(
            const std::vector<int> &_door_status);
        const std::vector<int>& door_status() const;
        void rsrp(
            double _rsrp);
        double rsrp() const;
        void sinr(
            double _sinr);
        double sinr() const;
        void uspeed(
            double _uspeed);
        double uspeed() const;
        void dspeed(
            double _dspeed);
        double dspeed() const;
        void loss(
            double _loss);
        double loss() const;
        void delay(
            int _delay);
        int delay() const;
        void refrigeration_idx(
            int _refrigeration_idx);
        int refrigeration_idx() const;
        void refrigeration_status(
            int _refrigeration_status);
        int refrigeration_status() const;
        void refrigeration_stemp(
            double _refrigeration_stemp);
        double refrigeration_stemp() const;
        void refrigeration_ctemp(
            double _refrigeration_ctemp);
        double refrigeration_ctemp() const;
        void driving_motor_idx(
            int _driving_motor_idx);
        int driving_motor_idx() const;
        void driving_motor_status(
            int _driving_motor_status);
        int driving_motor_status() const;
        void driving_motor_ctemp(
            double _driving_motor_ctemp);
        double driving_motor_ctemp() const;
        void driving_motor_rspeed(
            int _driving_motor_rspeed);
        int driving_motor_rspeed() const;
        void driving_motor_torque(
            double _driving_motor_torque);
        double driving_motor_torque() const;
        void driving_motor_etemp(
            double _driving_motor_etemp);
        double driving_motor_etemp() const;
        void driving_motor_voltage(
            double _driving_motor_voltage);
        double driving_motor_voltage() const;
        void driving_motor_ammeter(
            double _driving_motor_ammeter);
        double driving_motor_ammeter() const;
        void outline_lamp_status(
            int _outline_lamp_status);
        int outline_lamp_status() const;
        void warning_lamp_status(
            int _warning_lamp_status);
        int warning_lamp_status() const;
        void backlight_lamp_status(
            int _backlight_lamp_status);
        int backlight_lamp_status() const;
        void brakelamp_lamp_status(
            int _brakelamp_lamp_status);
        int brakelamp_lamp_status() const;
        void left_lamp_status(
            int _left_lamp_status);
        int left_lamp_status() const;
        void right_lamp_status(
            int _right_lamp_status);
        int right_lamp_status() const;
        void front_touch_status(
            int _front_touch_status);
        int front_touch_status() const;
        void rear_touch_status(
            int _rear_touch_status);
        int rear_touch_status() const;
        void horn_status(
            int _horn_status);
        int horn_status() const;
        void length(
            int _length);
        int length() const;
        void width(
            int _width);
        int width() const;
        void height(
            int _height);
        int height() const;
        void cleanup_switch_status(
            int _cleanup_switch_status);
        int cleanup_switch_status() const;
        void watering_switch_status(
            int _watering_switch_status);
        int watering_switch_status() const;
        void trash_can_status(
            int _trash_can_status);
        int trash_can_status() const;
        void water_tank_status(
            int _water_tank_status);
        int water_tank_status() const;
        void water_add_switch_status(
            int _water_add_switch_status);
        int water_add_switch_status() const;
        void hatch_unlock_switch_status(
            int _hatch_unlock_switch_status);
        int hatch_unlock_switch_status() const;
        void water_tank_level(
            double _water_tank_level);
        double water_tank_level() const;
        void hmi_highbeam(
            int _hmi_highbeam);
        int hmi_highbeam() const;
        void hmi_cleanup(
            int _hmi_cleanup);
        int hmi_cleanup() const;
        void hmi_watering(
            int _hmi_watering);
        int hmi_watering() const;
        void bms_charge_status(
            int _bms_charge_status);
        int bms_charge_status() const;
        void emergency_button_status(
            int _emergency_button_status);
        int emergency_button_status() const;
        void traction(
            int _traction);
        int traction() const;
        void abs(
            int _abs);
        int abs() const;
        void scs(
            int _scs);
        int scs() const;
        void brake_boost(
            int _brake_boost);
        int brake_boost() const;
        void aux_brakes(
            int _aux_brakes);
        int aux_brakes() const;
    };

    class Header
    {
    public:
        Header();
        ~Header();

        void seq(
            int _seq);
        int seq() const;
        void stamp(
                const ros2_interface::msg::Time &_stamp);
        const ros2_interface::msg::Time &stamp() const;
        void frame_id(
           const std::string &_frame_id);
        std::string frame_id() const;
    };

    class Time
    {
    public:
        Time();
        ~Time();

        void sec(
            int _sec);
        int sec() const;
        void nsec(
            int _nsec);
        int nsec() const;
    };



    class VehiclePubSubType
    {
    public:
        typedef Vehicle type;

        VehiclePubSubType();
        ~VehiclePubSubType();
    };

    class HeaderPubSubType
    {
    public:
        typedef Header type;

        HeaderPubSubType();
        ~HeaderPubSubType();
    };

    class TimePubSubType
    {
    public:
        typedef Time type;

        TimePubSubType();
        ~TimePubSubType();
    };

}
}


%template(VehicleDataWriter) FastddsDataWriter<ros2_interface::msg::VehiclePubSubType>;
%template(VehicleDataReader) FastddsDataReader<ros2_interface::msg::VehiclePubSubType>;

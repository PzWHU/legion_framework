%module fastdds_vehicle_task 
%{
#include "FastddsDataReader.hpp"
#include "FastddsDataWriter.hpp"
#include "HeaderPubSubTypes.h"
#include "VehicleTaskPubSubTypes.h"
#include "TimePubSubTypes.h"
%}
%include "std_string.i"
 typedef unsigned int uint32_t;



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
}
%module ros2_interface
%module msg
namespace ros2_interface{
namespace msg{
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

    class VehicleTask
    {
    public:
        VehicleTask();
        ~VehicleTask();

        void header(
                const ros2_interface::msg::Header &_header);
        const ros2_interface::msg::Header &header() const;
        void clean_up_ctrl(
            int _clean_up_ctrl);
        int clean_up_ctrl() const;
        void watering_ctrl(
            int _watering_ctrl);
        int watering_ctrl() const;
        void water_add_ctrl(
            int _water_add_ctrl);
        int water_add_ctrl() const;
        void hatch_unlock_ctrl(
            int _hatch_unlock_ctrl);
        int hatch_unlock_ctrl() const;
        void decorative_light_ctrl(
            int _decorative_light_ctrl);
        int decorative_light_ctrl() const;
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



    class HeaderPubSubType
    {
    public:
        typedef Header type;

        HeaderPubSubType();
        ~HeaderPubSubType();
    };

    class VehicleTaskPubSubType
    {
    public:
        typedef VehicleTask type;

        VehicleTaskPubSubType();
        ~VehicleTaskPubSubType();
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


%template(VehicleTaskDataWriter) FastddsDataWriter<ros2_interface::msg::VehicleTaskPubSubType>;
%template(VehicleTaskDataReader) FastddsDataReader<ros2_interface::msg::VehicleTaskPubSubType>;

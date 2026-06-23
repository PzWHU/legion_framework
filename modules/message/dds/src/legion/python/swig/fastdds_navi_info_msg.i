%module fastdds_navi_info_msg 
%{
#include "FastddsDataReader.hpp"
#include "FastddsDataWriter.hpp"
#include "HeaderPubSubTypes.h"
#include "TimePubSubTypes.h"
#include "NaviInfoMsgPubSubTypes.h"
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

    class NaviInfoMsg
    {
    public:
        NaviInfoMsg();
        ~NaviInfoMsg();

        void header(
                const ros2_interface::msg::Header &_header);
        const ros2_interface::msg::Header &header() const;
        void lane_type(
            int _lane_type);
        int lane_type() const;
        void lane_count(
            int _lane_count);
        int lane_count() const;
        void lane_index(
            int _lane_index);
        int lane_index() const;
        void lane_target(
            int _lane_target);
        int lane_target() const;
        void road_speed(
            float _road_speed);
        float road_speed() const;
        void turning_speed(
            float _turning_speed);
        float turning_speed() const;
        void turning_deriction(
            float _turning_deriction);
        float turning_deriction() const;
        void distance_to_cross(
            float _distance_to_cross);
        float distance_to_cross() const;
        void traffic_light_stop(
            bool _traffic_light_stop);
        bool traffic_light_stop() const;
        void crossing_behavior(
            int _crossing_behavior);
        int crossing_behavior() const;
        void distance_to_stop(
            float _distance_to_stop);
        float distance_to_stop() const;
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

    class NaviInfoMsgPubSubType
    {
    public:
        typedef NaviInfoMsg type;

        NaviInfoMsgPubSubType();
        ~NaviInfoMsgPubSubType();
    };

}
}


%template(NaviInfoMsgDataWriter) FastddsDataWriter<ros2_interface::msg::NaviInfoMsgPubSubType>;
%template(NaviInfoMsgDataReader) FastddsDataReader<ros2_interface::msg::NaviInfoMsgPubSubType>;

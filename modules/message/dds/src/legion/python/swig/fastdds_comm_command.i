%module fastdds_comm_command 
%{
#include "FastddsDataReader.hpp"
#include "FastddsDataWriter.hpp"
#include "HeaderPubSubTypes.h"
#include "TimePubSubTypes.h"
#include "CommandPubSubTypes.h"
#include "CommCommandPubSubTypes.h"
%}
%include "std_string.i"
%include "std_vector.i"
 typedef unsigned int uint32_t;
 typedef int int8_t;
 typedef int int32_t;



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
    %template(VectorCommand) vector<ros2_interface::msg::Command>;
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

    class Command
    {
    public:
        Command();
        ~Command();

        void target_module(
           const std::string &_target_module);
        std::string target_module() const;
        void target_id(
            int _target_id);
        int target_id() const;
        void target_switch(
            int _target_switch);
        int target_switch() const;
    };

    class CommCommand
    {
    public:
        CommCommand();
        ~CommCommand();

        void header(
                const ros2_interface::msg::Header &_header);
        const ros2_interface::msg::Header &header() const;
        void name(
           const std::string &_name);
        std::string name() const;
        void self_id(
            int _self_id);
        int self_id() const;
        void commands(
            const std::vector<ros2_interface::msg::Command> &_commands);
        const std::vector<ros2_interface::msg::Command>& commands() const;
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

    class CommandPubSubType
    {
    public:
        typedef Command type;

        CommandPubSubType();
        ~CommandPubSubType();
    };

    class CommCommandPubSubType
    {
    public:
        typedef CommCommand type;

        CommCommandPubSubType();
        ~CommCommandPubSubType();
    };

}
}


%template(CommCommandDataWriter) FastddsDataWriter<ros2_interface::msg::CommCommandPubSubType>;
%template(CommCommandDataReader) FastddsDataReader<ros2_interface::msg::CommCommandPubSubType>;

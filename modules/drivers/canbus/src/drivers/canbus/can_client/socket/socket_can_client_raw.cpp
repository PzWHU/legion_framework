/**
 * @file    socket_can_client_raw.cpp
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you legion
 */
#include <iostream>
#include "modules/drivers/canbus/src/drivers/canbus/can_client/socket/socket_can_client_raw.h"
#include "modules/common/status/status.h"
#include "modules/common/logging/logging.h"

namespace legion
{
namespace driver
{
namespace drivers
{
namespace can
{
using namespace legion::common;
//using legion::common::Status::ErrorCode;

bool SocketCanClientRaw::Init(const CANCardParameter &parameter)
{
#if CANFD_ENABLE
    canfd_enable = true;
#endif
    port_ = parameter.can_channel_id_;

    whitelist_size = parameter.whitelist.size();
    if (whitelist_size > MAX_WHITELIST_SIZE) {
        AERROR << "can whitelist size is too large, max: " << MAX_WHITELIST_SIZE;
        whitelist_size = MAX_WHITELIST_SIZE;
    }

    for (uint32_t i = 0; i < whitelist_size; ++i) {
        can_id_pass[i] = parameter.whitelist[i];
        AINFO << "CAN id pass filter: " << std::hex << can_id_pass[i];
    }

    return true;
}

SocketCanClientRaw::~SocketCanClientRaw()
{
    if (dev_handler_)
    {
        Stop();
    }
}

bool SocketCanClientRaw::RcvFiltersSet(const uint32_t *CanIdArray, const uint32_t &ArraySize, CanFilterType FilterType)
{
    if (dev_handler_ <= 0) // canfd就不用解释了…
        return false;

    if (NULL == CanIdArray)
    {
        setsockopt(dev_handler_, SOL_CAN_RAW, CAN_RAW_FILTER, NULL, 0); // 不需要接收任何报文
        return true;
    }

    struct can_filter rfilter[ArraySize];
    bzero(rfilter, sizeof(rfilter));

    for (uint i = 0; i < ArraySize; ++i)
    {
        if (CanIdArray[i])
        {
            if (FilterType & CAN_FILTER_PASS)
            {
                rfilter[i].can_id = CanIdArray[i];
            }
            else
            {
                rfilter[i].can_id = (CanIdArray[i] | CAN_INV_FILTER);
            }
            rfilter[i].can_mask = CAN_EFF_MASK; // 这个掩码怎么设置看自己需求
        }
        else
        {
            return false;
        }
    }
    // 重点！！！很多文章没提到这一点，过滤器反转时需要设置，使各过滤器之间由逻辑或变成逻辑与关系，
    // 否则设置的反转过滤器因为相互矛盾导致不起作用
    // 简单举例解释，过滤器A接收除0x123之外的报文，过滤器B接收除0x124之外的报文，
    // 那么0x123虽然被过滤器A过滤了，但是会被过滤器B通过，同理0x124会被过滤器A通过，所以实际上不起作用
    // 下面的设置就是让过滤器之间join起来，只有符合所有过滤器的规则才会被通过
    if (FilterType & CAN_FILTER_REJECT)
    {
        int join_filter = 1;
        setsockopt(dev_handler_, SOL_CAN_RAW, CAN_RAW_JOIN_FILTERS, &join_filter, sizeof(join_filter));
    }
    setsockopt(dev_handler_, SOL_CAN_RAW, CAN_RAW_FILTER, &rfilter, sizeof(rfilter));
    return true;
}

Status::ErrorCode SocketCanClientRaw::Start()
{
    if (is_started_)
    {
        return Status::ErrorCode::OK;
    }

    // open device
    // guss net is the device minor number, if one card is 0,1
    // if more than one card, when install driver u can specify the minior id
    // int32_t ret = canOpen(net, pCtx->mode, txbufsize, rxbufsize, 0, 0,
    // &dev_handler_);
    if (port_ > MAX_CAN_PORT || port_ < 0)
    {
        stringstream sstream;
        sstream << "can port number [" << port_ << "] is out of the range [0,"
                << MAX_CAN_PORT << "]";
        AERROR << sstream.str();
        return Status::ErrorCode::CAN_CLIENT_ERROR_BASE;
    }

    dev_handler_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if (dev_handler_ < 0)
    {
        stringstream sstream;
        sstream << "open device error code [" << dev_handler_ << "]: ";
        AERROR << sstream.str();
        return Status::ErrorCode::CAN_CLIENT_ERROR_BASE;
    }

    // init config and state
    // 1. set receive message_id filter, ie white list
    int ret = 0;
    
#if MDCLOG_ENABLE
    struct can_filter filter[2048];
	for (unsigned int i = 0; i < sizeof(filter)/sizeof(filter[0]); ++i)
	{
		filter[i].can_id = 0x000 + i;
		filter[i].can_mask = CAN_SFF_MASK;
	}

	ret = setsockopt(dev_handler_, SOL_CAN_RAW, CAN_RAW_FILTER, &filter,
						 sizeof(filter));
   if (ret < 0)
	{
		stringstream sstream;
		sstream << "add receive msg id filter error code: " << ret;
	    AERROR << sstream.str();
		return Status::ErrorCode::CAN_CLIENT_ERROR_BASE;
	}

#endif
    // filter过滤 - 使用Init中设置的成员变量白名单
    if (whitelist_size > 0) {
        if (RcvFiltersSet(can_id_pass, whitelist_size, CAN_FILTER_PASS) == false)
        {
            AERROR << "socket can filter setting failed.";
        }
    } else {
        AINFO << "No CAN whitelist configured, receiving all frames.";
    }

    // 2. enable reception of can frames.
    int enable = 1;
    ret = ::setsockopt(dev_handler_, SOL_CAN_RAW, CAN_RAW_FD_FRAMES, &enable,
                       sizeof(enable));
    if (ret < 0)
    {
        stringstream sstream;
        sstream << "enable reception of can frame error code: " << ret;
        AERROR << sstream.str();
        return Status::ErrorCode::CAN_CLIENT_ERROR_BASE;
    }
    
    struct ifreq ifr;
    std::string can_name("can" + std::to_string(port_));
    std::strncpy(ifr.ifr_name, can_name.c_str(), IFNAMSIZ);

    if (ioctl(dev_handler_, SIOCGIFINDEX, &ifr) < 0)
    {
        AERROR << "ioctl error";
        return Status::ErrorCode::CAN_CLIENT_ERROR_BASE;
    }
    
    // bind socket to network interface
    struct sockaddr_can addr;
    memset(&addr, 0, sizeof(addr));
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    ret = ::bind(dev_handler_, reinterpret_cast<struct sockaddr *>(&addr),
                 sizeof(addr));
    
    if (ret < 0)
    {
        stringstream sstream;
        sstream << "bind socket to network interface error code: " << ret;
        AERROR << sstream.str();
        return Status::ErrorCode::CAN_CLIENT_ERROR_BASE;
    }

    is_started_ = true;
    return Status::ErrorCode::OK;
}

void SocketCanClientRaw::Stop()
{
    if (is_started_)
    {
        is_started_ = false;

        int ret = close(dev_handler_);
        if (ret < 0)
        {
            stringstream sstream;
            sstream << "close error code:" << ret << ", " << GetErrorString(ret);
            AERROR << sstream.str();
        }
        else
        {
            stringstream sstream;
            sstream << "close socket can ok. port:" << port_;
            AINFO << sstream.str();
        }
    }
}

void GetGearData(uint8_t *data)
{
    uint8_t t;
    long long value;
    Byte to_set(data + 17);
    t = to_set.get_byte(2, 3);
    value = (long long)t;
    AERROR << "write: gear " << value;
}

// Synchronous transmission of CAN messages
Status::ErrorCode SocketCanClientRaw::Send(const std::vector<CanFrame> &frames,
                                   int32_t *const frame_num)
{
    if(frame_num == NULL)
    {
        AERROR << "SocketCanClientRaw::Send() frame_num is equal to NULL";
        return Status::ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
    }

    if(frames.size() != static_cast<size_t>(*frame_num))
    {
        AERROR << "SocketCanClientRaw::Send() rames.size() != static_cast<size_t>(*frame_num)";
        return Status::ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
    }

    if (!is_started_)
    {
        // AERROR << "Nvidia can client has not been initiated! Please init first!";
        return Status::ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
    }
    for (size_t i = 0; i < frames.size() && i < MAX_CAN_SEND_FRAME_LEN; ++i)
    {
        // if (frames[i].len != CANBUS_MESSAGE_LENGTH)
        // {
        //    stringstream sstream;
        //    sstream << "frames[" << i << "].len = " << frames[i].len
        //             << ", which is not equal to can message data length ("
        //             << CANBUS_MESSAGE_LENGTH << ").";
        //    AERROR << sstream.str();
        //     return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
        // }
        int ret = 0;
        if (canfd_enable)
        {
            send_fd_frames_[i].can_id = frames[i].id;
            send_fd_frames_[i].len = frames[i].len;
            std::memcpy(send_fd_frames_[i].data, frames[i].data, frames[i].len);
            // Synchronous transmission of CAN messages
            ret = write(dev_handler_, &send_fd_frames_[i], sizeof(send_fd_frames_[i]));
            // GetGearData(send_fd_frames_[i].data);
        }
        else
        {
            send_frames_[i].can_id = frames[i].id;
            send_frames_[i].can_dlc = frames[i].len;
            std::memcpy(send_frames_[i].data, frames[i].data, frames[i].len);

            // Synchronous transmission of CAN messages
            ret = write(dev_handler_, &send_frames_[i], sizeof(send_frames_[i]));
        }

        // if (send_frames_[i].can_id == 0x212)
        // if (port_ == 4)
        // {   std::cout<<"+++++++++++++++++++++++++++++++++"<<std::endl;
        //     stringstream sstream;
        //     for (uint8_t j = 0; j < send_frames_[i].can_dlc; ++j)
        //     {
        //         sstream << Byte::byte_to_hex(send_frames_[i].data[j]) << " ";
        //     }
        //     printf("%02X %s\n", send_frames_[i].can_id, sstream.str().c_str());
        //     AINFO << "send_time==" << TimeTool::Now2Ms();
        // }

        if (ret <= 0)
        { // TODOpallas报错注释
            // stringstream sstream;
            // sstream << "send message failed, error code: " << ret;
            // AERROR << sstream.str();
            return Status::ErrorCode::CAN_CLIENT_ERROR_BASE;
        }
    }

    return Status::ErrorCode::OK;
}

// buf size must be 8 bytes, every time, we receive only one frame
Status::ErrorCode SocketCanClientRaw::Receive(std::vector<CanFrame> *const frames,
                                      int32_t *const frame_num)
{
    // TODOpallas报错注释
    if (!is_started_)
    {
        // AERROR << "Nvidia can client is not init! Please init first!";
        return Status::ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
    }

    if (*frame_num > MAX_CAN_RECV_FRAME_LEN || *frame_num < 0)
    {
        stringstream sstream;
        sstream << "recv can frame num not in range[0, " << MAX_CAN_RECV_FRAME_LEN
                << "], frame_num:" << *frame_num;
        AERROR << sstream.str();
    // TODO(Authors): check the difference of returning frame_num/error_code
        return Status::ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
    }

    for (int32_t i = 0; i < *frame_num && i < MAX_CAN_RECV_FRAME_LEN; ++i)
    {
        int ret = 0;
        if (canfd_enable)
        {
            ret = read(dev_handler_, &recv_fd_frames_[i], sizeof(recv_fd_frames_[i]));
        }
        else
        {
            ret = read(dev_handler_, &recv_frames_[i], sizeof(recv_frames_[i]));
        }

        if (ret < 0)
        {
            stringstream sstream;
            sstream << "receive message failed, error code: " << ret;
            AERROR << sstream.str();
            return Status::ErrorCode::CAN_CLIENT_ERROR_BASE;
        }

        // if (recv_frames_[i].can_dlc != CANBUS_MESSAGE_LENGTH)
        // {
        //     stringstream sstream;
        //     AERROR <<  << "recv_frames_[" << i
        //             << "].can_dlc = " << recv_frames_[i].can_dlc
        //             << ", which is not equal to can message data length ("
        //             << CANBUS_MESSAGE_LENGTH << ").";
        //     AERROR << sstream.str();
        //     return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
        // }

        // if (recv_frames_[i].can_id == 0x212)
        // if (port_ == 0)
        // {   std::cout<<"-------------------------------"<<std::endl;
        //     stringstream sstream;
        //     // std::stringstream output_stream("");
        //     for (uint8_t j = 0; j < recv_frames_[i].can_dlc; ++j)
        //     {
        //         sstream << Byte::byte_to_hex(recv_frames_[i].data[j]) << " ";
        //     }
        //     printf("%02X %s\n", recv_frames_[i].can_id, sstream.str().c_str());
        //     AINFO << "recv_time==" << TimeTool::Now2Ms();
        // }

        CanFrame cf;
        if (canfd_enable)
        {
            cf.id = recv_fd_frames_[i].can_id;
            cf.len = recv_fd_frames_[i].len;
            legion::interface::Time now = TimeTool::Now2TmeStruct();
            cf.timestamp.tv_sec = now.sec();
            cf.timestamp.tv_usec = now.nsec() * 1e-3;
            std::memcpy(cf.data, recv_fd_frames_[i].data, recv_fd_frames_[i].len);
            frames->push_back(cf);
        }
        else
        {
            cf.id = recv_frames_[i].can_id;
            cf.len = recv_frames_[i].can_dlc;
            legion::interface::Time now = TimeTool::Now2TmeStruct();
            cf.timestamp.tv_sec = now.sec();
            cf.timestamp.tv_usec = now.nsec() * 1e-3;
            std::memcpy(cf.data, recv_frames_[i].data, recv_frames_[i].can_dlc);
            frames->push_back(cf);
        }
    }
    return Status::ErrorCode::OK;
}

std::string SocketCanClientRaw::GetErrorString(const int32_t /*status*/)
{
    return "";
}

}  // namespace can
}  // namespace radar
}  // namespace driver
}  // namespace legion


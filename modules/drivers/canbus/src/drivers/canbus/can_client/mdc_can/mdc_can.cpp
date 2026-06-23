/**
 * @file    socket_can_client_raw.cpp
 * @author  jiang <jiangchengjie@indrv.cn>
 * @date    2019-04-24
 * @version 1.0.0
 * @par     Copyright(c)
 *          hy
 *          thank you legion
 */

#include "modules/drivers/canbus/src/drivers/canbus/can_client/mdc_can/mdc_can.h"
#if MDC_CAN_ENABLE
#include <iostream>
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
using legion::common::ErrorCode;

bool MdcCan::Init(const CANCardParameter &parameter)
{
    port_ = parameter.can_channel_id_;
    can_rx_service_interface_proxy_ = nullptr;
    return true;
}

MdcCan::~MdcCan()
{
    Stop();
}

ErrorCode MdcCan::Start()
{
    if (is_started_)
    {
        return ErrorCode::OK;
    }

    can_tx_service_interface_skeleton_ = new CanTxServiceInterfaceSkeleton(InstanceIdentifier(port_), MethodCallProcessingMode::kPoll);
    CanRxServiceInterfaceProxy::StartFindService(
        [this](ServiceHandleContainer<CanRxServiceInterfaceProxy::HandleType> handles, FindServiceHandle handler) {
            MdcCan::CanRxMsgServiceAvailabilityCallback(std::move(handles), handler);
        },
        port_);
    can_tx_service_interface_skeleton_->OfferService();
    is_started_ = true;

    mdc_send_thread_.reset(new std::thread([this] { Run(); }));
    if (mdc_send_thread_ == nullptr)
    {
        Logging::LogError("Unable to create mdc_send_thread_ thread.");
        return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
    }
    return ErrorCode::OK;
}

void MdcCan::Stop()
{
    if (is_started_)
    {
        delete can_tx_service_interface_skeleton_;
    }
}

void MdcCan::Run()
{
    while(1)
    {
    	{
        	std::lock_guard<std::mutex> lock(can_tx_mutex_);
        	PublishMdcCanData(send_can_frame_);
        	send_can_frame_.clear();
    	}

        std::this_thread::sleep_for(std::chrono::microseconds(10000));
    }
}

// Synchronous transmission of CAN messages
ErrorCode MdcCan::Send(const std::vector<CanFrame> &frames,
                       int32_t *const frame_num)
{
    if (is_started_ == false)
        return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
    if (frame_num == NULL)
    {
        Logging::LogError("MdcCan::Send() frame_num is equal to NULL");
        return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
    }

    if (frames.size() != static_cast<size_t>(*frame_num))
    {
        Logging::LogError("MdcCan::Send() rames.size() != static_cast<size_t>(*frame_num)");
        return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
    }

    if (!is_started_)
    {
        Logging::LogError("MDC can client has not been initiated! Please init first!");
        return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
    }
//
   std::lock_guard<std::mutex> lock(can_tx_mutex_);
   for(auto it : frames)
   {
   	   send_can_frame_.push_back(it);
   }

    //send_can_frame_.insert(send_can_frame_.begin(),frames.begin(),frames.end());

//      for (size_t i = 0; i < frames.size() && i < MAX_CAN_SEND_FRAME_LEN; ++i)
//      {
// //         if (frames[i].len != CANBUS_MESSAGE_LENGTH)
// //         {
// //                stringstream sstream;
// //             sstream<<"frames[" << i << "].len = " << frames[i].len
// //                     << ", which is not equal to can message data length ("
// //                     << CANBUS_MESSAGE_LENGTH << ").";
// //           Logging::LogError(sstream.str());
// //             return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
// //         }

//         CanFrame frame = frames[i];
//         PublishMdcCanData(frame);
//     }

    return ErrorCode::OK;
}

// buf size must be 8 bytes, every time, we receive only one frame
ErrorCode MdcCan::Receive(std::vector<CanFrame> *const frames,
                          int32_t *const frame_num)
{
    if (!is_started_)
    {
        Logging::LogError("mdc can client is not init! Please init first!");
        return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
    }

    if (*frame_num > MAX_CAN_RECV_FRAME_LEN || *frame_num < 0)
    {
        stringstream sstream;
        sstream << "recv can frame num not in range[0, " << MAX_CAN_RECV_FRAME_LEN
                << "], frame_num:" << *frame_num;
        Logging::LogError(sstream.str());
        // TODO(Authors): check the difference of returning frame_num/error_code
        return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
    }

    std::lock_guard<std::mutex> lock(can_rx_mutex_);

    if (recv_recv_frames_.size() > 0)
    {
        frames->assign(recv_recv_frames_.begin(), recv_recv_frames_.end());
        recv_recv_frames_.clear();
    }

    return ErrorCode::OK;
}

std::string MdcCan::GetErrorString(const int32_t /*status*/)
{
    return "";
}

void MdcCan::CanRxMsgServiceAvailabilityCallback(ServiceHandleContainer<CanRxServiceInterfaceProxy::HandleType> handles,
                                                 FindServiceHandle handler)
{
    if (handles.size() == 0)
    {
        return;
    }
    for (auto it : handles)
    {
        std::lock_guard<std::mutex> lock(can_rx_service_interface_proxy_mutex_);
        can_rx_service_interface_proxy_ = std::make_shared<CanRxServiceInterfaceProxy>(it);

        if (nullptr != can_rx_service_interface_proxy_)
        {
            //Subscribe Event
            if (!can_rx_service_interface_proxy_->CanDataRxEvent.IsSubscribed())
            {
                // subscribe to event
                can_rx_service_interface_proxy_->CanDataRxEvent.Subscribe(EventCacheUpdatePolicy::kNewestN, 1);
                std::cout << "subscribe can success" << std::endl;
                // Register event receive callback
                can_rx_service_interface_proxy_->CanDataRxEvent.SetReceiveHandler([this]() { MdcCan::CanRxMsgReceived(); });
            }
        }
    }
}

void MdcCan::CanRxMsgReceived()
{
    can_rx_service_interface_proxy_->CanDataRxEvent.Update();

    // Get RadarData Cache
    const auto &sample = can_rx_service_interface_proxy_->CanDataRxEvent.GetCachedSamples();
    auto msg = *sample.begin();

    std::lock_guard<std::mutex> lock(can_rx_mutex_);
    for (auto it : msg->elementList)
    {
        CanFrame can_frame;
        can_frame.id = it.canId;
        can_frame.len = it.validLen;

		// std::cout<<hex<<"id: "<<(int)can_frame.id;
		// std::cout<<" len: "<<(int)can_frame.len;

		for(int i = 0 ; i < can_frame.len;i++)
		{
			can_frame.data[i] = it.data[i];
			//std::cout<<hex<<" "<<(int)can_frame.data[i] ;
		}

        recv_recv_frames_.push_back(can_frame);
    }

    can_rx_service_interface_proxy_->CanDataRxEvent.Cleanup();
}

 void MdcCan::PublishMdcCanData(CanFrame frame)
 {
 //    auto msg = can_tx_service_interface_skeleton_->CanDataTxEvent.Allocate();
 //
 //    msg->seq = 0x0;
 //    Element element;
 //
 //    element.canId = frame.id;
 //    element.validLen = frame.len;
 //
 //    std::cout<<hex<<"id: "<<(int)element.canId<<endl;
 //
 //    element.timeStamp.second = 0;
 //    element.timeStamp.nsecond = 0;
 //    for(int i = 0; i < element.validLen; i++)
 //    {
 //          element.data.push_back(frame.data[i]);
 //    }
 //
 //    msg->elementList.push_back(element);
 //
 //    Element element_temp;
 //    element_temp.canId = 0xFFFFFFFF;
 //
 //    element_temp.validLen = 8;
 //
 //    element_temp.timeStamp.second = 0;
 //    element_temp.timeStamp.nsecond = 0;
 //    for(int i = 0; i < element_temp.validLen; i++)
 //    {
 //          element_temp.data.push_back(0);
 //    }
 //    for(int i = 0; i< 39; i++)
 //         msg->elementList.push_back(element_temp);
 //
 //    can_tx_service_interface_skeleton_->CanDataTxEvent.Send(std::move(msg));
     if (nullptr != can_rx_service_interface_proxy_)
     {
        CanBusDataParam canbus_data_param;
        canbus_data_param.seq = 0;
        Element element;

        element.canId = frame.id;
        element.validLen = frame.len;

        element.timeStamp.second = 0;
        element.timeStamp.nsecond = 0;

        for(int i = 0; i < element.validLen; i++)
        {
            element.data.push_back(frame.data[i]);
        }


        canbus_data_param.elementList.push_back(element);

        Element element_temp;
        element_temp.canId = 0xFFFFFFFF;

        element_temp.validLen = 8;

        element_temp.timeStamp.second = 0;
        element_temp.timeStamp.nsecond = 0;
        for(int i = 0; i < element_temp.validLen; i++)
        {
            element_temp.data.push_back(0);
        }
        for(int i = 0; i< 39; i++)
            canbus_data_param.elementList.push_back(element_temp);

        auto result = can_rx_service_interface_proxy_ -> CanDataSetMethod(canbus_data_param);

//        if(result.get().result == CanSetDataResult::ERROR)
//        {
//            Logging::LogError(MDC CAN send error");
//        }
     }
 }

void MdcCan::PublishMdcCanData(const std::vector<CanFrame> &frames)
{
    if(frames.size() == 0)
        return;

    if (nullptr != can_rx_service_interface_proxy_)
    {
        CanBusDataParam canbus_data_param;
        canbus_data_param.seq = 0;

        for(auto it : frames)
        {
            Element element;

            element.canId = it.id;
            element.validLen = it.len;

//            std::cout<<hex<<"id: "<<(int)element.canId<<endl;
//            std::cout<<hex<<"len: "<<(int)element.validLen<<endl;
            element.timeStamp.second = 0;
            element.timeStamp.nsecond = 0;

            int64_t current_timestamp = ToolTime::now_to_ms();
            int64_t time_diff = current_timestamp - last_pub_can_timestamp_;

            // if(last_pub_can_timestamp_ && time_diff > 50.0)
            // {
            //     stringstream sstream;
            //     sstream << "1.mdc.send_can_frame #   ";
            // }

            for(int i = 0; i < element.validLen; i++)
            {
                element.data.push_back(it.data[i]);
                // if (last_pub_can_timestamp_ && time_diff > 50.0)
                // {
                //     if (element.canId == 0x219)
                //     {
                //       sstream << Byte::byte_to_hex(it.data[i]) << " ";
                //     }
                   
                // }                
            }
            if(last_pub_can_timestamp_ && time_diff > 50.0)
            {
                stringstream sstream;
                sstream << "1.mdc.send_can_frame #   ";
                for(int i = 0; i < element.validLen; i++)
                {
                    if (last_pub_can_timestamp_ && time_diff > 50.0)
                    {
                        if (element.canId == 0x219)
                        {
                         sstream << Byte::byte_to_hex(it.data[i]) << " ";
                        }
                    
                    }                
                }

                Logging::LogInfo(sstream.str());
            }

            last_pub_can_timestamp_ = current_timestamp;



            
            canbus_data_param.elementList.push_back(element);
        }

        Element element_temp;
        element_temp.canId = 0xFFFFFFFF;

        element_temp.validLen = 8;

        element_temp.timeStamp.second = 0;
        element_temp.timeStamp.nsecond = 0;
        
        for(int i = 0; i < element_temp.validLen; i++)
        {
            element_temp.data.push_back(0);
        }

        int length = 40 - (int)canbus_data_param.elementList.size();
        for(int i = 0; i< length; i++)
            canbus_data_param.elementList.push_back(element_temp);

        auto result = can_rx_service_interface_proxy_ -> CanDataSetMethod(canbus_data_param);

        

//        if(result.get().result == CanSetDataResult::ERROR)
//        {
//            Logging::LogError("MDC CAN send error");
//        }
    }
}

//template <class T>
//bool DetectionTimeout(const T &output,const std::chrono::second &span)
//{
//
//}

} // namespace can
} // namespace drivers
} // namespace driver
} // namespace legion
#endif

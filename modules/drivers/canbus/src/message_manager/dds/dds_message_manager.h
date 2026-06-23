/**
 * @file    dds_message_manager.h
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#if DDS_ENABLE

#include <mutex>
#include <thread>

#include "fastrtps/utils/IPLocator.h"
#include "fastdds/dds/topic/TypeSupport.hpp"
#include "fastdds/dds/publisher/Publisher.hpp"
#include "fastdds/dds/publisher/DataWriter.hpp"
#include "fastdds/dds/subscriber/DataReader.hpp"
#include "fastdds/dds/subscriber/SampleInfo.hpp"
#include "fastdds/dds/subscriber/Subscriber.hpp"
#include "fastrtps/xmlparser/XMLProfileManager.h"
#include "fastdds/dds/core/policy/QosPolicies.hpp"
#include "fastdds/dds/domain/DomainParticipant.hpp"
#include "fastrtps/attributes/PublisherAttributes.h"
#include "fastdds/dds/publisher/qos/PublisherQos.hpp"
#include "fastrtps/attributes/SubscriberAttributes.h"
#include "fastdds/dds/publisher/qos/DataWriterQos.hpp"
#include "fastrtps/attributes/ParticipantAttributes.h"
#include "fastdds/dds/publisher/DataWriterListener.hpp"
#include "fastdds/dds/subscriber/qos/DataReaderQos.hpp"
#include "fastdds/dds/subscriber/DataReaderListener.hpp"
#include "fastdds/dds/domain/DomainParticipantFactory.hpp"
#include "fastdds/rtps/transport/TCPv4TransportDescriptor.h"
#include "fastdds/rtps/transport/UDPv4TransportDescriptor.h"
#include "fastdds/rtps/transport/shared_mem/SharedMemTransportDescriptor.h"

#include "dds_interface/FaultsPubSubTypes.h"
#include "dds_interface/ChassisPubSubTypes.h"
#include "dds_interface/VehiclePubSubTypes.h"
#include "dds_interface/WheelInfoPubSubTypes.h"
#include "dds_interface/VehicleTaskPubSubTypes.h"
#include "dds_interface/ControlCommandPubSubTypes.h"

#include "modules/common/json/json.hpp"
#include "message_manager/message_manager.h"
#include "modules/common/base_message/message.pb.h"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion {
namespace drivers {
using json = nlohmann::json;

enum TcpMode {
  TCP_LAN_SERVER = 0,
  TCP_WAN_SERVER = 1,
  TCP_CLIENT = 2,
};
/**
 * @class DdsMessageManager
 * @brief DDS消息管理器.
 */
template <typename T>
class DdsMessageManager : public MessageManager<T>,
                          public eprosima::fastdds::dds::DataReaderListener,
                          public eprosima::fastdds::dds::DataWriterListener {
 public:
  DdsMessageManager() = default;
  virtual ~DdsMessageManager();

  /**
   * @brief     初始化。
   * @param[in] obu_url DDS组播信息.
   * @return    void.
   */
  void Init(T* t) override;

  /**
   * @brief     WheelInfo消息发送.
   * @param[in] wheel_info
   * @return    void.
   */
  void PublishWheelInfo(legion::interface::WheelInfo msg) override;

  /**
   * @brief     Chassis消息发送.
   * @param[in] chassis
   * @return    void.
   */
  void PublishChassis(legion::interface::Chassis msg) override;

  /**
   * @brief     Vehicle消息发送.
   * @param[in] vehicle
   * @return    void.
   */
  void PublishVehicle(legion::interface::Vehicle msg) override;

  /**
   * @brief     Faults消息发送.
   * @param[in] faults
   * @return    void.
   */
  void PublishFaults(legion::interface::Faults msg) override;

 protected:
  T* instance_;
  bool is_init_;

  std::unique_ptr<std::thread> handle_message_thread_;

 protected:
  std::mutex r_mutex_;

  /**
   * @brief     线程运行函数.
   * @return    void.
   */
  void Run();

  void on_data_available(eprosima::fastdds::dds::DataReader* reader) override;

  void on_publication_matched(
      eprosima::fastdds::dds::DataWriter* writer,
      const eprosima::fastdds::dds::PublicationMatchedStatus& info) override;

  void on_offered_deadline_missed(
      eprosima::fastdds::dds::DataWriter* writer,
      const eprosima::fastdds::dds::OfferedDeadlineMissedStatus& status)
      override;

  void on_liveliness_lost(
      eprosima::fastdds::dds::DataWriter* writer,
      const eprosima::fastdds::dds::LivelinessLostStatus& status) override;

  void on_offered_incompatible_qos(
      eprosima::fastdds::dds::DataWriter* writer,
      const eprosima::fastdds::dds::OfferedIncompatibleQosStatus& status)
      override;

  void on_requested_deadline_missed(
      eprosima::fastdds::dds::DataReader* reader,
      const eprosima::fastrtps::RequestedDeadlineMissedStatus& status) override;

  void on_liveliness_changed(
      eprosima::fastdds::dds::DataReader* reader,
      const eprosima::fastrtps::LivelinessChangedStatus& status) override;

  void on_requested_incompatible_qos(
      eprosima::fastdds::dds::DataReader* reader,
      const eprosima::fastdds::dds::RequestedIncompatibleQosStatus& status)
      override;

  std::string qos_policy_id_to_string(
      eprosima::fastdds::dds::QosPolicyId_t policy_id);
  /**
   * @brief     线程结束函数.
   * @return    void.
   */
  void Stop();

  void HandleControlCommandMessage(
      const ros2_interface::msg::ControlCommand* msg);

  void HandleVehicleTaskMessage(const ros2_interface::msg::VehicleTask* msg);

  void HandleTeleopControlCommandMessage(
      const ros2_interface::msg::ControlCommand* msg);

 private:
  json dds_json_;
  eprosima::fastdds::dds::DomainParticipant* participant_;
  eprosima::fastdds::dds::Publisher* publisher_;
  eprosima::fastdds::dds::Topic* topic_;

  eprosima::fastdds::dds::DataWriter* wheel_info_writer_;
  eprosima::fastdds::dds::TypeSupport wheel_info_type_;
  eprosima::fastdds::dds::DataWriter* chassis_writer_;
  eprosima::fastdds::dds::TypeSupport chassis_type_;
  eprosima::fastdds::dds::DataWriter* vehicle_writer_;
  eprosima::fastdds::dds::TypeSupport vehicle_type_;
  eprosima::fastdds::dds::DataWriter* faults_writer_;
  eprosima::fastdds::dds::TypeSupport faults_type_;

  eprosima::fastdds::dds::Subscriber* subscriber_;
  eprosima::fastdds::dds::SampleInfo info_;

  eprosima::fastdds::dds::DataReader* control_command_reader_;
  eprosima::fastdds::dds::TypeSupport control_command_type_;
  eprosima::fastdds::dds::DataReader* vehicle_task_reader_;
  eprosima::fastdds::dds::TypeSupport vehicle_task_type_;
  eprosima::fastdds::dds::DataReader* teleop_control_command_reader_;
  eprosima::fastdds::dds::TypeSupport teleop_control_command_type_;
};
}  // namespace drivers
}  // namespace legion
#include "dds_message_manager.hpp"
#endif
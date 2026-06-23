/**
 * @file    dds_message_manager.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#include "dds_message_manager.h"
#include "modules/common/macros/macros.h"
#include "modules/common/logging/logging.h"
#include "modules/common/math/euler_angles_zxy.h"

#if DDS_ENABLE
/**
 * @namespace legion::legion_bridge
 * @brief legion::legion_bridge
 */

namespace legion {
namespace legion_bridge {
using namespace legion::common;
using namespace eprosima::fastrtps;
using namespace eprosima::fastdds::dds;
using namespace eprosima::fastdds::rtps;
using namespace eprosima::fastrtps::rtps;
template <typename T>
void DdsMessageManager<T>::Init(T* t) {
  is_init_ = false;
  instance_ = t;

  auto messages_map = instance_->GetConf()->messages().messages_map();
  dds_json_ = json::parse(messages_map["DDS"].url());
  if (dds_json_.is_null()) {
    AERROR << "dds json is null.";
    return;
  }

  DomainParticipantQos pqos;
  pqos.transport().use_builtin_transports = false;
  pqos.wire_protocol().builtin.typelookup_config.use_server = true;

  // Intraprocess
  LibrarySettingsAttributes library_settings;
  library_settings.intraprocess_delivery =
      dds_json_["participant_qos"]["intraprocess"]
          ? IntraprocessDeliveryType::INTRAPROCESS_FULL
          : IntraprocessDeliveryType::INTRAPROCESS_OFF;
  xmlparser::XMLProfileManager::library_settings(library_settings);

  // Shared Memory
  if (dds_json_["participant_qos"]["shm"]["enable"]) {
    // Configure SHM Transport
    std::shared_ptr<SharedMemTransportDescriptor> shm_transport =
        std::make_shared<SharedMemTransportDescriptor>();
    pqos.transport().user_transports.push_back(shm_transport);
  }

  // UDP
  if (dds_json_["participant_qos"]["udp"]["enable"]) {
    // Configure UDP Transport
    std::shared_ptr<UDPv4TransportDescriptor> descriptor =
        std::make_shared<UDPv4TransportDescriptor>();
    descriptor->sendBufferSize = 0;
    descriptor->receiveBufferSize = 0;
    descriptor->TTL = dds_json_["participant_qos"]["udp"]["ttl"];
    descriptor->non_blocking_send = true;
    pqos.transport().user_transports.push_back(descriptor);
  }

  // TCP
  if (dds_json_["participant_qos"]["tcp"]["enable"]) {
    std::shared_ptr<TCPv4TransportDescriptor> descriptor =
        std::make_shared<TCPv4TransportDescriptor>();
    descriptor->wait_for_tcp_negotiation = false;
    descriptor->maxInitialPeersRange = 20;

    if (dds_json_["participant_qos"]["tcp"]["mode"] == TCP_LAN_SERVER ||
        dds_json_["participant_qos"]["tcp"]["mode"] == TCP_WAN_SERVER) {
      if (dds_json_["participant_qos"]["tcp"]["mode"] == TCP_WAN_SERVER) {
        descriptor->set_WAN_address(dds_json_["participant_qos"]["tcp"]["ip"]);
      }

      descriptor->add_listener_port(
          dds_json_["participant_qos"]["tcp"]["listen_port"]);
    } else {
      Locator_t initial_peer_locator;
      initial_peer_locator.kind = LOCATOR_KIND_TCPv4;
      IPLocator::setIPv4(initial_peer_locator,
                         dds_json_["participant_qos"]["tcp"]["ip"]);
      initial_peer_locator.port =
          dds_json_["participant_qos"]["tcp"]["server_port"];

      pqos.wire_protocol().builtin.initialPeersList.push_back(
          initial_peer_locator);
    }

    pqos.transport().user_transports.push_back(descriptor);
    pqos.wire_protocol()
        .builtin.discovery_config.leaseDuration_announcementperiod.seconds = 5;
  }

  if (!dds_json_["participant_qos"]["shm"]["enable"] &&
      !dds_json_["participant_qos"]["udp"]["enable"] &&
      !dds_json_["participant_qos"]["tcp"]["enable"]) {
    pqos.transport().use_builtin_transports = true;
  }

  // Set the statistics if clicked
  if (dds_json_["participant_qos"]["statistics"]) {
    pqos.properties().properties().emplace_back("fastdds.statistics",
                                                "HISTORY_LATENCY_TOPIC;"
                                                "NETWORK_LATENCY_TOPIC;"
                                                "PUBLICATION_THROUGHPUT_TOPIC;"
                                                "SUBSCRIPTION_THROUGHPUT_TOPIC;"
                                                "RTPS_SENT_TOPIC;"
                                                "RTPS_LOST_TOPIC;"
                                                "HEARTBEAT_COUNT_TOPIC;"
                                                "ACKNACK_COUNT_TOPIC;"
                                                "NACKFRAG_COUNT_TOPIC;"
                                                "GAP_COUNT_TOPIC;"
                                                "DATA_COUNT_TOPIC;"
                                                "RESENT_DATAS_TOPIC;"
                                                "SAMPLE_DATAS_TOPIC;"
                                                "PDP_PACKETS_TOPIC;"
                                                "EDP_PACKETS_TOPIC;"
                                                "DISCOVERY_TOPIC;"
                                                "PHYSICAL_DATA_TOPIC");

    // In case the Statistics are not compiled, show an error
#ifndef FASTDDS_STATISTICS
    AERROR << "Statistics Module is not available";
#endif  // #ifndef FASTDDS_STATISTICS
  }

  // Avoid using the default transport
  pqos.wire_protocol().builtin.discovery_config.discoveryProtocol =
      DiscoveryProtocol_t::SIMPLE;
  pqos.wire_protocol()
      .builtin.discovery_config.use_SIMPLE_EndpointDiscoveryProtocol = true;
  pqos.wire_protocol()
      .builtin.discovery_config.m_simpleEDP
      .use_PublicationReaderANDSubscriptionWriter = true;
  pqos.wire_protocol()
      .builtin.discovery_config.m_simpleEDP
      .use_PublicationWriterANDSubscriptionReader = true;
  pqos.name("Participant_pub");
  participant_ = DomainParticipantFactory::get_instance()->create_participant(
      dds_json_["participant_qos"]["domain_id"], pqos);
  if (participant_ == nullptr) {
    return;
  }

  DataWriterQos wqos;
  int32_t wqos_history_kind = dds_json_["writer_qos"]["history"]["kind"];
  switch (wqos_history_kind) {
    case 0:
      wqos.history().kind = eprosima::fastdds::dds::KEEP_LAST_HISTORY_QOS;
      break;
    case 1:
      wqos.history().kind = eprosima::fastdds::dds::KEEP_ALL_HISTORY_QOS;
      break;
    default:
      AERROR << "writer qos error[wqos.history().kind]:" << wqos_history_kind;
      return;
      break;
  }

  wqos.history().depth = dds_json_["writer_qos"]["history"]["depth"];
  wqos.resource_limits().max_samples = 10000;
  // wqos.resource_limits().max_instances = 400;
  // wqos.resource_limits().allocated_samples = 100;
  wqos.reliable_writer_qos().times.heartbeatPeriod.seconds = 1;
  wqos.reliable_writer_qos().times.heartbeatPeriod.fraction(0);
  int32_t wqos_reliability_kind = dds_json_["writer_qos"]["reliability"];
  switch (wqos_reliability_kind) {
    case 1:
      wqos.reliability().kind =
          eprosima::fastdds::dds::BEST_EFFORT_RELIABILITY_QOS;
      break;
    case 2:
      wqos.reliability().kind =
          eprosima::fastdds::dds::RELIABLE_RELIABILITY_QOS;
      break;
    default:
      AERROR << "writer qos error[wqos.reliability().kind]:"
             << wqos_reliability_kind;
      return;
      break;
  }

  int32_t wqos_durability_kind = dds_json_["writer_qos"]["durability"];
  switch (wqos_durability_kind) {
    case 0:
      wqos.durability().kind = eprosima::fastdds::dds::VOLATILE_DURABILITY_QOS;
      break;
    case 1:
      wqos.durability().kind =
          eprosima::fastdds::dds::TRANSIENT_LOCAL_DURABILITY_QOS;
      break;
    default:
      AERROR << "writer qos error[wqos.durability().kind]:"
             << wqos_durability_kind;
      return;
      break;
  }

  // LIVELINESS
  int32_t wqos_liveliness_kind = dds_json_["writer_qos"]["liveliness"]["kind"];
  switch (wqos_liveliness_kind) {
    case 0:
      wqos.liveliness().kind = eprosima::fastdds::dds::AUTOMATIC_LIVELINESS_QOS;
      break;
    case 1:
      wqos.liveliness().kind =
          eprosima::fastdds::dds::MANUAL_BY_PARTICIPANT_LIVELINESS_QOS;
      break;
    case 2:
      wqos.liveliness().kind =
          eprosima::fastdds::dds::MANUAL_BY_TOPIC_LIVELINESS_QOS;
      break;
    default:
      AERROR << "reader qos error[wqos.liveliness().kind ]:"
             << wqos_liveliness_kind;
      break;
  }

  std::string wqos_liveliness_lease_duration =
      dds_json_["writer_qos"]["liveliness"]["lease_duration"];
  if (wqos_liveliness_lease_duration == "INF") {
    wqos.liveliness().lease_duration = c_TimeInfinite;
  } else {
    wqos.liveliness().lease_duration =
        std::stod(wqos_liveliness_lease_duration) * 1e-3;
  }

  std::string wqos_liveliness_announcement_period =
      dds_json_["writer_qos"]["liveliness"]["announcement_period"];
  if (wqos_liveliness_announcement_period == "INF" &&
      wqos.liveliness().lease_duration == c_TimeInfinite) {
    wqos.liveliness().announcement_period = c_TimeInfinite;
  } else if (wqos_liveliness_announcement_period == "INF" &&
             wqos.liveliness().lease_duration != c_TimeInfinite) {
    wqos.liveliness().announcement_period =
        std::stod(wqos_liveliness_lease_duration) * 1e-3;
  } else {
    wqos.liveliness().announcement_period =
        std::stod(wqos_liveliness_announcement_period) * 1e-3;
  }

  int32_t wqos_ownership_kind = dds_json_["writer_qos"]["ownership"]["kind"];
  switch (wqos_ownership_kind) {
    case 0:
      wqos.ownership().kind = eprosima::fastdds::dds::SHARED_OWNERSHIP_QOS;
      break;
    case 1:
      wqos.ownership().kind = eprosima::fastdds::dds::EXCLUSIVE_OWNERSHIP_QOS;
      wqos.ownership_strength().value =
          dds_json_["writer_qos"]["ownership"]["ownership_strength"];
      break;
    default:
      AERROR << "writer qos error[wqos.ownership().kind:"
             << wqos_ownership_kind;
      break;
  }

  int32_t wqos_history_memory_policy =
      dds_json_["writer_qos"]["history_memory_policy"];
  switch (wqos_history_memory_policy) {
    case 0:
      wqos.endpoint().history_memory_policy = PREALLOCATED_MEMORY_MODE;
      break;
    case 1:
      wqos.endpoint().history_memory_policy =
          PREALLOCATED_WITH_REALLOC_MEMORY_MODE;
      break;
    case 2:
      wqos.endpoint().history_memory_policy = DYNAMIC_RESERVE_MEMORY_MODE;
      break;
    case 3:
      wqos.endpoint().history_memory_policy = DYNAMIC_REUSABLE_MEMORY_MODE;
      break;
    default:
      AERROR << "writer qos error[wqos.endpoint().history_memory_policy]:"
             << wqos_history_memory_policy;
      break;
  }

  int32_t publish_mode = dds_json_["writer_qos"]["publish_mode"];
  switch (publish_mode) {
    case 0:
      wqos.publish_mode().kind =
          eprosima::fastdds::dds::SYNCHRONOUS_PUBLISH_MODE;
      break;
    case 1:
      wqos.publish_mode().kind =
          eprosima::fastdds::dds::ASYNCHRONOUS_PUBLISH_MODE;
      break;
    default:
      AERROR << "writer qos error[wqos.publish_mode().kind ]:" << publish_mode;
      break;
  }

  // DEADLINE
  std::string wqos_dataline = dds_json_["writer_qos"]["deadline"];
  if (wqos_dataline == "INF") {
    wqos.deadline().period = c_TimeInfinite;
  } else {
    wqos.deadline().period = std::stod(wqos_dataline) * 1e-3;
  }

  // LIFESPAN
  std::string wqos_lifespan = dds_json_["writer_qos"]["lifespan"];
  if (wqos_lifespan == "INF") {
    wqos.lifespan().duration = c_TimeInfinite;
  } else {
    wqos.deadline().period = std::stod(wqos_lifespan) * 1e-3;
  }

  // Data Sharing
  if (dds_json_["participant_qos"]["data_sharing"]) {
    wqos.data_sharing().automatic();
  } else {
    wqos.data_sharing().off();
  }

  // RoutingRequest
  routing_request_type_.reset(
      new ros2_interface::msg::RoutingRequestPubSubType());
  routing_request_type_->auto_fill_type_object(
      dds_json_["writer_qos"]["auto_fill_type_object"]);
  routing_request_type_->auto_fill_type_information(
      dds_json_["writer_qos"]["auto_fill_type_information"]);
  routing_request_type_.register_type(participant_);
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/legion_bridge/RoutingRequest",
                                      routing_request_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  routing_request_writer_ =
      publisher_->create_datawriter(topic_, wqos, nullptr);

  // ObuCmdMsg
  obu_cmd_msg_type_.reset(new ros2_interface::msg::ObuCmdMsgPubSubType());
  obu_cmd_msg_type_->auto_fill_type_object(
      dds_json_["writer_qos"]["auto_fill_type_object"]);
  obu_cmd_msg_type_->auto_fill_type_information(
      dds_json_["writer_qos"]["auto_fill_type_information"]);
  obu_cmd_msg_type_.register_type(participant_);
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/legion_bridge/ObuCmdMsg",
                                      obu_cmd_msg_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  obu_cmd_msg_writer_ = publisher_->create_datawriter(topic_, wqos, nullptr);

  // VehicleTask
  vehicle_task_type_.reset(new ros2_interface::msg::VehicleTaskPubSubType());
  vehicle_task_type_->auto_fill_type_object(
      dds_json_["writer_qos"]["auto_fill_type_object"]);
  vehicle_task_type_->auto_fill_type_information(
      dds_json_["writer_qos"]["auto_fill_type_information"]);
  vehicle_task_type_.register_type(participant_);
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/legion_bridge/VehicleTask",
                                      vehicle_task_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  vehicle_task_writer_ = publisher_->create_datawriter(topic_, wqos, nullptr);

  // ControlCommand
  teleop_control_command_type_.reset(
      new ros2_interface::msg::ControlCommandPubSubType());
  teleop_control_command_type_->auto_fill_type_object(
      dds_json_["writer_qos"]["auto_fill_type_object"]);
  teleop_control_command_type_->auto_fill_type_information(
      dds_json_["writer_qos"]["auto_fill_type_information"]);
  teleop_control_command_type_.register_type(participant_);
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic(
      "rt/legion_bridge/TeleopControlCommand",
      teleop_control_command_type_.get_type_name(), TOPIC_QOS_DEFAULT);
  teleop_control_command_writer_ =
      publisher_->create_datawriter(topic_, wqos, nullptr);

  // Faults
  faults_type_.reset(new ros2_interface::msg::FaultsPubSubType());
  faults_type_->auto_fill_type_object(
      dds_json_["writer_qos"]["auto_fill_type_object"]);
  faults_type_->auto_fill_type_information(
      dds_json_["writer_qos"]["auto_fill_type_information"]);
  faults_type_.register_type(participant_);
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/legion_bridge/Faults",
                                      faults_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  faults_writer_ = publisher_->create_datawriter(topic_, wqos, nullptr);

  DataReaderQos rqos;
  int32_t rqos_history_kind = dds_json_["reader_qos"]["history"]["kind"];
  switch (rqos_history_kind) {
    case 0:
      rqos.history().kind = eprosima::fastdds::dds::KEEP_LAST_HISTORY_QOS;
      break;
    case 1:
      rqos.history().kind = eprosima::fastdds::dds::KEEP_ALL_HISTORY_QOS;
      break;
    default:
      AERROR << "reader qos error[rqos.history().kind]:" << rqos_history_kind;
      return;
      break;
  }

  rqos.history().depth = dds_json_["reader_qos"]["history"]["depth"];
  rqos.resource_limits().max_samples = 10000;
  rqos.reliable_reader_qos().times.heartbeatResponseDelay.seconds = 1;
  rqos.reliable_reader_qos().times.heartbeatResponseDelay.fraction(0);
  int32_t rqos_reliability_kind = dds_json_["reader_qos"]["reliability"];
  switch (rqos_reliability_kind) {
    case 1:
      rqos.reliability().kind =
          eprosima::fastdds::dds::BEST_EFFORT_RELIABILITY_QOS;
      break;
    case 2:
      rqos.reliability().kind =
          eprosima::fastdds::dds::RELIABLE_RELIABILITY_QOS;
      break;
    default:
      AERROR << "reader qos error[rqos.reliability().kind]:"
             << rqos_reliability_kind;
      return;
      break;
  }

  // DURABILITY
  int32_t rqos_durability_kind = dds_json_["reader_qos"]["durability"];
  switch (rqos_durability_kind) {
    case 0:
      rqos.durability().kind = eprosima::fastdds::dds::VOLATILE_DURABILITY_QOS;
      break;
    case 1:
      rqos.durability().kind =
          eprosima::fastdds::dds::TRANSIENT_LOCAL_DURABILITY_QOS;
      break;
    default:
      AERROR << "reader qos error[rqos.durability().kind]:"
             << rqos_durability_kind;
      return;
      break;
  }

  // LIVELINESS
  int32_t rqos_liveliness_kind = dds_json_["reader_qos"]["liveliness"]["kind"];
  switch (rqos_liveliness_kind) {
    case 0:
      rqos.liveliness().kind = eprosima::fastdds::dds::AUTOMATIC_LIVELINESS_QOS;
      break;
    case 1:
      rqos.liveliness().kind =
          eprosima::fastdds::dds::MANUAL_BY_PARTICIPANT_LIVELINESS_QOS;
      break;
    case 2:
      rqos.liveliness().kind =
          eprosima::fastdds::dds::MANUAL_BY_TOPIC_LIVELINESS_QOS;
      break;
    default:
      AERROR << "reader qos error[rqos.liveliness().kind ]:"
             << rqos_liveliness_kind;
      break;
  }

  std::string rqos_liveliness_lease_duration =
      dds_json_["reader_qos"]["liveliness"]["lease_duration"];
  if (rqos_liveliness_lease_duration == "INF") {
    rqos.liveliness().lease_duration = c_TimeInfinite;
  } else {
    rqos.liveliness().lease_duration =
        std::stod(rqos_liveliness_lease_duration) * 1e-3;
  }

  std::string rqos_liveliness_announcement_period =
      dds_json_["reader_qos"]["liveliness"]["announcement_period"];
  if (rqos_liveliness_announcement_period == "INF" &&
      rqos.liveliness().lease_duration == c_TimeInfinite) {
    rqos.liveliness().announcement_period = c_TimeInfinite;
  } else if (rqos_liveliness_announcement_period == "INF" &&
             rqos.liveliness().lease_duration != c_TimeInfinite) {
    rqos.liveliness().announcement_period =
        std::stod(rqos_liveliness_lease_duration) * 1e-3;
  } else {
    rqos.liveliness().announcement_period =
        std::stod(rqos_liveliness_announcement_period) * 1e-3;
  }

  // OWNERSHIP
  int32_t rqos_ownership_kind = dds_json_["reader_qos"]["ownership"]["kind"];
  switch (rqos_ownership_kind) {
    case 0:
      rqos.ownership().kind = eprosima::fastdds::dds::SHARED_OWNERSHIP_QOS;
      break;
    case 1:
      rqos.ownership().kind = eprosima::fastdds::dds::EXCLUSIVE_OWNERSHIP_QOS;
      break;
    default:
      AERROR << "reader qos error[rqos.ownership().kind:"
             << rqos_ownership_kind;
      break;
  }

  int32_t rqos_history_memory_policy =
      dds_json_["reader_qos"]["history_memory_policy"];
  switch (rqos_history_memory_policy) {
    case 0:
      rqos.endpoint().history_memory_policy = PREALLOCATED_MEMORY_MODE;
      break;
    case 1:
      rqos.endpoint().history_memory_policy =
          PREALLOCATED_WITH_REALLOC_MEMORY_MODE;
      break;
    case 2:
      rqos.endpoint().history_memory_policy = DYNAMIC_RESERVE_MEMORY_MODE;
      break;
    case 3:
      rqos.endpoint().history_memory_policy = DYNAMIC_REUSABLE_MEMORY_MODE;
      break;
    default:
      AERROR << "reader qos error[rqos.endpoint().history_memory_policy]:"
             << rqos_history_memory_policy;
      break;
  }

  // DEADLINE
  std::string rqos_dataline = dds_json_["reader_qos"]["deadline"];
  if (rqos_dataline == "INF") {
    rqos.deadline().period = c_TimeInfinite;
  } else {
    rqos.deadline().period = std::stod(rqos_dataline) * 1e-3;
  }

  // LIFESPAN
  std::string rqos_lifespan = dds_json_["reader_qos"]["lifespan"];
  if (rqos_lifespan == "INF") {
    rqos.lifespan().duration = c_TimeInfinite;
  } else {
    rqos.deadline().period = std::stod(rqos_lifespan) * 1e-3;
  }

  // Data Sharing
  if (dds_json_["participant_qos"]["data_sharing"]) {
    rqos.data_sharing().automatic();
  } else {
    rqos.data_sharing().off();
  }

  control_command_type_.reset(
      new ros2_interface::msg::ControlCommandPubSubType());
  control_command_type_->auto_fill_type_object(
      dds_json_["reader_qos"]["auto_fill_type_object"]);
  control_command_type_->auto_fill_type_information(
      dds_json_["reader_qos"]["auto_fill_type_information"]);
  control_command_type_.register_type(participant_);
  subscriber_ =
      participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/control/ControlCommand",
                                      control_command_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  control_command_reader_ = subscriber_->create_datareader(topic_, rqos, this);

  chassis_type_.reset(new ros2_interface::msg::ChassisPubSubType());
  chassis_type_->auto_fill_type_object(
      dds_json_["reader_qos"]["auto_fill_type_object"]);
  chassis_type_->auto_fill_type_information(
      dds_json_["reader_qos"]["auto_fill_type_information"]);
  chassis_type_.register_type(participant_);
  subscriber_ =
      participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/drivers/canbus/Chassis",
                                      chassis_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  chassis_reader_ = subscriber_->create_datareader(topic_, rqos, this);

  events_type_.reset(new ros2_interface::msg::EventsPubSubType());
  events_type_->auto_fill_type_object(
      dds_json_["reader_qos"]["auto_fill_type_object"]);
  events_type_->auto_fill_type_information(
      dds_json_["reader_qos"]["auto_fill_type_information"]);
  events_type_.register_type(participant_);
  subscriber_ =
      participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/drivers/canbus/Events",
                                      events_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  events_reader_ = subscriber_->create_datareader(topic_, rqos, this);

  vehicle_type_.reset(new ros2_interface::msg::VehiclePubSubType());
  vehicle_type_->auto_fill_type_object(
      dds_json_["reader_qos"]["auto_fill_type_object"]);
  vehicle_type_->auto_fill_type_information(
      dds_json_["reader_qos"]["auto_fill_type_information"]);
  vehicle_type_.register_type(participant_);
  subscriber_ =
      participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/drivers/canbus/Vehicle",
                                      vehicle_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  vehicle_reader_ = subscriber_->create_datareader(topic_, rqos, this);

  //线程执行开始
  handle_message_thread_.reset(new std::thread([this] { Run(); }));
  if (handle_message_thread_ == nullptr) {
    AERROR << "Unable to create handle_message_thread thread.";
    return;
  }
  is_init_ = true;
}

template <typename T>
void DdsMessageManager<T>::PublishRoutingRequest(
    legion::interface::RoutingRequest msg) {
  if (is_init_ == false) return;
  ros2_interface::msg::RoutingRequest routing_request;
  MESSAGE_DDS_HEADER_ASSIGN(ros2_interface::msg, routing_request)
  routing_request.request_source() = msg.request_source();
  routing_request.request_type() = msg.request_type();
  routing_request.num_of_kp() = msg.num_of_kp();
  std::vector<ros2_interface::msg::KeyPoint> dds_key_point_list_vec;
  std::vector<legion::interface::KeyPoint> legion_key_point_list_vec;
  msg.key_point_list(legion_key_point_list_vec);
  for (auto it_key_point_list_vec : legion_key_point_list_vec) {
    ros2_interface::msg::KeyPoint routing_request_key_point;
    routing_request_key_point.id() = it_key_point_list_vec.id();
    routing_request_key_point.latitude() = it_key_point_list_vec.latitude();
    routing_request_key_point.longitude() = it_key_point_list_vec.longitude();
    routing_request_key_point.ele() = it_key_point_list_vec.ele();
    routing_request_key_point.heading() = it_key_point_list_vec.heading();
    routing_request_key_point.name() = it_key_point_list_vec.name();
    dds_key_point_list_vec.emplace_back(routing_request_key_point);
  }
  routing_request.key_point_list() = dds_key_point_list_vec;

  routing_request_writer_->write(&routing_request);
}

template <typename T>
void DdsMessageManager<T>::PublishObuCmdMsg(legion::interface::ObuCmdMsg msg) {
  if (is_init_ == false) return;
  ros2_interface::msg::ObuCmdMsg obu_cmd_msg;
  MESSAGE_DDS_HEADER_ASSIGN(ros2_interface::msg, obu_cmd_msg)
  obu_cmd_msg.id() = msg.id();
  obu_cmd_msg.name() = msg.name();
  std::vector<ros2_interface::msg::ObuCmd> dds_obu_cmd_list_vec;
  std::vector<legion::interface::ObuCmd> legion_obu_cmd_list_vec;
  msg.obu_cmd_list(legion_obu_cmd_list_vec);
  for (auto it_obu_cmd_list_vec : legion_obu_cmd_list_vec) {
    ros2_interface::msg::ObuCmd obu_cmd_msg_obu_cmd;
    obu_cmd_msg_obu_cmd.code() = it_obu_cmd_list_vec.code();
    obu_cmd_msg_obu_cmd.val() = it_obu_cmd_list_vec.val();
    dds_obu_cmd_list_vec.emplace_back(obu_cmd_msg_obu_cmd);
  }
  obu_cmd_msg.obu_cmd_list() = dds_obu_cmd_list_vec;

  obu_cmd_msg_writer_->write(&obu_cmd_msg);
}

template <typename T>
void DdsMessageManager<T>::PublishVehicleTask(
    legion::interface::VehicleTask msg) {
  if (is_init_ == false) return;
  ros2_interface::msg::VehicleTask vehicle_task;
  MESSAGE_DDS_HEADER_ASSIGN(ros2_interface::msg, vehicle_task)
  vehicle_task.clean_up_ctrl() = msg.clean_up_ctrl();
  vehicle_task.watering_ctrl() = msg.watering_ctrl();
  vehicle_task.water_add_ctrl() = msg.water_add_ctrl();
  vehicle_task.hatch_unlock_ctrl() = msg.hatch_unlock_ctrl();
  vehicle_task.decorative_light_ctrl() = msg.decorative_light_ctrl();

  vehicle_task_writer_->write(&vehicle_task);
}

template <typename T>
void DdsMessageManager<T>::PublishControlCommandOutput(
    legion::interface::ControlCommand msg) {
  if (is_init_ == false) return;
  ros2_interface::msg::ControlCommand control_command;
  MESSAGE_DDS_HEADER_ASSIGN(ros2_interface::msg, control_command)
  control_command.steer_driving_mode() = msg.steer_driving_mode();
  control_command.front_steering_target() = msg.front_steering_target();
  control_command.rear_steering_target() = msg.rear_steering_target();
  control_command.front_steering_rate() = msg.front_steering_rate();
  control_command.rear_steering_rate() = msg.rear_steering_rate();
  control_command.accel_driving_mode() = msg.accel_driving_mode();
  control_command.accel_value() = msg.accel_value();
  control_command.brake_driving_mode() = msg.brake_driving_mode();
  control_command.brake_value() = msg.brake_value();
  control_command.backup_brake_driving_mode() = msg.backup_brake_driving_mode();
  control_command.backup_brake_value() = msg.backup_brake_value();
  control_command.epb_driving_mode() = msg.epb_driving_mode();
  control_command.epb_level() = msg.epb_level();
  control_command.gear_driving_mode() = msg.gear_driving_mode();
  control_command.emergency_brake_enable() = msg.emergency_brake_enable();
  control_command.gear_location() = msg.gear_location();
  control_command.speed() = msg.speed();
  control_command.acceleration() = msg.acceleration();
  control_command.turn_lamp_ctrl() = msg.turn_lamp_ctrl();
  control_command.high_beam_ctrl() = msg.high_beam_ctrl();
  control_command.low_beam_ctrl() = msg.low_beam_ctrl();
  control_command.horn_ctrl() = msg.horn_ctrl();
  control_command.front_wiper_ctrl() = msg.front_wiper_ctrl();
  control_command.rear_wiper_ctrl() = msg.rear_wiper_ctrl();
  control_command.position_lamp_ctrl() = msg.position_lamp_ctrl();
  control_command.front_fog_lamp_ctrl() = msg.front_fog_lamp_ctrl();
  control_command.rear_fog_lamp_ctrl() = msg.rear_fog_lamp_ctrl();
  control_command.brake_lamp_ctrl() = msg.brake_lamp_ctrl();
  control_command.alarm_lamp_ctrl() = msg.alarm_lamp_ctrl();
  control_command.lf_door_ctrl() = msg.lf_door_ctrl();
  control_command.rf_door_ctrl() = msg.rf_door_ctrl();
  control_command.lr_door_ctrl() = msg.lr_door_ctrl();
  control_command.rr_door_ctrl() = msg.rr_door_ctrl();

  teleop_control_command_writer_->write(&control_command);
}

template <typename T>
void DdsMessageManager<T>::PublishFaults(legion::interface::Faults msg) {
  if (is_init_ == false) return;
  ros2_interface::msg::Faults faults;
  MESSAGE_DDS_HEADER_ASSIGN(ros2_interface::msg, faults)
  DDS_FAULTS_PARSER(ros2, faults)

  faults_writer_->write(&faults);
}

template <typename T>
void DdsMessageManager<T>::HandleControlCommandMessage(
    const ros2_interface::msg::ControlCommand* msg) {
  legion::interface::ControlCommand control_command;
  MESSAGE_DDS_HEADER_PARSER(control_command)
  control_command.set_steer_driving_mode(
      (legion::common::DrivingMode)msg->steer_driving_mode());
  control_command.set_front_steering_target(msg->front_steering_target());
  control_command.set_rear_steering_target(msg->rear_steering_target());
  control_command.set_front_steering_rate(msg->front_steering_rate());
  control_command.set_rear_steering_rate(msg->rear_steering_rate());
  control_command.set_accel_driving_mode(
      (legion::common::DrivingMode)msg->accel_driving_mode());
  control_command.set_accel_value(msg->accel_value());
  control_command.set_brake_driving_mode(
      (legion::common::DrivingMode)msg->brake_driving_mode());
  control_command.set_brake_value(msg->brake_value());
  control_command.set_backup_brake_driving_mode(
      (legion::common::DrivingMode)msg->backup_brake_driving_mode());
  control_command.set_backup_brake_value(msg->backup_brake_value());
  control_command.set_epb_driving_mode(
      (legion::common::DrivingMode)msg->epb_driving_mode());
  control_command.set_epb_level((legion::common::EPBLevel)msg->epb_level());
  control_command.set_gear_driving_mode(
      (legion::common::DrivingMode)msg->gear_driving_mode());
  control_command.set_emergency_brake_enable(msg->emergency_brake_enable());
  control_command.set_gear_location(
      (legion::common::GearPosition)msg->gear_location());
  control_command.set_speed(msg->speed());
  control_command.set_acceleration(msg->acceleration());
  control_command.set_turn_lamp_ctrl(
      (legion::common::TurnSignal)msg->turn_lamp_ctrl());
  control_command.set_high_beam_ctrl(
      (legion::common::SwitchStatus)msg->high_beam_ctrl());
  control_command.set_low_beam_ctrl(
      (legion::common::SwitchStatus)msg->low_beam_ctrl());
  control_command.set_horn_ctrl((legion::common::SwitchStatus)msg->horn_ctrl());
  control_command.set_front_wiper_ctrl(
      (legion::common::SwitchStatus)msg->front_wiper_ctrl());
  control_command.set_rear_wiper_ctrl(
      (legion::common::SwitchStatus)msg->rear_wiper_ctrl());
  control_command.set_position_lamp_ctrl(
      (legion::common::SwitchStatus)msg->position_lamp_ctrl());
  control_command.set_front_fog_lamp_ctrl(
      (legion::common::SwitchStatus)msg->front_fog_lamp_ctrl());
  control_command.set_rear_fog_lamp_ctrl(
      (legion::common::SwitchStatus)msg->rear_fog_lamp_ctrl());
  control_command.set_brake_lamp_ctrl(
      (legion::common::SwitchStatus)msg->brake_lamp_ctrl());
  control_command.set_alarm_lamp_ctrl(
      (legion::common::SwitchStatus)msg->alarm_lamp_ctrl());
  control_command.set_lf_door_ctrl(
      (legion::common::DoorStatus)msg->lf_door_ctrl());
  control_command.set_rf_door_ctrl(
      (legion::common::DoorStatus)msg->rf_door_ctrl());
  control_command.set_lr_door_ctrl(
      (legion::common::DoorStatus)msg->lr_door_ctrl());
  control_command.set_rr_door_ctrl(
      (legion::common::DoorStatus)msg->rr_door_ctrl());

  instance_->HandleControlCommandInput(control_command);
}

template <typename T>
void DdsMessageManager<T>::HandleChassisMessage(
    const ros2_interface::msg::Chassis* msg) {
  legion::interface::Chassis chassis;
  MESSAGE_DDS_HEADER_PARSER(chassis)
  chassis.set_moving_status((legion::common::MovingStatus)msg->moving_status());
  chassis.set_driving_mode((legion::common::DrivingMode)msg->driving_mode());
  chassis.set_steer_driving_mode(
      (legion::common::DrivingMode)msg->steer_driving_mode());
  chassis.set_steering_status(
      (legion::common::ControlStatus)msg->steering_status());
  chassis.set_front_steering_value(msg->front_steering_value());
  chassis.set_rear_steering_value(msg->rear_steering_value());
  chassis.set_steering_torque_nm(msg->steering_torque_nm());
  chassis.set_front_steering_rate_dps(msg->front_steering_rate_dps());
  chassis.set_rear_steering_rate_dps(msg->rear_steering_rate_dps());
  chassis.set_accel_driving_mode(
      (legion::common::DrivingMode)msg->accel_driving_mode());
  chassis.set_accel_status((legion::common::ControlStatus)msg->accel_status());
  chassis.set_accel_value(msg->accel_value());
  chassis.set_brake_driving_mode(
      (legion::common::DrivingMode)msg->brake_driving_mode());
  chassis.set_brake_status((legion::common::ControlStatus)msg->brake_status());
  chassis.set_brake_value(msg->brake_value());
  chassis.set_backup_brake_driving_mode(
      (legion::common::DrivingMode)msg->backup_brake_driving_mode());
  chassis.set_backup_brake_status(
      (legion::common::ControlStatus)msg->backup_brake_status());
  chassis.set_backup_brake_value(msg->backup_brake_value());
  chassis.set_epb_driving_mode(
      (legion::common::DrivingMode)msg->epb_driving_mode());
  chassis.set_epb_status((legion::common::ControlStatus)msg->epb_status());
  chassis.set_epb_level((legion::common::EPBLevel)msg->epb_level());
  chassis.set_engine_status((legion::common::EngineStauts)msg->engine_status());
  chassis.set_engine_rpm(msg->engine_rpm());
  chassis.set_engine_torque(msg->engine_torque());
  chassis.set_speed_mps(msg->speed_mps());
  chassis.set_odometer_m(msg->odometer_m());
  chassis.set_fuel_range_m(msg->fuel_range_m());
  chassis.set_gear_driving_mode(
      (legion::common::DrivingMode)msg->gear_driving_mode());
  chassis.set_gear_status((legion::common::ControlStatus)msg->gear_status());
  chassis.set_gear_location((legion::common::GearPosition)msg->gear_location());
  chassis.set_driver_seat_belt(
      (legion::common::SwitchStatus)msg->driver_seat_belt());
  chassis.set_high_beam_status(
      (legion::common::SwitchStatus)msg->high_beam_status());
  chassis.set_low_beam_status(
      (legion::common::SwitchStatus)msg->low_beam_status());
  chassis.set_horn_status((legion::common::SwitchStatus)msg->horn_status());
  chassis.set_turn_lamp_status(
      (legion::common::TurnSignal)msg->turn_lamp_status());
  chassis.set_front_wiper_status(
      (legion::common::SwitchStatus)msg->front_wiper_status());
  chassis.set_rear_wiper_status(
      (legion::common::SwitchStatus)msg->rear_wiper_status());
  chassis.set_position_lamp_status(
      (legion::common::SwitchStatus)msg->position_lamp_status());
  chassis.set_front_fog_lamp_status(
      (legion::common::SwitchStatus)msg->front_fog_lamp_status());
  chassis.set_rear_fog_lamp_status(
      (legion::common::SwitchStatus)msg->rear_fog_lamp_status());
  chassis.set_brake_lamp_status(
      (legion::common::SwitchStatus)msg->brake_lamp_status());
  chassis.set_alarm_lamp_status(
      (legion::common::SwitchStatus)msg->alarm_lamp_status());
  chassis.set_lf_door_status((legion::common::DoorStatus)msg->lf_door_status());
  chassis.set_rf_door_status((legion::common::DoorStatus)msg->rf_door_status());
  chassis.set_lr_door_status((legion::common::DoorStatus)msg->lr_door_status());
  chassis.set_rr_door_status((legion::common::DoorStatus)msg->rr_door_status());
  chassis.set_rearview_mirror_status(
      (legion::common::FoldUnfoldStatus)msg->rearview_mirror_status());
  chassis.set_trunk_status((legion::common::DoorStatus)msg->trunk_status());
  chassis.set_engine_bay_door_status(
      (legion::common::DoorStatus)msg->engine_bay_door_status());
  chassis.set_wheel_direction_rr(
      (legion::common::WheelSpeedType)msg->wheel_direction_rr());
  chassis.set_wheel_spd_rr(msg->wheel_spd_rr());
  chassis.set_wheel_direction_rl(
      (legion::common::WheelSpeedType)msg->wheel_direction_rl());
  chassis.set_wheel_spd_rl(msg->wheel_spd_rl());
  chassis.set_wheel_direction_fr(
      (legion::common::WheelSpeedType)msg->wheel_direction_fr());
  chassis.set_wheel_spd_fr(msg->wheel_spd_fr());
  chassis.set_wheel_direction_fl(
      (legion::common::WheelSpeedType)msg->wheel_direction_fl());
  chassis.set_wheel_spd_fl(msg->wheel_spd_fl());
  chassis.set_is_tire_pressure_ok(
      (legion::common::FailureStatus)msg->is_tire_pressure_ok());
  chassis.set_is_tire_pressure_lf_valid(
      (legion::common::IsValid)msg->is_tire_pressure_lf_valid());
  chassis.set_tire_pressure_lf(msg->tire_pressure_lf());
  chassis.set_is_tire_pressure_rf_valid(
      (legion::common::IsValid)msg->is_tire_pressure_rf_valid());
  chassis.set_tire_pressure_rf(msg->tire_pressure_rf());
  chassis.set_is_tire_pressure_lr_valid(
      (legion::common::IsValid)msg->is_tire_pressure_lr_valid());
  chassis.set_tire_pressure_lr(msg->tire_pressure_lr());
  chassis.set_is_tire_pressure_rr_valid(
      (legion::common::IsValid)msg->is_tire_pressure_rr_valid());
  chassis.set_tire_pressure_rr(msg->tire_pressure_rr());
  chassis.set_battery_power_percentage(msg->battery_power_percentage());
  chassis.set_air_bag_status(
      (legion::common::FailureStatus)msg->air_bag_status());
  chassis.set_charging_gun_status(
      (legion::common::PlugStatus)msg->charging_gun_status());
  chassis.set_vehicle_power_status(
      (legion::common::FailureStatus)msg->vehicle_power_status());
  std::vector<legion::interface::Chassis::ErrorCode> chassis_error_code_vec;
  for (auto it_chassis_error_code_vec : msg->chassis_error_code()) {
    legion::interface::Chassis::ErrorCode error_code;
    error_code =
        (legion::interface::Chassis::ErrorCode)it_chassis_error_code_vec;
    chassis_error_code_vec.emplace_back(error_code);
  }
  chassis.set_chassis_error_code(&chassis_error_code_vec);

  instance_->HandleChassis(chassis);
}

template <typename T>
void DdsMessageManager<T>::HandleEventsMessage(
    const ros2_interface::msg::Events* msg) {
  legion::interface::Events events;

  instance_->HandleEvents(events);
}

template <typename T>
void DdsMessageManager<T>::HandleVehicleMessage(
    const ros2_interface::msg::Vehicle* msg) {
  legion::interface::Vehicle vehicle;
  MESSAGE_DDS_HEADER_PARSER(vehicle)
  vehicle.set_vehicle_type(
      (legion::interface::Vehicle::VehicleType)msg->vehicle_type());
  vehicle.set_vid(msg->vid());
  vehicle.set_vehicle_num(msg->vehicle_num());
  vehicle.set_oid(msg->oid());
  vehicle.set_operation(
      (legion::interface::Vehicle::OperationStatus)msg->operation());
  vehicle.set_totalcurrent(msg->totalcurrent());
  vehicle.set_batterysoc(msg->batterysoc());
  vehicle.set_totalvoltage(msg->totalvoltage());
  vehicle.set_recharge(msg->recharge());
  vehicle.set_dcdc((legion::common::SwitchStatus)msg->dcdc());
  vehicle.set_resistance(msg->resistance());
  std::vector<uint8_t> seats_vec;
  for (auto it_seats_vec : msg->seats()) {
    uint8_t seats_vec_item;
    seats_vec_item = it_seats_vec;
    seats_vec.emplace_back(seats_vec_item);
  }
  vehicle.set_seats(&seats_vec);
  vehicle.set_servicemode(
      (legion::interface::Vehicle::ServicemodeStatus)msg->servicemode());
  std::vector<legion::common::SwitchStatus> seat_belt_vec;
  for (auto it_seat_belt_vec : msg->seat_belt()) {
    legion::common::SwitchStatus switch_status;
    switch_status = (legion::common::SwitchStatus)it_seat_belt_vec;
    seat_belt_vec.emplace_back(switch_status);
  }
  vehicle.set_seat_belt(&seat_belt_vec);
  vehicle.set_engine_status((legion::common::EngineStauts)msg->engine_status());
  vehicle.set_battery_voltage(msg->battery_voltage());
  vehicle.set_battery_ammeter(msg->battery_ammeter());
  vehicle.set_battery_consumption(msg->battery_consumption());
  vehicle.set_battery_probe(msg->battery_probe());
  std::vector<double> battery_temperatures_vec;
  for (auto it_battery_temperatures_vec : msg->battery_temperatures()) {
    double battery_temperatures_vec_item;
    battery_temperatures_vec_item = it_battery_temperatures_vec;
    battery_temperatures_vec.emplace_back(battery_temperatures_vec_item);
  }
  vehicle.set_battery_temperatures(&battery_temperatures_vec);
  vehicle.set_battery_h_tepemperatures(msg->battery_h_tepemperatures());
  vehicle.set_battery_ltepemperatures(msg->battery_ltepemperatures());
  vehicle.set_battery_probe_code(msg->battery_probe_code());
  vehicle.set_battery_h_concentration(msg->battery_h_concentration());
  vehicle.set_battery_c_sensor_code(msg->battery_c_sensor_code());
  vehicle.set_battery_stress(msg->battery_stress());
  vehicle.set_battery_s_sensor_code(msg->battery_s_sensor_code());
  vehicle.set_battery_h_dc_dc(msg->battery_h_dc_dc());
  vehicle.set_battery_capacity(msg->battery_capacity());
  vehicle.set_airconditioning_idx(msg->airconditioning_idx());
  vehicle.set_airconditioning_status(msg->airconditioning_status());
  vehicle.set_airconditioning_model(
      (legion::interface::Vehicle::AirConditioningModelStatus)
          msg->airconditioning_model());
  vehicle.set_airconditioning_volume(
      (legion::interface::Vehicle::AirConditioningVolumeStatus)
          msg->airconditioning_volume());
  vehicle.set_airconditioning_defrost(
      (legion::common::SwitchStatus)msg->airconditioning_defrost());
  std::vector<legion::common::DoorStatus> door_status_vec;
  for (auto it_door_status_vec : msg->door_status()) {
    legion::common::DoorStatus door_status;
    door_status = (legion::common::DoorStatus)it_door_status_vec;
    door_status_vec.emplace_back(door_status);
  }
  vehicle.set_door_status(&door_status_vec);
  vehicle.set_rsrp(msg->rsrp());
  vehicle.set_sinr(msg->sinr());
  vehicle.set_uspeed(msg->uspeed());
  vehicle.set_dspeed(msg->dspeed());
  vehicle.set_loss(msg->loss());
  vehicle.set_delay(msg->delay());
  vehicle.set_refrigeration_idx(msg->refrigeration_idx());
  vehicle.set_refrigeration_status(
      (legion::common::SwitchStatus)msg->refrigeration_status());
  vehicle.set_refrigeration_stemp(msg->refrigeration_stemp());
  vehicle.set_refrigeration_ctemp(msg->refrigeration_ctemp());
  vehicle.set_driving_motor_idx(msg->driving_motor_idx());
  vehicle.set_driving_motor_status(msg->driving_motor_status());
  vehicle.set_driving_motor_ctemp(msg->driving_motor_ctemp());
  vehicle.set_driving_motor_rspeed(msg->driving_motor_rspeed());
  vehicle.set_driving_motor_torque(msg->driving_motor_torque());
  vehicle.set_driving_motor_etemp(msg->driving_motor_etemp());
  vehicle.set_driving_motor_voltage(msg->driving_motor_voltage());
  vehicle.set_driving_motor_ammeter(msg->driving_motor_ammeter());
  vehicle.set_outline_lamp_status(
      (legion::common::SwitchStatus)msg->outline_lamp_status());
  vehicle.set_warning_lamp_status(
      (legion::common::SwitchStatus)msg->warning_lamp_status());
  vehicle.set_backlight_lamp_status(
      (legion::common::SwitchStatus)msg->backlight_lamp_status());
  vehicle.set_brakelamp_lamp_status(
      (legion::common::SwitchStatus)msg->brakelamp_lamp_status());
  vehicle.set_left_lamp_status(
      (legion::common::SwitchStatus)msg->left_lamp_status());
  vehicle.set_right_lamp_status(
      (legion::common::SwitchStatus)msg->right_lamp_status());
  vehicle.set_front_touch_status(
      (legion::common::SwitchStatus)msg->front_touch_status());
  vehicle.set_rear_touch_status(
      (legion::common::SwitchStatus)msg->rear_touch_status());
  vehicle.set_horn_status((legion::common::SwitchStatus)msg->horn_status());
  vehicle.set_length(msg->length());
  vehicle.set_width(msg->width());
  vehicle.set_height(msg->height());
  vehicle.set_cleanup_switch_status(
      (legion::common::SwitchStatus)msg->cleanup_switch_status());
  vehicle.set_watering_switch_status(
      (legion::common::SwitchStatus)msg->watering_switch_status());
  vehicle.set_trash_can_status(
      (legion::interface::Vehicle::TrashCanStatus)msg->trash_can_status());
  vehicle.set_water_tank_status(
      (legion::interface::Vehicle::WaterTankStatus)msg->water_tank_status());
  vehicle.set_water_add_switch_status(
      (legion::common::SwitchStatus)msg->water_add_switch_status());
  vehicle.set_hatch_unlock_switch_status(
      (legion::common::SwitchStatus)msg->hatch_unlock_switch_status());
  vehicle.set_water_tank_level(msg->water_tank_level());
  vehicle.set_hmi_highbeam(
      (legion::interface::Vehicle::HMIHighBeamCmdState)msg->hmi_highbeam());
  vehicle.set_hmi_cleanup(
      (legion::interface::Vehicle::HMICleanUpCmdState)msg->hmi_cleanup());
  vehicle.set_hmi_watering(
      (legion::interface::Vehicle::HMIWateringCmdState)msg->hmi_watering());
  vehicle.set_bms_charge_status(
      (legion::interface::Vehicle::BMSChargeStatus)msg->bms_charge_status());
  vehicle.set_emergency_button_status(
      (legion::common::SwitchStatus)msg->emergency_button_status());
  vehicle.set_traction(
      (legion::interface::Vehicle::EquipmentState)msg->traction());
  vehicle.set_abs((legion::interface::Vehicle::EquipmentState)msg->abs());
  vehicle.set_scs((legion::interface::Vehicle::EquipmentState)msg->scs());
  vehicle.set_brake_boost(
      (legion::interface::Vehicle::EquipmentState)msg->brake_boost());
  vehicle.set_aux_brakes(
      (legion::interface::Vehicle::EquipmentState)msg->aux_brakes());

  instance_->HandleVehicle(vehicle);
}

template <typename T>
void DdsMessageManager<T>::on_data_available(
    eprosima::fastdds::dds::DataReader* reader) {
  std::lock_guard<std::mutex> lock(r_mutex_);
  if (is_init_ == false) return;
  if (!reader->get_topicdescription()->get_name().compare(
          "rt/control/ControlCommand")) {
    ros2_interface::msg::ControlCommand msg;
    eprosima::fastdds::dds::SampleInfo info;
    if (control_command_reader_->take_next_sample(&msg, &info) ==
        ReturnCode_t::RETCODE_OK) {
      HandleControlCommandMessage(&msg);
    }
  } else if (!reader->get_topicdescription()->get_name().compare(
                 "rt/drivers/canbus/Chassis")) {
    ros2_interface::msg::Chassis msg;
    eprosima::fastdds::dds::SampleInfo info;
    if (chassis_reader_->take_next_sample(&msg, &info) ==
        ReturnCode_t::RETCODE_OK) {
      HandleChassisMessage(&msg);
    }
  } else if (!reader->get_topicdescription()->get_name().compare(
                 "rt/drivers/canbus/Events")) {
    ros2_interface::msg::Events msg;
    eprosima::fastdds::dds::SampleInfo info;
    if (events_reader_->take_next_sample(&msg, &info) ==
        ReturnCode_t::RETCODE_OK) {
      HandleEventsMessage(&msg);
    }
  } else if (!reader->get_topicdescription()->get_name().compare(
                 "rt/drivers/canbus/Vehicle")) {
    ros2_interface::msg::Vehicle msg;
    eprosima::fastdds::dds::SampleInfo info;
    if (vehicle_reader_->take_next_sample(&msg, &info) ==
        ReturnCode_t::RETCODE_OK) {
      HandleVehicleMessage(&msg);
    }
  }
}

template <typename T>
void DdsMessageManager<T>::on_publication_matched(
    eprosima::fastdds::dds::DataWriter* writer,
    const eprosima::fastdds::dds::PublicationMatchedStatus& info) {
  if (info.current_count_change >= 1) {
    AINFO << "Publisher in topic " << writer->get_topic()->get_name()
          << " MATCHES Sub: " << info.last_subscription_handle << std::endl;
  } else {
    AINFO << "Publisher in topic " << writer->get_topic()->get_name()
          << " REMOVES Sub: " << info.last_subscription_handle << std::endl;
  }
}

template <typename T>
void DdsMessageManager<T>::on_offered_deadline_missed(
    eprosima::fastdds::dds::DataWriter* writer,
    const eprosima::fastdds::dds::OfferedDeadlineMissedStatus& status) {
  if (0 < status.total_count_change) {
    AWARN << "DataWriter " << writer->guid() << " detects deadline missed";
  }
}

template <typename T>
void DdsMessageManager<T>::on_liveliness_lost(
    eprosima::fastdds::dds::DataWriter* writer,
    const eprosima::fastdds::dds::LivelinessLostStatus& status) {
  if (0 < status.total_count_change) {
    AWARN << "DataWriter " << writer->guid() << " detects liveliness lost";
  }
}

template <typename T>
void DdsMessageManager<T>::on_offered_incompatible_qos(
    eprosima::fastdds::dds::DataWriter* writer,
    const eprosima::fastdds::dds::OfferedIncompatibleQosStatus& status) {
  if (0 < status.total_count_change) {
    AWARN << "DataWriter " << writer->guid() << " detects incompatible QoS "
          << qos_policy_id_to_string(status.last_policy_id);
  }
}

template <typename T>
void DdsMessageManager<T>::on_requested_deadline_missed(
    eprosima::fastdds::dds::DataReader* reader,
    const eprosima::fastrtps::RequestedDeadlineMissedStatus& status) {
  if (0 < status.total_count_change) {
    AWARN << "DataReader " << reader->guid() << " detects deadline missed";
  }
}

template <typename T>
void DdsMessageManager<T>::on_liveliness_changed(
    eprosima::fastdds::dds::DataReader* reader,
    const eprosima::fastrtps::LivelinessChangedStatus& status) {
  if (0 < status.alive_count_change) {
    AWARN << "DataReader " << reader->guid() << " detects liveliness recovered";
  }
  if (0 < status.not_alive_count_change) {
    AWARN << "DataReader " << reader->guid() << " detects liveliness lost";
  }
}

template <typename T>
void DdsMessageManager<T>::on_requested_incompatible_qos(
    eprosima::fastdds::dds::DataReader* reader,
    const eprosima::fastdds::dds::RequestedIncompatibleQosStatus& status) {
  if (0 < status.total_count_change) {
    std::stringstream str;
    AWARN << "DataReader " << reader->guid() << " detects incompatible QoS "
          << qos_policy_id_to_string(status.last_policy_id);
  }
}

template <typename T>
std::string DdsMessageManager<T>::qos_policy_id_to_string(
    eprosima::fastdds::dds::QosPolicyId_t policy_id) {
  std::string ret_val{"UnknownQoS"};
  switch (policy_id) {
    case USERDATA_QOS_POLICY_ID:
      ret_val = "USERDATA_QOS";
      break;
    case DURABILITY_QOS_POLICY_ID:
      ret_val = "DURABILITY_QOS";
      break;
    case PRESENTATION_QOS_POLICY_ID:
      ret_val = "PRESENTATION_QOS";
      break;
    case DEADLINE_QOS_POLICY_ID:
      ret_val = "DEADLINE_QOS";
      break;
    case LATENCYBUDGET_QOS_POLICY_ID:
      ret_val = "LATENCYBUDGET_QOS";
      break;
    case OWNERSHIP_QOS_POLICY_ID:
      ret_val = "OWNERSHIP_QOS";
      break;
    case OWNERSHIPSTRENGTH_QOS_POLICY_ID:
      ret_val = "OWNERSHIPSTRENGTH_QOS";
      break;
    case LIVELINESS_QOS_POLICY_ID:
      ret_val = "LIVELINESS_QOS";
      break;
    case TIMEBASEDFILTER_QOS_POLICY_ID:
      ret_val = "TIMEBASEDFILTER_QOS";
      break;
    case PARTITION_QOS_POLICY_ID:
      ret_val = "PARTITION_QOS";
      break;
    case RELIABILITY_QOS_POLICY_ID:
      ret_val = "RELIABILITY_QOS";
      break;
    case DESTINATIONORDER_QOS_POLICY_ID:
      ret_val = "DESTINATIONORDER_QOS";
      break;
    case HISTORY_QOS_POLICY_ID:
      ret_val = "HISTORY_QOS";
      break;
    case RESOURCELIMITS_QOS_POLICY_ID:
      ret_val = "RESOURCELIMITS_QOS";
      break;
    case ENTITYFACTORY_QOS_POLICY_ID:
      ret_val = "ENTITYFACTORY_QOS";
      break;
    case WRITERDATALIFECYCLE_QOS_POLICY_ID:
      ret_val = "WRITERDATALIVECYCLE_QOS";
      break;
    case READERDATALIFECYCLE_QOS_POLICY_ID:
      ret_val = "READERDATALIFECYCLE_QOS";
      break;
    case TOPICDATA_QOS_POLICY_ID:
      ret_val = "TOPICDATA_QOS";
      break;
    case GROUPDATA_QOS_POLICY_ID:
      ret_val = "GROUPDATA_QOS";
      break;
    case TRANSPORTPRIORITY_QOS_POLICY_ID:
      ret_val = "TRANSPORTPRIORITY_QOS";
      break;
    case LIFESPAN_QOS_POLICY_ID:
      ret_val = "LIFESPAN_QOS";
      break;
    case DURABILITYSERVICE_QOS_POLICY_ID:
      ret_val = "DURABILITYSERVICE_QOS";
      break;
    case DATAREPRESENTATION_QOS_POLICY_ID:
      ret_val = "DATAREPRESENTATION_QOS";
      break;
    case TYPECONSISTENCYENFORCEMENT_QOS_POLICY_ID:
      ret_val = "TYPECONSISTENCYENFORCEMENT_QOS";
      break;
    case DISABLEPOSITIVEACKS_QOS_POLICY_ID:
      ret_val = "DISABLEPOSITIVEACKS_QOS";
      break;
    case PARTICIPANTRESOURCELIMITS_QOS_POLICY_ID:
      ret_val = "PARTICIPANTRESOURCELIMITS_QOS";
      break;
    case PROPERTYPOLICY_QOS_POLICY_ID:
      ret_val = "PROPERTYPOLICY_QOS";
      break;
    case PUBLISHMODE_QOS_POLICY_ID:
      ret_val = "PUBLISHMODE_QOS";
      break;
    case READERRESOURCELIMITS_QOS_POLICY_ID:
      ret_val = "READERRESOURCELIMITS_QOS";
      break;
    case RTPSENDPOINT_QOS_POLICY_ID:
      ret_val = "RTPSENDPOINT_QOS";
      break;
    case RTPSRELIABLEREADER_QOS_POLICY_ID:
      ret_val = "RTPSRELIABLEREADER_QOS";
      break;
    case RTPSRELIABLEWRITER_QOS_POLICY_ID:
      ret_val = "RTPSRELIABLEWRITER_QOS";
      break;
    case TRANSPORTCONFIG_QOS_POLICY_ID:
      ret_val = "TRANSPORTCONFIG_QOS";
      break;
    case TYPECONSISTENCY_QOS_POLICY_ID:
      ret_val = "TYPECONSISTENCY_QOS";
      break;
    case WIREPROTOCOLCONFIG_QOS_POLICY_ID:
      ret_val = "WIREPROTOCOLCONFIG_QOS";
      break;
    case WRITERRESOURCELIMITS_QOS_POLICY_ID:
      ret_val = "WRITERRESOURCELIMITS_QOS";
      break;
    default:
      break;
  }

  return ret_val;
}

template <typename T>
DdsMessageManager<T>::~DdsMessageManager() {
  if (!is_init_) return;
  if (routing_request_writer_ != nullptr) {
    publisher_->delete_datawriter(routing_request_writer_);
  }
  if (obu_cmd_msg_writer_ != nullptr) {
    publisher_->delete_datawriter(obu_cmd_msg_writer_);
  }
  if (vehicle_task_writer_ != nullptr) {
    publisher_->delete_datawriter(vehicle_task_writer_);
  }
  if (teleop_control_command_writer_ != nullptr) {
    publisher_->delete_datawriter(teleop_control_command_writer_);
  }
  if (faults_writer_ != nullptr) {
    publisher_->delete_datawriter(faults_writer_);
  }
  if (publisher_ != nullptr) {
    participant_->delete_publisher(publisher_);
  }
  if (topic_ != nullptr) {
    participant_->delete_topic(topic_);
  }
  if (control_command_reader_ != nullptr) {
    subscriber_->delete_datareader(control_command_reader_);
  }
  if (chassis_reader_ != nullptr) {
    subscriber_->delete_datareader(chassis_reader_);
  }
  if (events_reader_ != nullptr) {
    subscriber_->delete_datareader(events_reader_);
  }
  if (vehicle_reader_ != nullptr) {
    subscriber_->delete_datareader(vehicle_reader_);
  }
  if (topic_ != nullptr) {
    participant_->delete_topic(topic_);
  }
  if (subscriber_ != nullptr) {
    participant_->delete_subscriber(subscriber_);
  }
  DomainParticipantFactory::get_instance()->delete_participant(participant_);
}
template <typename T>
void DdsMessageManager<T>::Run() {}

template <typename T>
void DdsMessageManager<T>::Stop() {}
}  // namespace legion_bridge
}  // namespace legion
#endif

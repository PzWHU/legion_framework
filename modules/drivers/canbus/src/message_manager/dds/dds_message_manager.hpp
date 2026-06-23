/**
 * @file    dds_message_manager.hpp
 * @author  dfyx-legion
 * @date    2024-01-04
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
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion {
namespace drivers {
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

  // WheelInfo
  wheel_info_type_.reset(new ros2_interface::msg::WheelInfoPubSubType());
  wheel_info_type_->auto_fill_type_object(
      dds_json_["writer_qos"]["auto_fill_type_object"]);
  wheel_info_type_->auto_fill_type_information(
      dds_json_["writer_qos"]["auto_fill_type_information"]);
  wheel_info_type_.register_type(participant_);
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/drivers/canbus/WheelInfo",
                                      wheel_info_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  wheel_info_writer_ = publisher_->create_datawriter(topic_, wqos, nullptr);

  // Chassis
  chassis_type_.reset(new ros2_interface::msg::ChassisPubSubType());
  chassis_type_->auto_fill_type_object(
      dds_json_["writer_qos"]["auto_fill_type_object"]);
  chassis_type_->auto_fill_type_information(
      dds_json_["writer_qos"]["auto_fill_type_information"]);
  chassis_type_.register_type(participant_);
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/drivers/canbus/Chassis",
                                      chassis_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  chassis_writer_ = publisher_->create_datawriter(topic_, wqos, nullptr);

  // Vehicle
  vehicle_type_.reset(new ros2_interface::msg::VehiclePubSubType());
  vehicle_type_->auto_fill_type_object(
      dds_json_["writer_qos"]["auto_fill_type_object"]);
  vehicle_type_->auto_fill_type_information(
      dds_json_["writer_qos"]["auto_fill_type_information"]);
  vehicle_type_.register_type(participant_);
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/drivers/canbus/Vehicle",
                                      vehicle_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  vehicle_writer_ = publisher_->create_datawriter(topic_, wqos, nullptr);

  // Faults
  faults_type_.reset(new ros2_interface::msg::FaultsPubSubType());
  faults_type_->auto_fill_type_object(
      dds_json_["writer_qos"]["auto_fill_type_object"]);
  faults_type_->auto_fill_type_information(
      dds_json_["writer_qos"]["auto_fill_type_information"]);
  faults_type_.register_type(participant_);
  publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/drivers/canbus/Faults",
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

  vehicle_task_type_.reset(new ros2_interface::msg::VehicleTaskPubSubType());
  vehicle_task_type_->auto_fill_type_object(
      dds_json_["reader_qos"]["auto_fill_type_object"]);
  vehicle_task_type_->auto_fill_type_information(
      dds_json_["reader_qos"]["auto_fill_type_information"]);
  vehicle_task_type_.register_type(participant_);
  subscriber_ =
      participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic("rt/legion_bridge/VehicleTask",
                                      vehicle_task_type_.get_type_name(),
                                      TOPIC_QOS_DEFAULT);
  vehicle_task_reader_ = subscriber_->create_datareader(topic_, rqos, this);

  teleop_control_command_type_.reset(
      new ros2_interface::msg::ControlCommandPubSubType());
  teleop_control_command_type_->auto_fill_type_object(
      dds_json_["reader_qos"]["auto_fill_type_object"]);
  teleop_control_command_type_->auto_fill_type_information(
      dds_json_["reader_qos"]["auto_fill_type_information"]);
  teleop_control_command_type_.register_type(participant_);
  subscriber_ =
      participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
  topic_ = participant_->create_topic(
      "rt/legion_bridge/TeleopControlCommand",
      teleop_control_command_type_.get_type_name(), TOPIC_QOS_DEFAULT);
  teleop_control_command_reader_ =
      subscriber_->create_datareader(topic_, rqos, this);

  //线程执行开始
  handle_message_thread_.reset(new std::thread([this] { Run(); }));
  if (handle_message_thread_ == nullptr) {
    AERROR << "Unable to create handle_message_thread thread.";
    return;
  }
  is_init_ = true;
}

template <typename T>
void DdsMessageManager<T>::PublishWheelInfo(legion::interface::WheelInfo msg) {
  if (is_init_ == false) return;
  ros2_interface::msg::WheelInfo wheel_info;
  MESSAGE_DDS_HEADER_ASSIGN(ros2_interface::msg, wheel_info)
  wheel_info.moving_status() = msg.moving_status();
  wheel_info.steer_driving_mode() = msg.steer_driving_mode();
  wheel_info.steering_value() = msg.steering_value();
  wheel_info.steering_torque_nm() = msg.steering_torque_nm();
  wheel_info.steering_rate_dps() = msg.steering_rate_dps();
  wheel_info.speed_mps() = msg.speed_mps();
  wheel_info.veh_spd_vld() = msg.veh_spd_vld();
  wheel_info.gear() = msg.gear();
  wheel_info.gear_vld() = msg.gear_vld();
  wheel_info.wheel_direction_rr() = msg.wheel_direction_rr();
  wheel_info.wheel_spd_rr() = msg.wheel_spd_rr();
  wheel_info.wheel_direction_rl() = msg.wheel_direction_rl();
  wheel_info.wheel_spd_rl() = msg.wheel_spd_rl();
  wheel_info.wheel_direction_fr() = msg.wheel_direction_fr();
  wheel_info.wheel_spd_fr() = msg.wheel_spd_fr();
  wheel_info.wheel_direction_fl() = msg.wheel_direction_fl();
  wheel_info.wheel_spd_fl() = msg.wheel_spd_fl();
  wheel_info.yaw_rate() = msg.yaw_rate();
  wheel_info.wss_fl_edges_sum() = msg.wss_fl_edges_sum();
  wheel_info.wss_fr_edges_sum() = msg.wss_fr_edges_sum();
  wheel_info.wss_rl_edges_sum() = msg.wss_rl_edges_sum();
  wheel_info.wss_rr_edges_sum() = msg.wss_rr_edges_sum();
  wheel_info.wss_fl_edges_sum_vld() = msg.wss_fl_edges_sum_vld();
  wheel_info.wss_fr_edges_sum_vld() = msg.wss_fr_edges_sum_vld();
  wheel_info.wss_rl_edges_sum_vld() = msg.wss_rl_edges_sum_vld();
  wheel_info.wss_rr_edges_sum_vld() = msg.wss_rr_edges_sum_vld();
  wheel_info.veh_lat_accel() = msg.veh_lat_accel();
  wheel_info.veh_lgt_accel() = msg.veh_lgt_accel();
  wheel_info.veh_lat_accel_vld() = msg.veh_lat_accel_vld();
  wheel_info.veh_lgt_accel_vld() = msg.veh_lgt_accel_vld();

  wheel_info_writer_->write(&wheel_info);
}

template <typename T>
void DdsMessageManager<T>::PublishChassis(legion::interface::Chassis msg) {
  if (is_init_ == false) return;
  ros2_interface::msg::Chassis chassis;
  MESSAGE_DDS_HEADER_ASSIGN(ros2_interface::msg, chassis)
  chassis.moving_status() = msg.moving_status();
  chassis.driving_mode() = msg.driving_mode();
  chassis.steer_driving_mode() = msg.steer_driving_mode();
  chassis.steering_status() = msg.steering_status();
  chassis.front_steering_value() = msg.front_steering_value();
  chassis.rear_steering_value() = msg.rear_steering_value();
  chassis.steering_torque_nm() = msg.steering_torque_nm();
  chassis.front_steering_rate_dps() = msg.front_steering_rate_dps();
  chassis.rear_steering_rate_dps() = msg.rear_steering_rate_dps();
  chassis.accel_driving_mode() = msg.accel_driving_mode();
  chassis.accel_status() = msg.accel_status();
  chassis.accel_value() = msg.accel_value();
  chassis.brake_driving_mode() = msg.brake_driving_mode();
  chassis.brake_status() = msg.brake_status();
  chassis.brake_value() = msg.brake_value();
  chassis.backup_brake_driving_mode() = msg.backup_brake_driving_mode();
  chassis.backup_brake_status() = msg.backup_brake_status();
  chassis.backup_brake_value() = msg.backup_brake_value();
  chassis.epb_driving_mode() = msg.epb_driving_mode();
  chassis.epb_status() = msg.epb_status();
  chassis.epb_level() = msg.epb_level();
  chassis.engine_status() = msg.engine_status();
  chassis.engine_rpm() = msg.engine_rpm();
  chassis.engine_torque() = msg.engine_torque();
  chassis.speed_mps() = msg.speed_mps();
  chassis.odometer_m() = msg.odometer_m();
  chassis.fuel_range_m() = msg.fuel_range_m();
  chassis.gear_driving_mode() = msg.gear_driving_mode();
  chassis.gear_status() = msg.gear_status();
  chassis.gear_location() = msg.gear_location();
  chassis.driver_seat_belt() = msg.driver_seat_belt();
  chassis.high_beam_status() = msg.high_beam_status();
  chassis.low_beam_status() = msg.low_beam_status();
  chassis.horn_status() = msg.horn_status();
  chassis.turn_lamp_status() = msg.turn_lamp_status();
  chassis.front_wiper_status() = msg.front_wiper_status();
  chassis.rear_wiper_status() = msg.rear_wiper_status();
  chassis.position_lamp_status() = msg.position_lamp_status();
  chassis.front_fog_lamp_status() = msg.front_fog_lamp_status();
  chassis.rear_fog_lamp_status() = msg.rear_fog_lamp_status();
  chassis.brake_lamp_status() = msg.brake_lamp_status();
  chassis.alarm_lamp_status() = msg.alarm_lamp_status();
  chassis.lf_door_status() = msg.lf_door_status();
  chassis.rf_door_status() = msg.rf_door_status();
  chassis.lr_door_status() = msg.lr_door_status();
  chassis.rr_door_status() = msg.rr_door_status();
  chassis.rearview_mirror_status() = msg.rearview_mirror_status();
  chassis.trunk_status() = msg.trunk_status();
  chassis.engine_bay_door_status() = msg.engine_bay_door_status();
  chassis.wheel_direction_rr() = msg.wheel_direction_rr();
  chassis.wheel_spd_rr() = msg.wheel_spd_rr();
  chassis.wheel_direction_rl() = msg.wheel_direction_rl();
  chassis.wheel_spd_rl() = msg.wheel_spd_rl();
  chassis.wheel_direction_fr() = msg.wheel_direction_fr();
  chassis.wheel_spd_fr() = msg.wheel_spd_fr();
  chassis.wheel_direction_fl() = msg.wheel_direction_fl();
  chassis.wheel_spd_fl() = msg.wheel_spd_fl();
  chassis.is_tire_pressure_ok() = msg.is_tire_pressure_ok();
  chassis.is_tire_pressure_lf_valid() = msg.is_tire_pressure_lf_valid();
  chassis.tire_pressure_lf() = msg.tire_pressure_lf();
  chassis.is_tire_pressure_rf_valid() = msg.is_tire_pressure_rf_valid();
  chassis.tire_pressure_rf() = msg.tire_pressure_rf();
  chassis.is_tire_pressure_lr_valid() = msg.is_tire_pressure_lr_valid();
  chassis.tire_pressure_lr() = msg.tire_pressure_lr();
  chassis.is_tire_pressure_rr_valid() = msg.is_tire_pressure_rr_valid();
  chassis.tire_pressure_rr() = msg.tire_pressure_rr();
  chassis.battery_power_percentage() = msg.battery_power_percentage();
  chassis.air_bag_status() = msg.air_bag_status();
  chassis.charging_gun_status() = msg.charging_gun_status();
  chassis.vehicle_power_status() = msg.vehicle_power_status();
  std::vector<int32_t> chassis_error_code_vec;
  std::vector<legion::interface::Chassis::ErrorCode>
      legion_chassis_error_code_vec;
  msg.chassis_error_code(legion_chassis_error_code_vec);
  for (auto it_chassis_error_code_vec : legion_chassis_error_code_vec) {
    int32_t error_code_item;
    error_code_item = (int32_t)it_chassis_error_code_vec;
    chassis_error_code_vec.emplace_back(error_code_item);
  }
  chassis.chassis_error_code() = chassis_error_code_vec;

  chassis_writer_->write(&chassis);
}

template <typename T>
void DdsMessageManager<T>::PublishVehicle(legion::interface::Vehicle msg) {
  if (is_init_ == false) return;
  ros2_interface::msg::Vehicle vehicle;
  MESSAGE_DDS_HEADER_ASSIGN(ros2_interface::msg, vehicle)
  vehicle.vehicle_type() = msg.vehicle_type();
  vehicle.vid() = msg.vid();
  vehicle.vehicle_num() = msg.vehicle_num();
  vehicle.oid() = msg.oid();
  vehicle.operation() = msg.operation();
  vehicle.totalcurrent() = msg.totalcurrent();
  vehicle.batterysoc() = msg.batterysoc();
  vehicle.totalvoltage() = msg.totalvoltage();
  vehicle.recharge() = msg.recharge();
  vehicle.dcdc() = msg.dcdc();
  vehicle.resistance() = msg.resistance();
  std::vector<uint8_t> seats;
  msg.seats(seats);
  vehicle.seats() = seats;
  vehicle.servicemode() = msg.servicemode();
  std::vector<int32_t> seat_belt_vec;
  std::vector<legion::common::SwitchStatus> legion_seat_belt_vec;
  msg.seat_belt(legion_seat_belt_vec);
  for (auto it_seat_belt_vec : legion_seat_belt_vec) {
    int32_t switch_status_item;
    switch_status_item = (int32_t)it_seat_belt_vec;
    seat_belt_vec.emplace_back(switch_status_item);
  }
  vehicle.seat_belt() = seat_belt_vec;
  vehicle.engine_status() = msg.engine_status();
  vehicle.battery_voltage() = msg.battery_voltage();
  vehicle.battery_ammeter() = msg.battery_ammeter();
  vehicle.battery_consumption() = msg.battery_consumption();
  vehicle.battery_probe() = msg.battery_probe();
  std::vector<double> battery_temperatures;
  msg.battery_temperatures(battery_temperatures);
  vehicle.battery_temperatures() = battery_temperatures;
  vehicle.battery_h_tepemperatures() = msg.battery_h_tepemperatures();
  vehicle.battery_ltepemperatures() = msg.battery_ltepemperatures();
  vehicle.battery_probe_code() = msg.battery_probe_code();
  vehicle.battery_h_concentration() = msg.battery_h_concentration();
  vehicle.battery_c_sensor_code() = msg.battery_c_sensor_code();
  vehicle.battery_stress() = msg.battery_stress();
  vehicle.battery_s_sensor_code() = msg.battery_s_sensor_code();
  vehicle.battery_h_dc_dc() = msg.battery_h_dc_dc();
  vehicle.battery_capacity() = msg.battery_capacity();
  vehicle.airconditioning_idx() = msg.airconditioning_idx();
  vehicle.airconditioning_status() = msg.airconditioning_status();
  vehicle.airconditioning_model() = msg.airconditioning_model();
  vehicle.airconditioning_volume() = msg.airconditioning_volume();
  vehicle.airconditioning_defrost() = msg.airconditioning_defrost();
  std::vector<int32_t> door_status_vec;
  std::vector<legion::common::DoorStatus> legion_door_status_vec;
  msg.door_status(legion_door_status_vec);
  for (auto it_door_status_vec : legion_door_status_vec) {
    int32_t door_status_item;
    door_status_item = (int32_t)it_door_status_vec;
    door_status_vec.emplace_back(door_status_item);
  }
  vehicle.door_status() = door_status_vec;
  vehicle.rsrp() = msg.rsrp();
  vehicle.sinr() = msg.sinr();
  vehicle.uspeed() = msg.uspeed();
  vehicle.dspeed() = msg.dspeed();
  vehicle.loss() = msg.loss();
  vehicle.delay() = msg.delay();
  vehicle.refrigeration_idx() = msg.refrigeration_idx();
  vehicle.refrigeration_status() = msg.refrigeration_status();
  vehicle.refrigeration_stemp() = msg.refrigeration_stemp();
  vehicle.refrigeration_ctemp() = msg.refrigeration_ctemp();
  vehicle.driving_motor_idx() = msg.driving_motor_idx();
  vehicle.driving_motor_status() = msg.driving_motor_status();
  vehicle.driving_motor_ctemp() = msg.driving_motor_ctemp();
  vehicle.driving_motor_rspeed() = msg.driving_motor_rspeed();
  vehicle.driving_motor_torque() = msg.driving_motor_torque();
  vehicle.driving_motor_etemp() = msg.driving_motor_etemp();
  vehicle.driving_motor_voltage() = msg.driving_motor_voltage();
  vehicle.driving_motor_ammeter() = msg.driving_motor_ammeter();
  vehicle.outline_lamp_status() = msg.outline_lamp_status();
  vehicle.warning_lamp_status() = msg.warning_lamp_status();
  vehicle.backlight_lamp_status() = msg.backlight_lamp_status();
  vehicle.brakelamp_lamp_status() = msg.brakelamp_lamp_status();
  vehicle.left_lamp_status() = msg.left_lamp_status();
  vehicle.right_lamp_status() = msg.right_lamp_status();
  vehicle.front_touch_status() = msg.front_touch_status();
  vehicle.rear_touch_status() = msg.rear_touch_status();
  vehicle.horn_status() = msg.horn_status();
  vehicle.length() = msg.length();
  vehicle.width() = msg.width();
  vehicle.height() = msg.height();
  vehicle.cleanup_switch_status() = msg.cleanup_switch_status();
  vehicle.watering_switch_status() = msg.watering_switch_status();
  vehicle.trash_can_status() = msg.trash_can_status();
  vehicle.water_tank_status() = msg.water_tank_status();
  vehicle.water_add_switch_status() = msg.water_add_switch_status();
  vehicle.hatch_unlock_switch_status() = msg.hatch_unlock_switch_status();
  vehicle.water_tank_level() = msg.water_tank_level();
  vehicle.hmi_highbeam() = msg.hmi_highbeam();
  vehicle.hmi_cleanup() = msg.hmi_cleanup();
  vehicle.hmi_watering() = msg.hmi_watering();
  vehicle.bms_charge_status() = msg.bms_charge_status();
  vehicle.emergency_button_status() = msg.emergency_button_status();
  vehicle.traction() = msg.traction();
  vehicle.abs() = msg.abs();
  vehicle.scs() = msg.scs();
  vehicle.brake_boost() = msg.brake_boost();
  vehicle.aux_brakes() = msg.aux_brakes();

  vehicle_writer_->write(&vehicle);
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

  instance_->HandleControlCommand(control_command);
}

template <typename T>
void DdsMessageManager<T>::HandleVehicleTaskMessage(
    const ros2_interface::msg::VehicleTask* msg) {
  legion::interface::VehicleTask vehicle_task;
  MESSAGE_DDS_HEADER_PARSER(vehicle_task)
  vehicle_task.set_clean_up_ctrl(
      (legion::common::SwitchStatus)msg->clean_up_ctrl());
  vehicle_task.set_watering_ctrl(
      (legion::common::SwitchStatus)msg->watering_ctrl());
  vehicle_task.set_water_add_ctrl(
      (legion::common::SwitchStatus)msg->water_add_ctrl());
  vehicle_task.set_hatch_unlock_ctrl(
      (legion::common::SwitchStatus)msg->hatch_unlock_ctrl());
  vehicle_task.set_decorative_light_ctrl(
      (legion::common::SwitchStatus)msg->decorative_light_ctrl());

  instance_->HandleVehicleTask(vehicle_task);
}

template <typename T>
void DdsMessageManager<T>::HandleTeleopControlCommandMessage(
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

  instance_->HandleTeleopControlCommand(control_command);
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
                 "rt/legion_bridge/VehicleTask")) {
    ros2_interface::msg::VehicleTask msg;
    eprosima::fastdds::dds::SampleInfo info;
    if (vehicle_task_reader_->take_next_sample(&msg, &info) ==
        ReturnCode_t::RETCODE_OK) {
      HandleVehicleTaskMessage(&msg);
    }
  } else if (!reader->get_topicdescription()->get_name().compare(
                 "rt/legion_bridge/TeleopControlCommand")) {
    ros2_interface::msg::ControlCommand msg;
    eprosima::fastdds::dds::SampleInfo info;
    if (teleop_control_command_reader_->take_next_sample(&msg, &info) ==
        ReturnCode_t::RETCODE_OK) {
      HandleTeleopControlCommandMessage(&msg);
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
  if (wheel_info_writer_ != nullptr) {
    publisher_->delete_datawriter(wheel_info_writer_);
  }
  if (chassis_writer_ != nullptr) {
    publisher_->delete_datawriter(chassis_writer_);
  }
  if (vehicle_writer_ != nullptr) {
    publisher_->delete_datawriter(vehicle_writer_);
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
  if (vehicle_task_reader_ != nullptr) {
    subscriber_->delete_datareader(vehicle_task_reader_);
  }
  if (teleop_control_command_reader_ != nullptr) {
    subscriber_->delete_datareader(teleop_control_command_reader_);
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
}  // namespace drivers
}  // namespace legion
#endif

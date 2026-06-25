/**
 * @file    mqtt_client.cpp
 * @brief   轻量级 MQTT 发布/订阅客户端实现
 */

#include "mqtt/mqtt_client.h"

#include <arpa/inet.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cerrno>
#include <cstring>

namespace legion {
namespace vla_gateway {

namespace {
constexpr int kConnectTimeoutMs = 2000;
constexpr uint8_t kConnectFlag = 0x10;
constexpr uint8_t kPublishFlag = 0x30;  // QoS0
constexpr uint8_t kSubscribeFlag = 0x82;
constexpr uint8_t kSubAckFlag = 0x90;
constexpr uint8_t kPingReqFlag = 0xC0;
constexpr uint8_t kPingRespFlag = 0xD0;
constexpr uint8_t kDisconnectFlag = 0xE0;
}  // namespace

MqttClient::MqttClient() = default;

MqttClient::~MqttClient() { Disconnect(); }

bool MqttClient::Init(const std::string& broker, int port,
                      const std::string& client_id) {
  std::lock_guard<std::mutex> lock(mutex_);
  broker_ = broker;
  port_ = port;
  client_id_ = client_id.empty() ? "vla_gateway" : client_id;
  return true;
}

bool MqttClient::IsConnected() const {
  std::lock_guard<std::mutex> lock(mutex_);
  return connected_;
}

void MqttClient::Disconnect() {
  {
    std::lock_guard<std::mutex> lock(mutex_);
    recv_running_ = false;
    if (sock_ >= 0 && connected_) {
      std::vector<uint8_t> disc = {kDisconnectFlag, 0x00};
      Send(disc.data(), disc.size());
    }
    Close();
  }
  if (recv_thread_ != nullptr && recv_thread_->joinable()) {
    recv_thread_->join();
    recv_thread_.reset();
  }
}

bool MqttClient::Publish(const std::string& topic,
                         const std::string& payload) {
  std::lock_guard<std::mutex> lock(mutex_);
  if (!connected_) {
    if (!ConnectAndResubscribe()) {
      return false;
    }
  }
  if (SendPublish(topic, payload)) {
    return true;
  }
  // 发送失败时重连一次再试
  Close();
  if (!ConnectAndResubscribe()) {
    return false;
  }
  return SendPublish(topic, payload);
}

bool MqttClient::Subscribe(const std::string& topic, MessageCallback callback) {
  std::lock_guard<std::mutex> lock(mutex_);
  subscriptions_.push_back({topic, callback});

  if (!connected_) {
    if (!ConnectAndResubscribe()) {
      return false;
    }
  } else {
    if (!SendSubscribe(topic, next_packet_id_++)) {
      return false;
    }
  }
  StartReceiveLoopIfNeeded();
  return true;
}

void MqttClient::AppendU16String(std::vector<uint8_t>& buf,
                                 const std::string& str) {
  size_t len = str.size();
  if (len > 65535) {
    len = 65535;
  }
  buf.push_back(static_cast<uint8_t>((len >> 8) & 0xFF));
  buf.push_back(static_cast<uint8_t>(len & 0xFF));
  buf.insert(buf.end(), str.begin(), str.begin() + len);
}

void MqttClient::AppendRemainingLength(std::vector<uint8_t>& buf, size_t len) {
  do {
    uint8_t byte = len % 128;
    len /= 128;
    if (len > 0) {
      byte |= 0x80;
    }
    buf.push_back(byte);
  } while (len > 0);
}

bool MqttClient::ConnectAndResubscribe() {
  if (connected_) {
    return true;
  }
  if (!DoConnect()) {
    return false;
  }
  connected_ = true;
  ResubscribeAll();
  StartReceiveLoopIfNeeded();
  return true;
}

bool MqttClient::DoConnect() {
  sock_ = socket(AF_INET, SOCK_STREAM, 0);
  if (sock_ < 0) {
    return false;
  }

  // 设置非阻塞以支持 connect 超时
  int flags = fcntl(sock_, F_GETFL, 0);
  if (flags < 0 || fcntl(sock_, F_SETFL, flags | O_NONBLOCK) < 0) {
    Close();
    return false;
  }

  sockaddr_in addr;
  std::memset(&addr, 0, sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_port = htons(static_cast<uint16_t>(port_));
  if (inet_pton(AF_INET, broker_.c_str(), &addr.sin_addr) <= 0) {
    Close();
    return false;
  }

  int ret = connect(sock_, reinterpret_cast<sockaddr*>(&addr), sizeof(addr));
  if (ret < 0 && errno != EINPROGRESS) {
    Close();
    return false;
  }

  fd_set fdset;
  FD_ZERO(&fdset);
  FD_SET(sock_, &fdset);
  timeval tv;
  tv.tv_sec = kConnectTimeoutMs / 1000;
  tv.tv_usec = (kConnectTimeoutMs % 1000) * 1000;

  ret = select(sock_ + 1, nullptr, &fdset, nullptr, &tv);
  if (ret <= 0 || !FD_ISSET(sock_, &fdset)) {
    Close();
    return false;
  }

  int so_error = 0;
  socklen_t len = sizeof(so_error);
  if (getsockopt(sock_, SOL_SOCKET, SO_ERROR, &so_error, &len) < 0 ||
      so_error != 0) {
    Close();
    return false;
  }

  // 恢复阻塞模式，方便后续 recv
  int cur_flags = fcntl(sock_, F_GETFL, 0);
  if (cur_flags >= 0) {
    fcntl(sock_, F_SETFL, cur_flags & ~O_NONBLOCK);
  }

  if (!SendConnect()) {
    Close();
    return false;
  }

  if (!ReadConnack()) {
    Close();
    return false;
  }

  return true;
}

bool MqttClient::SendConnect() {
  std::vector<uint8_t> packet;
  packet.push_back(kConnectFlag);

  std::vector<uint8_t> variable;
  AppendU16String(variable, "MQTT");  // protocol name
  variable.push_back(0x04);           // protocol level
  variable.push_back(0x02);           // clean session
  variable.push_back(0x00);
  variable.push_back(0x00);  // keep alive 0（禁用 keepalive）
  AppendU16String(variable, client_id_);

  AppendRemainingLength(packet, variable.size());
  packet.insert(packet.end(), variable.begin(), variable.end());

  return Send(packet.data(), packet.size());
}

void MqttClient::Close() {
  connected_ = false;
  if (sock_ >= 0) {
    close(sock_);
    sock_ = -1;
  }
}

bool MqttClient::SendPublish(const std::string& topic,
                             const std::string& payload) {
  std::vector<uint8_t> packet;
  packet.push_back(kPublishFlag);

  std::vector<uint8_t> variable;
  AppendU16String(variable, topic);
  variable.insert(variable.end(), payload.begin(), payload.end());

  AppendRemainingLength(packet, variable.size());
  packet.insert(packet.end(), variable.begin(), variable.end());

  return Send(packet.data(), packet.size());
}

bool MqttClient::SendSubscribe(const std::string& topic, uint16_t packet_id) {
  std::vector<uint8_t> packet;
  packet.push_back(kSubscribeFlag);

  std::vector<uint8_t> variable;
  variable.push_back(static_cast<uint8_t>((packet_id >> 8) & 0xFF));
  variable.push_back(static_cast<uint8_t>(packet_id & 0xFF));
  AppendU16String(variable, topic);
  variable.push_back(0x00);  // QoS0

  AppendRemainingLength(packet, variable.size());
  packet.insert(packet.end(), variable.begin(), variable.end());

  return Send(packet.data(), packet.size());
}

void MqttClient::ResubscribeAll() {
  for (const auto& sub : subscriptions_) {
    SendSubscribe(sub.topic, next_packet_id_++);
  }
}

bool MqttClient::Send(const uint8_t* data, size_t len) {
  size_t sent = 0;
  while (sent < len) {
    ssize_t n = ::send(sock_, data + sent, len - sent, MSG_NOSIGNAL);
    if (n > 0) {
      sent += static_cast<size_t>(n);
    } else if (n < 0 && errno == EINTR) {
      continue;
    } else {
      return false;
    }
  }
  return true;
}

bool MqttClient::Recv(uint8_t* data, size_t len) {
  size_t received = 0;
  while (received < len) {
    ssize_t n = ::recv(sock_, data + received, len - received, 0);
    if (n > 0) {
      received += static_cast<size_t>(n);
    } else if (n == 0) {
      return false;
    } else if (n < 0 && errno == EINTR) {
      continue;
    } else {
      return false;
    }
  }
  return true;
}

bool MqttClient::ReadConnack() {
  uint8_t header[2] = {0};
  if (!Recv(header, 2)) {
    return false;
  }
  if (header[0] != 0x20) {
    return false;
  }
  size_t remaining = header[1];
  if (remaining != 2) {
    return false;
  }
  uint8_t payload[2] = {0};
  if (!Recv(payload, 2)) {
    return false;
  }
  return payload[1] == 0x00;
}

void MqttClient::StartReceiveLoopIfNeeded() {
  if (recv_thread_ != nullptr && recv_thread_->joinable()) {
    return;
  }
  recv_running_ = true;
  recv_thread_.reset(new std::thread([this]() { ReceiveLoop(); }));
}

void MqttClient::ReceiveLoop() {
  while (recv_running_) {
    {
      std::lock_guard<std::mutex> lock(mutex_);
      if (!connected_) {
        break;
      }
    }

    uint8_t fixed_header = 0;
    if (!Recv(&fixed_header, 1)) {
      std::lock_guard<std::mutex> lock(mutex_);
      Close();
      break;
    }

    size_t remaining = 0;
    uint32_t multiplier = 1;
    bool length_ok = true;
    while (true) {
      uint8_t byte = 0;
      if (!Recv(&byte, 1)) {
        length_ok = false;
        break;
      }
      remaining += (byte & 0x7F) * multiplier;
      if ((byte & 0x80) == 0) {
        break;
      }
      multiplier *= 128;
      if (multiplier > 128 * 128 * 128) {
        length_ok = false;
        break;
      }
    }
    if (!length_ok) {
      std::lock_guard<std::mutex> lock(mutex_);
      Close();
      break;
    }

    std::vector<uint8_t> buf(remaining);
    if (remaining > 0 && !Recv(buf.data(), remaining)) {
      std::lock_guard<std::mutex> lock(mutex_);
      Close();
      break;
    }

    uint8_t packet_type = fixed_header >> 4;
    if (packet_type == 3) {  // PUBLISH
      ParsePublish(buf, fixed_header);
    } else if (packet_type == (kPingRespFlag >> 4)) {
      // PINGRESP, ignore
    } else if (packet_type == (kSubAckFlag >> 4)) {
      // SUBACK, ignore
    }
  }
}

void MqttClient::ParsePublish(const std::vector<uint8_t>& buf,
                              uint8_t fixed_header) {
  size_t offset = 0;
  auto read_string = [&](std::string* out) -> bool {
    if (offset + 2 > buf.size()) {
      return false;
    }
    uint16_t len = (static_cast<uint16_t>(buf[offset]) << 8) | buf[offset + 1];
    offset += 2;
    if (offset + len > buf.size()) {
      return false;
    }
    out->assign(reinterpret_cast<const char*>(buf.data()) + offset, len);
    offset += len;
    return true;
  };

  std::string topic;
  if (!read_string(&topic)) {
    return;
  }

  uint8_t qos = (fixed_header >> 1) & 0x03;
  if (qos > 0) {
    if (offset + 2 > buf.size()) {
      return;
    }
    offset += 2;  // skip packet id
  }

  std::string payload;
  if (offset < buf.size()) {
    payload.assign(reinterpret_cast<const char*>(buf.data()) + offset,
                   buf.size() - offset);
  }

  std::vector<Subscription> subs_copy;
  {
    std::lock_guard<std::mutex> lock(mutex_);
    subs_copy = subscriptions_;
  }
  for (const auto& sub : subs_copy) {
    // 简单精确匹配即可
    if (sub.topic == topic && sub.callback) {
      sub.callback(topic, payload);
    }
  }
}

}  // namespace vla_gateway
}  // namespace legion

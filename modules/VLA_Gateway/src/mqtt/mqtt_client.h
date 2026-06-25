/**
 * @file    mqtt_client.h
 * @brief   轻量级 MQTT 发布/订阅客户端（TCP socket 原生实现）
 */

#pragma once

#include <atomic>
#include <cstdint>
#include <functional>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

namespace legion {
namespace vla_gateway {

/**
 * @brief 最小 MQTT v3.1.1 客户端，支持 QoS0 发布与订阅
 */
class MqttClient {
 public:
  using MessageCallback =
      std::function<void(const std::string& topic, const std::string& payload)>;

  MqttClient();
  ~MqttClient();

  /**
   * @brief 配置 broker 和 client_id
   */
  bool Init(const std::string& broker, int port,
            const std::string& client_id);

  /**
   * @brief 发布一条消息（QoS0）
   */
  bool Publish(const std::string& topic, const std::string& payload);

  /**
   * @brief 订阅一个 topic，收到消息后调用 callback
   */
  bool Subscribe(const std::string& topic, MessageCallback callback);

  /**
   * @brief 断开连接并停止接收线程
   */
  void Disconnect();

  /**
   * @brief 当前是否已连接
   */
  bool IsConnected() const;

 private:
  struct Subscription {
    std::string topic;
    MessageCallback callback;
  };

  bool ConnectAndResubscribe();
  bool DoConnect();
  void Close();
  bool SendPublish(const std::string& topic, const std::string& payload);
  bool SendSubscribe(const std::string& topic, uint16_t packet_id);
  bool SendConnect();
  bool ReadConnack();
  bool Send(const uint8_t* data, size_t len);
  bool Recv(uint8_t* data, size_t len);
  void ReceiveLoop();
  void ParsePublish(const std::vector<uint8_t>& buf, uint8_t fixed_header);
  void ResubscribeAll();
  void StartReceiveLoopIfNeeded();

  void AppendU16String(std::vector<uint8_t>& buf, const std::string& str);
  void AppendRemainingLength(std::vector<uint8_t>& buf, size_t len);

  std::string broker_;
  int port_ = 1883;
  std::string client_id_;

  int sock_ = -1;
  bool connected_ = false;
  mutable std::mutex mutex_;

  std::vector<Subscription> subscriptions_;
  std::unique_ptr<std::thread> recv_thread_;
  std::atomic<bool> recv_running_{false};
  uint16_t next_packet_id_ = 1;
};

}  // namespace vla_gateway
}  // namespace legion

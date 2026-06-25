/**
 * @file    message_manager.h
 * @brief   VLA_Gateway 消息管理器基类（参考 planning 模块架构）
 */

#pragma once

namespace legion {
namespace vla_gateway {

/**
 * @brief 消息中间件抽象基类
 * @tparam T 宿主模块类型
 */
template <typename T>
class MessageManager {
 public:
  MessageManager() = default;
  virtual ~MessageManager() = default;

  /**
   * @brief 初始化，注册到宿主模块
   */
  virtual void Init(T* t) = 0;

  /**
   * @brief 启动消息循环
   */
  virtual void Run() = 0;

  /**
   * @brief 停止消息循环
   */
  virtual void Stop() = 0;
};

}  // namespace vla_gateway
}  // namespace legion

/**
 * @file    pad_message.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <string>
#include <iostream>
#include <stdint.h>

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class PadMessage {
 public:
  PadMessage() { cmd_.clear(); }
  ~PadMessage() = default;

  inline void set_cmd(const std::string& cmd) {
    cmd_ = cmd;
    cmd_ptr_ = &cmd_;
  }

  inline const std::string& cmd() const { return cmd_; }

  inline std::string* mutable_cmd() { return &cmd_; }

  inline bool has_cmd() { return (cmd_ptr_ != nullptr); }

  void operator=(const PadMessage& pad_message) { CopyFrom(pad_message); }

  void CopyFrom(const PadMessage& pad_message) { cmd_ = pad_message.cmd(); }

 protected:
  //命令
  std::string cmd_;
  std::string* cmd_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion

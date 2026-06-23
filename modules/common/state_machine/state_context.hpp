/**
 * @file         state_context.hpp
 * @author       jiangchengjie (yx-jiangcj@dfmc.com.cn)
 * @brief
 * @version      1.0.0
 * @date         2025-12-29 03:09:03
 * @copyright    Copyright (c) 2025
 * @license      GNU General Public License (GPL)
 */
#ifndef __STATE_CONTEXT_HPP__
#define __STATE_CONTEXT_HPP__

#include <atomic>
#include <iostream>
#include <map>
#include <mutex>
#include <queue>
#include <shared_mutex>
#include <thread>
#include <unordered_map>
#include <utility>

#include "common/json/json.hpp"
#include "common/logging/logging.h"
#include "state.hpp"

using json = nlohmann::json;
namespace legion {
namespace common {
namespace state_machine {
class StateContext {
 private:
  std::shared_ptr<State> root_state_;
  std::map<uint64_t, std::shared_ptr<State>> state_map_;

  void ShowStateMove(uint64_t _state_id) {
    auto state_it = state_map_.find(_state_id);
    if (state_it != state_map_.end()) {
      AINFO << "State will be [" << state_it->second->GetStateName() << "]";
    } else {
      AERROR << "State ID " << _state_id << " not found";
    }
  }
  bool SetCurrentState(State* state);

  void SetParent(uint64_t child, uint64_t parent) {
    state_map_[child]->SetParent(state_map_[parent]);
  }
  uint64_t ParseChildState(const json& node, uint64_t _id_counter,
                           uint64_t _parent_id);
  int32_t GetStateIDbyName(std::string _name);
  void SetTransitionMap(const json& node, const std::shared_ptr<State>& _state);

  std::shared_ptr<State> GetStatePtr(const json& node);
  std::shared_ptr<State> GetStatePtr(const std::string& _state_name);
  std::shared_ptr<State> GetStatePtr(const uint64_t& _state_id);

  std::recursive_mutex sm_mutex_;  // Mutex to protect state transitions from re-entry

  bool IsCurrentState(const std::string& state_name);

  bool debug_ = false;
  std::string dot_output_name_;

 public:
  StateContext(const std::string& file_name, const bool& debug,
               const std::string& log_dir, const std::string& msg_name) {
    CeateStateMap(file_name, msg_name);

    root_state_ = GetStartState();

    dot_output_name_ = log_dir + msg_name + ".dot";

    debug_ = debug;

    if (debug_ == true) {
      CreateDOTGraph(dot_output_name_);
    }
  }

  ~StateContext() {}

  void CeateStateMap(std::string _state_file_name, std::string _msg_name);
  std::shared_ptr<State> GetStartState(void);

  void OnUpdate(void);

  bool SetCallback(const CallbackType& _type, const std::string& _state_name,
                   const std::function<void(const std::string&)>& _f);

  void Reset();

  // visualize
  void CreateGraphTransitionList(
      std::ofstream& outputfile, int idx,
      std::map<uint64_t, std::vector<uint64_t>>& sublist);
  void CreateDOTGraph(std::string _file_name);

  std::string GetStateText();
  std::string GetCurrentStateName();
  std::string GetAvailableTransition(void);
  void ShowStateName();
  void NextState(const std::string& transition_key);
};
}  // namespace state_machine
}  // namespace common
}  // namespace legion

#endif

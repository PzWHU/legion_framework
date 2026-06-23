/**
 * @file         state_context.cpp
 * @author       jiangchengjie (yx-jiangcj@dfmc.com.cn)
 * @brief
 * @version      1.0.0
 * @date         2025-12-29 03:08:49
 * @copyright    Copyright (c) 2025
 * @license      GNU General Public License (GPL)
 */
#include "state_context.hpp"

#include <sched.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <fstream>
#include <limits>
#include <memory>
#include <mutex>
#include <vector>

#include "state.hpp"

namespace legion {
namespace common {
namespace state_machine {
bool StateContext::SetCallback(
    const CallbackType& _type, const std::string& _state_name,
    const std::function<void(const std::string&)>& _f) {
  bool ret = false;
  int32_t _state_id = GetStateIDbyName(_state_name);
  if (_state_id != -1 && GetStatePtr(static_cast<uint64_t>(_state_id))) {
    switch (_type) {
      case CallbackType::UPDATE:
        GetStatePtr(static_cast<uint64_t>(_state_id))->SetCallbackUpdate(_f);
        ret = true;
        break;
      case CallbackType::ENTRY:
        GetStatePtr(static_cast<uint64_t>(_state_id))->SetCallbackEntry(_f);
        ret = true;
        break;
      case CallbackType::EXIT:
        GetStatePtr(static_cast<uint64_t>(_state_id))->SetCallbackExit(_f);
        ret = true;
        break;
      default:
        break;
    }
  }
  return ret;
}
/*****************************/
/*  Callback                 */
/*****************************/

void StateContext::OnUpdate(void) {
  std::lock_guard<std::recursive_mutex> lock(sm_mutex_);
  root_state_->OnUpdate();
}

bool StateContext::IsCurrentState(const std::string& state_name) {
  bool ret = false;
  std::shared_ptr<State> state = root_state_;
  do {
    if (state->GetStateName() == state_name) {
      ret = true;
    }
    state = state->GetChild();
  } while (state != nullptr);
  return ret;
}

void StateContext::NextState(const std::string& transition_key) {
  std::lock_guard<std::recursive_mutex> lock(sm_mutex_);
  std::shared_ptr<State> state = root_state_;
  std::string _target_state_name;
  std::vector<std::string> key_list;

  while (state) {
    const auto& transition_map = state->GetTransitionMap();
    auto transition_it = transition_map.find(transition_key);
    if (transition_it != transition_map.end()) {
      const uint64_t transition_state_id = transition_it->second;
      
      // 使用find()替代at()，避免异常
      auto state_it = state_map_.find(transition_state_id);
      if (state_it == state_map_.end()) {
        AERROR << "State ID " << transition_state_id << " not found in state_map_";
        return;
      }
      _target_state_name = state_it->second->GetStateName();

      if (IsCurrentState(_target_state_name)) {
        return;
      }

      // 使用之前找到的state_it，避免重复查找
      std::shared_ptr<State> target_state = state_it->second;
      
      if (target_state->GetParent()) {
        // 目标状态有父状态，需要找到顶层父状态（Parent 为 null 的状态）
        std::shared_ptr<State> top_parent = target_state->GetParent();
        while (top_parent && top_parent->GetParent()) {
          top_parent = top_parent->GetParent();
        }

        // 如果顶层父状态与当前 root_state_ 不同，需要先切换到顶层父状态
        if (top_parent != root_state_) {
          // 退出当前状态树
          std::shared_ptr<State> current = root_state_;
          while (current) {
            current->OnExit();
            current = current->GetChild();
          }
          
          // 切换到顶层父状态
          root_state_ = top_parent;
          root_state_->SetChild(nullptr);
          root_state_->SetParent(nullptr);
          root_state_->OnEntry();
        }

        // 建立从顶层父状态到目标状态的完整状态链
        std::vector<std::shared_ptr<State>> state_chain;
        std::shared_ptr<State> chain_state = target_state;
        while (chain_state && chain_state != top_parent) {
          state_chain.insert(state_chain.begin(), chain_state);
          chain_state = chain_state->GetParent();
        }

        // 从顶层父状态开始，逐层设置子状态
        std::shared_ptr<State> parent_state = top_parent;
        for (size_t i = 0; i < state_chain.size(); ++i) {
          std::shared_ptr<State> child_state = state_chain[i];

          // 新增逻辑：如果父状态的子状态已经是目标状态，则不需要退出和重新进入
          if (parent_state->GetChild() && parent_state->GetChild() == child_state) {
            // 仅移动指针，不触发 OnExit/OnEntry，避免因状态回调导致的逻辑错误
            parent_state = child_state;
            continue;
          }

          // 如果父状态已有子状态，先退出
          if (parent_state->GetChild()) {
            parent_state->GetChild()->OnExit();
          }

          // 设置子状态
          parent_state->SetChild(child_state);
          child_state->SetEnteredKey(transition_key);
          child_state->OnEntry();

          // 移动到下一层
          parent_state = child_state;
        }

        if (debug_ == true) {
          CreateDOTGraph(dot_output_name_);
        }
      } else {
        // 目标状态是顶层状态（无父状态）
        // 退出当前状态树
        std::shared_ptr<State> current = root_state_;
        while (current) {
          current->OnExit();
          current = current->GetChild();
        }

        // 切换到目标状态
        root_state_ = target_state;
        root_state_->SetChild(nullptr);
        root_state_->SetParent(nullptr);
        root_state_->SetEnteredKey(transition_key);

        if (debug_ == true) {
          CreateDOTGraph(dot_output_name_);
        }

        root_state_->OnEntry();
      }
      break;
    }
    state = state->GetChild();
  }

  if (IsCurrentState(_target_state_name)) {
    ShowStateName();
  }
}

/*****************************/
/* Getter/Setter             */
/*****************************/

void StateContext::CreateGraphTransitionList(
    std::ofstream& outputfile, int idx,
    std::map<uint64_t, std::vector<uint64_t>>& sublist) {
  // 使用find()替代at()，避免异常
  auto state_it = state_map_.find(idx);
  if (state_it == state_map_.end()) {
    AERROR << "State ID " << idx << " not found in state_map_";
    return;
  }
  auto state = state_it->second;
  
  if (!sublist[idx].empty() || state->GetParent() == NULL) {
    outputfile << "subgraph cluster_" << idx << "{\n"
               << "label = \"" << state->GetStateName() << "\";\n";
    if (!state->GetParent()) {
      outputfile << "group = 1;\n";
    }

    for (auto& child_state : sublist[idx]) {
      CreateGraphTransitionList(outputfile, child_state, sublist);
    }
  }

  for (auto& map : state->GetTransitionMap()) {
    auto target_state_it = state_map_.find(map.second);
    if (target_state_it == state_map_.end()) {
      continue;  // 跳过无效的状态ID
    }
    auto target_state = target_state_it->second;
    
    if ((target_state->GetParent() == state->GetParent() ||
         target_state->GetParent() == state) &&
        target_state->GetParent() != NULL) {
      outputfile << idx << "->" << map.second << " [label=\"" << map.first
                 << "\"];\n";
    }
  }
  if (!sublist[idx].empty() || state->GetParent() == NULL) {
    outputfile << "}\n";
  }
  for (auto& map : state->GetTransitionMap()) {
    auto target_state_it = state_map_.find(map.second);
    if (target_state_it == state_map_.end()) {
      continue;  // 跳过无效的状态ID
    }
    auto target_state = target_state_it->second;
    
    if ((target_state->GetParent() != state->GetParent() &&
         target_state->GetParent() != state) ||
        target_state->GetParent() == NULL) {
      outputfile << idx << "->" << map.second << " [label=\"" << map.first
                 << "\"];\n";
    }
  }
}

void StateContext::CreateDOTGraph(std::string _file_name) {
  std::ofstream outputfile(_file_name);
  outputfile << "digraph state_machine_graph {\n"
             << "dpi = \"192\";\n node [style=filled];\n";
  std::vector<uint64_t> rootlist;
  std::map<uint64_t, std::vector<uint64_t>> sublist;
  std::map<uint64_t, int> layer_map;

  // create child list
  for (auto& state : state_map_) {
    outputfile << state.second->GetStateID() << "[label=\""
               << state.second->GetStateName() << "\"";

    {
      std::shared_ptr<State> temp = root_state_;
      while (temp) {
        if (temp->GetStateID() == state.second->GetStateID()) {
          outputfile << ",color = \"crimson\"";
        }
        temp = temp->GetChild();
      }
    }
    if (state.second->GetParent()) {
      sublist[state.second->GetParent()->GetStateID()].push_back(
          state.second->GetStateID());
    } else {
      outputfile << ", group = 1";
      rootlist.push_back(state.second->GetStateID());
    }
    outputfile << "];\n";
  }

  for (auto& root_idx : rootlist) {
    int idx = root_idx;
    CreateGraphTransitionList(outputfile, idx, sublist);
  }

  outputfile << "}";
}

std::shared_ptr<State> StateContext::GetStartState() {
  for (auto& state : state_map_) {
    if (state.second->GetStateName() == "Start") {
      // std::cout<<"state.second;:"<<state.second<<std::endl;
      return state.second;
    }
  }
  return nullptr;
}

int32_t StateContext::GetStateIDbyName(std::string _name) {
  for (const auto& i : state_map_) {
    if (i.second->GetStateName() == _name) {
      return static_cast<int32_t>(i.second->GetStateID());
    }
  }
  return -1;
}

std::string StateContext::GetAvailableTransition(void) {
  std::string text;

  std::shared_ptr<State> state = root_state_;
  do {
    for (const auto& keyval : state->GetTransitionMap()) {
      auto state_it = state_map_.find(keyval.second);
      if (state_it != state_map_.end()) {
        text += keyval.first + ":" + state_it->second->GetStateName() + ",";
      }
    }
    state = state->GetChild();
  } while (state != nullptr);

  return text;
}

std::string StateContext::GetStateText(void) {
  std::string text;

  std::shared_ptr<State> state = root_state_;
  do {
    text += state->GetStateName() + "\n";
    state = state->GetChild();
  } while (state != nullptr);

  return text;
}

std::string StateContext::GetCurrentStateName() {
  std::lock_guard<std::recursive_mutex> lock(sm_mutex_);
  std::string text;
  std::shared_ptr<State> state_temp = nullptr;
  std::shared_ptr<State> state = root_state_;
  do {
    state_temp = state->GetChild();
    if (state_temp == nullptr) {
      break;
    }
    state = state_temp;
  } while (state != nullptr);
  text = state->GetStateName();
  return text;
}

void StateContext::SetTransitionMap(const json& node,
                                    const std::shared_ptr<State>& _state) {
  for (unsigned int j = 0; j < node.size(); j++) {
    int32_t state_id = GetStateIDbyName(node[j]["Target"]);
    if (state_id == -1) continue;

    _state->AddTransition(node[j]["Key"], static_cast<uint64_t>(state_id));
  }
}

void StateContext::ShowStateName() {
  std::shared_ptr<State> state = root_state_;
  do {
    state = state->GetChild();
  } while (state != nullptr);
}

std::shared_ptr<State> StateContext::GetStatePtr(const json& node) {
  return GetStatePtr((std::string)node["StateName"]);
}

std::shared_ptr<State> StateContext::GetStatePtr(
    const std::string& _state_name) {
  int32_t state_id = GetStateIDbyName(_state_name);
  if (_state_name == "null" || state_id == -1)
    return nullptr;
  else
    return GetStatePtr(static_cast<uint64_t>(state_id));
}

std::shared_ptr<State> StateContext::GetStatePtr(const uint64_t& _state_id) {
  auto it = state_map_.find(_state_id);
  if (it == state_map_.end()) {
    AERROR << "State ID " << _state_id << " not found in state_map_";
    return nullptr;
  }
  return it->second;
}

void StateContext::CeateStateMap(std::string _state_file_name,
                                 std::string _msg_name) {
  json state_json;
  std::ifstream in(_state_file_name);
  in >> state_json;

  if (state_json.is_null()) {
    AERROR << "state_json is null";
    return;
  }

  // create state
  for (unsigned int i = 0; i < state_json[_msg_name].size(); i++) {
    state_map_[i] = std::shared_ptr<State>(
        new State(state_json[_msg_name][i]["StateName"], i));
  }

  // set Parent
  // set transition
  for (unsigned int i = 0; i < state_json[_msg_name].size(); i++) {
    GetStatePtr((std::string)state_json[_msg_name][i]["Parent"]);

    GetStatePtr(state_json[_msg_name][i])
        ->SetParent(
            GetStatePtr((std::string)state_json[_msg_name][i]["Parent"]));

    SetTransitionMap(state_json[_msg_name][i]["Transition"],
                     GetStatePtr(state_json[_msg_name][i]));
  }
}

void StateContext::Reset() { root_state_ = GetStartState(); }
}  // namespace state_machine
}  // namespace common
}  // namespace legion
/**
 * @file         timer_manager.h
 * @author       jiangchengjie (yx-jiangcj@dfmc.com.cn)
 * @brief
 * @version      1.0.0
 * @date         2025-10-24 10:27:54
 * @copyright    Copyright (c) 2025
 * @license      GNU General Public License (GPL)
 */

#pragma once

#include <list>
#include <mutex>
#include <atomic>
#include <chrono>
#include <memory>
#include <thread>
#include <vector>
#include <functional>
#include <condition_variable>

#include "../time/time_tool.h"



/**
 * @namespace legion::common
 * @brief legion::common
 */
namespace legion {
namespace common {

/**
 * @class CommonTimer
 *
 * @brief  Common Timer.
 */
class CommonTimer {
 public:
  CommonTimer() : expired_(true), try_to_expire_(false) {}

  CommonTimer(const CommonTimer& t) {
    expired_ = t.expired_.load();
    try_to_expire_ = t.try_to_expire_.load();
  }

  ~CommonTimer() { Expire(); }

  void StartTimer(int interval, std::function<void(int)> task, int index) {
    if (expired_ == false) return;

    expired_ = false;
    std::thread([this, interval, task, index]() {
      while (!try_to_expire_) {
        int32_t duration = interval;
        int64_t now_time = TimeTool::Now2Ms();
        task(index);
        int64_t end_time = TimeTool::Now2Ms();
        int64_t detal_time = end_time - now_time;
        if (detal_time > duration) detal_time = duration - 1;
        // std::cout<<"index: "<<index<<" diff: "<<duration -
        // detal_time<<std::endl;
        std::this_thread::sleep_for(
            std::chrono::milliseconds(duration - detal_time));
      }

      {
        std::lock_guard<std::mutex> locker(mutex_);
        expired_ = true;
        expired_cond_.notify_one();
      }
    }).detach();
  }

  void Expire() {
    if (expired_) {
      return;
    }

    if (try_to_expire_) {
      return;
    }

    try_to_expire_ = true;
    {
      std::unique_lock<std::mutex> locker(mutex_);
      expired_cond_.wait(locker, [this] { return expired_ == true; });
      if (expired_ == true) {
        try_to_expire_ = false;
      }
    }
  }

  template <typename callable, class... arguments>
  void SyncWait(int after, callable&& f, arguments&&... args) {
    std::function<typename std::result_of<callable(arguments...)>::type()> task(
        std::bind(std::forward<callable>(f), std::forward<arguments>(args)...));
    std::this_thread::sleep_for(std::chrono::milliseconds(after));
    task();
  }
  template <typename callable, class... arguments>
  void AsyncWait(int after, callable&& f, arguments&&... args) {
    std::function<typename std::result_of<callable(arguments...)>::type()> task(
        std::bind(std::forward<callable>(f), std::forward<arguments>(args)...));

    std::thread([after, task]() {
      std::this_thread::sleep_for(std::chrono::milliseconds(after));
      task();
    }).detach();
  }

 private:
  std::atomic<bool> expired_;
  std::atomic<bool> try_to_expire_;
  std::mutex mutex_;
  std::condition_variable expired_cond_;
};

/**
 * @class TimerManager
 *
 * @brief  Timer Manager.
 */
template <typename Object>
class TimerManager {
 public:
  TimerManager() = default;
  ~TimerManager() = default;
  typedef void (Object::*Method)();

  typedef struct {
    int32_t interval_;
    Method method_;   // 回调函数指针
    Object* object_;  // 调用对象
    std::unique_ptr<CommonTimer> timer;  // ⭐ 使用智能指针，避免内存泄漏
  } TimerBase;

  static void AddTimer(int32_t interval, Method method, Object* object);
  
  // ⭐ 停止指定对象的所有定时器
  static void StopTimersForObject(Object* object);

 private:
  static void OnTimer(int index);

 private:
  static std::vector<TimerBase> timer_vec_;
  static std::mutex timer_vec_mutex_;  // ⭐ 保护timer_vec_的互斥锁
};

template <typename Object>
std::vector<typename TimerManager<Object>::TimerBase>
    TimerManager<Object>::timer_vec_;

template <typename Object>
std::mutex TimerManager<Object>::timer_vec_mutex_;

template <typename Object>
void TimerManager<Object>::OnTimer(int index) {
  std::lock_guard<std::mutex> lock(timer_vec_mutex_);
  if (index < 0 || index >= static_cast<int>(timer_vec_.size())) {
    return;  // 索引越界保护
  }
  Method method = timer_vec_[index].method_;
  Object* object = timer_vec_[index].object_;
  if (object && method) {
    (object->*method)();
  }
}

template <typename Object>
void TimerManager<Object>::StopTimersForObject(Object* object) {
  if (!object) {
    return;
  }
  
  std::lock_guard<std::mutex> lock(timer_vec_mutex_);
  
  // 遍历所有定时器，停止属于该对象的定时器
  for (auto& timer_base : timer_vec_) {
    if (timer_base.object_ == object && timer_base.timer) {
      timer_base.timer->Expire();  // 显式停止定时器
    }
  }
  
  // 可选：从向量中移除已停止的定时器（但为了安全，保留对象，只停止定时器）
}

template <typename Object>
void TimerManager<Object>::AddTimer(int32_t interval, Method method,
                                    Object* object) {
  std::lock_guard<std::mutex> lock(timer_vec_mutex_);
  
  TimerBase timerbase;
  timerbase.interval_ = interval;
  timerbase.object_ = object;
  timerbase.method_ = method;
  timerbase.timer = std::make_unique<CommonTimer>();  // ⭐ 使用make_unique，RAII自动管理
  timer_vec_.push_back(std::move(timerbase));  // ⭐ 移动语义
  int index = timer_vec_.size() - 1;
  timer_vec_[index].timer->StartTimer(
      interval, std::bind(OnTimer, std::placeholders::_1), index);
}

}  // namespace common
}  // namespace legion

/**
 * @file         logging.h
 * @author       jiangchengjie (yx-jiangcj@dfmc.com.cn)
 * @brief 
 * @version      1.0.0
 * @date         2025-12-29 03:11:54
 * @copyright    Copyright (c) 2025
 * @license      GNU General Public License (GPL)
 */
#pragma once

#include <chrono>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <filesystem>
#include <glog/logging.h>
#include <glog/raw_logging.h>
#include <glog/log_severity.h>

#include "common/binary/binary.h"



using namespace std;
namespace fs = std::filesystem;

namespace legion {
namespace common {
typedef enum {
  _INFO = 0,
  _WARNING = 1,
  _ERROR = 2,
  _FATAL = 3,
  _OFF = 6,
} LogLevel;

typedef struct {
  std::string app_name;
  std::string description;
  std::string file_path;
  LogLevel log_level;
  bool logging_data_enable;
  int keep_days;
  size_t max_files;
  int max_file_size_mb;              ///< 单个文件最大大小（MB）
  int log_buffer_seconds;            ///< 日志缓冲时间（秒，0=立即）
  int vlog_level;                    ///< VLOG详细级别
  bool enable_color;                 ///< 启用彩色输出
  bool stop_when_disk_full;          ///< 磁盘满时停止
  bool enable_failure_signal_handler;///< 启用崩溃信号捕获
} LoggingConf;


/**
 * @class Logging
 * @brief  日志类.
 */
class Logging {
 public:
  Logging() = default;
  ~Logging() = default;

  typedef enum {
    DISPLAY_ONLY = 1,
    DISPLAY_AND_STORE = 2,
  } LogMode;

  /**
   * @brief     google log 初始化确定是否需要日志功能,以及设置log存储路径.
   * @param[in] log_enable true=日志记录 false=不记录.
   * @return    void.
   */
  static void Init(LoggingConf logging_conf) {
    //级别高于ERROR的才输出到屏幕上
    // google::SetStderrLogging(google::ERROR);
    //设置输出到屏幕的日志显示相应颜色
    legion::common::binary::SetName(logging_conf.app_name);  
    FLAGS_colorlogtostderr = true;
    //设置 google::INFO 级别的日志存储路径和文件名前缀
    std::string file_path = logging_conf.file_path + "/INFO_";
    google::SetLogDestination(google::INFO, file_path.c_str());
    //设置 google::WARNING 级别的日志存储路径和文件名前缀
    file_path = logging_conf.file_path + "/WARNING_";
    google::SetLogDestination(google::WARNING, file_path.c_str());
    //设置 google::ERROR 级别的日志存储路径和文件名前缀
    file_path = logging_conf.file_path + "/ERROR_";
    google::SetLogDestination(google::ERROR, file_path.c_str());
    FLAGS_minloglevel = logging_conf.log_level;
    //缓冲日志输出，默认为30秒，此处改为立即输出（可配置）
    FLAGS_logbufsecs = logging_conf.log_buffer_seconds;
    //最大日志大小（可配置，单位MB）
    FLAGS_max_log_size = logging_conf.max_file_size_mb;
    //自定义VLOG(m)时，m值小于此处设置值的语句才有输出（可配置）
    FLAGS_v = logging_conf.vlog_level;
    FLAGS_alsologtostderr = true;  
    //清理旧日志
    CleanOldLogs(logging_conf.file_path, logging_conf.keep_days, logging_conf.max_files);
    //旧日志清理（旧版本glog不支持EnableLogCleaner，需要手动清理或通过脚本）
    // google::EnableLogCleaner(15);  // ⚠️ 旧版本glog不支持此函数
    //当磁盘被写满时，停止日志输出（可配置）
    FLAGS_stop_logging_if_full_disk = logging_conf.stop_when_disk_full;
    if (logging_conf.logging_data_enable)
      FLAGS_logtostderr = false;
    else
      FLAGS_logtostderr = true;
    //捕捉 core dumped（可配置）
    if (logging_conf.enable_failure_signal_handler) {
      google::InstallFailureSignalHandler();
    }
  }

  /**
   * @brief 清理旧日志文件
   * @param log_dir 日志目录路径
   * @param keep_days 保留最近N天的日志
   * @param max_files 最多保留N个文件（0表示不限制）
   */
  static void CleanOldLogs(const std::string& log_dir, int keep_days, size_t max_files = 0) {
    try {
      if (!fs::exists(log_dir) || !fs::is_directory(log_dir)) {
        return;  // 目录不存在，直接返回
      }
      
      // 收集所有glog日志文件
      // ⭐ glog日志文件格式：<LEVEL>_<DATE>-<TIME>.<PID>
      // 例如：INFO_20251027-180142.810379
      //       ERROR_20251027-132157.444077
      //       WARNING_20251027-xxxxxx.xxxxxx
      std::vector<fs::path> files;
      for (const auto& entry : fs::directory_iterator(log_dir)) {
        if (entry.is_regular_file()) {
          const std::string filename = entry.path().filename().string();
          // ⭐ 检查是否为glog日志文件（以 INFO_/WARNING_/ERROR_/FATAL_ 开头）
          if (filename.find("INFO_") == 0 ||
              filename.find("WARNING_") == 0 ||
              filename.find("ERROR_") == 0 ||
              filename.find("FATAL_") == 0) {
            files.push_back(entry.path());
          }
        }
      }
      
      if (files.empty()) {
        return;  // 没有日志文件
      }
      
      // 按修改时间排序（新→旧）
      std::sort(files.begin(), files.end(),
                [](const fs::path& a, const fs::path& b) {
                    return fs::last_write_time(a) > fs::last_write_time(b);
                });
      
      // 获取当前时间（使用time_t，C++17兼容）
      auto now = std::chrono::system_clock::now();
      auto now_time_t = std::chrono::system_clock::to_time_t(now);
      
      size_t deleted_count = 0;
      
      // 遍历文件，应用两个规则
      for (size_t i = 0; i < files.size(); ++i) {
        bool should_delete = false;
        
        // 规则1: 超过max_files（如果设置了）
        if (max_files > 0 && i >= max_files) {
          should_delete = true;
        }
        
        // 规则2: 超过keep_days
        if (!should_delete && keep_days > 0) {
          auto file_time = fs::last_write_time(files[i]);
          // 转换file_time为time_t（C++17兼容方式）
          auto sctp = std::chrono::time_point_cast<std::chrono::system_clock::duration>(
              file_time - fs::file_time_type::clock::now() + std::chrono::system_clock::now()
          );
          auto file_time_t = std::chrono::system_clock::to_time_t(sctp);
          
          // 计算天数差
          double diff_seconds = std::difftime(now_time_t, file_time_t);
          int age_days = static_cast<int>(diff_seconds / (24 * 3600));
          
          if (age_days > keep_days) {
            should_delete = true;
          }
        }
        
        // 执行删除
        if (should_delete) {
          fs::remove(files[i]);
          deleted_count++;
        }
      }
      
      // 可选：输出日志
      if (deleted_count > 0) {
        // AINFO << "Cleaned " << " <<  old log files from " << deleted_count;
      }
      
    } catch (const std::exception& e) {
      // 捕获异常，避免日志清理失败影响程序启动
      // std::cerr << "Failed to clean old logs: " << e.what() << std::endl;
    }
  }
};


#define LEFT_BRACKET "["
#define RIGHT_BRACKET "]"
#ifndef MODULE_NAME
#define MODULE_NAME legion::common::binary::GetName().c_str()
#endif
// ⚠️ 使用 LOG_IF 替代 VLOG(4) 以兼容 glog 0.6.0+（避免 kLogSiteUninitialized 符号依赖）
// 行为与 VLOG(4) 一致：当 FLAGS_v >= 4 时输出 DEBUG 日志
// 注意：如果 RSCL 库已经定义了 ADEBUG_MODULE，则不重复定义（避免宏重定义警告）
#ifndef ADEBUG_MODULE
#define ADEBUG_MODULE(module) \
  LOG_IF(INFO, FLAGS_v >= 4) << LEFT_BRACKET << module << RIGHT_BRACKET << "[DEBUG] "
#endif
#define ADEBUG ADEBUG_MODULE(MODULE_NAME)
#define AINFO ALOG_MODULE(MODULE_NAME, INFO)
#define AWARN ALOG_MODULE(MODULE_NAME, WARN)
#define AERROR ALOG_MODULE(MODULE_NAME, ERROR)
#define AFATAL ALOG_MODULE(MODULE_NAME, FATAL)

#ifndef ALOG_MODULE_STREAM
#define ALOG_MODULE_STREAM(log_severity) ALOG_MODULE_STREAM_##log_severity
#endif

#ifndef ALOG_MODULE
#define ALOG_MODULE(module, log_severity) \
  ALOG_MODULE_STREAM(log_severity)(module)
#endif
#define ALOG_MODULE_STREAM_INFO(module)                         \
  google::LogMessage(__FILE__, __LINE__, google::INFO).stream() \
      << LEFT_BRACKET << module << RIGHT_BRACKET

#define ALOG_MODULE_STREAM_WARN(module)                            \
  google::LogMessage(__FILE__, __LINE__, google::WARNING).stream() \
      << LEFT_BRACKET << module << RIGHT_BRACKET

#define ALOG_MODULE_STREAM_ERROR(module)                         \
  google::LogMessage(__FILE__, __LINE__, google::ERROR).stream() \
      << LEFT_BRACKET << module << RIGHT_BRACKET

#define ALOG_MODULE_STREAM_FATAL(module)                         \
  google::LogMessage(__FILE__, __LINE__, google::FATAL).stream() \
      << LEFT_BRACKET << module << RIGHT_BRACKET

#define AINFO_IF(cond) ALOG_IF(INFO, cond, MODULE_NAME)
#define AWARN_IF(cond) ALOG_IF(WARN, cond, MODULE_NAME)
#define AERROR_IF(cond) ALOG_IF(ERROR, cond, MODULE_NAME)
#define AFATAL_IF(cond) ALOG_IF(FATAL, cond, MODULE_NAME)

#define ALOG_IF(severity, cond, module) \
  !(cond) ? (void)0                     \
          : google::LogMessageVoidify() & ALOG_MODULE(module, severity)

#define ACHECK(cond) CHECK(cond) << LEFT_BRACKET << MODULE_NAME << RIGHT_BRACKET

#define AINFO_EVERY(freq) \
  LOG_EVERY_N(INFO, freq) << LEFT_BRACKET << MODULE_NAME << RIGHT_BRACKET
#define AWARN_EVERY(freq) \
  LOG_EVERY_N(WARNING, freq) << LEFT_BRACKET << MODULE_NAME << RIGHT_BRACKET
#define AERROR_EVERY(freq) \
  LOG_EVERY_N(ERROR, freq) << LEFT_BRACKET << MODULE_NAME << RIGHT_BRACKET

#if !defined(RETURN_IF_NULL)
#define RETURN_IF_NULL(ptr)          \
  if (ptr == nullptr) {              \
    AWARN << #ptr << " is nullptr."; \
    return;                          \
  }
#endif

#if !defined(RETURN_VAL_IF_NULL)
#define RETURN_VAL_IF_NULL(ptr, val) \
  if (ptr == nullptr) {              \
    AWARN << #ptr << " is nullptr."; \
    return val;                      \
  }
#endif

#if !defined(RETURN_IF)
#define RETURN_IF(condition)           \
  if (condition) {                     \
    AWARN << #condition << " is met."; \
    return;                            \
  }
#endif

#if !defined(RETURN_VAL_IF)
#define RETURN_VAL_IF(condition, val)  \
  if (condition) {                     \
    AWARN << #condition << " is met."; \
    return val;                        \
  }
#endif

#if !defined(_RETURN_VAL_IF_NULL2__)
#define _RETURN_VAL_IF_NULL2__
#define RETURN_VAL_IF_NULL2(ptr, val) \
  if (ptr == nullptr) {               \
    return (val);                     \
  }
#endif

#if !defined(_RETURN_VAL_IF2__)
#define _RETURN_VAL_IF2__
#define RETURN_VAL_IF2(condition, val) \
  if (condition) {                     \
    return (val);                      \
  }
#endif

#if !defined(_RETURN_IF2__)
#define _RETURN_IF2__
#define RETURN_IF2(condition) \
  if (condition) {            \
    return;                   \
  }
#endif

}  // namespace common
}  // namespace legion

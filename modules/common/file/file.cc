/**
 * @file         file.cc
 * @author       jiangchengjie (yx-jiangcj@dfmc.com.cn)
 * @brief 
 * @version      1.0.0
 * @date         2025-10-22 02:08:13
 * @copyright    Copyright (c) 2025
 * @license      GNU General Public License (GPL)
 */

#include <cctype>
#include <cerrno>
#include <glob.h>
#include <string>
#include <vector>
#include <cstddef>
#include <fcntl.h>
#include <fstream>
#include <sstream>
#include <dirent.h>
#include <unistd.h>
#include <algorithm>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "common/file/file.h"
#include "common/logging/logging.h"



namespace legion {
namespace common {

using std::istreambuf_iterator;
using std::string;
using std::vector;

bool SetProtoToASCIIFile(const google::protobuf::Message &message,
                         int file_descriptor) {
  using google::protobuf::TextFormat;
  using google::protobuf::io::FileOutputStream;
  using google::protobuf::io::ZeroCopyOutputStream;
  if (file_descriptor < 0) {
    AERROR << "Invalid file descriptor.";
    return false;
  }
  ZeroCopyOutputStream *output = new FileOutputStream(file_descriptor);
  bool success = TextFormat::Print(message, output);
  delete output;
  close(file_descriptor);
  return success;
}

bool SetProtoToASCIIFile(const google::protobuf::Message &message,
                         const std::string &file_name) {
  int fd = open(file_name.c_str(), O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
  if (fd < 0) {
    AERROR << "Unable to open file " << file_name << " to write.";
    return false;
  }
  return SetProtoToASCIIFile(message, fd);
}

bool GetProtoFromASCIIFile(const std::string &file_name,
                           google::protobuf::Message *message) {
  using google::protobuf::TextFormat;
  using google::protobuf::io::FileInputStream;
  using google::protobuf::io::ZeroCopyInputStream;
  int file_descriptor = open(file_name.c_str(), O_RDONLY);
  if (file_descriptor < 0) {
    AERROR << "Failed to open file " << file_name << " in text mode.";
    // Failed to open;
    return false;
  }

  ZeroCopyInputStream *input = new FileInputStream(file_descriptor);
  bool success = TextFormat::Parse(input, message);
  if (!success) {
    AERROR << "Failed to parse file " << file_name << " as text proto.";
  }
  delete input;
  close(file_descriptor);
  return success;
}

bool SetProtoToBinaryFile(const google::protobuf::Message &message,
                          const std::string &file_name) {
  std::fstream output(file_name,
                      std::ios::out | std::ios::trunc | std::ios::binary);
  return message.SerializeToOstream(&output);
}

bool GetProtoFromBinaryFile(const std::string &file_name,
                            google::protobuf::Message *message) {
  std::fstream input(file_name, std::ios::in | std::ios::binary);
  if (!input.good()) {
    AERROR << "Failed to open file " << file_name << " in binary mode.";
    return false;
  }
  if (!message->ParseFromIstream(&input)) {
    AERROR << "Failed to parse file " << file_name << " as binary proto.";
    return false;
  }
  return true;
}

bool GetProtoFromFile(const std::string &file_name,
                      google::protobuf::Message *message) {
  // Try the binary parser first if it's much likely a binary proto.
  static const std::string kBinExt = ".bin";
  if (std::equal(kBinExt.rbegin(), kBinExt.rend(), file_name.rbegin())) {
    return GetProtoFromBinaryFile(file_name, message) ||
           GetProtoFromASCIIFile(file_name, message);
  }

  return GetProtoFromASCIIFile(file_name, message) ||
         GetProtoFromBinaryFile(file_name, message);
}

bool GetProtoFromJsonFile(const std::string &file_name,
                      google::protobuf::Message *message){
  using google::protobuf::util::JsonStringToMessage;
  using google::protobuf::util::JsonParseOptions;
  using google::protobuf::util::Status;
  std::string content;
  if(GetContent(file_name,&content) == false)
  {
    // GetContent已经输出了详细的错误信息，这里不需要再输出
    return false;
  }
  JsonParseOptions options;
  options.ignore_unknown_fields = false;  // 不允许未知字段
  Status status = JsonStringToMessage(content, message, options);
  if (!status.ok()) {
    std::string error_msg = status.message().as_string();
    AERROR << "========================================";
    AERROR << "Failed to parse JSON file: " << file_name;
    AERROR << "========================================";
    AERROR << "Error message: " << error_msg;
    
    // ⭐ 尝试提取字段路径信息
    // Protobuf错误消息格式通常是: "Error at field 'field_name': ..."
    // 或者: "Unknown field: field_name"
    // 或者包含路径信息: "Error at 'parent.child': ..."
    
    // ⭐ 检查是否是未知字段错误（多种格式）
    if (error_msg.find("Unknown field") != std::string::npos ||
        error_msg.find("unknown field") != std::string::npos ||
        error_msg.find("Unknown") != std::string::npos) {
      AERROR << "❌ 错误类型: 未知字段（字段在Proto定义中不存在）";
      
      // 方法1: 提取引号中的字段名（单引号或双引号）
      std::vector<char> quotes = {'\'', '"'};
      for (char quote : quotes) {
        size_t quote1 = error_msg.find(quote);
        while (quote1 != std::string::npos) {
          size_t quote2 = error_msg.find(quote, quote1 + 1);
          if (quote2 != std::string::npos && quote2 > quote1 + 1) {
            std::string field_name = error_msg.substr(quote1 + 1, quote2 - quote1 - 1);
            // 过滤掉太短或明显不是字段名的字符串
            if (field_name.length() > 1 && field_name.length() < 100) {
              AERROR << "   ❌ 未知字段名: \"" << field_name << "\"";
            }
            quote1 = error_msg.find(quote, quote2 + 1);
          } else {
            break;
          }
        }
      }
      
      // 方法2: 提取"field"关键字附近的文本
      size_t field_pos = error_msg.find("field");
      if (field_pos != std::string::npos) {
        // 向前查找字段名开始
        size_t start = field_pos;
        while (start > 0 && (isalnum(error_msg[start - 1]) || error_msg[start - 1] == '_')) {
          start--;
        }
        // 向后查找字段名结束（包括可能的路径）
        size_t end = field_pos + 5; // "field"的长度
        while (end < error_msg.length() && 
               (isalnum(error_msg[end]) || error_msg[end] == '_' || 
                error_msg[end] == '.' || error_msg[end] == ' ' || 
                error_msg[end] == ':')) {
          end++;
        }
        if (end > start + 5) {
          std::string field_info = error_msg.substr(start, end - start);
          // 清理多余的空格和标点
          while (!field_info.empty() && (field_info.back() == ' ' || field_info.back() == ':')) {
            field_info.pop_back();
          }
          if (!field_info.empty()) {
            AERROR << "   位置信息: " << field_info;
          }
        }
      }
    }
    
    // 检查是否是类型不匹配错误
    if (error_msg.find("type mismatch") != std::string::npos ||
        error_msg.find("Type mismatch") != std::string::npos ||
        error_msg.find("cannot parse") != std::string::npos) {
      AERROR << "❌ 类型不匹配错误";
      // 尝试提取字段路径
      size_t at_pos = error_msg.find("at");
      if (at_pos != std::string::npos) {
        std::string location_info = error_msg.substr(at_pos);
        AERROR << "   位置: " << location_info;
      }
    }
    
    // 检查是否包含字段路径信息（格式: "field_name" 或 "parent.child"）
    // 查找JSON路径模式: "xxx.xxx" 或 'xxx.xxx'
    size_t dot_pos = error_msg.find(".");
    if (dot_pos != std::string::npos && dot_pos > 0 && dot_pos < error_msg.length() - 1) {
      // 向前查找字段名开始
      size_t field_start = dot_pos;
      while (field_start > 0 && 
             (isalnum(error_msg[field_start - 1]) || error_msg[field_start - 1] == '_' || 
              error_msg[field_start - 1] == '\'' || error_msg[field_start - 1] == '"')) {
        field_start--;
      }
      // 向后查找字段名结束
      size_t field_end = dot_pos + 1;
      while (field_end < error_msg.length() && 
             (isalnum(error_msg[field_end]) || error_msg[field_end] == '_' ||
              error_msg[field_end] == '.' || error_msg[field_end] == '\'' || 
              error_msg[field_end] == '"')) {
        field_end++;
      }
      if (field_end > field_start + 1) {
        std::string field_path = error_msg.substr(field_start, field_end - field_start);
        // 清理引号
        field_path.erase(std::remove(field_path.begin(), field_path.end(), '\''), field_path.end());
        field_path.erase(std::remove(field_path.begin(), field_path.end(), '"'), field_path.end());
        if (!field_path.empty() && field_path.find(".") != std::string::npos) {
          AERROR << "❌ 问题字段路径: " << field_path;
        }
      }
    }
    
    // 额外提示
    AERROR << "----------------------------------------";
    AERROR << "排查建议:";
    AERROR << "1. 检查JSON字段名是否与Proto定义完全匹配";
    AERROR << "2. 检查字段类型是否正确（string/int/bool等）";
    AERROR << "3. 检查嵌套字段的路径是否正确";
    AERROR << "4. 运行验证脚本: python3 -m json.tool " << file_name;
    AERROR << "========================================";
    
    return false;
  }
  return true;
}

bool SetProtoToJsonFile(const google::protobuf::Message& message,
                        const std::string& file_name) {
  using google::protobuf::util::MessageToJsonString;
  using google::protobuf::util::JsonPrintOptions;
  using google::protobuf::util::Status;
  
  std::string json_output;
  
  JsonPrintOptions options;
  options.add_whitespace = true;                       // 添加空格，格式化JSON（可读性更好）
  options.always_print_primitive_fields = true;        // 总是打印所有字段
  options.preserve_proto_field_names = true;           // 保留proto字段名
  
  Status status = MessageToJsonString(message, &json_output, options);
  if (!status.ok()) {
    AERROR << "Failed to convert Protobuf to JSON: " << status.message().as_string();
    return false;
  }
  
  // 写入文件
  std::ofstream fout(file_name);
  if (!fout) {
    AERROR << "Unable to open file " << file_name << " to write.";
    return false;
  }
  
  fout << json_output;
  fout.close();
  
  if (!fout.good()) {
    AERROR << "Failed to write JSON content to file: " << file_name;
    return false;
  }
  
  AINFO << "Successfully wrote JSON to file: " << file_name;
  return true;
}

bool GetContent(const std::string &file_name, std::string *content) {
  std::ifstream fin(file_name);
  if (!fin) {
    // ⭐ 提供详细的文件读取错误信息
    AERROR << "========================================";
    AERROR << "Failed to read file: " << file_name;
    AERROR << "========================================";
    
    // 检查文件是否存在
    struct stat file_stat;
    if (stat(file_name.c_str(), &file_stat) != 0) {
      if (errno == ENOENT) {
        AERROR << "❌ 文件不存在 (ENOENT)";
        AERROR << "   当前工作目录: " << GetAbsolutePath(".", "");
        AERROR << "   提示: 请检查文件路径是否正确";
      } else if (errno == EACCES) {
        AERROR << "❌ 权限不足 (EACCES)";
        AERROR << "   提示: 请检查文件读取权限";
      } else {
        AERROR << "❌ 文件访问错误 (errno=" << errno << ")";
      }
    } else {
      // 文件存在，但无法打开（可能是其他原因）
      AERROR << "❌ 文件存在但无法打开";
      AERROR << "   文件大小: " << file_stat.st_size << " bytes";
      AERROR << "   权限: " << std::oct << (file_stat.st_mode & 0777) << std::dec;
    }
    
    AERROR << "----------------------------------------";
    AERROR << "排查建议:";
    AERROR << "1. 检查文件路径是否正确（相对路径或绝对路径）";
    AERROR << "2. 检查文件是否存在: ls -lh " << file_name;
    AERROR << "3. 检查文件权限: ls -l " << file_name;
    AERROR << "4. 如果使用相对路径，确认当前工作目录是否正确";
    AERROR << "========================================";
    return false;
  }

  std::stringstream str_stream;
  str_stream << fin.rdbuf();
  *content = str_stream.str();
  
  // 检查文件内容是否为空
  if (content->empty()) {
    AERROR << "Warning: File " << file_name << " is empty";
  }
  
  return true;
}

std::string GetAbsolutePath(const std::string &prefix,
                            const std::string &relative_path) {
  if (relative_path.empty()) {
    return prefix;
  }
  // If prefix is empty or relative_path is already absolute.
  if (prefix.empty() || relative_path.front() == '/') {
    return relative_path;
  }

  if (prefix.back() == '/') {
    return prefix + relative_path;
  }
  return prefix + "/" + relative_path;
}

bool PathExists(const std::string &path) {
  struct stat info;
  return stat(path.c_str(), &info) == 0;
}

bool DirectoryExists(const std::string &directory_path) {
  struct stat info;
  return stat(directory_path.c_str(), &info) == 0 && (info.st_mode & S_IFDIR);
}

std::vector<std::string> Glob(const std::string &pattern) {
  glob_t globs = {};
  std::vector<std::string> results;
  if (glob(pattern.c_str(), GLOB_TILDE, nullptr, &globs) == 0) {
    for (size_t i = 0; i < globs.gl_pathc; ++i) {
      results.emplace_back(globs.gl_pathv[i]);
    }
  }
  globfree(&globs);
  return results;
}

bool CopyFile(const std::string &from, const std::string &to) {
  std::ifstream src(from, std::ios::binary);
  if (!src) {
    AWARN << "Source path could not be normally opened: " << from;
    std::string command = "cp -r " + from + " " + to;
    ADEBUG << command;
    const int ret = std::system(command.c_str());
    if (ret == 0) {
      ADEBUG << "Copy success, command returns " << ret;
      return true;
    } else {
      ADEBUG << "Copy error, command returns " << ret;
      return false;
    }
  }

  std::ofstream dst(to, std::ios::binary);
  if (!dst) {
    AERROR << "Target path is not writable: " << to;
    return false;
  }

  dst << src.rdbuf();
  return true;
}

bool CopyDir(const std::string &from, const std::string &to) {
  DIR *directory = opendir(from.c_str());
  if (directory == nullptr) {
    AERROR << "Cannot open directory " << from;
    return false;
  }

  bool ret = true;
  if (EnsureDirectory(to)) {
    struct dirent *entry;
    while ((entry = readdir(directory)) != nullptr) {
      // skip directory_path/. and directory_path/..
      if (!strcmp(entry->d_name, ".") || !strcmp(entry->d_name, "..")) {
        continue;
      }
      const std::string sub_path_from = from + "/" + entry->d_name;
      const std::string sub_path_to = to + "/" + entry->d_name;
      if (entry->d_type == DT_DIR) {
        ret &= CopyDir(sub_path_from, sub_path_to);
      } else {
        ret &= CopyFile(sub_path_from, sub_path_to);
      }
    }
  } else {
    AERROR << "Cannot create target directory " << to;
    ret = false;
  }
  closedir(directory);
  return ret;
}

bool Copy(const std::string &from, const std::string &to) {
  return DirectoryExists(from) ? CopyDir(from, to) : CopyFile(from, to);
}

bool EnsureDirectory(const std::string &directory_path) {
  std::string path = directory_path;
  for (size_t i = 1; i < directory_path.size(); ++i) {
    if (directory_path[i] == '/') {
      // Whenever a '/' is encountered, create a temporary view from
      // the start of the path to the character right before this.
      path[i] = 0;

      if (mkdir(path.c_str(), S_IRWXU) != 0) {
        if (errno != EEXIST) {
          return false;
        }
      }

      // Revert the temporary view back to the original.
      path[i] = '/';
    }
  }

  // Make the final (full) directory.
  if (mkdir(path.c_str(), S_IRWXU) != 0) {
    if (errno != EEXIST) {
      return false;
    }
  }

  return true;
}

bool RemoveAllFiles(const std::string &directory_path) {
  DIR *directory = opendir(directory_path.c_str());
  if (directory == nullptr) {
    AERROR << "Cannot open directory " << directory_path;
    return false;
  }

  struct dirent *file;
  while ((file = readdir(directory)) != nullptr) {
    // skip directory_path/. and directory_path/..
    if (!strcmp(file->d_name, ".") || !strcmp(file->d_name, "..")) {
      continue;
    }
    // build the path for each file in the folder
    std::string file_path = directory_path + "/" + file->d_name;
    if (unlink(file_path.c_str()) < 0) {
      AERROR << "Fail to remove file " << file_path << ": " << strerror(errno);
      closedir(directory);
      return false;
    }
  }
  closedir(directory);
  return true;
}

std::vector<std::string> ListSubPaths(const std::string &directory_path,
                                      const unsigned char d_type) {
  std::vector<std::string> result;
  DIR *directory = opendir(directory_path.c_str());
  if (directory == nullptr) {
    AERROR << "Cannot open directory " << directory_path;
    return result;
  }

  struct dirent *entry;
  while ((entry = readdir(directory)) != nullptr) {
    // Skip "." and "..".
    if (entry->d_type == d_type && strcmp(entry->d_name, ".") != 0 &&
        strcmp(entry->d_name, "..") != 0) {
      result.emplace_back(entry->d_name);
    }
  }
  closedir(directory);
  return result;
}

std::string GetFileName(const std::string &path, const bool remove_extension) {
  std::string::size_type start = path.rfind('/');
  if (start == std::string::npos) {
    start = 0;
  } else {
    // Move to the next char after '/'.
    ++start;
  }

  std::string::size_type end = std::string::npos;
  if (remove_extension) {
    end = path.rfind('.');
    // The last '.' is found before last '/', ignore.
    if (end != std::string::npos && end < start) {
      end = std::string::npos;
    }
  }
  const auto len = (end != std::string::npos) ? end - start : end;
  return path.substr(start, len);
}

std::string GetCurrentPath() {
  char tmp[PATH_MAX];
  return getcwd(tmp, sizeof(tmp)) ? std::string(tmp) : std::string("");
}

bool GetType(const string &filename, FileType *type) {
  struct stat stat_buf;
  if (lstat(filename.c_str(), &stat_buf) != 0) {
    return false;
  }
  if (S_ISDIR(stat_buf.st_mode) != 0) {
    *type = TYPE_DIR;
  } else if (S_ISREG(stat_buf.st_mode) != 0) {
    *type = TYPE_FILE;
  } else {
    AWARN << "failed to get type: " << filename;
    return false;
  }
  return true;
}

bool DeleteFile(const string &filename) {
  if (!PathExists(filename)) {
    return true;
  }
  FileType type;
  if (!GetType(filename, &type)) {
    return false;
  }
  if (type == TYPE_FILE) {
    if (remove(filename.c_str()) != 0) {
      AERROR << "failed to remove file: " << filename;
      return false;
    }
    return true;
  }
  DIR *dir = opendir(filename.c_str());
  if (dir == nullptr) {
    AWARN << "failed to opendir: " << filename;
    return false;
  }
  dirent *dir_info = nullptr;
  while ((dir_info = readdir(dir)) != nullptr) {
    if (strcmp(dir_info->d_name, ".") == 0 ||
        strcmp(dir_info->d_name, "..") == 0) {
      continue;
    }
    string temp_file = filename + "/" + string(dir_info->d_name);
    FileType temp_type;
    if (!GetType(temp_file, &temp_type)) {
      AWARN << "failed to get file type: " << temp_file;
      closedir(dir);
      return false;
    }
    if (type == TYPE_DIR) {
      DeleteFile(temp_file);
    }
    remove(temp_file.c_str());
  }
  closedir(dir);
  remove(filename.c_str());
  return true;
}

bool CreateDir(const string &dir) {
  int ret = mkdir(dir.c_str(), S_IRWXU | S_IRWXG | S_IRWXO);
  if (ret != 0) {
    AWARN << "failed to create dir. [dir: " << dir
          << "] [err: " << strerror(errno) << "]";
    return false;
  }
  return true;
}

}  // namespace common
}  // namespace legion

/**
 * @file         state_flags.hpp
 * @author       jiangchengjie (yx-jiangcj@dfmc.com.cn)
 * @brief
 * @version      1.0.0
 * @date         2025-12-29 03:09:15
 * @copyright    Copyright (c) 2025
 * @license      GNU General Public License (GPL)
 */
#ifndef __STATE_FLAGS_HPP__
#define __STATE_FLAGS_HPP__
namespace legion {
namespace common {
namespace state_machine {
enum class CallbackType { UPDATE, ENTRY, EXIT };
}  // namespace state_machine
}  // namespace common
}  // namespace legion
#endif

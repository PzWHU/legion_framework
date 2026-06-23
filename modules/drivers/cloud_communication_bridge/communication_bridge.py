#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
程序B：通信桥接程序
功能：
1. MQTT通信（云平台和小程序在线）
2. WebSocket通信（小程序离线）
3. ROS2消息发布（发送给程序A）
4. 指令映射管理
5. 优先级处理（小程序离线 > 云平台 > 小程序在线）
"""

import json
import logging
import threading
import time


# 配置日志
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)
logger = logging.getLogger(__name__)


import hashlib
import os
import traceback
from pathlib import Path
from datetime import datetime
from typing import Dict, Optional, Any, List
from enum import Enum
from dataclasses import dataclass
from queue import Queue, PriorityQueue

# HTTP请求
try:
    import requests
    REQUESTS_AVAILABLE = True
except ImportError:
    REQUESTS_AVAILABLE = False
    logger.warning("requests库未安装，地图上传功能将不可用")

# MQTT
import paho.mqtt.client as mqtt

# WebSocket
import asyncio
import websockets
from websockets.server import serve

# ROS2
try:
    import rclpy
    from rclpy.node import Node
    from std_msgs.msg import String
    ROS2_AVAILABLE = True
except ImportError:
    ROS2_AVAILABLE = False
    logger.warning("ROS2未安装，将使用模拟模式")


def debug_print(msg, debug_mode=False, flush=True):
    """根据 debug_mode 打印调试信息"""
    if debug_mode:
        print(msg, flush=flush)


class CommandSource(Enum):
    """指令来源枚举"""
    MINIPROGRAM_OFFLINE = 1  # 小程序离线 - 最高优先级
    CLOUD_PLATFORM = 2       # 云平台 - 中等优先级
    MINIPROGRAM_ONLINE = 3   # 小程序在线 - 最低优先级


@dataclass
class Command:
    """指令数据结构"""
    source: CommandSource
    command_type: str
    command_data: Dict[str, Any]
    timestamp: float
    request_id: Optional[str] = None
    
    def __lt__(self, other):
        """用于优先级队列排序"""
        return self.source.value < other.source.value


class ControlSessionManager:
    """
    受控模式管理器：
    - 记录当前受控模式（谁在控制）
    - 处理新连接接入、优先级比较
    - 处理“接管”确认
    """

    def __init__(self):
        self.current_source: Optional[CommandSource] = None
        self.current_label: Optional[str] = None

        # 待接管请求相关信息
        self.pending_source: Optional[CommandSource] = None
        self.pending_label: Optional[str] = None
        self.pending_context_id: Optional[str] = None

    @staticmethod
    def _label(source: CommandSource) -> str:
        if source == CommandSource.MINIPROGRAM_OFFLINE:
            return "小程序离线"
        if source == CommandSource.CLOUD_PLATFORM:
            return "云平台"
        if source == CommandSource.MINIPROGRAM_ONLINE:
            return "小程序在线"
        return source.name

    def request_control(self, source: CommandSource) -> Dict[str, Any]:
        """
        新连接请求控制时调用。
        返回:
          - {'result': 'accept', 'current': None or label, 'new': label}
          - {'result': 'reject', 'reason': '...'}
          - {'result': 'ask_confirm', 'context_id': '...', 'current': '...', 'new': '...'}
        """
        new_label = self._label(source)

        # 当前没有受控方，直接接受
        if self.current_source is None:
            self.current_source = source
            self.current_label = new_label
            self.pending_source = None
            self.pending_context_id = None
            return {"result": "accept", "current": None, "new": new_label}

        # 比当前优先级低（数值大） -> 直接拒绝
        if source.value > self.current_source.value:
            return {
                "result": "reject",
                "reason": f"当前受控模式为 {self.current_label}，拒绝优先级更低的 {new_label} 接入"
            }

        # 相同优先级：这里也拒绝，避免互相抢控制
        if source.value == self.current_source.value:
            return {
                "result": "reject",
                "reason": f"当前已由 {self.current_label} 控制，不允许相同优先级重复接入"
            }

        # 比当前优先级高 -> 需要“是否接管”确认
        context_id = f"{int(time.time() * 1000)}_{source.name}"
        self.pending_source = source
        self.pending_label = new_label
        self.pending_context_id = context_id
        return {
            "result": "ask_confirm",
            "context_id": context_id,
            "current": self.current_label,
            "new": new_label
        }

    def confirm_takeover(self, context_id: str) -> Dict[str, Any]:
        """
        收到高优先级连接的“确认接管”信号时调用。
        返回:
          - {'result': 'ok', 'old': '...', 'new': '...'}
          - {'result': 'invalid', 'reason': '...'}
        """
        if not self.pending_source or context_id != self.pending_context_id:
            return {"result": "invalid", "reason": "上下文ID不匹配或没有待接管请求"}

        old_label = self.current_label
        self.current_source = self.pending_source
        self.current_label = self.pending_label
        self.pending_source = None
        self.pending_label = None
        self.pending_context_id = None

        return {"result": "ok", "old": old_label, "new": self.current_label}

    def release_if_current(self, source: CommandSource):
        """某个渠道断开/主动放弃控制时调用"""
        if self.current_source == source:
            self.current_source = None
            self.current_label = None


class CommandMapper:
    """指令映射管理器"""
    
    def __init__(self, config_file: str = "command_mapping.json"):
        """
        初始化指令映射器
        config_file: 映射配置文件路径
        """
        self.config_file = config_file
        self.mapping: Dict[str, int] = {}
        self.load_mapping()
    
    def load_mapping(self):
        """从配置文件加载指令映射"""
        try:
            with open(self.config_file, 'r', encoding='utf-8') as f:
                self.mapping = json.load(f)
            logger.info(f"加载指令映射配置: {len(self.mapping)} 条映射")
        except FileNotFoundError:
            logger.warning(f"映射配置文件不存在: {self.config_file}，使用默认映射")
            self.mapping = self._get_default_mapping()
            self.save_mapping()
        except Exception as e:
            logger.error(f"加载映射配置失败: {e}，使用默认映射")
            self.mapping = self._get_default_mapping()
    
    def save_mapping(self):
        """保存指令映射到配置文件"""
        try:
            with open(self.config_file, 'w', encoding='utf-8') as f:
                json.dump(self.mapping, f, indent=2, ensure_ascii=False)
            logger.info("指令映射配置已保存")
        except Exception as e:
            logger.error(f"保存映射配置失败: {e}")
    
    def _get_default_mapping(self) -> Dict[str, int]:
        """获取默认指令映射"""
        return {
            # 自动驾驶控制
            "auto_drive_start": 41,
            "auto_drive_stop": 40,
            
            # 清扫控制
            "clean_start": 11,
            "clean_stop": 10,
            
            # 洒水控制
            "water_start": 21,
            "water_stop": 20,
            
            # 任务控制
            "task_start": 4001,
            "task_end": 4002,
            "task_delete": 4003,
            "circle_end": 4004,
            
            # 车辆控制
            "call_back": 5001,
            "set_speed": 1007,
            
            # 地图和轨迹
            "record_traj_start": 2001,
            "record_traj_end": 2002,
            "record_map_start": 2003,
            "record_map_end": 2004,
            "get_map_pic": 2005,
            "get_map_json": 2006,
            "get_task_json": 2007,
            "shift_map": 2008,
            "send_map_json": 2009,
            "send_task_json": 2010,
            "send_init_loc_json": 2011,
            "init_location": 2012,
            "request_map": 2013,
            
            # 保留原有映射（向后兼容）
            "movement_start": 1001,
            "movement_stop": 1002,
            "movement_forward": 1003,
            "movement_backward": 1004,
            "movement_turn_left": 1005,
            "movement_turn_right": 1006,
            "movement_left": 1005,
            "movement_right": 1006,
            "movement_set_speed": 1007,
            "light_on": 2001,
            "light_off": 2002,
            "light_blink": 2003,
            "light_set_brightness": 2004,
            # 功能一二三四（功能灯控制）
            "light1_on": 2101,
            "light1_off": 2102,
            "light2_on": 2103,
            "light2_off": 2104,
            "light3_on": 2105,
            "light3_off": 2106,
            "light4_on": 2107,
            "light4_off": 2108,
            "power_on": 3001,
            "power_off": 3002,
            "task_stop": 4002,
            "task_pause": 4003,
            "task_resume": 4004,
            "emergency_stop": 5001,
            "reset": 5002,
        }
    
    def get_code(self, command_type: str) -> int:
        """
        获取指令对应的code
        command_type: 指令类型
        返回: code值，如果不存在则返回-1
        """
        return self.mapping.get(command_type, -1)
    
    def add_mapping(self, command_type: str, code: int):
        """添加新的指令映射"""
        self.mapping[command_type] = code
        self.save_mapping()
        logger.info(f"添加指令映射: {command_type} -> {code}")
    
    def remove_mapping(self, command_type: str):
        """删除指令映射"""
        if command_type in self.mapping:
            del self.mapping[command_type]
            self.save_mapping()
            logger.info(f"删除指令映射: {command_type}")


class ROS2Publisher:
    """ROS2消息发布者和订阅者"""
    
    def __init__(self, node_name: str = "communication_bridge", debug_mode: bool = False, debug_settings: dict = None):
        self.node_name = node_name
        self.debug_mode = debug_mode
        self.debug_settings = debug_settings or {
            "node_discovery": True,
            "vehicle_info": False,
            "async_command": True
        }
        self.node = None
        self.publisher = None
        self.status_subscriber = None  # 新增：状态订阅者
        self.status_callback = None    # 新增：状态回调函数
        self.initialized = False
        self.should_shutdown = False  # 标记是否应该在shutdown时关闭ROS2上下文
        
        if ROS2_AVAILABLE:
            if self.debug_mode:
                print(f"正在启动 ROS2 节点: {node_name}")
            try:
                # 打印环境诊断信息
                import os
                # 强制指定 RMW 实现和本地回环，防止跨环境/网卡冲突
                os.environ['RMW_IMPLEMENTATION'] = 'rmw_fastrtps_cpp'
                os.environ['ROS_LOCALHOST_ONLY'] = '1'
                domain_id = os.environ.get('ROS_DOMAIN_ID', '0 (default)')
                
                try:
                    rclpy.init()
                    self.should_shutdown = True
                    if self.debug_mode:
                        print(f">>> [ROS2 INFO] rclpy.init() 成功", flush=True)
                except RuntimeError as e:
                    if "already initialized" in str(e).lower():
                        self.should_shutdown = False
                        if self.debug_mode:
                            print(f">>> [ROS2 INFO] ROS2 已经初始化，跳过 rclpy.init()", flush=True)
                    else:
                        raise

                try:
                    from rclpy.utilities import get_rmw_implementation_identifier
                    rmw_impl = get_rmw_implementation_identifier()
                except:
                    rmw_impl = "unknown"
                
                if self.debug_mode:
                    print(f">>> [ROS2 ENV] Domain ID: {domain_id}, RMW: {rmw_impl}", flush=True)
                
                self.node = Node(node_name)
                if self.debug_mode:
                    print(f"ROS2 节点创建成功: {node_name}", flush=True)
                
                # 创建指令发布者
                self.publisher = self.node.create_publisher(String, '/vehicle/command', 10)
                if self.debug_mode:
                    print("ROS2 /vehicle/command 发布者创建成功", flush=True)
                
                # 创建状态订阅者
                # 注意：QoS 必须与 server.py 发布方的 QoS 兼容
                # server.py 使用 qos_profile_system_default (RELIABLE + VOLATILE)
                # 这里也使用相同的 QoS
                from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy, HistoryPolicy, qos_profile_system_default
                sub_qos = QoSProfile(
                    reliability=ReliabilityPolicy.RELIABLE,
                    durability=DurabilityPolicy.TRANSIENT_LOCAL, # 改为持久化宣告
                    history=HistoryPolicy.KEEP_LAST,
                    depth=10
                )
                self.status_subscriber = self.node.create_subscription(
                    String,
                    '/vehicle/status',
                    self.status_callback_wrapper,
                    sub_qos
                )
                if self.debug_mode:
                    print(f"ROS2 /vehicle/status 订阅者创建成功 (QoS: RELIABLE+TRANSIENT_LOCAL)", flush=True)
                
                # 创建任务状态订阅者
                self.task_subscriber = self.node.create_subscription(
                    String,
                    '/task_to_cloud',
                    self.status_callback_wrapper,
                    10
                )
                if self.debug_mode:
                    print(f"ROS2 /task_to_cloud 订阅者创建成功", flush=True)
                
                self.initialized = True
                if self.debug_mode:
                    print(f"ROS2 节点 '{node_name}' 初始化成功", flush=True)
            except Exception as e:
                if self.debug_mode:
                    print(f"ROS2 初始化严重错误: {e}")
                if self.debug_mode:
                    traceback.print_exc()
                self.initialized = False
        else:
            if self.debug_mode:
                print("警告: ROS2 (rclpy) 未安装或导入失败，网关将运行在模拟模式（不连接 ROS2）")
            logger.warning("ROS2未安装，使用模拟模式")
    
    def set_status_callback(self, callback):
        """设置状态数据回调函数"""
        self.status_callback = callback
    
    def status_callback_wrapper(self, msg):
        """状态消息回调包装函数"""
        try:
            # 只有在开启了车辆信息打印时才输出
            if self.debug_mode and self.debug_settings.get("vehicle_info", False):
                print(f"\n>>> [ROS2 DATA] 收到原始数据! 长度: {len(msg.data)}", flush=True)
                print(f">>> [ROS2 DATA] 内容预览: {msg.data[:50]}...", flush=True)
            
            status_data = json.loads(msg.data)
            if self.status_callback:
                self.status_callback(status_data)
        except json.JSONDecodeError as e:
            if self.debug_mode:
                print(f">>> [ROS2 ERROR] JSON解析失败: {e}", flush=True)
        except Exception as e:
            if self.debug_mode:
                print(f">>> [ROS2 ERROR] 处理异常: {e}", flush=True)
                traceback.print_exc()

    def check_discovery_status(self):
        """定时检查发现状态"""
        if self.node:
            try:
                # 获取节点列表
                nodes = self.node.get_node_names()
                sub_count = self.node.count_subscribers('/vehicle/command')
                pub_count = self.node.count_publishers('/vehicle/status')
                if self.debug_mode and self.debug_settings.get("node_discovery", True):
                    print(f"\n>>> [ROS2 NETWORK] 发现节点: {nodes}", flush=True)
                    print(f">>> [ROS2 NETWORK] /command 订阅者: {sub_count}, /status 发布者: {pub_count}", flush=True)
            except Exception as e:
                if self.debug_mode:
                    print(f">>> [ROS2 STATUS] 检查失败: {e}", flush=True)
    
    def publish(self, code: int, value: Any, timestamp: Optional[float] = None):
        """
        发布ROS2消息
        code: 指令代码
        value: 指令值
        timestamp: 时间戳（可选）
        """
        if timestamp is None:
            timestamp = time.time()
        
        # 构建ROS2消息格式: {"time": timestamp, "code": code, "value": value}
        message_data = {
            "time": timestamp,
            "code": code,
            "value": value
        }
        
        if self.initialized and self.publisher:
            try:
                msg = String()
                msg.data = json.dumps(message_data)
                self.publisher.publish(msg)
                if self.debug_mode and self.debug_settings.get("async_command", True):
                    print(f">>> [ROS2 发布] Topic: /vehicle/command, Code: {code}", flush=True)
                logger.debug(f"发布ROS2消息: code={code}, value={value}")
            except Exception as e:
                logger.error(f"发布ROS2消息失败: {e}")
        else:
            # 模拟模式：直接打印
            print(f">>> [ROS2 模拟] Code: {code}", flush=True)
            logger.info(f"[模拟ROS2] 发布消息: {json.dumps(message_data, ensure_ascii=False)}")
    
    def spin_once(self):
        """执行一次ROS2 spin（线程安全：只应在主线程中调用）"""
        if self.initialized and self.node:
            try:
                rclpy.spin_once(self.node, timeout_sec=0.1)
            except RuntimeError as e:
                # 处理 "generator already executing" 等运行时错误
                error_msg = str(e).lower()
                if "generator already executing" in error_msg or "already executing" in error_msg:
                    # 这种情况通常是因为在多个线程中同时调用了spin_once
                    # 应该只在主循环中调用，忽略此次调用
                    logger.debug(f"ROS2 spin跳过（可能在其他线程中执行）: {e}")
                else:
                    logger.error(f"ROS2 spin失败: {e}")
            except Exception as e:
                logger.error(f"ROS2 spin失败: {e}")
    
    def shutdown(self):
        """关闭ROS2节点"""
        if self.initialized and self.node:
            try:
                self.node.destroy_node()
                self.node = None
                self.initialized = False
                # 只有在当前实例初始化了ROS2的情况下才shutdown
                if self.should_shutdown:
                    rclpy.shutdown()
                    self.should_shutdown = False
                logger.info("ROS2节点已关闭")
            except Exception as e:
                logger.error(f"关闭ROS2节点失败: {e}")


class MQTTClient:
    """MQTT客户端（云平台和小程序在线）"""
    def __init__(self, broker: str, port: int, username: Optional[str] = None,
                 password: Optional[str] = None, vehicle_id: str = "V001",
                 command_queue: PriorityQueue = None,
                 control_manager: Optional[ControlSessionManager] = None,
                 debug_mode: bool = False,
                 debug_settings: dict = None,
                 suffix: str = ""):
        self.broker = broker
        self.port = port
        self.username = username
        self.password = password
        self.vehicle_id = vehicle_id
        self.command_queue = command_queue
        self.control_manager = control_manager
        self.debug_mode = debug_mode
        self.debug_settings = debug_settings or {
            "heartbeat": False,
            "vehicle_info": False,
            "async_command": True
        }
        
        # 使用固定的client_id，增加后缀防止冲突
        client_id = f"vehicle_{vehicle_id}{suffix}"
        self.client = mqtt.Client(
            client_id=client_id,
            clean_session=True
        )
        self.client.username_pw_set(username, password)
        self.client.on_connect = self._on_connect
        self.client.on_message = self._on_message
        self.client.on_disconnect = self._on_disconnect
        
        self.connected = False
        self.cloud_topic = f"/cloud2vehicle/{vehicle_id}/cmd"
        self.miniprogram_topic = f"/wx2cloud/{vehicle_id}/cmd"
        # 回复Topic，用于把提示消息发给云端
        self.reply_topic = f"/vehicle2cloud/{vehicle_id}/control_reply"
        
        # 消息去重：记录最近处理的消息（request_id + timestamp）
        # 用于防止MQTT QoS=1导致的重复消息
        self.processed_messages = set()
        self.message_ttl = 5.0  # 消息去重时间窗口（秒）
    
    def _on_connect(self, client, userdata, flags, rc):
        """MQTT连接回调"""
        if rc == 0:
            self.connected = True
            logger.info(f"MQTT连接成功: {self.broker}:{self.port}")
            
            # 只有主数据客户端（有 command_queue 的）才订阅指令主题
            if self.command_queue is not None:
                client.subscribe(self.cloud_topic, qos=1)
                logger.info(f"订阅命令指令主题: {self.cloud_topic}")
                
                # 订阅打洞/动态端口同步的回复主题
                self.sync_reply_topic = f"/cloud2vehicle/{self.vehicle_id}/sync_reply"
                client.subscribe(self.sync_reply_topic, qos=1)
                logger.info(f"订阅同步回复主题: {self.sync_reply_topic}")
        else:
            logger.error(f"MQTT连接失败，返回码: {rc}")
            self.connected = False
    
    def _on_message(self, client, userdata, msg):
        """MQTT消息接收回调"""
        try:
            # 只有在开启了异步指令打印时才输出
            if self.debug_mode and self.debug_settings.get("async_command", True):
                print(f"\n>>> [MQTT 接收] Topic: {msg.topic}", flush=True)
            
            payload_str = msg.payload.decode('utf-8')
            logger.debug(f"收到MQTT消息: topic={msg.topic}, payload={payload_str}")
            payload = json.loads(payload_str)
            topic = msg.topic
            
            # 处理动态端口同步回复
            if hasattr(self, 'sync_reply_topic') and topic == self.sync_reply_topic:
                if hasattr(self, 'bridge') and self.bridge:
                    self.bridge.handle_sync_reply(payload)
                return

            # 指令来源（现在固定为云平台信道，如果是小程序在线，也是由云平台转发）
            if topic == self.cloud_topic:
                source = CommandSource.CLOUD_PLATFORM
            else:
                print(f"!!! [MQTT 警告] 未知主题: {topic}, 期望: {self.cloud_topic}")
                logger.warning(f"未知的MQTT主题: {topic}, 期望: {self.cloud_topic}")
                return

            msg_type = payload.get("type", "control")

            # ---------- 控制会话管理逻辑 ----------
            if msg_type == "control_connect":
                if not self.control_manager:
                    return
                result = self.control_manager.request_control(source)
                if result["result"] == "accept":
                    self.client.publish(
                        self.reply_topic,
                        json.dumps({
                            "type": "control_connect_result",
                            "status": "accepted",
                            "mode": self.control_manager.current_label
                        }, ensure_ascii=False)
                    )
                elif result["result"] == "reject":
                    self.client.publish(
                        self.reply_topic,
                        json.dumps({
                            "type": "control_connect_result",
                            "status": "rejected",
                            "reason": result["reason"]
                        }, ensure_ascii=False)
                    )
                elif result["result"] == "ask_confirm":
                    self.client.publish(
                        self.reply_topic,
                        json.dumps({
                            "type": "control_takeover_request",
                            "contextId": result["context_id"],
                            "message": f"当前已存在连接{result['current']}，是否接管？",
                            "current": result["current"],
                            "new": result["new"]
                        }, ensure_ascii=False)
                    )
                return

            if msg_type == "control_takeover_confirm":
                if not self.control_manager:
                    return
                context_id = payload.get("contextId")
                r = self.control_manager.confirm_takeover(context_id)
                if r["result"] == "ok":
                    self.client.publish(
                        self.reply_topic,
                        json.dumps({
                            "type": "control_takeover_result",
                            "status": "ok",
                            "message": f"已从{r['old']}切换为{r['new']}"
                        }, ensure_ascii=False)
                    )
                else:
                    self.client.publish(
                        self.reply_topic,
                        json.dumps({
                            "type": "control_takeover_result",
                            "status": "invalid",
                            "reason": r["reason"]
                        }, ensure_ascii=False)
                    )
                return

            if msg_type == "control_disconnect":
                if self.control_manager:
                    self.control_manager.release_if_current(source)
                self.client.publish(
                    self.reply_topic,
                    json.dumps({
                        "type": "control_disconnect_result",
                        "status": "ok"
                    }, ensure_ascii=False)
                )
                return

            # 解析指令类型，用于判断是否是系统指令
            # 系统指令（如任务同步、地图请求）不应该被控制会话拦截
            temp_type = payload.get('type', '')
            temp_cmd_type = payload.get('command_type', '')
            is_system_command = temp_type in ['request_map', 'get_map_pic', 'get_map_json', 'get_task_json'] or \
                              temp_cmd_type in ['send_task_json', 'sync_all_maps', 'get_task_json']

            # 如果当前存在受控模式，且不是系统指令，则只允许当前来源发送控制指令
            if not is_system_command and self.control_manager and self.control_manager.current_source \
               and source != self.control_manager.current_source:
                print(f">>> [会话拦截] 忽略来自 {source.name} 的指令（当前由 {self.control_manager.current_label} 控制）")
                logger.info(f"忽略非当前受控来源 {source.name} 的控制指令")
                return

            # 解析指令
            # 对于movement类型，需要结合direction生成完整的command_type
            msg_type = payload.get('type', '')
            command_data = payload.get('params', payload.get('data', {}))
            
            if msg_type == 'movement':
                direction = payload.get('direction', '')
                if direction:
                    command_type = f"movement_{direction}"
                else:
                    command_type = 'movement'
            elif msg_type == 'control':
                # 对于control类型，需要检查command_type
                cmd_type = payload.get('command_type', 'unknown')
                if cmd_type == 'light':
                    # 处理light指令：根据lightId和state生成对应的指令类型
                    light_id = command_data.get('lightId', '')
                    light_state = command_data.get('state', '')
                    if light_id and light_state:
                        command_type = f"{light_id}_{light_state}"  # 例如: light1_on, light2_off
                    else:
                        command_type = 'light'
                else:
                    command_type = cmd_type
            elif msg_type == 'command':
                # 如果 type 是通用的 "command"，则必须使用 command_type
                command_type = payload.get('command_type', 'unknown')
            else:
                # 其他情况，优先尝试从 command_type 获取，其次是 type
                command_type = payload.get('command_type') or payload.get('type', 'unknown')
            request_id = payload.get('requestId', payload.get('request_id'))
            msg_timestamp = payload.get('timestamp', '')
            
            # 消息去重：基于request_id生成唯一标识
            # 如果没有request_id，使用payload的完整hash（不依赖timestamp，因为timestamp可能不同）
            if request_id:
                message_key = request_id
            else:
                # 对于没有request_id的消息，使用payload的完整hash作为去重标识
                # 注意：需要排除timestamp字段，因为两次发送的timestamp可能不同
                payload_for_hash = {k: v for k, v in payload.items() if k != 'timestamp'}
                payload_str = json.dumps(payload_for_hash, sort_keys=True)
                payload_hash = hashlib.md5(payload_str.encode()).hexdigest()[:16]
                message_key = f"{command_type}_{payload_hash}"
            
            # 检查是否是重复消息（在短时间内，比如1秒内）
            current_time = time.time()
            if message_key in self.processed_messages:
                logger.debug(f"检测到重复消息，已忽略: {command_type}, request_id={request_id}, key={message_key}")
                return
            
            # 记录已处理的消息
            self.processed_messages.add(message_key)
            
            # 清理过期的消息记录（超过TTL的消息）
            # 这里简化处理：如果记录太多，清空所有记录
            # 实际应用中可以使用更复杂的清理策略
            if len(self.processed_messages) > 1000:
                self.processed_messages.clear()
                logger.debug("消息去重缓存已清空")
            
            command = Command(
                source=source,
                command_type=command_type,
                command_data=command_data,
                timestamp=current_time,
                request_id=request_id
            )
            
            # 添加到优先级队列
            if self.command_queue:
                self.command_queue.put(command)
                if self.debug_mode and self.debug_settings.get("async_command", True):
                    print(f">>> [指令处理] 队列入队: {command_type}, 来源: {source.name}", flush=True)
                logger.info(f"收到{source.name}指令: {command_type}, request_id={request_id}")
            else:
                # 心跳专用客户端等没有队列的实例，直接忽略收到的指令
                pass
                
        except json.JSONDecodeError as e:
            logger.error(f"MQTT消息JSON解析失败: {e}, payload: {msg.payload}")
        except Exception as e:
            logger.error(f"处理MQTT消息失败: {e}")
    
    def _on_disconnect(self, client, userdata, rc):
        """MQTT断开连接回调"""
        self.connected = False
        logger.warning(f"MQTT连接断开，返回码: {rc}")
    
    def connect(self):
        """连接MQTT Broker"""
        try:
            self.client.connect(self.broker, self.port, keepalive=60)
            self.client.loop_start()
            logger.info(f"开始连接MQTT: {self.broker}:{self.port}")
        except Exception as e:
            logger.error(f"MQTT连接异常: {e}")
    
    def disconnect(self):
        """断开MQTT连接"""
        if self.connected:
            self.client.loop_stop()
            self.client.disconnect()
            self.connected = False
            logger.info("MQTT连接已断开")
    
    def publish_vehicle_info(self, vehicle_data: Dict[str, Any]):
        """发布车辆信息到云平台"""
        if not self.connected:
            return
        
        topic = f"/vehicle2cloud/{self.vehicle_id}/vehicleinfo"
        try:
            payload = json.dumps(vehicle_data, ensure_ascii=False)
            self.client.publish(topic, payload, qos=1)
            if self.debug_mode and self.debug_settings.get("vehicle_info", False):
                print(f">>> [MQTT 发布] Topic: {topic}, 车辆信息上报", flush=True)
                logger.debug(f"发布车辆信息: {topic}")
        except Exception as e:
            logger.error(f"发布车辆信息失败: {e}")

    def publish_heartbeat(self, is_powered: bool = False):
        """发布心跳到云平台"""
        if not self.connected:
            return
        
        topic = f"/vehicle2cloud/{self.vehicle_id}/heartbeat"
        try:
            heartbeat_data = {
                "type": "heartbeat",
                "vehicle_id": self.vehicle_id,
                "power": 1 if is_powered else 0,
                "timestamp": datetime.now().isoformat()
            }
            payload = json.dumps(heartbeat_data, ensure_ascii=False)
            self.client.publish(topic, payload, qos=0)
            if self.debug_mode and self.debug_settings.get("heartbeat", False):
                print(f">>> [MQTT 心跳] Topic: {topic}, power={heartbeat_data['power']}", flush=True)
                logger.debug(f"发布心跳: {topic}, power={heartbeat_data['power']}")
        except Exception as e:
            logger.error(f"发布心跳失败: {e}")


class WebSocketServer:
    """WebSocket服务器（小程序离线）"""
    
    def __init__(self, host: str = "0.0.0.0", port: int = 8765,
                 command_queue: PriorityQueue = None,
                 control_manager: Optional[ControlSessionManager] = None,
                 debug_mode: bool = False):
        self.host = host
        self.port = port
        self.command_queue = command_queue
        self.control_manager = control_manager
        self.debug_mode = debug_mode
        self.clients = set()
        self.server = None
        self.running = False
        self.status_queue = Queue()  # 新增：状态消息队列，用于线程间通信
        self.loop = None  # 新增：事件循环引用
    
    async def register_client(self, websocket):
        """注册客户端"""
        self.clients.add(websocket)
        logger.info(f"WebSocket客户端连接: {websocket.remote_address}")
    
    async def unregister_client(self, websocket):
        """注销客户端"""
        self.clients.discard(websocket)
        logger.info(f"WebSocket客户端断开: {websocket.remote_address}")
    
    async def handle_client(self, websocket, path):
        """处理客户端连接"""
        await self.register_client(websocket)
        
        # 处理状态消息队列（新增）
        async def process_status_queue():
            while self.running and websocket in self.clients:
                try:
                    if not self.status_queue.empty():
                        status_data = self.status_queue.get_nowait()
                        message = json.dumps(status_data, ensure_ascii=False)
                        try:
                            await websocket.send(message)
                        except websockets.exceptions.ConnectionClosed:
                            break
                except Exception as e:
                    logger.error(f"处理状态队列失败: {e}")
                await asyncio.sleep(0.1)
        
        # 启动状态队列处理任务
        status_task = None
        try:
            status_task = asyncio.create_task(process_status_queue())
            
            async for message in websocket:
                try:
                    data = json.loads(message)
                    await self.process_message(websocket, data)
                except json.JSONDecodeError as e:
                    logger.error(f"WebSocket消息JSON解析失败: {e}")
                    await websocket.send(json.dumps({
                        "type": "error",
                        "message": "消息格式错误"
                    }))
                except Exception as e:
                    logger.error(f"处理WebSocket消息失败: {e}")
        except websockets.exceptions.ConnectionClosed:
            pass
        finally:
            if status_task:
                status_task.cancel()
            await self.unregister_client(websocket)
    
    def send_status(self, status_data: Dict[str, Any]):
        """线程安全的方式发送状态数据到WebSocket客户端"""
        if self.clients:
            self.status_queue.put(status_data)
    
    async def process_message(self, websocket, data: Dict[str, Any]):
        """处理WebSocket消息"""
        msg_type = data.get('type', 'unknown')

        # ---------- 控制会话管理 ----------
        if msg_type == 'control_connect':
            if not self.control_manager:
                return
            result = self.control_manager.request_control(CommandSource.MINIPROGRAM_OFFLINE)
            if result["result"] == "accept":
                await websocket.send(json.dumps({
                    "type": "control_connect_result",
                    "status": "accepted",
                    "mode": self.control_manager.current_label
                }, ensure_ascii=False))
            elif result["result"] == "reject":
                await websocket.send(json.dumps({
                    "type": "control_connect_result",
                    "status": "rejected",
                    "reason": result["reason"]
                }, ensure_ascii=False))
                await websocket.close()
            elif result["result"] == "ask_confirm":
                await websocket.send(json.dumps({
                    "type": "control_takeover_request",
                    "contextId": result["context_id"],
                    "message": f"当前已存在连接{result['current']}，是否接管？",
                    "current": result["current"],
                    "new": result["new"]
                }, ensure_ascii=False))
            return

        if msg_type == 'control_takeover_confirm':
            if not self.control_manager:
                return
            context_id = data.get("contextId")
            r = self.control_manager.confirm_takeover(context_id)
            if r["result"] == "ok":
                await websocket.send(json.dumps({
                    "type": "control_takeover_result",
                    "status": "ok",
                    "message": f"已从{r['old']}切换为{r['new']}"
                }, ensure_ascii=False))
            else:
                await websocket.send(json.dumps({
                    "type": "control_takeover_result",
                    "status": "invalid",
                    "reason": r["reason"]
                }, ensure_ascii=False))
            return

        if msg_type == 'control_disconnect':
            if self.control_manager:
                self.control_manager.release_if_current(CommandSource.MINIPROGRAM_OFFLINE)
            await websocket.send(json.dumps({
                "type": "control_disconnect_result",
                "status": "ok"
            }, ensure_ascii=False))
            await websocket.close()
            return

        # ---------- 正常控制指令 ----------
        if msg_type == 'control' or msg_type == 'command':
            # 如果有当前受控模式且不是离线小程序，则拒绝
            if self.control_manager and self.control_manager.current_source \
               and self.control_manager.current_source != CommandSource.MINIPROGRAM_OFFLINE:
                await websocket.send(json.dumps({
                    "type": "error",
                    "message": f"当前受控模式为{self.control_manager.current_label}，无法发送控制指令"
                }, ensure_ascii=False))
                return

            # 控制指令
            command_type = data.get('command_type', data.get('type', 'unknown'))
            command_data = data.get('params', data.get('data', {}))
            request_id = data.get('requestId', data.get('request_id'))
            
            command = Command(
                source=CommandSource.MINIPROGRAM_OFFLINE,
                command_type=command_type,
                command_data=command_data,
                timestamp=time.time(),
                request_id=request_id
            )
            
            # 添加到优先级队列（最高优先级）
            if self.command_queue:
                self.command_queue.put(command)
                logger.info(f"收到小程序离线指令: {command_type}, request_id={request_id}")
                
                # 发送确认消息
                await websocket.send(json.dumps({
                    "type": "ack",
                    "requestId": request_id,
                    "status": "received",
                    "timestamp": datetime.now().isoformat()
                }))
            else:
                logger.warning("命令队列未初始化")
        
        # 处理数据请求消息（需要转发给车端程序）
        elif msg_type == 'request_map':
            # 请求地图列表
            command = Command(
                source=CommandSource.MINIPROGRAM_OFFLINE,
                command_type='request_map',
                command_data={},
                timestamp=time.time()
            )
            if self.command_queue:
                self.command_queue.put(command)
                logger.info("收到地图列表请求")
        
        elif msg_type == 'get_map_pic':
            # 获取地图图片
            map_name = data.get('map_name', '')
            command = Command(
                source=CommandSource.MINIPROGRAM_OFFLINE,
                command_type='get_map_pic',
                command_data={'map_name': map_name},
                timestamp=time.time()
            )
            if self.command_queue:
                self.command_queue.put(command)
                logger.info(f"收到地图图片请求: {map_name}")
        
        elif msg_type == 'get_map_json':
            # 获取地图配置
            map_name = data.get('map_name', '')
            command = Command(
                source=CommandSource.MINIPROGRAM_OFFLINE,
                command_type='get_map_json',
                command_data={'map_name': map_name},
                timestamp=time.time()
            )
            if self.command_queue:
                self.command_queue.put(command)
                logger.info(f"收到地图配置请求: {map_name}")
        
        elif msg_type == 'get_task_json':
            # 获取任务配置
            command = Command(
                source=CommandSource.MINIPROGRAM_OFFLINE,
                command_type='get_task_json',
                command_data={},
                timestamp=time.time()
            )
            if self.command_queue:
                self.command_queue.put(command)
                logger.info("收到任务配置请求")
        
        else:
            logger.warning(f"未知的WebSocket消息类型: {msg_type}")
    
    async def start(self):
        """启动WebSocket服务器"""
        self.loop = asyncio.get_event_loop()  # 保存事件循环引用
        try:
            self.server = await serve(
                self.handle_client,
                self.host,
                self.port,
                reuse_address=True  # 允许地址重用
            )
            self.running = True
            logger.info(f"WebSocket服务器启动: ws://{self.host}:{self.port}")
            await self.server.wait_closed()
        except OSError as e:
            if e.errno == 98:  # Address already in use
                logger.warning(f"WebSocket端口 {self.port} 已被占用，跳过启动")
                self.running = False
            else:
                raise
    
    def stop(self):
        """停止WebSocket服务器"""
        self.running = False
        if self.server and self.loop:
            # 关闭所有客户端连接
            for client in list(self.clients):
                try:
                    if self.loop.is_running():
                        asyncio.run_coroutine_threadsafe(client.close(), self.loop)
                except Exception as e:
                    logger.warning(f"关闭WebSocket客户端失败: {e}")
            # 关闭服务器
            try:
                if self.loop.is_running():
                    # 关闭服务器，这会触发wait_closed()返回
                    asyncio.run_coroutine_threadsafe(self.server.close(), self.loop)
            except Exception as e:
                logger.warning(f"关闭WebSocket服务器失败: {e}")
            logger.info("WebSocket服务器已停止")


class CommunicationBridge:
    """通信桥接主程序"""
    
    def __init__(self, config: Dict[str, Any]):
        """
        初始化通信桥接
        config: 配置字典
        """
        self.config = config
        self.vehicle_id = config.get('vehicle_id', 'V001')
        
        # 受控模式管理器
        self.control_manager = ControlSessionManager()
        
        # 指令映射器
        self.command_mapper = CommandMapper(
            config.get('command_mapping_file', 'command_mapping.json')
        )
        
        # 调试模式
        self.debug_mode = config.get('debug_mode', 0) == 1
        self.debug_settings = config.get('debug_settings', {
            "heartbeat": False,
            "node_discovery": True,
            "periodic_status": False,
            "async_command": True
        })
        
        if self.debug_mode:
            logger.setLevel(logging.DEBUG)
            print(">>> [DEBUG] 调试模式已开启", flush=True)
            print(f">>> [DEBUG] 细分开关: {json.dumps(self.debug_settings, ensure_ascii=False)}", flush=True)
        else:
            logger.setLevel(logging.WARNING)
        
        # 地图同步缓存：{map_name: {'pic': base64, 'json': dict}}
        self.map_sync_cache = {}
        self.map_sync_lock = threading.Lock()
        self.uploading_maps = set() # 正在上传/校验中的地图，防止重复触发
        self.map_check_semaphore = threading.Semaphore(1) # 强制校验串行化，防止压垮后端连接池
        self.map_upload_semaphore = threading.Semaphore(1) # 强制大文件上传串行化，同一时间只传一张图
        
        # 创建ROS2发布者和订阅者
        if self.debug_mode:
            print(f"检查 ROS2 可用性: {ROS2_AVAILABLE}", flush=True)
            print(f">>> [DEBUG] ROS_DOMAIN_ID: {os.environ.get('ROS_DOMAIN_ID', '0 (default)')}", flush=True)
        
        try:
            from rclpy.utilities import get_rmw_implementation_identifier
            if self.debug_mode:
                print(f">>> [DEBUG] RMW Implementation: {get_rmw_implementation_identifier()}", flush=True)
        except:
            pass
            
        self.ros2_publisher = ROS2Publisher(
            node_name=f"vehicle_{self.vehicle_id}", 
            debug_mode=self.debug_mode,
            debug_settings=self.debug_settings
        )
        
        # 设置状态回调
        self.ros2_publisher.set_status_callback(self.handle_vehicle_status)
        
        # 优先级队列（按source.value排序）
        self.command_queue = PriorityQueue()
        
        # 主数据MQTT客户端
        mqtt_config = config.get('mqtt', {})
        self.mqtt_client = MQTTClient(
            broker=mqtt_config.get('broker', 'localhost'),
            port=mqtt_config.get('port', 1883),
            username=mqtt_config.get('username'),
            password=mqtt_config.get('password'),
            vehicle_id=self.vehicle_id,
            command_queue=self.command_queue,
            control_manager=self.control_manager,
            debug_mode=self.debug_mode,
            debug_settings=self.debug_settings
        )
        self.mqtt_client.bridge = self
        
        # 独立心跳MQTT客户端（使用独立TCP连接，防止大数据阻塞）
        self.heartbeat_mqtt_client = MQTTClient(
            broker=mqtt_config.get('broker', 'localhost'),
            port=mqtt_config.get('port', 1883),
            username=mqtt_config.get('username'),
            password=mqtt_config.get('password'),
            vehicle_id=self.vehicle_id,
            command_queue=None, # 心跳端不需要处理指令
            debug_mode=self.debug_mode,
            debug_settings=self.debug_settings,
            suffix="_hbt" # 增加后缀防止ClientID冲突
        )
        
        # WebSocket服务器
        ws_config = config.get('websocket', {})
        self.ws_server = WebSocketServer(
            host=ws_config.get('host', '0.0.0.0'),
            port=ws_config.get('port', 8765),
            command_queue=self.command_queue,
            control_manager=self.control_manager,
            debug_mode=self.debug_mode
        )
        
        # 运行标志
        self.running = False
        
        # 测试模式：如果test_mode=1，每隔1秒模拟数据上传
        self.test_mode = config.get('test_mode', 0)
        self.heartbeat_thread = None
        self.command_processor_thread = None
        self.ws_server_thread = None
        
        # 后端API地址（用于地图上传）
        self.backend_url = config.get('backend_url', 'http://localhost:5000')
        
        # 地图文件夹路径（用于地图上传）
        script_dir = Path(__file__).resolve().parent
        self.map_path = script_dir / "mapdir"
        
        # MQTT异步发送队列 (优先级队列)
        # 优先级定义: 0: 心跳/控制确认, 1: 实时状态, 2: 任务/轨迹, 3: 地图大数据
        self.mqtt_queue = PriorityQueue()
        self.mqtt_counter = 0 # 决胜因子，防止相同优先级的字典比较报错
        self.mqtt_worker_thread = threading.Thread(target=self._mqtt_publish_worker, daemon=True)
        
        logger.info(f"通信桥接器已初始化: VehicleID={self.vehicle_id}")
        map_dir_relative = config.get('map_dir', 'mapdir')
        self.map_dir = script_dir / map_dir_relative
        
        # 记录最后收到 ROS2 状态的时间
        self.last_ros_status_time = 0
    
    def process_commands(self):
        """处理指令队列（在独立线程中运行）"""
        logger.info("指令处理线程启动")
        while self.running:
            try:
                # 从优先级队列获取指令（阻塞等待，最多1秒）
                try:
                    command = self.command_queue.get(timeout=1.0)
                except:
                    # 超时，继续循环（不调用spin_once，由主循环统一处理）
                    continue
                
                # 获取指令对应的code
                code = self.command_mapper.get_code(command.command_type)
                
                if code == -1:
                    logger.warning(f"未找到指令映射: {command.command_type}")
                    # 可以尝试使用默认code或跳过
                    continue
                
                # 构建value（包含指令数据和元信息）
                value = self.build_command_value(command)
                
                # 发布ROS2消息
                self.ros2_publisher.publish(
                    code=code,
                    value=value,
                    timestamp=command.timestamp
                )
                
                logger.info(
                    f"处理指令: source={command.source.name}, "
                    f"type={command.command_type}, code={code}"
                )
                
                # 注意：不在此处调用spin_once，由主循环统一处理ROS2消息
                # 这样可以避免多线程同时调用spin_once导致的冲突
                
            except Exception as e:
                logger.error(f"处理指令异常: {e}")
                import traceback
                logger.debug(traceback.format_exc())
    
    def build_command_value(self, command: Command) -> Dict[str, Any]:
        """构建指令value"""
        value = {
            "command_type": command.command_type,
            "data": command.command_data,
            "source": command.source.name,
            "request_id": command.request_id
        }
        
        # 特殊处理某些指令
        if command.command_type.startswith('movement_'):
            # 对于运动指令，将 command_type 设为数字字符串，以便 server.py 正确识别
            code = self.command_mapper.get_code(command.command_type)
            if code != -1:
                value['command_type'] = str(code)
        
        if command.command_type == 'task_start':
            # 任务开始指令，需要提取task_name
            task_name = command.command_data.get('task_name') or command.command_data.get('name', '')
            value['data'] = {'task_name': task_name}
        elif command.command_type == 'task_end':
            # 任务结束指令
            task_name = command.command_data.get('task_name') or command.command_data.get('name', '')
            value['data'] = {'task_name': task_name}
        elif command.command_type == 'task_delete':
            # 任务删除指令
            task_name = command.command_data.get('task_name') or command.command_data.get('name', '')
            value['data'] = {'task_name': task_name}
        elif command.command_type == 'task_pause':
            # 任务暂停指令
            task_name = command.command_data.get('task_name') or command.command_data.get('name', '')
            value['data'] = {'task_name': task_name}
        elif command.command_type == 'task_resume':
            # 任务恢复指令
            task_name = command.command_data.get('task_name') or command.command_data.get('name', '')
            value['data'] = {'task_name': task_name}
        elif command.command_type == 'set_speed':
            # 设置速度指令
            speed = command.command_data.get('speed') or command.command_data.get('value', '')
            value['data'] = {'speed': speed}
        
        return value
    
    def handle_vehicle_status(self, status_data: Dict[str, Any]):
        """
        处理来自车端程序的车辆状态数据
        并转发给小程序和云平台
        """
        try:
            status_type = status_data.get('type', 'unknown')
            timestamp = status_data.get('timestamp', datetime.now().isoformat())
            
            # 记录状态数据（可选）
            if self.debug_settings.get("vehicle_info", False):
                logger.debug(f"收到状态数据: type={status_type}, timestamp={timestamp}")
            
            if status_type == 'vehicle':
                # 记录最后收到状态的时间，用于心跳判断在线-上电状态
                self.last_ros_status_time = time.time()
                
                # 车辆状态数据
                vehicle_data = status_data.get('data', {})
                battery = vehicle_data.get('battery')
                if self.debug_settings.get("vehicle_info", False):
                    logger.debug(f"收到车端实时状态: ID={vehicle_data.get('vehicle_id')}, 电量={battery}")
                
                # 转发给WebSocket
                self.forward_status_to_websocket(status_data)
                
                # 转发给MQTT（保留完整的 {"type": "vehicle", "data": {...}} 格式）
                status_copy = status_data.copy()
                status_copy['timestamp'] = timestamp
                self.forward_status_to_mqtt(status_copy)
                
            elif status_type in ['map_and_traj', 'map_pic', 'map_json', 'task_json', 'split_map', 'map_split_pic']:
                # 转发给WebSocket (离线模式)
                self.forward_status_to_websocket(status_data)
                # 转发给MQTT (在线模式)
                self.forward_status_to_mqtt(status_data)
                
                # 处理地图和任务数据同步到云端数据库 (HTTP)
                if status_type in ['map_pic', 'map_json']:
                    self._handle_map_data_sync(status_type, status_data)
                elif status_type == 'task_json':
                    tasks_data = status_data.get('data', {}).get('task', [])
                    logger.info(f"收到车端全量任务同步消息，任务数: {len(tasks_data)}")
                    self._handle_task_data_sync(tasks_data)
            else:
                if self.debug_settings.get("vehicle_info", False):
                    logger.debug(f"收到其他类型的状态数据: {status_type}")
                # 默认转发给MQTT
                self.forward_status_to_mqtt(status_data)
                
        except Exception as e:
            logger.error(f"处理车辆状态异常: {e}")
            import traceback
            logger.debug(traceback.format_exc())
    
    def forward_status_to_websocket(self, data: Dict[str, Any]):
        """转发状态数据到WebSocket客户端"""
        if not self.ws_server or not self.ws_server.clients:
            return
        
        try:
            # 使用线程安全的方式发送（通过队列）
            self.ws_server.send_status(data)
            logger.debug(f"状态已加入WebSocket发送队列: {data.get('type', 'unknown')}")
        except Exception as e:
            logger.error(f"转发状态到WebSocket失败: {e}")

    def _mqtt_publish_worker(self):
        """异步发送MQTT消息的后台线程，支持优先级"""
        logger.info("MQTT 异步发送工作线程已准备就绪")
        while True:
            # 如果程序停止，退出线程
            if not self.running:
                # 检查一下是否还有剩余任务，如果没有则可以退出
                if self.mqtt_queue.empty():
                    time.sleep(0.5)
                    if not self.running: break
            
            try:
                # 从优先级队列获取任务 (priority, counter, (method, args))
                try:
                    priority, count, task = self.mqtt_queue.get(timeout=1.0)
                except:
                    continue
                    
                method_name, args = task
                
                if not self.mqtt_client or not self.mqtt_client.connected:
                    # 如果未连接，等待一会儿再重试
                    time.sleep(0.5)
                    self.mqtt_queue.task_done()
                    continue
                
                # 执行对应的发送方法
                if method_name == 'publish_vehicle_info':
                    self.mqtt_client.publish_vehicle_info(args)
                elif method_name == 'publish_heartbeat':
                    # 使用独立的心跳客户端发送
                    if self.heartbeat_mqtt_client and self.heartbeat_mqtt_client.connected:
                        self.heartbeat_mqtt_client.publish_heartbeat(is_powered=args)
                    else:
                        # 降级：如果心跳客户端未就绪，尝试用主客户端
                        self.mqtt_client.publish_heartbeat(is_powered=args)
                elif method_name == 'publish':
                    # 通用发布 (topic, payload, qos)
                    self.mqtt_client.client.publish(*args)
                
                self.mqtt_queue.task_done()
            except Exception as e:
                logger.error(f"MQTT工作线程执行异常: {e}")
            time.sleep(0.01)

    def forward_status_to_mqtt(self, vehicle_data: Dict[str, Any]):
        """转发状态数据到MQTT（云平台）- 现改为推入异步优先级队列"""
        if not self.mqtt_client:
            return
        
        status_type = vehicle_data.get('type', 'unknown')
        
        # 根据类型分配优先级
        if status_type == 'vehicle':
            priority = 1
        elif status_type in ['map_pic', 'map_json', 'map_split_pic']:
            priority = 3  # 大数据包优先级最低
        else:
            priority = 2
            
        try:
            self.mqtt_counter += 1
            self.mqtt_queue.put((priority, self.mqtt_counter, ('publish_vehicle_info', vehicle_data)))
            # logger.debug(f"状态已加入MQTT优先级队列: {status_type}, priority={priority}")
        except Exception as e:
            logger.error(f"加入MQTT发送队列失败: {e}")
    
    def handle_sync_reply(self, payload: dict):
        """处理MQTT收到的同步回复（获取动态端口）"""
        request_id = payload.get('request_id')
        if request_id and hasattr(self, 'sync_events') and request_id in self.sync_events:
            self.sync_events[request_id]['payload'] = payload
            self.sync_events[request_id]['event'].set()

    def _request_tcp_sync(self, sync_type: str, json_data_str: str, md5_val: str, map_id: str = None):
        """通过MQTT请求动态端口，并通过TCP建立连接发送数据"""
        import uuid
        import socket
        import struct

        if not hasattr(self, 'sync_events'):
            self.sync_events = {}

        request_id = str(uuid.uuid4())
        event = threading.Event()
        self.sync_events[request_id] = {'event': event, 'payload': None}

        # 1. 通过MQTT发送同步请求
        request_topic = f"/vehicle2cloud/{self.vehicle_id}/sync_request"
        request_payload = {
            "type": "sync_request",
            "sync_type": sync_type,
            "request_id": request_id,
            "md5": md5_val,
            "map_id": map_id
        }
        
        logger.info(f"[{sync_type} 同步] 正在请求云端分配端口...")
        self.mqtt_client.client.publish(request_topic, json.dumps(request_payload), qos=1)

        # 2. 等待云端MQTT回复
        if not event.wait(timeout=10.0):
            logger.error(f"[{sync_type} 同步] 请求分配端口超时")
            del self.sync_events[request_id]
            return False

        reply = self.sync_events[request_id]['payload']
        del self.sync_events[request_id]

        if reply.get('status') != 'accept':
            logger.info(f"[{sync_type} 同步] 云端拒绝或跳过同步: {reply.get('status')}")
            return True

        port = reply.get('port')
        if not port:
            logger.error(f"[{sync_type} 同步] 云端未返回有效端口")
            return False

        # 云端IP默认与MQTT Broker相同（如果在同一台服务器），或后续支持由云端下发host
        target_host = reply.get('host', self.mqtt_client.broker)
        
        # 3. 建立TCP连接并发送数据
        logger.info(f"[{sync_type} 同步] 正在连接云端TCP {target_host}:{port}...")
        try:
            client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            client_socket.settimeout(30.0)
            client_socket.connect((target_host, port))
            
            data_bytes = json_data_str.encode('utf-8')
            length_header = struct.pack('!I', len(data_bytes))
            
            client_socket.sendall(length_header + data_bytes)
            logger.info(f"[{sync_type} 同步] 数据发送完成 (大小: {len(data_bytes)} bytes)")
            client_socket.close()
            return True
            
        except Exception as e:
            logger.error(f"[{sync_type} 同步] TCP发送失败: {e}")
            return False

    def _handle_task_data_sync(self, tasks_data: List[Dict[str, Any]]):
        """处理任务列表同步到云端数据库"""
        try:
            # 只有开启了任务上传开关才执行
            if not self.config.get('enable_task_upload', False):
                return

            sync_fields = ['taskName', 'taskMode', 'mapName']
            simple_tasks = []
            for t in tasks_data:
                simple_t = {field: t.get(field) for field in sync_fields}
                simple_tasks.append(simple_t)
            
            simple_tasks.sort(key=lambda x: x.get('taskName', ''))
            tasks_json_md5 = json.dumps(simple_tasks, sort_keys=True, ensure_ascii=False)
            tasks_md5 = hashlib.md5(tasks_json_md5.encode('utf-8')).hexdigest()
            
            # 准备全量数据
            full_data_str = json.dumps({"tasks": tasks_data}, ensure_ascii=False)
            
            # 走新的 TCP 动态端口方案
            self._request_tcp_sync(sync_type='task', json_data_str=full_data_str, md5_val=tasks_md5)
                
        except Exception as e:
            logger.error(f"同步任务列表到云端时出错: {e}")

    def _handle_map_data_sync(self, status_type: str, status_data: Dict[str, Any]):
        """处理地图数据同步到云端HTTP接口"""
        # 优先从根部获取 map_name，如果不存在则从 data 中尝试
        map_name = status_data.get('map_name')
        data = status_data.get('data', {})
        if not map_name and isinstance(data, dict):
            map_name = data.get('map_name')
            
        if not map_name:
            return
            
        with self.map_sync_lock:
            if map_name not in self.map_sync_cache:
                self.map_sync_cache[map_name] = {}
            
            if status_type == 'map_pic':
                # 如果 data 直接是字符串，则直接使用
                if isinstance(data, str):
                    self.map_sync_cache[map_name]['pic'] = data
                elif isinstance(data, dict):
                    # 获取原图 (pic_l[1])
                    pics = data.get('pic', [])
                    if len(pics) >= 2:
                        self.map_sync_cache[map_name]['pic'] = pics[1]
                    elif len(pics) == 1:
                        self.map_sync_cache[map_name]['pic'] = pics[0]
            elif status_type == 'map_json':
                if isinstance(data, dict):
                    self.map_sync_cache[map_name]['json'] = data.get('json', data)
                else:
                    self.map_sync_cache[map_name]['json'] = data
            
            # 如果图片和JSON都到齐了，触发上传
            if 'pic' in self.map_sync_cache[map_name] and 'json' in self.map_sync_cache[map_name]:
                # 如果该地图已经在处理中，则跳过本次触发，避免线程堆积
                if map_name in self.uploading_maps:
                    return
                
                sync_data = self.map_sync_cache.pop(map_name)
                self.uploading_maps.add(map_name)
                
                # 启动线程异步上传，避免阻塞状态处理
                threading.Thread(
                    target=self._upload_single_map_to_cloud,
                    args=(map_name, sync_data['pic'], sync_data['json']),
                    daemon=True
                ).start()

    def _upload_single_map_to_cloud(self, map_id: str, pic_base64: str, json_data: Dict[str, Any]):
        """将单个地图数据上传到云端HTTP接口，带MD5校验"""
        if not REQUESTS_AVAILABLE:
            return
            
        try:
            import base64
            import hashlib
            
            # 在开始繁重的计算任务前，先补发一个心跳，防止计算期间心跳超期
            if hasattr(self, 'heartbeat_mqtt_client'):
                self.heartbeat_mqtt_client.publish_heartbeat(is_powered=True)
                logger.debug(f"[心跳护航] 在处理地图 {map_id} 计算前补发心跳")
            
            # 2. 调用云端 Check 接口 (串行化：计算 + 校验)
            try:
                with self.map_check_semaphore:
                    # 1. 检查本地 MD5 缓存，避免重复计算压垮 CPU
                    cache_key = hashlib.md5(pic_base64[:1000].encode()).hexdigest() + str(len(pic_base64))
                    cached_data = self.map_sync_cache.get(map_id)
                    
                    if cached_data and cached_data.get('raw_key') == cache_key:
                        png_md5 = cached_data['png_md5']
                        json_md5 = cached_data['json_md5']
                        logger.debug(f"[本地缓存命中] 地图 {map_id} 直接使用预计算 MD5")
                    else:
                        logger.debug(f"[准备计算] 正在处理地图数据: {map_id}")
                        
                        # 在高负载计算前，先给心跳线程腾出 10ms 的时间窗
                        time.sleep(0.01)
                        if hasattr(self, 'heartbeat_mqtt_client'):
                            self.heartbeat_mqtt_client.publish_heartbeat(is_powered=True)

                        import base64
                        img_bytes = base64.b64decode(pic_base64)
                        png_md5 = hashlib.md5(img_bytes).hexdigest()
                        
                        # 计算中间强行让出 CPU
                        time.sleep(0.01)
                        if hasattr(self, 'heartbeat_mqtt_client'):
                            self.heartbeat_mqtt_client.publish_heartbeat(is_powered=True)
                        
                        json_str = json.dumps(json_data, ensure_ascii=False)
                        json_bytes = json_str.encode('utf-8')
                        json_md5 = hashlib.md5(json_bytes).hexdigest()
                        
                        # 存入缓存
                        self.map_sync_cache[map_id] = {
                            'raw_key': cache_key,
                            'png_md5': png_md5,
                            'json_md5': json_md5
                        }

                    # 准备全量数据，统一打包为JSON发送
                    import base64
                    png_b64 = base64.b64encode(img_bytes).decode('utf-8')
                    full_data_str = json.dumps({
                        "mapId": map_id,
                        "pngMd5": png_md5,
                        "pngFile": png_b64,
                        "jsonFile": json_data
                    }, ensure_ascii=False)
                    
                    # 走新的 TCP 动态端口方案
                    success = self._request_tcp_sync(
                        sync_type='map',
                        json_data_str=full_data_str,
                        md5_val=png_md5,
                        map_id=map_id
                    )
                    
                    if success:
                        logger.info(f"地图 {map_id} 同步任务已结束")
                    else:
                        logger.error(f"地图 {map_id} 同步任务失败")
                        
            except Exception as e:
                logger.error(f"同步地图 {map_id} 到云端时出错: {e}")
        finally:
            # 无论成功、失败还是跳过，结束时必须移除锁
            if map_id in self.uploading_maps:
                self.uploading_maps.remove(map_id)

    def upload_maps(self):
        """(已废弃) 上传本地文件夹中的地图"""
        # 仅保留日志，不再实际执行
        logger.info("upload_maps 已被废弃，现在由 server.py 驱动上传")
    
    def start(self):
        """启动通信桥接"""
        logger.info("启动通信桥接程序...")
        self.running = True
        
        # 不再在启动时自动扫描本地 mapdir 上传
        # 改为由 server.py 通过 ROS2 传回数据后触发上传
        logger.info("已跳过启动地图自动上传（等待 server.py 推送）")
        
        # 启动MQTT客户端
        self.mqtt_client.connect()
        self.heartbeat_mqtt_client.connect()
        print(f">>> [MQTT] 正在连接 {self.mqtt_client.broker}...")
        
        # 启动指令处理线程
        self.command_processor_thread = threading.Thread(
            target=self.process_commands,
            daemon=True
        )
        self.command_processor_thread.start()
        
        # 启动MQTT异步发送工作线程
        if hasattr(self, 'mqtt_worker_thread'):
            self.mqtt_worker_thread.start()
            logger.info("MQTT异步发送工作线程已随程序启动")
        
        # 启动WebSocket服务器（在新的事件循环中）
        ws_config = self.config.get('websocket', {})
        if ws_config.get('enabled', True):  # 默认启用，但可以通过配置禁用
            print(f">>> [WebSocket] 正在启动 {ws_config.get('host', '0.0.0.0')}:{ws_config.get('port', 8765)}...")
            def run_ws_server():
                asyncio.set_event_loop(asyncio.new_event_loop())
                loop = asyncio.get_event_loop()
                loop.run_until_complete(self.ws_server.start())
            
            self.ws_server_thread = threading.Thread(
                target=run_ws_server,
                daemon=True
            )
            self.ws_server_thread.start()
        else:
            logger.info("WebSocket服务器已禁用（配置中enabled=False）")
            self.ws_server_thread = None
        
        # 启动心跳线程
        self.heartbeat_thread = threading.Thread(
            target=self._heartbeat_loop,
            daemon=True
        )
        self.heartbeat_thread.start()
        
        # 启动独立的 ROS2 spin 线程
        if self.ros2_publisher and self.ros2_publisher.initialized:
            self.ros2_thread = threading.Thread(target=self._ros2_spin_thread, daemon=True)
            self.ros2_thread.start()
            print(">>> [ROS2] Spin 线程已启动")
            logger.info("ROS2 spin 线程已启动")
        
        print(">>> [SYSTEM] 通信桥接程序启动完成")
        logger.info("通信桥接程序启动完成")
    
    def _ros2_spin_thread(self):
        """ROS2 spin线程 - 使用 MultiThreadedExecutor"""
        if self.debug_mode:
            print(">>> [DEBUG] ROS2 spin 线程正式启动", flush=True)
        logger.info("进入ROS2 spin线程循环")
        try:
            if self.ros2_publisher and self.ros2_publisher.node:
                node = self.ros2_publisher.node
                from rclpy.executors import MultiThreadedExecutor
                executor = MultiThreadedExecutor(num_threads=4)
                executor.add_node(node)
                
                # 增加一个内部定时器，用于在 spin 线程内打印状态
                self.ros2_publisher.node.create_timer(2.0, self.ros2_publisher.check_discovery_status)
                
                if self.debug_mode:
                    print(f">>> [DEBUG] MultiThreadedExecutor 已启动", flush=True)
                executor.spin()
        except Exception as e:
            logger.error(f"ROS2 spin线程异常: {e}")
            import traceback
            traceback.print_exc()
            
    def _heartbeat_loop(self):
        """心跳循环：每隔3秒发送一次心跳到云平台"""
        logger.info("心跳循环启动")
        while self.running:
            try:
                if self.mqtt_client:
                    # 检查过去 5 秒内是否收到过 ROS2 状态数据
                    is_powered = (time.time() - self.last_ros_status_time) < 5.0
                    # 直接使用心跳客户端发送，绕过优先级队列，确保绝对准时
                    if hasattr(self, 'heartbeat_mqtt_client') and self.heartbeat_mqtt_client.connected:
                        self.heartbeat_mqtt_client.publish_heartbeat(is_powered=is_powered)
                        if self.debug_settings.get("heartbeat", False):
                            logger.debug("心跳已直接通过独立客户端发送")
                    else:
                        # 降级方案：如果独立客户端未就绪，则推入队列
                        self.mqtt_counter += 1
                        self.mqtt_queue.put((0, self.mqtt_counter, ('publish_heartbeat', is_powered)))
                time.sleep(3.0)
            except Exception as e:
                logger.error(f"发送心跳循环异常: {e}")
                time.sleep(3.0)
    
    def stop(self):
        """停止通信桥接"""
        logger.info("停止通信桥接程序...")
        self.running = False
        
        # 停止MQTT客户端
        if self.mqtt_client:
            self.mqtt_client.disconnect()
        
        # 停止WebSocket服务器
        if self.ws_server:
            self.ws_server.stop()
            # 等待WebSocket线程结束
            if self.ws_server_thread and self.ws_server_thread.is_alive():
                self.ws_server_thread.join(timeout=2)
        
        # 停止ROS2
        if self.ros2_publisher:
            self.ros2_publisher.shutdown()
        
        logger.info("通信桥接程序已停止")
    
    def run(self):
        """运行主循环"""
        try:
            self.start()
            
            # 主循环
            # 主循环只需保持程序运行，ROS2 spin 已在后台线程中运行
            while self.running:
                time.sleep(1.0)
                
        except KeyboardInterrupt:
            logger.info("收到中断信号，正在停止...")
        finally:
            self.stop()


def load_config(config_file: str = "config.json") -> Dict[str, Any]:
    """加载配置文件"""
    try:
        with open(config_file, 'r', encoding='utf-8') as f:
            return json.load(f)
    except FileNotFoundError:
        logger.warning(f"配置文件不存在: {config_file}，使用默认配置")
        return get_default_config()
    except Exception as e:
        logger.error(f"加载配置失败: {e}，使用默认配置")
        return get_default_config()


def get_default_config() -> Dict[str, Any]:
    """获取默认配置"""
    return {
        "vehicle_id": "V10000005",
        "mqtt": {
            "broker": "localhost",
            "port": 1883,
            "username": 'lx',
            "password": 'lxtest'
        },
        "websocket": {
            "host": "0.0.0.0",
            "port": 8765
        },
        "command_mapping_file": "command_mapping.json",
        "debug_mode": 0
    }


def main():
    """主函数"""
    import argparse
    
    parser = argparse.ArgumentParser(description='车端通信桥接程序B')
    parser.add_argument('--config', type=str, default='config.json',
                       help='配置文件路径')
    parser.add_argument('--vehicle-id', type=str, default=None,
                       help='车辆ID')
    
    args = parser.parse_args()
    
    # 加载配置
    config = load_config(args.config)
    
    # 如果命令行指定了vehicle_id，覆盖配置
    if args.vehicle_id:
        config['vehicle_id'] = args.vehicle_id
    
    # 创建并运行通信桥接
    print("\n" + "="*60)
    print(">>> [SYSTEM] 通信桥接程序 B 正在启动...")
    print(f">>> [SYSTEM] 配置文件: {args.config}")
    print(f">>> [SYSTEM] 车辆 ID: {config.get('vehicle_id')}")
    print("="*60 + "\n")
    
    try:
        bridge = CommunicationBridge(config)
        bridge.run()
    except Exception as e:
        print(f"\n!!! [FATAL ERROR] 程序崩溃: {e}")
        import traceback
        traceback.print_exc()
        input("按回车键退出...")


if __name__ == '__main__':
    main()


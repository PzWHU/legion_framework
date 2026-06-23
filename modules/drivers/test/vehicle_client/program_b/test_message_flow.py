#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
端到端消息流测试
测试整个系统的消息流：前端 → 后端 → MQTT → 车端网关 → ROS2 → 车端网关 → MQTT → 后端

消息流路径：
1. 前端发送控制指令 → 后端API
2. 后端API → MQTT Broker
3. MQTT Broker → 车端网关 (communication_bridge.py)
4. 车端网关 → ROS2 (发布到 /vehicle/command)
5. 车端程序 → ROS2 (发布状态到 /vehicle/status)
6. 车端网关 ← ROS2 (订阅 /vehicle/status)
7. 车端网关 → MQTT Broker (发布状态到 /vehicle2cloud/{vehicle_id}/vehicleinfo)
8. 后端 ← MQTT Broker (订阅状态)

使用方法：
    python3 test_message_flow.py

注意：运行此测试需要：
1. MQTT Broker正在运行
2. ROS2环境已配置
3. 后端服务正在运行（可选，用于完整测试）
"""

import sys
import os
import json
import time
import threading
import traceback
import uuid
from queue import Queue
from datetime import datetime
from typing import Dict, Any, Optional

# 添加当前目录到路径
current_dir = os.path.dirname(os.path.abspath(__file__))
if current_dir not in sys.path:
    sys.path.insert(0, current_dir)

# 尝试导入ROS2
try:
    import rclpy
    from rclpy.node import Node
    from std_msgs.msg import String as ROS2String
    ROS2_AVAILABLE = True
except ImportError:
    ROS2_AVAILABLE = False
    print("⚠️  ROS2未安装，将跳过ROS2相关测试")

# 尝试导入MQTT
try:
    import paho.mqtt.client as mqtt
    MQTT_AVAILABLE = True
except ImportError:
    MQTT_AVAILABLE = False
    print("⚠️  paho-mqtt未安装，将跳过MQTT相关测试")

# 导入车端网关模块
try:
    from communication_bridge import (
        CommunicationBridge,
        CommandSource,
        Command,
        CommandMapper,
        ROS2Publisher,
        MQTTClient
    )
    print("✓ 车端网关模块导入成功")
except ImportError as e:
    print(f"✗ 车端网关模块导入失败: {e}")
    traceback.print_exc()
    sys.exit(1)

# 测试配置
TEST_CONFIG = {
    'vehicle_id': 'V10000005',
    'mqtt': {
        'broker': 'localhost',
        'port': 1883,
        'username': 'lx',
        'password': 'lxtest'
    },
    'websocket': {
        'enabled': False,  # 测试时禁用WebSocket服务器，避免端口冲突
        'host': '0.0.0.0',
        'port': 8765
    },
    'command_mapping_file': 'command_mapping.json'
}


class MessageFlowTracker:
    """消息流跟踪器，用于记录消息在各个阶段的流转"""
    
    def __init__(self):
        self.messages = {
            'api_sent': [],           # 前端发送到后端的消息
            'mqtt_published': [],     # 后端发布到MQTT的消息
            'gateway_received': [],   # 车端网关接收到的MQTT消息
            'ros2_published': [],     # 车端网关发布到ROS2的消息
            'ros2_status_received': [], # 车端网关接收到的ROS2状态
            'mqtt_status_published': [], # 车端网关发布到MQTT的状态
        }
        self.lock = threading.Lock()
    
    def record(self, stage: str, message: Dict[str, Any]):
        """记录消息"""
        with self.lock:
            if stage in self.messages:
                self.messages[stage].append({
                    'timestamp': datetime.now().isoformat(),
                    'message': message
                })
    
    def get_summary(self) -> Dict[str, int]:
        """获取消息流摘要"""
        return {stage: len(msgs) for stage, msgs in self.messages.items()}


class MockROSPublisher(Node):
    """模拟车端程序，发布状态到ROS2"""
    
    def __init__(self, tracker: MessageFlowTracker):
        super().__init__('mock_vehicle_program')
        self.publisher = self.create_publisher(ROS2String, '/vehicle/status', 10)
        self.tracker = tracker
        self.get_logger().info('模拟车端程序已启动')
    
    def publish_status(self, status_data: Dict[str, Any]):
        """发布车辆状态"""
        msg = ROS2String()
        msg.data = json.dumps(status_data, ensure_ascii=False)
        self.publisher.publish(msg)
        self.tracker.record('ros2_status_received', status_data)
        self.get_logger().info(f'发布状态: {status_data.get("type", "unknown")}')


class MockROSSubscriber(Node):
    """模拟车端程序，订阅ROS2指令"""
    
    def __init__(self, tracker: MessageFlowTracker):
        super().__init__('mock_vehicle_subscriber')
        self.subscription = self.create_subscription(
            ROS2String,
            '/vehicle/command',
            self.command_callback,
            10
        )
        self.received_commands = []
        self.tracker = tracker
        self.get_logger().info('模拟车端程序指令订阅者已启动')
    
    def command_callback(self, msg):
        """接收指令"""
        try:
            command_data = json.loads(msg.data)
            self.received_commands.append(command_data)
            self.tracker.record('ros2_published', command_data)
            code = command_data.get('code', 'N/A')
            cmd_type = command_data.get('value', {}).get('command_type', 'unknown')
            self.get_logger().info(f'收到指令: code={code}, type={cmd_type}')
        except Exception as e:
            self.get_logger().error(f'指令解析失败: {e}')


class MockMQTTSubscriber:
    """模拟后端，订阅MQTT状态消息"""
    
    def __init__(self, broker: str, port: int, vehicle_id: str, tracker: MessageFlowTracker):
        self.broker = broker
        self.port = port
        self.vehicle_id = vehicle_id
        self.tracker = tracker
        # 使用唯一的client_id，避免冲突
        unique_client_id = f"test_subscriber_{vehicle_id}_{int(time.time())}_{uuid.uuid4().hex[:8]}"
        self.client = mqtt.Client(client_id=unique_client_id, clean_session=True, protocol=mqtt.MQTTv311)
        self.client.on_connect = self._on_connect
        self.client.on_message = self._on_message
        self.connected = False
        self.received_messages = []
        self.connect_event = threading.Event()
    
    def _on_connect(self, client, userdata, flags, rc):
        if rc == 0:
            self.connected = True
            topic = f"/vehicle2cloud/{self.vehicle_id}/vehicleinfo"
            client.subscribe(topic, qos=1)
            print(f"  [OK] 订阅MQTT状态: {topic}")
            self.connect_event.set()
        else:
            error_msgs = {
                5: "MQTT_ERR_CONN_REFUSED - 连接被拒绝（可能是客户端ID冲突或Broker限制）",
            }
            error_msg = error_msgs.get(rc, f"未知错误码 {rc}")
            print(f"  [FAIL] MQTT连接失败，返回码: {rc} ({error_msg})")
            self.connect_event.set()  # 即使失败也设置事件，避免无限等待
    
    def _on_message(self, client, userdata, msg):
        try:
            payload = json.loads(msg.payload.decode('utf-8'))
            self.received_messages.append(payload)
            self.tracker.record('mqtt_status_published', payload)
            print(f"  ← 收到MQTT状态: {msg.topic}")
        except Exception as e:
            print(f"  [FAIL] MQTT消息解析失败: {e}")
    
    def connect(self):
        """连接MQTT"""
        try:
            print(f"  尝试连接MQTT订阅者到 {self.broker}:{self.port}")
            self.client.connect(self.broker, self.port, keepalive=60)
            self.client.loop_start()
            # 等待连接建立（最多5秒）
            if self.connect_event.wait(timeout=5):
                return self.connected
            else:
                print("  [FAIL] MQTT连接超时")
                return False
        except Exception as e:
            print(f"  [FAIL] MQTT连接异常: {e}")
            return False
    
    def disconnect(self):
        """断开MQTT连接"""
        if self.connected:
            self.client.loop_stop()
            self.client.disconnect()


def test_command_flow_mqtt_to_ros2():
    """测试指令流：MQTT → 车端网关 → ROS2"""
    print("\n" + "="*60)
    print("测试1: 指令流 (MQTT → 车端网关 → ROS2)")
    print("="*60)
    
    if not MQTT_AVAILABLE:
        print("⚠️  跳过测试（MQTT不可用）")
        return False
    
    if not ROS2_AVAILABLE:
        print("⚠️  跳过测试（ROS2不可用）")
        return False
    
    tracker = MessageFlowTracker()
    
    try:
        # 初始化ROS2
        try:
            rclpy.init()
        except RuntimeError as e:
            if "already initialized" not in str(e).lower():
                raise
        
        # 创建executor
        executor = rclpy.executors.SingleThreadedExecutor()
        
        # 创建模拟车端程序（订阅指令）
        mock_subscriber = MockROSSubscriber(tracker)
        executor.add_node(mock_subscriber)
        
        # 创建车端网关
        bridge = CommunicationBridge(TEST_CONFIG)
        bridge.start()
        
        # 等待初始化，确保MQTT连接建立
        time.sleep(3)
        
        # 检查bridge的MQTT连接状态
        if not bridge.mqtt_client.connected:
            print("  [FAIL] communication_bridge的MQTT未连接")
            bridge.stop()
            executor.remove_node(mock_subscriber)
            mock_subscriber.destroy_node()
            executor.shutdown()
            rclpy.shutdown()
            return False
        
        print("  [OK] 使用communication_bridge的MQTT连接发送测试消息")
        
        # 发送测试指令
        test_commands = [
            {
                'type': 'control',
                'command_type': 'auto_drive_start',
                'params': {},
                'requestId': f'test_{int(time.time())}_1'
            },
            {
                'type': 'control',
                'command_type': 'clean_start',
                'params': {},
                'requestId': f'test_{int(time.time())}_2'
            },
            {
                'type': 'control',
                'command_type': 'set_speed',
                'params': {'speed': 5},
                'requestId': f'test_{int(time.time())}_3'
            },
        ]
        
        print("\n发送MQTT指令...")
        for cmd in test_commands:
            topic = f"/cloud2vehicle/{TEST_CONFIG['vehicle_id']}/cmd"
            payload = json.dumps(cmd, ensure_ascii=False)
            
            # 直接使用bridge的MQTT客户端发送消息
            try:
                result = bridge.mqtt_client.client.publish(topic, payload, qos=1)
                if result.rc == mqtt.MQTT_ERR_SUCCESS:
                    tracker.record('mqtt_published', cmd)
                    print(f"  [OK] 发布到 {topic}: {cmd['command_type']}")
                else:
                    error_msgs = {
                        1: "MQTT_ERR_AGAIN - 重试",
                        2: "MQTT_ERR_PROTOCOL - 协议错误",
                        3: "MQTT_ERR_INVAL - 参数无效",
                        4: "MQTT_ERR_NO_CONN - 未连接",
                        5: "MQTT_ERR_CONN_REFUSED - 连接被拒绝",
                    }
                    error_msg = error_msgs.get(result.rc, f"未知错误码 {result.rc}")
                    print(f"  [FAIL] 发布失败: {cmd['command_type']}, rc={result.rc} ({error_msg})")
            except Exception as e:
                print(f"  [FAIL] 发布异常: {cmd['command_type']}, {e}")
            time.sleep(0.5)
        
        # 等待消息发送和处理完成
        time.sleep(2)
        
        # 处理消息
        print("\n处理消息...")
        for _ in range(30):
            executor.spin_once(timeout_sec=0.1)
            bridge.ros2_publisher.spin_once()
            if len(mock_subscriber.received_commands) >= len(test_commands):
                break
            time.sleep(0.1)
        
        # 验证结果
        print(f"\n收到 {len(mock_subscriber.received_commands)} 条ROS2指令")
        if len(mock_subscriber.received_commands) == len(test_commands):
            print("✓ 所有指令都已流转到ROS2")
            result = True
        else:
            print(f"✗ 只收到 {len(mock_subscriber.received_commands)}/{len(test_commands)} 条指令")
            result = False
        
        # 清理
        bridge.stop()
        time.sleep(1)  # 等待资源释放
        executor.remove_node(mock_subscriber)
        mock_subscriber.destroy_node()
        executor.shutdown()
        rclpy.shutdown()
        
        return result
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        try:
            rclpy.shutdown()
        except:
            pass
        return False


def test_status_flow_ros2_to_mqtt():
    """测试状态流：ROS2 → 车端网关 → MQTT"""
    print("\n" + "="*60)
    print("测试2: 状态流 (ROS2 → 车端网关 → MQTT)")
    print("="*60)
    
    if not MQTT_AVAILABLE:
        print("⚠️  跳过测试（MQTT不可用）")
        return False
    
    if not ROS2_AVAILABLE:
        print("⚠️  跳过测试（ROS2不可用）")
        return False
    
    # 等待之前的测试完全清理（避免端口占用）
    print("  [INFO] 等待资源清理...")
    time.sleep(2)
    
    tracker = MessageFlowTracker()
    
    try:
        # 初始化ROS2
        try:
            rclpy.init()
        except RuntimeError as e:
            if "already initialized" not in str(e).lower():
                raise
        
        # 创建executor
        executor = rclpy.executors.SingleThreadedExecutor()
        
        # 创建车端网关
        bridge = CommunicationBridge(TEST_CONFIG)
        bridge.start()
        
        # 等待初始化，确保MQTT连接建立
        time.sleep(3)
        
        # 检查bridge的MQTT连接状态
        if not bridge.mqtt_client.connected:
            print("  [FAIL] communication_bridge的MQTT未连接")
            bridge.stop()
            executor.remove_node(mock_publisher)
            mock_publisher.destroy_node()
            executor.shutdown()
            rclpy.shutdown()
            return False
        
        # 使用bridge的MQTT客户端订阅状态消息
        received_status_messages = []
        
        def on_status_message(client, userdata, msg):
            """状态消息回调"""
            try:
                payload = json.loads(msg.payload.decode('utf-8'))
                received_status_messages.append(payload)
                tracker.record('mqtt_status_published', payload)
                print(f"  ← 收到MQTT状态: {msg.topic}")
            except Exception as e:
                print(f"  [FAIL] MQTT消息解析失败: {e}")
        
        # 添加状态topic订阅
        status_topic = f"/vehicle2cloud/{TEST_CONFIG['vehicle_id']}/vehicleinfo"
        bridge.mqtt_client.client.message_callback_add(status_topic, on_status_message)
        bridge.mqtt_client.client.subscribe(status_topic, qos=1)
        print(f"  [OK] 使用communication_bridge的MQTT连接订阅状态: {status_topic}")
        
        # 创建模拟车端程序（发布状态）
        mock_publisher = MockROSPublisher(tracker)
        executor.add_node(mock_publisher)
        
        # 发布测试状态
        print("\n发布ROS2状态...")
        test_status = {
            "type": "vehicle",
            "data": {
                "cur_x": 100.5,
                "cur_y": 200.3,
                "rtk_flag": 1,
                "battery": 85.5,
                "v": 2.5,
                "driving_mode": 1,
                "clean_mode": 1,
                "water_mode": 0
            },
            "timestamp": datetime.now().isoformat()
        }
        
        mock_publisher.publish_status(test_status)
        tracker.record('ros2_status_received', test_status)
        
        # 处理消息
        print("\n处理消息...")
        for _ in range(30):
            executor.spin_once(timeout_sec=0.1)
            bridge.ros2_publisher.spin_once()
            if len(received_status_messages) > 0:
                break
            time.sleep(0.1)
        
        # 验证结果
        print(f"\n收到 {len(received_status_messages)} 条MQTT状态")
        if len(received_status_messages) > 0:
            print("  [OK] 状态已流转到MQTT")
            result = True
        else:
            print("  [FAIL] 未收到MQTT状态")
            result = False
        
        # 清理
        bridge.stop()
        time.sleep(1)  # 等待资源释放
        executor.remove_node(mock_publisher)
        mock_publisher.destroy_node()
        executor.shutdown()
        rclpy.shutdown()
        
        return result
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        try:
            rclpy.shutdown()
        except:
            pass
        return False


def test_command_mapping():
    """测试指令映射"""
    print("\n" + "="*60)
    print("测试3: 指令映射")
    print("="*60)
    
    try:
        mapper = CommandMapper(TEST_CONFIG['command_mapping_file'])
        
        test_cases = [
            ('auto_drive_start', 41),
            ('auto_drive_stop', 40),
            ('clean_start', 11),
            ('clean_stop', 10),
            ('water_start', 21),
            ('water_stop', 20),
            ('call_back', 5001),
            ('set_speed', 1007),
            ('light1_on', 2101),
            ('light1_off', 2102),
            ('light2_on', 2103),
            ('light2_off', 2104),
            ('movement_forward', 1003),
            ('movement_left', 1005),
            ('movement_right', 1006),
        ]
        
        print("\n测试指令映射...")
        all_passed = True
        for command_type, expected_code in test_cases:
            code = mapper.get_code(command_type)
            if code == expected_code:
                print(f"  ✓ {command_type} -> {code}")
            else:
                print(f"  ✗ {command_type} -> {code} (期望: {expected_code})")
                all_passed = False
        
        return all_passed
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        return False


def test_command_parsing():
    """测试指令解析（movement和light指令的特殊处理）"""
    print("\n" + "="*60)
    print("测试4: 指令解析")
    print("="*60)
    
    try:
        from communication_bridge import MQTTClient
        
        # 测试movement指令解析
        test_cases = [
            {
                'name': 'movement指令（forward）',
                'payload': {
                    'type': 'movement',
                    'direction': 'forward',
                    'params': {}
                },
                'expected': 'movement_forward'
            },
            {
                'name': 'movement指令（left）',
                'payload': {
                    'type': 'movement',
                    'direction': 'left',
                    'params': {}
                },
                'expected': 'movement_left'
            },
            {
                'name': 'control指令（light）',
                'payload': {
                    'type': 'control',
                    'command_type': 'light',
                    'params': {
                        'lightId': 'light1',
                        'state': 'on'
                    }
                },
                'expected': 'light1_on'
            },
            {
                'name': 'control指令（auto_drive_start）',
                'payload': {
                    'type': 'control',
                    'command_type': 'auto_drive_start',
                    'params': {}
                },
                'expected': 'auto_drive_start'
            },
        ]
        
        print("\n测试指令解析...")
        all_passed = True
        
        for test_case in test_cases:
            payload = test_case['payload']
            expected = test_case['expected']
            
            # 模拟解析逻辑
            msg_type = payload.get('type', '')
            command_data = payload.get('params', payload.get('data', {}))
            
            if msg_type == 'movement':
                direction = payload.get('direction', '')
                if direction:
                    command_type = f"movement_{direction}"
                else:
                    command_type = 'movement'
            elif msg_type == 'control':
                cmd_type = payload.get('command_type', 'unknown')
                if cmd_type == 'light':
                    light_id = command_data.get('lightId', '')
                    light_state = command_data.get('state', '')
                    if light_id and light_state:
                        command_type = f"{light_id}_{light_state}"
                    else:
                        command_type = 'light'
                else:
                    command_type = cmd_type
            else:
                command_type = payload.get('type', payload.get('command_type', 'unknown'))
            
            if command_type == expected:
                print(f"  ✓ {test_case['name']}: {command_type}")
            else:
                print(f"  ✗ {test_case['name']}: {command_type} (期望: {expected})")
                all_passed = False
        
        return all_passed
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        return False


def test_message_deduplication():
    """测试消息去重功能"""
    print("\n" + "="*60)
    print("测试5: 消息去重")
    print("="*60)
    
    try:
        from communication_bridge import MQTTClient, PriorityQueue
        
        command_queue = PriorityQueue()
        mqtt_client = MQTTClient(
            broker=TEST_CONFIG['mqtt']['broker'],
            port=TEST_CONFIG['mqtt']['port'],
            vehicle_id=TEST_CONFIG['vehicle_id'],
            command_queue=command_queue
        )
        
        # 模拟接收重复消息
        test_payload = {
            'type': 'control',
            'command_type': 'auto_drive_start',
            'params': {},
            'requestId': 'test_duplicate_12345',
            'timestamp': datetime.now().isoformat()
        }
        
        # 第一次处理
        print("\n第一次处理消息...")
        processed_count_1 = len(command_queue.queue)
        mqtt_client._on_message(None, None, type('msg', (), {
            'topic': f"/cloud2vehicle/{TEST_CONFIG['vehicle_id']}/cmd",
            'payload': json.dumps(test_payload).encode('utf-8')
        })())
        time.sleep(0.1)
        processed_count_2 = len(command_queue.queue)
        
        # 第二次处理（重复消息）
        print("第二次处理相同消息（应该被去重）...")
        mqtt_client._on_message(None, None, type('msg', (), {
            'topic': f"/cloud2vehicle/{TEST_CONFIG['vehicle_id']}/cmd",
            'payload': json.dumps(test_payload).encode('utf-8')
        })())
        time.sleep(0.1)
        processed_count_3 = len(command_queue.queue)
        
        # 验证结果
        if processed_count_2 > processed_count_1 and processed_count_3 == processed_count_2:
            print("✓ 消息去重功能正常")
            return True
        else:
            print(f"✗ 消息去重异常: 第一次={processed_count_1}, 第二次={processed_count_2}, 第三次={processed_count_3}")
            return False
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        return False


def main():
    """主测试函数"""
    print("="*60)
    print("端到端消息流测试")
    print("="*60)
    
    results = []
    
    # 运行所有测试
    results.append(("指令映射", test_command_mapping()))
    results.append(("指令解析", test_command_parsing()))
    results.append(("消息去重", test_message_deduplication()))
    
    if MQTT_AVAILABLE and ROS2_AVAILABLE:
        results.append(("指令流 (MQTT→ROS2)", test_command_flow_mqtt_to_ros2()))
        results.append(("状态流 (ROS2→MQTT)", test_status_flow_ros2_to_mqtt()))
    else:
        print("\n⚠️  跳过MQTT/ROS2相关测试（依赖不可用）")
    
    # 输出测试结果
    print("\n" + "="*60)
    print("测试结果汇总")
    print("="*60)
    
    passed = 0
    failed = 0
    
    for test_name, result in results:
        status = "✓ 通过" if result else "✗ 失败"
        print(f"{test_name}: {status}")
        if result:
            passed += 1
        else:
            failed += 1
    
    print(f"\n总计: {passed} 通过, {failed} 失败")
    
    if failed == 0:
        print("\n🎉 所有测试通过！")
        return 0
    else:
        print(f"\n⚠️  有 {failed} 个测试失败，请检查")
        return 1


if __name__ == '__main__':
    try:
        exit_code = main()
        sys.exit(exit_code)
    except KeyboardInterrupt:
        print("\n\n测试被用户中断")
        sys.exit(1)
    except Exception as e:
        print(f"\n\n测试过程中发生异常: {e}")
        traceback.print_exc()
        sys.exit(1)

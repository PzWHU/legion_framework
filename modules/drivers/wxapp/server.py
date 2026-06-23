import asyncio
import websockets
from websockets.exceptions import ConnectionClosedOK, ConnectionClosedError
import time
import math
import signal
import sys
import os
import json
import traceback
import subprocess
import base64
import datetime
import _thread
#from pprint import pprint

# ROS版本兼容层
ros_version = None  # 将在加载配置后设置
ros_node = None  # ROS节点对象
ROS2Wrapper = None  # ROS2包装类

# ROS2包装类定义
def create_ros2_wrapper():
	global ROS2Wrapper
	try:
		import rclpy
		from rclpy.node import Node
		from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy
		
		class ROS2WrapperClass(Node):
			def __init__(self, node_name):
				super().__init__(node_name)
				self._publishers = {}
				self._subscribers = {}

			# ============================================
			# QoS 配置函数 - 与 C++ macros.h 保持一致
			# ============================================

			def _get_qos_periodic_status(self, depth=10):
				"""周期性状态消息（Chassis, Location, Vehicle等）- 高频率"""
				return QoSProfile(
					reliability=ReliabilityPolicy.RELIABLE,
					durability=DurabilityPolicy.VOLATILE,
					depth=depth
				)

			def _get_qos_critical_cmd(self, depth=10):
				"""关键控制指令（ControlCommand, PlanningCmd等）- 必须可靠"""
				return QoSProfile(
					reliability=ReliabilityPolicy.RELIABLE,
					durability=DurabilityPolicy.VOLATILE,
					depth=depth
				)

			def _get_qos_trigger(self, depth=5):
				"""触发/一次性消息（RoutingResponse, Events等）- 需要transient_local"""
				return QoSProfile(
					reliability=ReliabilityPolicy.RELIABLE,
					durability=DurabilityPolicy.TRANSIENT_LOCAL,
					depth=depth
				)

			def _get_qos_diagnostic(self, depth=10):
				"""诊断/调试消息（Faults, Events等）- 需要buffer支持录包"""
				return QoSProfile(
					reliability=ReliabilityPolicy.RELIABLE,
					durability=DurabilityPolicy.VOLATILE,
					depth=depth
				)

			def _get_qos_navigation(self, depth=5):
				"""导航信息消息（GuideInfo, NaviInfoMsg等）- 中等频率"""
				return QoSProfile(
					reliability=ReliabilityPolicy.RELIABLE,
					durability=DurabilityPolicy.VOLATILE,
					depth=depth
				)

			def _get_qos_large_data(self, depth=5):
				"""大数据量消息（ADCTrajectory等）- 允许适度丢帧"""
				return QoSProfile(
					reliability=ReliabilityPolicy.RELIABLE,
					durability=DurabilityPolicy.VOLATILE,
					depth=depth
				)

			def _get_qos_perception(self, depth=10):
				"""感知消息（TrafficLightMsg等）- 高频率"""
				return QoSProfile(
					reliability=ReliabilityPolicy.RELIABLE,
					durability=DurabilityPolicy.VOLATILE,
					depth=depth
				)

			def create_publisher_wrapper(self, msg_type, topic, qos_profile):
				"""创建标准 publisher"""
				if not isinstance(msg_type, type):
					raise TypeError(f"消息类型必须是类，但得到: {type(msg_type)}")
				pub = self.create_publisher(msg_type, topic, qos_profile)
				self._publishers[topic] = pub
				return pub

			def create_subscription_wrapper(self, msg_type, topic, callback, qos_profile):
				"""创建订阅"""
				if not isinstance(msg_type, type):
					raise TypeError(f"消息类型必须是类，但得到: {type(msg_type)}")
				debug_print(f"创建订阅 - Topic: {topic}")
				sub = self.create_subscription(msg_type, topic, callback, qos_profile)
				self._subscribers[topic] = sub
				debug_print(f"订阅成功创建 - Topic: {topic}")
				return sub

			def is_shutdown(self):
				import rclpy
				return not rclpy.ok()
		
		ROS2Wrapper = ROS2WrapperClass
		return True
	except ImportError:
		return False

# 根据配置加载ROS1或ROS2
def init_ros(ros_ver='ros1'):
	global ros_version
	
	ros_version = ros_ver.lower()
	
	if ros_version == 'ros2':
		try:
			import rclpy
			from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy
			
			# 清理可能已导入的 ROS1 消息模块
			modules_to_remove = []
			for module_name in list(sys.modules.keys()):
				if module_name.startswith('geometry_msgs') or module_name.startswith('std_msgs') or module_name.startswith('ros_interface'):
					modules_to_remove.append(module_name)
			for module_name in modules_to_remove:
				del sys.modules[module_name]
				debug_print(f"已清理模块: {module_name}")
			
			# 临时移除可能存在的 ROS1 路径，确保导入 ROS2 标准消息
			ros1_paths_to_remove = []
			script_dir = os.path.dirname(os.path.abspath(__file__))
			message_ros1_base = os.path.join(script_dir, '../../message/ros/devel/lib')
			message_ros1_base = os.path.normpath(message_ros1_base)
			
			# 查找并临时移除 ROS1 路径
			# 需要更彻底地移除所有可能包含 ROS1 消息的路径
			for path in sys.path[:]:
				# 检查是否是 ROS1 相关路径
				if (message_ros1_base in path or 
					'ros/devel' in path or 
					'ros_interface' in path or
					'/opt/ros/noetic' in path or  # ROS1 Noetic 系统路径
					'/opt/ros/melodic' in path or  # ROS1 Melodic 系统路径
					'/opt/ros/kinetic' in path):  # ROS1 Kinetic 系统路径
					ros1_paths_to_remove.append(path)
					sys.path.remove(path)
					debug_print(f"已移除 ROS1 路径: {path}")
			
			# 打印当前 sys.path 以便调试
			debug_print(f"当前 sys.path 前10个路径:")
			for i, path in enumerate(sys.path[:10]):
				debug_print(f"  [{i}] {path}")
			
			# 首先导入标准 ROS2 消息（从系统安装的 ROS2 包）
			# 这些应该从 ROS2 系统路径导入，而不是本地路径
			try:
				# 使用 importlib 强制重新导入，确保获取的是 ROS2 版本
				import importlib
				
				# 更彻底地清理所有 geometry_msgs 和 std_msgs 相关的模块
				modules_to_clear_again = []
				for mod_name in list(sys.modules.keys()):
					if mod_name.startswith('geometry_msgs') or mod_name.startswith('std_msgs'):
						modules_to_clear_again.append(mod_name)
				for mod_name in modules_to_clear_again:
					del sys.modules[mod_name]
					debug_print(f"再次清理模块: {mod_name}")
				
				# 直接导入 ROS2 消息类型类
				from geometry_msgs.msg import PoseWithCovarianceStamped as ROS2_PoseWithCovarianceStamped
				from std_msgs.msg import Header as ROS2_Header
				
				# 验证导入的是 ROS2 消息类型类
				if not isinstance(ROS2_PoseWithCovarianceStamped, type):
					raise ImportError(f"PoseWithCovarianceStamped 不是类型，而是: {type(ROS2_PoseWithCovarianceStamped)}")
				
				# 检查是否是 ROS2 消息类型（ROS2 消息类型通常在 geometry_msgs.msg 模块中）
				msg_module = getattr(ROS2_PoseWithCovarianceStamped, '__module__', '')
				if 'geometry_msgs' not in msg_module:
					raise ImportError(f"导入的消息类型模块不正确: {msg_module}")
				
				# 检查模块路径，ROS1 的路径通常包含 ._MessageName，ROS2 的路径是 geometry_msgs.msg
				if '._PoseWithCovarianceStamped' in msg_module:
					# 这是 ROS1 的路径结构，需要抛出错误
					raise ImportError(f"检测到 ROS1 消息类型路径: {msg_module}。请确保：\n"
					                  f"1. 已正确 source ROS2 环境（source /opt/ros/foxy/setup.bash）\n"
					                  f"2. ROS1 路径已从 sys.path 中移除\n"
					                  f"3. 当前 Python 环境使用的是 ROS2 的 geometry_msgs")
				
				# 验证 ROS2 消息类型的关键属性
				# ROS2 消息类型应该有 _TYPE_SUPPORT 属性在元类上
				msg_class = ROS2_PoseWithCovarianceStamped
				msg_metaclass = type(msg_class)
				debug_print(f"ROS2 PoseWithCovarianceStamped 类: {msg_class}")
				debug_print(f"ROS2 PoseWithCovarianceStamped 元类: {msg_metaclass}")
				debug_print(f"ROS2 PoseWithCovarianceStamped 模块: {msg_module}")
				
				# 检查元类是否有 _TYPE_SUPPORT 属性（ROS2 消息类型的特征）
				if hasattr(msg_metaclass, '_TYPE_SUPPORT'):
					debug_print(f"ROS2 PoseWithCovarianceStamped 元类有 _TYPE_SUPPORT 属性")
				else:
					# 如果元类没有 _TYPE_SUPPORT，可能是 ROS1 消息类型
					debug_print(f"警告: ROS2 PoseWithCovarianceStamped 元类没有 _TYPE_SUPPORT 属性")
					# 尝试通过 rclpy 验证
					try:
						import rclpy.type_support
						rclpy.type_support.check_for_type_support(ROS2_PoseWithCovarianceStamped)
						debug_print(f"ROS2 PoseWithCovarianceStamped 通过 rclpy 验证成功")
					except Exception as e:
						debug_print(f"ROS2 PoseWithCovarianceStamped rclpy 验证失败: {e}")
						# 如果验证失败，尝试从 ROS2 系统路径重新导入
						raise ImportError(f"导入的消息类型不是有效的 ROS2 消息类型: {e}")
				
			except ImportError as e:
				raise ImportError(f"导入 ROS2 标准消息失败: {e}，请确保已正确安装 ROS2 并 source 了 ROS2 环境")
			
			# 添加 ROS2 自定义消息路径到 sys.path（仅用于 ros2_interface）
			message_ros2_base = os.path.join(script_dir, '../../message/ros2/install/ros2_interface/lib')
			message_ros2_base = os.path.normpath(message_ros2_base)
			
			# 查找 Python 版本对应的路径
			python_version = f"python{sys.version_info.major}.{sys.version_info.minor}"
			
			# 按优先级尝试不同的路径
			possible_paths = [
				os.path.join(message_ros2_base, python_version, 'site-packages'),
				os.path.join(message_ros2_base, 'python3.10', 'site-packages'),
				os.path.join(message_ros2_base, 'python3.8', 'site-packages'),
				os.path.join(message_ros2_base, 'python3', 'site-packages')
			]
			
			ros2_path_found = False
			for possible_path in possible_paths:
				if os.path.exists(possible_path):
					# 只在路径不存在时才添加，避免重复
					if possible_path not in sys.path:
						sys.path.insert(0, possible_path)
					debug_print(f"ROS2 自定义消息路径已添加: {possible_path}")
					ros2_path_found = True
					break
			
			if not ros2_path_found:
				debug_print(f"警告: 未找到 ROS2 自定义消息路径，尝试的路径: {possible_paths}")
			
			# ROS2 自定义消息类型导入 - 使用 ros2_interface 包名
			from ros2_interface.msg import Event as ROS2_Event
			from ros2_interface.msg import Events as ROS2_Events
			from ros2_interface.msg import Location as ROS2_Location
			from ros2_interface.msg import Chassis as ROS2_Chassis
			from ros2_interface.msg import Vehicle as ROS2_Vehicle
			from ros2_interface.msg import RoutingRequest as ROS2_RoutingRequest
			from ros2_interface.msg import KeyPoint as ROS2_KeyPoint
			from ros2_interface.msg import ADCTrajectory as ROS2_ADCTrajectory
			
			# 初始化ROS2
			if not rclpy.ok():
				rclpy.init()
			
			# 创建ROS2包装类
			if not create_ros2_wrapper():
				raise ImportError("无法创建ROS2包装类")
			
			# 导出ROS2相关到全局作用域
			globals()['rclpy'] = rclpy
			globals()['PoseWithCovarianceStamped'] = ROS2_PoseWithCovarianceStamped
			globals()['Header'] = ROS2_Header
			globals()['Event'] = ROS2_Event
			globals()['Events'] = ROS2_Events
			globals()['Location'] = ROS2_Location
			globals()['Chassis'] = ROS2_Chassis
			globals()['Vehicle'] = ROS2_Vehicle
			globals()['RoutingRequest'] = ROS2_RoutingRequest
			globals()['KeyPoint'] = ROS2_KeyPoint
			globals()['ADCTrajectory'] = ROS2_ADCTrajectory
			
			# 验证导出的消息类型
			debug_print(f"验证导出的消息类型:")
			debug_print(f"  PoseWithCovarianceStamped: {type(globals()['PoseWithCovarianceStamped'])} from {getattr(globals()['PoseWithCovarianceStamped'], '__module__', 'N/A')}")
			debug_print(f"  Event: {type(globals()['Event'])} from {getattr(globals()['Event'], '__module__', 'N/A')}")
			
			debug_print("使用 ROS2")
			return 'ros2'
			
		except (ImportError, ModuleNotFoundError, AttributeError) as e:
			print(f"ROS2 导入失败: {e}")
			print("自动回退到 ROS1...")
			debug_print(f"ROS2 导入失败: {e}, 回退到 ROS1")
			ros_version = 'ros1'
	
	# ROS1 导入
	if ros_version == 'ros1':
		print("正在加载 ROS1...")
		try:
			import rospy
			# 添加 ROS1 消息路径到 sys.path
			script_dir = os.path.dirname(os.path.abspath(__file__))
			message_ros1_base = os.path.join(script_dir, '../../message/ros/devel/lib')
			message_ros1_base = os.path.normpath(message_ros1_base)
			
			# 查找 Python 版本对应的路径
			python_version = f"python{sys.version_info.major}.{sys.version_info.minor}"
			
			# 按优先级尝试不同的路径
			possible_paths = [
				os.path.join(message_ros1_base, python_version, 'dist-packages'),
				os.path.join(message_ros1_base, 'python3', 'dist-packages'),
				os.path.join(message_ros1_base, 'python3.8', 'dist-packages'),
				os.path.join(message_ros1_base, 'python2.7', 'dist-packages')  # ROS1 常用路径
			]
			
			ros1_path_found = False
			for possible_path in possible_paths:
				if os.path.exists(possible_path):
					sys.path.insert(0, possible_path)
					debug_print(f"ROS1 消息路径已添加: {possible_path}")
					ros1_path_found = True
					break
			
			if not ros1_path_found:
				debug_print(f"警告: 未找到 ROS1 消息路径，尝试的路径: {possible_paths}")
			
			from geometry_msgs.msg import PoseWithCovarianceStamped
			from std_msgs.msg import Header
			from ros_interface.msg import Event
			from ros_interface.msg import Events
			from ros_interface.msg import Location
			from ros_interface.msg import Chassis
			from ros_interface.msg import Vehicle
			from ros_interface.msg import RoutingRequest, KeyPoint, ADCTrajectory
			
			# 导出ROS1相关
			globals()['rospy'] = rospy
			globals()['PoseWithCovarianceStamped'] = PoseWithCovarianceStamped
			globals()['Header'] = Header
			globals()['Event'] = Event
			globals()['Events'] = Events
			globals()['Location'] = Location
			globals()['Chassis'] = Chassis
			globals()['Vehicle'] = Vehicle
			globals()['RoutingRequest'] = RoutingRequest
			globals()['KeyPoint'] = KeyPoint
			globals()['ADCTrajectory'] = ADCTrajectory
			
			print("ROS1 加载成功")
			debug_print("使用 ROS1")
			return 'ros1'
			
		except ImportError as e:
			print(f"ROS1 导入失败: {e}")
			raise

# 兼容性函数
def ros_is_shutdown():
	global ros_version, ros_node
	if ros_version == 'ros2':
		import rclpy
		return not rclpy.ok()
	else:
		return rospy.is_shutdown()

def ros_spin():
	global ros_version, ros_node
	if ros_version == 'ros2':
		import rclpy
		rclpy.spin(ros_node)
	else:
		rospy.spin()


# 全局配置变量
global_config = None
debug_mode = False

# Debug打印函数（仅在debug模式下打印）
def debug_print(*args, **kwargs):
	global debug_mode
	if debug_mode:
		print(*args, **kwargs)

#加载全局配置文件
def load_global_config(config_file='global_server_config.json'):
	global global_config, debug_mode
	try:
		config_path = os.path.join(os.path.dirname(__file__), config_file)
		with open(config_path, 'r', encoding='utf-8') as f:
			global_config = json.load(f)
		# 读取debug模式配置
		debug_mode = global_config.get('system', {}).get('debug_mode', False) if global_config else False
		print(f"成功加载配置文件: {config_path}")
		print(f"Debug模式: {'开启' if debug_mode else '关闭'}")
		return global_config
	except Exception as e:
		print(f"加载配置文件失败: {e}")
		print("使用默认配置")
		debug_mode = False
		return None


#存储当前轨迹到文件
def dump_traj(msg):
	global task_traj_file_name
	if not task_traj_file_name:
		debug_print("Error: task_traj_file_name is not set")
		return
	with open(task_traj_file_name, 'w') as f:
		f.write(str(msg))

#RoutingRequest ID计数器
routing_request_id_counter = 0



#存储日志到文件
def log_to_file(msg):
	global  log_file_name, battery, log_path, water_tank_level
	if check_log_path(log_path):
		now = datetime.datetime.now()
		with open(log_file_name,'a') as f:
			if  msg == "开始自动驾驶-任务" or msg == "开始自动驾驶-任务_wxapp" or msg == "开始自动驾驶-任务_cloud":
				f.write('\n--------------------\n')
				f.write(f"{str(now)}  开始电量:{battery:.2f} # \n")
				f.write(f"{str(now)}  开始水位:{water_tank_level:.2f} # \n")
			f.write(str(now) + '  ' + str(msg) + ' # \n')
			if msg == "结束自动驾驶-任务" or msg == "结束自动驾驶-任务_wxapp" or msg == "结束自动驾驶-任务_cloud":
				f.write(f"{str(now)}  结束电量:{battery:.2f} # \n")
				f.write(f"{str(now)}  结束水位:{water_tank_level:.2f} # \n")
				f.write('--------------------\n')



#检查log路径
def check_log_path(path):
	global log_file_name
	if os.path.isdir(path):
		now = datetime.datetime.now()
		log_file_name = path + '{}_{}_{}'.format(now.year, now.month, now.day) + '.log'
		if not os.path.exists(log_file_name):
			os.system(f'touch {log_file_name}')
		return 1
	else:
		print(f'请检查log路径是否存在-{path}')
		return 0



#图片转base64
def encode_image(image_path):
	with open(image_path,'rb') as f:
		encode_str = base64.b64encode(f.read()).decode("utf-8")
		return encode_str



def quit():
	debug_print('quit')
	sys.exit()



#发布 Event 消息（单个事件）
def event_pub(pub, code, msg, log=True):
	global cur_cycly_number
	t = time.time()
	sec = math.floor(t)
	nsec = math.floor((t-sec)*10**9)
	event_msg = Event()
	event_msg.timestamp.sec = sec
	event_msg.timestamp.nsec = nsec
	event_msg.code = code
	event_msg.reason = msg

	if "召回" in msg:
		cur_cycly_number=0

	if log:
		if "自动驾驶" in msg or "清扫" in msg or "洒水" in msg or "warning" in msg or "召回" in msg:
			log_to_file(msg)

	if not ros_is_shutdown():
		pub.publish(event_msg)
		debug_print(f"pub event: code={code}, msg={msg}")


#发布 Events 消息（事件列表或单个事件）
_events_first_published = False
_last_events_for_replay = None

def _replay_last_events(pub):
    """重播最后一帧 Events，确保订阅者能收到第一帧"""
    global _last_events_for_replay
    import time
    time.sleep(0.5)  # 等待订阅者连接
    if _last_events_for_replay is not None and not ros_is_shutdown():
        pub.publish(_last_events_for_replay)
        debug_print(f"[REPLAY] Replayed last Events message to ensure subscription")

def events_pub(pub, event_list_or_code, msg=None, log=True):
    global _events_first_published, _last_events_for_replay
    if isinstance(event_list_or_code, list):
        # 事件列表模式
        event_list = event_list_or_code
        if not event_list:
            return
        if log:
            for event_item in event_list:
                if "自动驾驶" in event_item.reason or "清扫" in event_item.reason or "洒水" in event_item.reason or "warning" in event_item.reason or "召回" in event_item.reason:
                    log_to_file(event_item.reason)
        if not ros_is_shutdown():
            wsmsg = Events()
            wsmsg.events.extend(event_list)
            pub.publish(wsmsg)
            _last_events_for_replay = wsmsg
            debug_print(f"pub events: count={len(event_list)}")
            
            # 首次发送后延迟重播，确保订阅者收到
            if not _events_first_published:
                _events_first_published = True
                import threading
                threading.Timer(1.0, _replay_last_events, args=[pub]).start()
    else:
        # 单个事件模式，自动封装成 Events
        code = event_list_or_code
        t = time.time()
        sec = math.floor(t)
        nsec = math.floor((t-sec)*10**9)
        event_msg = Event()
        event_msg.timestamp.sec = sec
        event_msg.timestamp.nsec = nsec
        event_msg.code = code
        event_msg.reason = msg
        if log:
            if "自动驾驶" in msg or "清扫" in msg or "洒水" in msg or "warning" in msg or "召回" in msg:
                log_to_file(msg)
        if not ros_is_shutdown():
            wsmsg = Events()
            wsmsg.events.append(event_msg)
            pub.publish(wsmsg)
            _last_events_for_replay = wsmsg
            debug_print(f"pub events: code={code}, msg={msg}")
            
            # 首次发送后延迟重播，确保订阅者收到
            if not _events_first_published:
                _events_first_published = True
                import threading
                threading.Timer(1.0, _replay_last_events, args=[pub]).start()



#发布 PoseWithCovarianceStamped 消息
def pose_pub(pub,x,y,theta):
	pose_msg = PoseWithCovarianceStamped()
	pose_msg.header.frame_id='map'
	pose_msg.pose.pose.position.x=x
	pose_msg.pose.pose.position.y=y
	debug_print(f"pub pose:{x},{y}")
	pose_msg.pose.covariance[0]=0.25
	pose_msg.pose.covariance[6*1+1]=0.25
	pose_msg.pose.covariance[6*5+5]=0.06853891945200942
	# heading 转 四元素
	pose_msg.pose.pose.orientation.z=math.sin(theta/2)
	pose_msg.pose.pose.orientation.w=math.cos(theta/2)
	pub.publish(pose_msg)



#切换当前使用的map
def shift_map(map_name,double_init_point_flag=0):
	global map_path, config, global_cur_map, global_config
	try:
		# 从配置文件获取参数
		sudo_password = global_config.get('system', {}).get('sudo_password', 'titan4') if global_config else 'titan4'
		supervisor_services = global_config.get('system', {}).get('supervisor_services', {}) if global_config else {}
		location_2d_service = supervisor_services.get('location_2d', 'DRIVER:location_2d')
		location_3d_service = supervisor_services.get('location_3d', 'DRIVER:location_3d')
		
		with open(f'{map_path}{map_name}/test.json','r+') as f2:
			data = json.load(f2)
			map_type = int(data['type'])
			if double_init_point_flag == 1:
				start = data['start2']
				x = str(start[0])
				y = str(start[1])
				theta = str(start[2])
			else:
				start = data['start']
				x = str(start[0])
				y = str(start[1])
				theta = str(start[2])
		#cmd_str = f'source /opt/ros/melodic/setup.bash;cd {location_process_path}; source ./devel/setup.bash; rosparam set /slam_toolbox/map_file_name {location_map_path}{map_name};  rosparam set /slam_toolbox/map_start_pose "[{x},{y},{theta}]"'
		if map_type == 2:
			cmd_str = f'cd {location_process_path}; rosparam set /slam_toolbox/map_file_name {location_map_path}{map_name};  rosparam set /slam_toolbox/map_start_pose "[{x},{y},{theta}]"'
			os.system(cmd_str)
			time.sleep(2)
			os.system(f'echo {sudo_password} | sudo -S sudo supervisorctl stop {location_2d_service}')
			os.system(f'echo {sudo_password} | sudo -S sudo supervisorctl stop {location_3d_service}')
			os.system(f'echo {sudo_password} | sudo -S sudo supervisorctl start {location_2d_service}')
		elif map_type == 3:
			os.system(f'echo {sudo_password} | sudo -S sudo supervisorctl stop {location_2d_service}')
			os.system(f'echo {sudo_password} | sudo -S sudo supervisorctl stop {location_3d_service}')
			os.system(f'echo {sudo_password} | sudo -S sudo supervisorctl start {location_3d_service}')
		update_config(config,'current_map',map_name)
		global_cur_map = map_name
		time.sleep(3)
	except Exception:
		traceback.print_exc()



#json文件中更新字段
def update_config(jsonfile,field,value):
	with open(jsonfile,'r+') as f:
		file_data = json.load(f)
		file_data[field] = value
	with open(jsonfile,'w') as f:
		json.dump(file_data,f)



#建图过程中，将地图数据保存为png
# TODO 修改 save_map.sh 地图路径改到 wxapp 路径

def save_map_on_mapping(map,mode=0):
	global map_path, map_storage
	if not os.path.isdir(f'{map_path}{map}'):
		cmd_str = f'cd {map_path}; mkdir {map}'
		os.system(cmd_str)
	cmd_str = f'cd {map_path}; bash save_map.sh {map}'
	os.system(cmd_str)
	map_storage = trans_map_to_base64(mode)



#每隔5秒将地图数据导出为png
def on_mapping(map):
	global is_on_mapping, map_dir, server_map_json, send_map_pic, mapping_count, map_path
	mapping_count+=1
	# res = subprocess.Popen('rosnode list | grep slam_karto -wc',shell=True,stdout=subprocess.PIPE,stderr = subprocess.PIPE)
	res = subprocess.Popen('rosnode list | grep /slam_toolbox -wc',shell=True,stdout=subprocess.PIPE,stderr = subprocess.PIPE)
	res_str = res.stdout.read().decode("utf-8")
	# 每 5s 存一次地图数据
	if res_str.strip() == '1' and mapping_count % 10 == 0:
		# print("save_map_on_mapping")
		save_map_on_mapping(map)
		# print("save_map_on_mapping end")
		map_dir = map_path + map +'/test.png'
		server_map_json = map_path + map +'/test.json'
		send_map_pic = 1



#建图结束，保存定位需要的地图
def save_location_map(mapname):
	global location_map_path, location_process_path
	cmd_str = f'cd {location_process_path}; bash ./scripts/save_pose_map.sh {location_map_path}{mapname}'
	os.system(cmd_str)



#topic:/drivers/canbus/Vehicle 回调函数 
def handle_vehicle(msg):
	global battery, last_battery, is_battery_low, battery_thresh_low, battery_thresh_high, is_on_charging, is_on_auto_driving
	global cleanup_switch_status, watering_switch_status, water_tank_level, water_add_switch_status
	global is_multi_task
	global emergency_button_status, front_touch_status, rear_touch_status

	battery = msg.batterysoc
	on_charging = msg.bms_charge_status
	cleanup_switch_status = msg.cleanup_switch_status
	watering_switch_status = msg.watering_switch_status
	water_tank_level = msg.water_tank_level
	water_add_switch_status = msg.water_add_switch_status
	emergency_button_status = msg.emergency_button_status
	front_touch_status = msg.front_touch_status
	front_touch_status = msg.front_touch_status

	if is_on_charging == 0 and on_charging == 1:
		log_to_file(f"开始充电,当前电量：{battery:.2f}")
	if is_on_charging == 1 and on_charging == 0:
		log_to_file(f"结束充电,当前电量：{battery:.2f}")
	if (on_charging == 1 or on_charging == 2) and battery > 98.9:
		if last_battery != battery:
			log_to_file(f"充电完成，当前电量：{battery:.2f}")
	#存储上一次的充电状态
	is_on_charging = on_charging
	#电量充到预设上限电量低标志置为0
	if battery > battery_thresh_high and is_battery_low != 0:
		is_battery_low = 0
	#电量低于预设下限电量低标志置为1
	if (float(battery) - float(battery_thresh_low) < 1e-6) and is_battery_low == 0:
		debug_print(f"battery:{battery}")
		is_battery_low = 1
	last_battery = battery

	if is_battery_low == 1:
		if not ros_is_shutdown():
			try:
				is_on_auto_driving = False
				is_battery_low = -1
				event_pub(pub_err,4,"warning-battery low")
				time.sleep(0.1)
				events_pub(pub_wx_controll,10,"清扫关闭-电量低告警")
				time.sleep(0.1)
				if not is_multi_task :
					events_pub(pub_wx_controll,40,"结束自动驾驶-电量低告警")
				time.sleep(0.1)
				event_pub(pub_end_loop,1,'召回车辆-电量低')
				time.sleep(0.1)
				# events_pub(pub_wx_controll,41,"开始自动驾驶-自动召回")
				# time.sleep(0.1)				
			except Exception:
				traceback.print_exc()



#topic: /localization/slam/location 回调函数
def handle_location(msg):
	global cur_x, cur_y, last_x, last_y, theta, location_is_valid, loc_l, cur_latitude, cur_longitude
	global record_loc, traj_list, is_location_err
	global auto_driving_traj, is_on_auto_driving, is_on_task 
	global same_frame_count, data_same_frame_count_thresh,loc_error_cout,loc_error_cout_thresh
	global driving_mode


	cur_x = msg.utm_position.x
	cur_y = msg.utm_position.y
	cur_longitude = msg.position.lon
	cur_latitude = msg.position.lat
	
	theta = msg.heading
	location_is_valid = msg.rtk_flag
	# TODO
	# 定位目前存在错误匹配情况，该功能暂时关闭
	#定位状态恢复后，开始自动驾驶   
	# if location_is_valid == 1 and is_location_err == 1:
	if location_is_valid == 1:
		is_location_err = 0
		if not ros_is_shutdown():
			pass
			# events_pub(pub_wx_controll,41,"开始自动驾驶-定位状态恢复")
			#print("auto drive on: location status recover")
	#定位失效时停止自动驾驶并发出告警
	if location_is_valid == 3 and is_location_err == 0:
		if not ros_is_shutdown():
			is_on_auto_driving = False
			is_location_err = 1
			event_pub(pub_err,1,"warning-location status err")
			time.sleep(0.1)
			events_pub(pub_wx_controll,10,"清扫关闭-定位状态告警")
			time.sleep(0.1)
			events_pub(pub_wx_controll,40,"结束自动驾驶-定位状态告警")
			debug_print("auto drive off: location status err")
	#录制轨迹		
	if record_loc :
		data = f'worldPose: x: {cur_x:.6f},y: {cur_y:.6f},theta: {theta:.6f}, gridPosition: x: 0, y: 0'
		traj_list.append([ float(cur_x), float(cur_y)])
		loc_l.append(data)
	#记录任务轨迹
	if is_on_auto_driving and is_on_task == 1:
		auto_driving_traj.append(f'{cur_x:.6f},{cur_y:.6f}')
	#自动驾驶过程中，长时间停障（可能是撞了）时停止自动驾驶与清扫
	if abs(cur_x - last_x) < 1e-6 and abs(cur_y - last_y) < 1e-6 and driving_mode == 1:
		same_frame_count +=1
		if same_frame_count > data_same_frame_count_thresh:
			loc_error_cout += 1
			event_pub(pub_err,7,"warning-vehicle stoped")
			time.sleep(0.1)
			# 连续发5帧就停
			if loc_error_cout < loc_error_cout_thresh:
				events_pub(pub_wx_controll,10,"清扫关闭-车辆静止告警")
				time.sleep(0.1)
				events_pub(pub_wx_controll,40,"结束自动驾驶-车辆静止告警")
				is_on_auto_driving = False

	else:
		same_frame_count = 0
		loc_error_cout = 0
	last_x = cur_x
	last_y = cur_y



#topic: /drivers/canbus/Chassis 回调函数
def handle_chassis(msg):
	global driving_mode, steer_value, velocity, mileage, epb_level

	driving_mode = msg.driving_mode
	steer_value  = msg.front_steering_value
	velocity = msg.speed_mps
	mileage = msg.odometer_m
	epb_level = msg.epb_level
	# print(f'x:{cur_x},y:{cur_y},rtk_flag:{location_is_valid}')



#周期性向 client 发送数据
async def send_location(websocket):
	global send_map, send_map_pic, map_dir
	global server_map_json, mapping_name, send_map_json_to_client, send_task_json_to_client, send_map_split_to_client, split_map_name
	global velocity, init_flag 
	global origin_x,origin_y,ratio,map_length,map_width
	global cleanup_switch_status, watering_switch_status, water_tank_level, water_add_switch_status
	global loc_flag, top_lidar_flag, front_lidar_flag, uss_flag, imu_flag, radar_flag, camera_flag
	global pixel_per_meter, min_x, max_x, min_y, max_y, pad_pixels
	global epb_level, emergency_button_status, front_touch_status, rear_touch_status
	# global site_list
	# global origion_pos
 

	step = 0

	while(not websocket.closed):
		await asyncio.sleep(1)
		if websocket.closed:
			break
		try:
			res_dict = {
				"type":"vehicle",
				"data":{
					"vehicle_id":vehicle_id,
					"cur_x":cur_x,
					"cur_y":cur_y,
					"rtk_flag":location_is_valid,
					"steer_value":steer_value,
					"driving_mode":driving_mode,
					"clean_mode":cleanup_switch_status,
					"water_mode":watering_switch_status,
					"battery":battery,
					"v":velocity, 
					"water_tank_level":water_tank_level, 
					"water_add_switch_status":water_add_switch_status,
					"loc_flag":loc_flag,
					"top_lidar_flag":top_lidar_flag,
					"front_lidar_flag":front_lidar_flag,
					"uss_flag":uss_flag,
					"imu_flag":imu_flag,
					"radar_flag":radar_flag,
					"camera_flag":camera_flag,
					"epb_level":epb_level,
					"emergency_button_status":emergency_button_status,
					"front_touch_status":front_touch_status,
					"rear_touch_status":rear_touch_status
					}
					}
			# print(res_dict)
			res_json = json.dumps(res_dict)
			# publish(client,str(res_dict))
		except Exception:
			traceback.print_exc()
			raise
		
		try:
			await websocket.send(res_json)
		except (ConnectionClosedOK, ConnectionClosedError) as e:
			debug_print(f"WebSocket 连接已关闭 (send_location): {e}")
			break
		except Exception as e:
			debug_print(f"WebSocket 发送消息时发生错误: {e}")
			break
		# print(res_dict)
		# try:
		# 	print(f"send_map:{send_map}")
		# except Exception:
			# traceback.print_exc()
		#发送地图和轨迹列表
		if send_map == 1:
			try:
				traj_l = os.listdir(traj_path)
				map_ = os.listdir(map_path)
				for i in map_:
					if os.path.isdir(map_path+i):
						if i not in map_l:
							map_l.append(i)
				res_dict = {"type":"map_and_traj","data":{"map":map_l,"traj":traj_l}}
				res_json = json.dumps(res_dict)
				await websocket.send(res_json)
				send_map = 0
				debug_print('send_map_and_traj')
			except (ConnectionClosedOK, ConnectionClosedError) as e:
				debug_print(f"WebSocket 连接已关闭 (send_map_and_traj): {e}")
				break
			except Exception:
				traceback.print_exc()
	
		#建图
		if is_on_mapping:
			try:
				on_mapping(mapping_name)
			except Exception:
				traceback.print_exc()
		#发送地图数据
		if send_map_pic == 1:
			try:
				debug_print("send_map_pic")
				# pic_str = encode_image(map_dir)
				pic_str = map_storage[map_dir.split('/')[-2]][0]
				res_dict = {"type":"map_pic","data":pic_str}
				res_json = json.dumps(res_dict)
				await websocket.send(res_json)
				send_map_pic = 0
				map_dir=""
			except (ConnectionClosedOK, ConnectionClosedError) as e:
				debug_print(f"WebSocket 连接已关闭 (send_map_pic): {e}")
				break
			except Exception:
				traceback.print_exc()
			debug_print('send_map_pic_to_client:',map_dir)

		#发送地图配置文件
		if send_map_json_to_client == 1:
			try:
				# print("send_map_json_to_client")
				with open(server_map_json,'r') as f:
					res = json.load(f)
				origin_x = res['origin'][0]
				origin_y = res['origin'][1]
				ratio = res['resolution']
				pixel_per_meter = res['pixel_per_meter']
				pad_pixels = res['pad_pixels']
				min_x = res['utm_border']['min_x']
				max_x = res['utm_border']['max_x']
				min_y = res['utm_border']['min_y']
				max_y = res['utm_border']['max_y']
				map_length = res['height']
				map_width = res['width']
				# origion_pos = [origin_x, origin_y, 90]
				#站点列表
				# print("read_sitelist")
				# site_list = res['area_list']
				# print("site_list:",site_list)
				res_dict = {"type":"map_json","data":res}
				res_json = json.dumps(res_dict)
				await websocket.send(res_json)
				send_map_json_to_client = 0
				server_map_json = ""
				debug_print('send_map_json_to_client:',send_map_json_to_client)
			except (ConnectionClosedOK, ConnectionClosedError) as e:
				debug_print(f"WebSocket 连接已关闭 (send_map_json_to_client): {e}")
				break
			except Exception:
				traceback.print_exc()

		#发送任务配置文件
		if send_task_json_to_client == 1:
			try:
				debug_print("send_task_json")
				with open(config,'r') as f:
					res = json.load(f)
				res_dict = {"type":"task_json","data":res}
				res_json = json.dumps(res_dict)
				debug_print(res_json)
				await websocket.send(res_json)
				send_task_json_to_client = 0
			except (ConnectionClosedOK, ConnectionClosedError) as e:
				debug_print(f"WebSocket 连接已关闭 (send_task_json_to_client): {e}")
				break
			except Exception:
				traceback.print_exc()

		if send_map_split_to_client == 1:
			debug_print(f'send_map_split_to_client：{send_map_split_to_client}')
			debug_print(f'split_map_name:{split_map_name}')
			debug_print(f'map_storage:{map_storage.keys()}')
			try:
				if len(split_map_name) > 0 and (split_map_name in map_storage.keys()):
					res_dict = {"type":"split_map", "data":map_storage[split_map_name]}
					res_json = json.dumps(res_dict)
					await websocket.send(res_json)
					split_map_name = ''
					# print(f'res_dict:{res_dict}')
					send_map_split_to_client = 0
			except (ConnectionClosedOK, ConnectionClosedError) as e:
				debug_print(f"WebSocket 连接已关闭 (send_map_split_to_client): {e}")
				break
			except Exception:
				traceback.print_exc()
	

		#定位初始化
		if init_flag == 1:
			global init_x
			global init_y
			global init_deg
			#根据小程序上手绘的坐标计算pgm地图上对应的坐标
			x  = init_x*ratio + origin_x
			y  = (map_width - init_y)*ratio + origin_y
			try :
				pose_pub(pub_init_pose,x,y,init_deg)   #发布定位初始化信息
				log_to_file("定位初始化-人工")
			except Exception:
				traceback.print_exc()
			init_x = 0
			init_y = 0
			init_deg = 0
			init_flag = 0
	debug_print("client break connection send_location")	



#数据相关 websocket 回调
async def get_data(websocket):
	global config
	global map_path
	global global_config
	# global site_list
	if not websocket.closed:
		while(not websocket.closed):
			await asyncio.sleep(1)

			if websocket.closed:
				break

			try:
				msg = await websocket.recv()
			except (ConnectionClosedOK, ConnectionClosedError) as e:
				debug_print(f"WebSocket 连接已关闭 (get_data): {e}")
				break
			except Exception as e:
				debug_print(f"WebSocket 接收消息时发生错误: {e}")
				break

			if msg =='request_map':
				global send_map
				send_map = 1
			else:
				msg_l = msg.split(':')
				if len(msg_l) == 2:
					global record_loc
					global loc_l
					global is_on_mapping, mapping_count 
					global mapping_name
					global send_map_json_to_client, send_map_split_to_client
					global send_task_json_to_client
					global traj_list, global_task_list
					global split_map_name

					if msg_l[0] == 'record_traj_start':
						record_loc = 1
				
					elif msg_l[0] == 'record_traj_end':
						debug_print("in record_traj_end")
						map_name = msg_l[1].split('|')[1]
						map_json = map_path + map_name +'/test.json'
						traj_name = msg_l[1].split('|')[0]
						record_loc = 0
						# with open (traj_path + traj_name + '.txt','w') as f:
						# 	for data in loc_l:
						# 		f.write("'"+data+"'")
						# 		f.write('\n')
						try:
							file_data = ''
							# with open(map_json, 'r') as f:
							# 	file_data = json.load(f)
							# 	traj_json_data = {}
							# 	traj_json_data['id'] = len(file_data['track_list'])+1
							# 	traj_json_data['name'] = traj_name
							# 	traj_json_data['path'] = traj_path
							# 	traj_json_data['type'] = 'record'
							# 	traj_json_data['length'] = len(traj_list)
							# 	# traj_json_data['points'] = traj_list
							# 	file_data['track_list'].append(traj_json_data)
							# 	print(file_data)
							# with open(map_json,'w') as f:
							# 	print(file_data)
							# 	json.dump(file_data, f)
							#录制完轨迹后，对轨迹进行平滑处理，并保存为二进制文件（解决每次开始任务耗时久的问题）
							# cmd_str = f'python3 filter_adctraj.py {traj_path}{traj_name}.txt'
							# os.system(cmd_str)
							traj_name = '3dtest_1'
							cmd_str2 = f'python3 to_osm_map.py {traj_path}{traj_name}.pc {traj_path}{traj_name}.osm'
							os.system(cmd_str2)

						except Exception:
							raise

						loc_l=[]
						traj_list = []
			
					elif msg_l[0] == 'record_map_start':
						sudo_password = global_config.get('system', {}).get('sudo_password', 'titan4') if global_config else 'titan4'
						supervisor_services = global_config.get('system', {}).get('supervisor_services', {}) if global_config else {}
						location_2d_service = supervisor_services.get('location_2d', 'DRIVER:location_2d')
						mapping_service = supervisor_services.get('mapping', 'DRIVER:mapping')
						# os.system('echo titan4 | sudo -S sudo supervisorctl stop DRIVER:location')
						os.system(f'echo {sudo_password} | sudo -S sudo supervisorctl stop {location_2d_service}')
						os.system(f'echo {sudo_password} | sudo -S sudo supervisorctl start {mapping_service}')
						is_on_mapping = 1
						mapping_name = msg_l[1]
				
					elif msg_l[0] == 'record_map_end':
						try:
							sudo_password = global_config.get('system', {}).get('sudo_password', 'titan4') if global_config else 'titan4'
							supervisor_services = global_config.get('system', {}).get('supervisor_services', {}) if global_config else {}
							mapping_service = supervisor_services.get('mapping', 'DRIVER:mapping')
							mapping_name = msg_l[1]
							save_location_map(mapping_name)
							is_on_mapping = 0
							mapping_count = 0
							os.system(f'echo {sudo_password} | sudo -S sudo supervisorctl stop {mapping_service}')
							# shift_map(mapping_name)
						except Exception:
							traceback.print_exc()
					
					elif msg_l[0] == 'get_map_pic':
						debug_print("get_map_pic")
						global send_map_pic
						global map_dir
						global server_map_json
						if msg_l[1] in map_l:
							send_map_pic = 1
							map_dir = map_path + msg_l[1]+'/test.png'
							server_map_json = map_path + msg_l[1]+'/test.json'
		
					elif msg_l[0] == 'get_map_json':
						debug_print("get_map_json")
						send_map_json_to_client = 1
						map_name = msg_l[1]
						server_map_json = map_path + map_name + '/test.json'
				
					elif msg_l[0] == 'get_task_json':
						debug_print("get_task_json")
						send_task_json_to_client = 1
			
					elif msg_l[0] == 'shift_map':
						debug_print("shift_map")
						debug_print(msg_l[1])
						shift_map(msg_l[1])
				
					elif msg_l[0] == 'set_speed':
						debug_print(f"set_speed:{msg_l[1]}")
						event_pub(pub_msg_to_traj,10,f'{msg_l[1]}')
				
					elif msg_l[0] == 'request_map_split_pic':
						split_map_name = msg_l[1]
						send_map_split_to_client =1
					
						

				elif len(msg_l) > 2 :
					# 保存站点信息到 map_json
					if msg_l[0] == 'send_map_json':
						try:
							map_dict = json.loads(':'.join(msg_l[1:]))
							key_list = list(map_dict.keys())
							map_name = key_list[0]
							server_map_json = map_path + map_dict[map_name] + '/test.json'
							# print(server_map_json)
							#TODO 
							# tans coord to site info
							site_list_ = []
							area_list = map_dict[key_list[1]]
							for index,site in enumerate(area_list):
								name = site['name']
								coord = site['coord']
								heading = cal_heading(coord[0],coord[1],coord[2],coord[3])
								lat,lon = trans_uv_to_ll(coord[0],coord[1])
								site_info_m ={}
								site_info_m['id'] = index
								site_info_m['name'] = name
								site_info_m['type'] = 'normal'
								site_info_m['compress_pic_coord'] = [coord[4],coord[5]]
								site_info_m['adjacent'] = []
								site_info_m['coordinate'] = [lat,lon]
								site_info_m['heading'] = heading
								site_list_.append(site_info_m)

							with open(server_map_json,"r+") as f:
								file_data = json.load(f)
								# print(file_data)
								file_data['area_list'] = site_list_
								# site_list = area_list
								# print(file_data)
							with open(server_map_json,'w') as f:
								json.dump(file_data,f)
						except Exception:
							traceback.print_exc()
				
					elif msg_l[0] == 'send_task_json':
						try:
							debug_print('get send_task_json')
							map_dict = json.loads(':'.join(msg_l[1:]))
							# print(key_list)
							task_list = []
							with open(config,'r+') as f:
								file_data = json.load(f)
								task_list = file_data['task']
								# file_data['start_site'] = [origin_x, origin_y, 90]
								
								# print(f"len(file_data['task']):{len(file_data['task'])}")
							task_list.append(map_dict)
							with open(config,'w') as f:
								json.dump(file_data,f)
								# print(f"len(file_data['task']):{len(file_data['task'])}")
							global_task_list = task_list 
						except Exception:
							traceback.print_exc()
					
					elif msg_l[0] == 'send_init_loc_json':
						global init_x
						global init_y
						global init_deg
						global  init_flag
						json_data = json.loads(':'.join(msg_l[1:]))
						init_x = json_data['pos'][0]
						init_y = json_data['pos'][1]
						init_deg = json_data['deg']
						init_flag = 1
					
			continue
			debug_print('send_map_pic:',send_map_pic)
			debug_print('send_map_json_to_client:',send_map_json_to_client)

			debug_print("get_data recieve msg: {}".format(msg))
			
	debug_print("client break connection get_data")	



async def task1(websocket,path):
	t = time.asctime(time.localtime(time.time()))
	debug_print(str(t)+" socket 连接成功 端口8283 func: task1")
	a = asyncio.get_event_loop().create_task(get_data(websocket))
	b = asyncio.get_event_loop().create_task(send_location(websocket))
	try:
		await a
	except (ConnectionClosedOK, ConnectionClosedError) as e:
		debug_print(f"WebSocket 连接已关闭 (task1 get_data): {e}")
	except Exception as e:
		debug_print(f"task1 get_data 发生错误: {e}")
		traceback.print_exc()
	try:
		await b
	except (ConnectionClosedOK, ConnectionClosedError) as e:
		debug_print(f"WebSocket 连接已关闭 (task1 send_location): {e}")
	except Exception as e:
		debug_print(f"task1 send_location 发生错误: {e}")
		traceback.print_exc()
	debug_print("client break connection 8283")



#创建自动驾驶轨迹文件
def create_auto_drive_record():
	global log_path, task_traj_file_name
	try:
		now = datetime.datetime.now()
		traj_name = log_path + '{}_{}_{}_{}_{}_{}'.format(now.year, now.month, now.day, now.hour, now.minute, now.second) + '.txt'
		task_traj_file_name = traj_name
		os.system(f'touch {traj_name}')
	except Exception:
			traceback.print_exc()



#结束清扫任务
def end_task(task_name,role='wxapp'):
	global mileage,task_traj_file_name, is_on_auto_driving, is_on_task, cur_task,site_list
	try:
		log_to_file(f'结束里程-{mileage}')
		log_to_file(f'实际轨迹-{task_traj_file_name}')
		events_pub(pub_wx_controll,40,f"结束自动驾驶-任务_{role}")	
		is_on_auto_driving = False
		time.sleep(0.1)
		event_pub(pub_task_to_cloud,0,"结束自动驾驶-任务",False)
		update_config(config,'current_task','')
		update_config(config,'latest_task',task_name)
		cur_task=''
	except Exception:
			traceback.print_exc()
	is_on_task = 0
	site_list = []
	dump_traj(auto_driving_traj)



#从配置文件里读取参数
def get_speed_form_config():
	global speed_cover_task, speed_idle, speed_side_task
	try:
		with open(config,'r+') as f:
			file_data = json.load(f)
			speed_cover_task = file_data['speed_cover_task']
			speed_idle = file_data['speed_idle']
			speed_side_task = file_data['speed_side_task']
	except Exception:
			traceback.print_exc()



#下发清扫任务
def start_task(task_name, role='wxapp',clean=0, water=0, log=1):
	global  is_on_auto_driving, is_on_task, mileage, config, cur_task, cur_latitude, cur_longitude, theta
	global global_task_list, site_list, next_site_index, origion_pos
	global loop_count


	task_type = ''
	# print('start_task')
	if len(global_task_list) == 0:
		with open(config,'r+') as f:
			file_data = json.load(f)
			task_list = file_data['task']
			global_task_list= task_list
	# print(f'global_task_list:{global_task_list}')
	for task in  global_task_list:
		if task['name'] == task_name:
			traj_l_ = task['traj']
			site_l_ = task['area']
			origion_pos = task['start_site']

			# print(f'traj_l_:{len(traj_l_)}')
			# print(f'site_l_:{len(site_l_)}')
			# 区分 站点任务 和 循迹任务 
			if len(traj_l_) == 0 and len(site_l_) != 0:
				task_type = 'site'
				if len(site_list) == 0:
					site_list = site_l_
					next_site_index = 0
					debug_print('next_site_index = 0')
			elif len(traj_l_) != 0 and len(site_l_) == 0:
				task_type = 'traj'
	
	# 循环
	if next_site_index is None:
		next_site_index = 0
	if not site_list:
		next_site_index = -1
	elif next_site_index > len(site_list)-1:
		if loop_count > 0:
			loop_count -= 1
			next_site_index = 0
		else:
			loop_count = -1

	# 返回起点
	if next_site_index == -1:
		next_latitude = origion_pos[0]
		next_longitude = origion_pos[1]
		# 角度
		next_theta = origion_pos[2]
	else:
		next_latitude = site_list[next_site_index]['coord'][0]
		next_longitude = site_list[next_site_index]['coord'][1]
		next_theta = site_list[next_site_index]['coord'][2]

	# 发下一个站点给 routing 模块
	try:
		next_latitude = float(next_latitude)
		next_longitude = float(next_longitude)
		next_theta = float(next_theta)
	except (TypeError, ValueError) as e:
		debug_print(f"Error: Invalid next site coordinates type: lat={next_latitude}, lon={next_longitude}, theta={next_theta}, error={e}")
		return
	if next_latitude is None or next_longitude is None:
		debug_print(f"Error: Invalid next site coordinates: lat={next_latitude}, lon={next_longitude}")
		return
	debug_print("create_routing_request")
	request = create_routing_request(cur_latitude, cur_longitude, theta, next_latitude , next_longitude, next_theta)
	debug_print("publish")
	pub_routing_request.publish(request)

	if log == 1:
		events_pub(pub_wx_controll,41,f"开始自动驾驶-任务_{role}")
		is_on_auto_driving = True
		time.sleep(0.1)
		event_pub(pub_task_to_cloud,1,f"开始自动驾驶-任务_{role}",False)
		time.sleep(0.1)

		#更新当前任务字段的值
		cur_task = task_name
		update_config(config,'current_task',task_name)
		try:
			log_to_file(f'起始里程-{mileage}')
			log_to_file(f'下发轨迹-{task_name}')
			is_on_task = 1
			create_auto_drive_record()
		except Exception:
			traceback.print_exc()

	

#控车相关 websocket 回调
async def control(websocket,path):
	global  is_on_auto_driving, is_on_task, task_traj_file_name, auto_driving_traj, log_path, mileage,config, global_cur_map, traj_path
	global is_multi_task, circle_end_flag
	global global_task_list
	t = time.asctime(time.localtime(time.time()))
	debug_print(str(t)+" socket 连接成功 端口 8282 func: control")

	try:
		async for message in websocket: 
			debug_print("control recieve msg: {}".format(message))
			if len(message) > 2:
				msg_l = message.split(':')
				if len(msg_l) >1:
					#任务开始
					if msg_l[0] == 'task_start':
						if msg_l[1] == '任务一':
							is_multi_task = True
							start_task('出库', role='wxapp',clean=0, water=0, log=1)
						elif msg_l[1] == '内圈巡逻':
							start_task(msg_l[1],role='cloud',clean=0, water=0, log=1) 
						elif  msg_l[1] == '外圈巡逻':
							start_task(msg_l[1],role='cloud',clean=1, water=0, log=1) 
						else:
							start_task(msg_l[1], role='wxapp',clean=0, water=0, log=1)
						
					if msg_l[0] == 'circle_end':
						circle_end_flag = 1
						event_pub(pub_msg_to_traj,6,'')
				
					if msg_l[0] == 'task_delete':
						try:
							task_list_ = []
							with open(config,'r') as f:
								res = json.load(f)
								task_list_temp = res['task']
								for task in task_list_temp:
									if task['name'] == msg_l[1]:
										continue
									task_list_.append(task)
							update_config(config,'task',task_list_)
							global_task_list = task_list_
						except Exception:
							traceback.print_exc()
				
					if msg_l[0] == 'task_end':
						end_task(msg_l[1])
					
					if msg_l[0] == 'call_back':
						try:
							event_pub(pub_end_loop,1,'召回车辆-人工')
					
						except Exception:
								traceback.print_exc()
			else:
				if not ros_is_shutdown():
					code = int(message)
					if code == 51 or code == 50:
						if code == 51:
							os.system('cansend can1 385#00.00.40.00.00.00.00.00')
						elif code == 50:
							os.system('cansend can1 385#00.00.80.00.00.00.00.00')				
					else:
						if code == 41:
							is_on_auto_driving = True
							msg = "开始自动驾驶-人工"
							event_pub(pub_msg_to_traj,1,'')
							log_to_file(f'当前里程-{mileage}')
							log_to_file(f'当前电量-{battery:.2f}')
						elif int(message) == 40:
							is_on_auto_driving = False
							msg = "结束自动驾驶-人工"
							event_pub(pub_msg_to_traj,2,'')
							log_to_file(f'当前里程-{mileage}')
							log_to_file(f'当前电量-{battery:.2f}')
						elif int(message) == 11:
							msg = "清扫开启-人工"
						elif int(message) == 10:
							msg = "清扫关闭-人工"
						elif int(message) == 21:
							msg = "洒水开启-人工"
						elif int(message) == 20:
							msg = "清扫关闭-人工"
						else:
							msg = "controll"

					events_pub(pub_wx_controll,code,msg)
	except (ConnectionClosedOK, ConnectionClosedError) as e:
		debug_print(f"WebSocket 连接已关闭 (control): {e}")
	except Exception as e:
		debug_print(f"control 函数发生错误: {e}")
		traceback.print_exc()
	finally:
		#连接中断发一帧数据，停车
		if websocket.closed:
			debug_print("client break connection 8282")
			if not ros_is_shutdown():
				events_pub(pub_wx_controll,5,"socket break")
				log_to_file('stop-socket break')



#监听imu的消息，判断imu是否正常工作
def handle_imu_event(msg):
	global imu_status_detection_start, imu_no_data_count, imu_fault,imu_error_count, imu_error_count_thresh,is_on_auto_driving
	imu_status_detection_start = True
	if msg.code == 1:
		imu_fault = False
		imu_error_count = 0
	else:
		imu_fault = True
		imu_error_count+=1
		# IMU 状态异常，停止自动任务关闭清扫
		event_pub(pub_err,3,"warning-imu no data")
		time.sleep(0.1)
		if imu_error_count < imu_error_count_thresh:
			if not ros_is_shutdown():
				events_pub(pub_wx_controll,10,"清扫关闭-IMU状态告警")
				time.sleep(0.1)
				events_pub(pub_wx_controll,40,"结束自动驾驶-IMU状态告警")
				is_on_auto_driving = False



#接收云端消息
# def handle_cloud_operate(msg):
	#TODO 循环次数联调
	# global cur_task,cur_cycly_number
	# message = msg.reason.split('|')
	# if len(message) != 2:
	# 	print('cloud instruct error, do nothing !')
	# else:
	# 	task_name = message[0]
	# 	cur_cycly_number = int(message[1])
	# #启动任务
	# if msg.code == 1:
	# 	print(f'receved cloud instruct: code:{msg.code} reason:{msg.reason} cur_task:{cur_task}')
	# 	if cur_task != '':
	# 		pass
	# 	else:
	# 		if 	task_name == '内圈巡逻':
	# 			start_task(task_name,role='cloud',clean=0, water=0, log=1) 
	# 		elif  task_name == '外圈巡逻':
	# 			start_task(task_name,role='cloud',clean=1, water=0, log=1) 
	# #结束任务
	# elif msg.code == 0:
	# 	end_task(task_name, role='cloud')
	# 	time.sleep(3)
	


def handle_adctrajectory(msg):
	global station_state
	global last_station_state, circle_end_flag, next_site_index
	# 将要到站：9
	# 已到站：14

	clean_ = 0
	water_ = 0

	station_state = msg.behaviour_state
				
	if station_state == 9 and station_state != last_station_state:
		next_site_index += 1
		# TODO
		# 目前召回车辆需要到达最近的一个站点后才响应，后续改为立即响应
		if circle_end_flag == 1:
			next_site_index = -1
		start_task(cur_task, role='wxapp',clean=clean_, water=water_, log=0)

	#if station_state == 14 and station_state != last_station_state and next_site_index == 'end':
		#end_task(cur_task,role='wxapp')	
	last_station_state = station_state



def create_routing_request(cur_latitude, cur_longitude, theta, lat_2, lon_2, theta_2):
    global routing_request_id_counter
    # 创建一个RoutingRequest实例并填充数据
    request = RoutingRequest()
    start = KeyPoint()
    start.id = routing_request_id_counter
    start.ele = 0.0
    start.heading = theta
    start.latitude = cur_latitude
    start.longitude = cur_longitude
    start.name = "start"
    goal = KeyPoint()
    goal.id = routing_request_id_counter + 1
    routing_request_id_counter += 2
    goal.ele = 0.0
    goal.heading = math.pi/2-(theta_2*math.pi/180)
    goal.latitude = lat_2
    goal.longitude = lon_2
    goal.name = "goal"
    request.num_of_kp = 2
    request.key_point_list.append(start)
    request.key_point_list.append(goal)
    return request



def handle_warning_manager(msg):
	global loc_flag, top_lidar_flag, front_lidar_flag, uss_flag, imu_flag, radar_flag, camera_flag
	global warning_state, is_on_task, driving_mode
	
	fatal_err_code_map = {
		10:'imu_flag',
		20:'top_lidar_flag',
		40:'uss_flag',
		50:'radar_flag',
		60:'camera_flag',
		70:'front_lidar_flag'
		}
	normal_err_code_map = {
		30:'imu_flag'
		}

	loc_flag = 1
	top_lidar_flag = 1
	front_lidar_flag = 1
	uss_flag = 1
	imu_flag = 1
	radar_flag = 1 
	camera_flag = 1

	for i in msg.events:
		if i.code == 10:
			loc_flag = 2
		elif i.code == 20:
			top_lidar_flag =2
		elif i.code == 30:
			imu_flag = 2
		elif i.code == 40:
			uss_flag = 2
		elif i.code == 50:
			radar_flag = 2
		elif i.code == 60:
			camera_flag = 2
		elif i.code == 70:
			front_lidar_flag = 2
		else:
			pass

		if i.code in fatal_err_code_map.keys():
			if is_on_task == 1 and driving_mode == 1:
				events_pub(pub_wx_controll,40,f"结束自动驾驶-{i.reason}告警")

		if i.code in normal_err_code_map.keys():
			log_to_file(i.reason)


# mode: 0 只转换缩略图 1 转换缩略图并将原图分片
def trans_map_to_base64(mode=0):
	import pickle
	from PIL import Image
	import io

	map_storage = {}
	key_l = []
	file_path = map_path + "map_info.pk"

	map_name_l = [ i for i in os.listdir(map_path) if os.path.isdir(map_path + i)]

	debug_print(f"map_name_l:{map_name_l}")
	
	if os.path.exists(file_path):
		with open(file_path,'rb') as f:
			file_data = pickle.load(f)
			key_l = file_data.keys()
			map_storage = file_data

	for map_name in map_name_l:
		pic_l = []
		if mode == 0:
			if map_name not in key_l:
				im = Image.open(map_path + f'{map_name}/' + 'test.png')
				resize_im = im.resize((400,300),0)
				resize_byte_arr = io.BytesIO()
				resize_im.save(resize_byte_arr, format='PNG')
				resize_encode_str = base64.b64encode(resize_byte_arr.getvalue()).decode("utf-8")
				pic_l.append(resize_encode_str)
				map_storage[map_name] = pic_l
		elif mode == 1:
			im = Image.open(map_path + f'{map_name}/' + 'test.png')
			resize_im = im.resize((400,300),0)
			resize_byte_arr = io.BytesIO()
			resize_im.save(resize_byte_arr, format='PNG')
			resize_encode_str = base64.b64encode(resize_byte_arr.getvalue()).decode("utf-8")
			pic_l.append(resize_encode_str)


			img_byte_arr = io.BytesIO()															 
			im.save(img_byte_arr, format='PNG')
			encode_str = base64.b64encode(img_byte_arr.getvalue()).decode("utf-8")
			pic_l.append(encode_str)
			# print(f'len pic_l:{len(pic_l)}')
			map_storage[map_name] = pic_l

	with open(file_path,'wb') as f:
		pickle.dump(map_storage,f)

	return map_storage


def cal_heading(u1,v1,u2,v2):
	from  math import atan2,pi
	x1,y1 = uv_to_xy(u1,v1)
	x2,y2 = uv_to_xy(u2,v2)
	heading = pi/2 -  atan2(y2-y1,x2-x1)
	return heading/pi*180

def uv_to_xy(u,v):
	global min_x, min_y, max_x, max_y, pixel_per_meter, pad_pixels
	# print("min_x: ",min_x)
	# print("min_y:",min_y)
	# print("pixel_per_meter: ",pixel_per_meter)
	x = (u - pad_pixels) / pixel_per_meter + min_x
	y = max_y - (v - pad_pixels) / pixel_per_meter
	return x, y

def xy_to_ll(x,y):
	import utm
	global origin_x, origin_y
	origin_x_, origin_y_, zone_num, zone_letter = utm.from_latlon(origin_x, origin_y)
	dx = origin_x_ + x
	dy = origin_y_ + y
	lat, lon = utm.to_latlon(dx, dy, zone_num, zone_letter)
	return lat, lon

def trans_uv_to_ll(u,v):
	x,y = uv_to_xy(u,v)
	debug_print(f'u,v:{u},{v}')
	debug_print(f'x,y:{x},{y}')
	return xy_to_ll(x,y)
	

if __name__ == '__main__':
	# 加载全局配置文件
	load_global_config('global_server_config.json')
	
	# 从配置文件读取车辆信息
	if global_config:
		vehicle_id = global_config.get('vehicle', {}).get('vehicle_id', 'P1')
		software_version = global_config.get('vehicle', {}).get('software_version', '1.0.1')
	else:
		vehicle_id = 'P1'
		software_version = '1.0.1'
	
	# TODO 
	# 小满计算好后填空
	#建图起点经纬度
	origion_pos = [0, 0, 0]
	debug_print(f"SoftWare Version: {software_version}-{vehicle_id}")
	# [
		# {
			# "name":"xxx",
			# "coord":[x,y,theta],
		# },
	# ]
	site_list = []

	# map

	pic_w = 400
	pic_h = 300
	send_map_split_to_client = 0
	split_map_name = ''
	#map_list traj_list
	# map_storage：
	# {
	#	"map_name":[],    index 0 缩略图（400*300） index > 0 分片
	#	
	# }
	map_storage = {}
	map_l = []

	#speed
	speed_cover_task = 0.0
	speed_side_task = 0.0
	speed_idle= 0.0

	#vehicle
	battery=-1
	last_battery = -1
	is_battery_low = 0
	is_on_charging = 0
	battery_thresh_low = 70.0
	battery_thresh_high = 90.0
	is_location_err = 0
	cleanup_switch_status = -1
	watering_switch_status = -1
	water_tank_level = -1
	water_add_switch_status = -1
	emergency_button_status = -1
	front_touch_status = -1
	rear_touch_status  = -1


	#location 
	cur_x = 0.0
	cur_y = 0.0
	cur_latitude = 0.0
	cur_longitude = 0.0

	last_x = 0
	last_y = 0
	same_frame_count = 0
	data_same_frame_count_thresh = 500
	loc_error_cout = 0
	loc_error_cout_thresh = 5
	theta = 0.0
	location_is_valid = 0
	init_x = 0
	init_y = 0
	init_deg = 0.0
	init_flag = 0

	#chassis
	steer_value = 0
	driving_mode = -1
	velocity = 0.0
	mileage = -1
	epb_level = -1

	#imu
	imu_fault = False
	imu_status_detection_start = False
	imu_no_data_count= 0
	imu_error_count = 0
	imu_error_count_thresh = 5

	#traj points
	loc_l = []
	record_loc = 0

	
	#map json
	min_x = 0.0
	min_y = 0.0
	max_x = 0.0
	max_y = 0.0
	pixel_per_meter = 0.0
	traj_l = []
	origin_x = 0.0
	origin_y = 0.0
	ratio = 0.05
	map_length = 0.0
	map_width = 0.0 

	#轨迹点的列表
	traj_list = []
	send_map = 0
	send_map_pic = 0
	send_map_json_to_client = 0
	send_task_json_to_client = 0
	map_dir = ''
	server_map_json = ''

	#mapping 
	is_on_mapping = 0
	mapping_count = 0
	mapping_name=''

	#log
	# dump_log = False
	log_file_name = ''

	#task
	global_task_list = []
	is_on_task = -1
	is_on_auto_driving = False
	auto_driving_traj = []
	task_traj_file_name = ''
	cur_map = ''
	global_cur_map=''
	cur_task = ''
	cur_cycly_number = -1
	next_site_index = None
	is_multi_task = False
	loop_count = 1
	circle_end_flag = 0
	station_state = -1
	last_station_state = -1

	#warning
	warning_state = 0
	loc_flag = 0
	top_lidar_flag = 0
	front_lidar_flag = 0
	uss_flag = 0
	imu_flag = 0
	camera_flag = 0
	radar_flag = 0

	# 从配置文件读取路径
	if global_config and 'paths' in global_config:
		paths = global_config['paths']
		config = paths.get('config', './wx_server_config.json')
		traj_path = paths.get('traj_path', '/home/lx/work/yx_xiao_an/0903_partrol_four_wheels/101/legion_framework/modules/drivers/wxapp/traj')
		map_path = paths.get('map_path', '/home/lx/work/yx_xiao_an/0903_partrol_four_wheels/101/legion_framework/modules/drivers/wxapp/map')
		location_map_path = paths.get('location_map_path', '/media/data/map/')
		location_process_path = paths.get('location_process_path', '/home/titan/legion_framework/modules/drivers/location/slam_tool_ws/')
		location_path = paths.get('location_path', '/home/titan/legion_framework/modules/drivers/location/2d_mapping_location/')
		log_path = paths.get('log_path', '/media/data/sweeper/log/')
	else:
		config = './wx_server_config.json'
		traj_path = '/home/lx/work/yx_xiao_an/0903_partrol_four_wheels/101/legion_framework/modules/drivers/wxapp/traj'
		map_path = '/home/lx/work/yx_xiao_an/0903_partrol_four_wheels/101/legion_framework/modules/drivers/wxapp/map'
		location_map_path = '/media/data/map/'
		location_process_path = '/home/titan/legion_framework/modules/drivers/location/slam_tool_ws/'
		location_path = '/home/titan/legion_framework/modules/drivers/location/2d_mapping_location/'
		log_path = '/media/data/sweeper/log/'
	
	# 确保路径以 / 结尾（如果需要）
	if not traj_path.endswith('/'):
		traj_path += '/'
	if not map_path.endswith('/'):
		map_path += '/'
	if not location_map_path.endswith('/'):
		location_map_path += '/'
	if not location_process_path.endswith('/'):
		location_process_path += '/'
	if not location_path.endswith('/'):
		location_path += '/'
	if not log_path.endswith('/'):
		log_path += '/'

	#mqtt 
	# broker = 'smart.dev.usharingtech.com'
	# port = 1883
	# topic_pub = 's1-position'
	# topic_sub = 's1-control-from-cloud'
	# client_pub_id = 's1_pub'
	# client_sub_id = 's1_sub'
	# connect_flag = False
	# try:
	# 	client = connect_mqtt(client_pub_id)
	# 	client_sub = connect_mqtt(client_sub_id)
	# except Exception:
	# 	log_to_file('云端mqtt链接失败,重启程序后将重新连接')

	# pprint()

	# 从配置文件读取 ROS 配置
	if global_config and 'ros' in global_config:
		ros_config = global_config['ros']
		ros_ver = ros_config.get('version', 'ros1')
		node_name = ros_config.get('node_name', 'wx_app_driver')
		publishers_config = ros_config.get('publishers', {})
		subscribers_config = ros_config.get('subscribers', {})
	else:
		ros_ver = 'ros1'
		node_name = 'wx_app_driver'
		publishers_config = {}
		subscribers_config = {}
	
	# 初始化 ROS (ROS1 或 ROS2)
	init_ros(ros_ver)
	
	# 创建 ROS 节点
	if ros_version == 'ros2':
		ros_node = ROS2Wrapper(node_name)
	else:
		rospy.init_node(node_name, anonymous=False)
		ros_node = None
	
	# 创建 Publishers
	pub_wx_controll_topic = '/drivers/canbus/Events'
	pub_wx_controll_queue = publishers_config.get(pub_wx_controll_topic, {}).get('queue_size', 10) if publishers_config else 10
	if ros_version == 'ros2':
		# Events: 触发/一次性消息，使用 transient_local
		pub_wx_controll = ros_node.create_publisher_wrapper(Events, pub_wx_controll_topic, ros_node._get_qos_trigger(pub_wx_controll_queue))
	else:
		pub_wx_controll = rospy.Publisher(pub_wx_controll_topic, Event, queue_size=pub_wx_controll_queue)
	
	pub_task_to_cloud_topic = '/task_to_cloud'
	pub_task_to_cloud_queue = publishers_config.get(pub_task_to_cloud_topic, {}).get('queue_size', 2) if publishers_config else 2
	if ros_version == 'ros2':
		# Event: 诊断/调试消息，使用 volatile
		pub_task_to_cloud = ros_node.create_publisher_wrapper(Event, pub_task_to_cloud_topic, ros_node._get_qos_diagnostic(pub_task_to_cloud_queue))
	else:
		pub_task_to_cloud = rospy.Publisher(pub_task_to_cloud_topic, Event, queue_size=pub_task_to_cloud_queue)
	
	pub_err_topic = '/error_code'
	pub_err_queue = publishers_config.get(pub_err_topic, {}).get('queue_size', 1) if publishers_config else 1
	if ros_version == 'ros2':
		# Event: 诊断/调试消息，使用 volatile
		pub_err = ros_node.create_publisher_wrapper(Event, pub_err_topic, ros_node._get_qos_diagnostic(pub_err_queue))
	else:
		pub_err = rospy.Publisher(pub_err_topic, Event, queue_size=pub_err_queue)
	
	pub_init_pose_topic = '/initialpose'
	pub_init_pose_queue = publishers_config.get(pub_init_pose_topic, {}).get('queue_size', 1) if publishers_config else 1
	if ros_version == 'ros2':
		# PoseWithCovarianceStamped: 导航/定位消息，使用 volatile
		if not isinstance(PoseWithCovarianceStamped, type):
			raise TypeError(f"PoseWithCovarianceStamped 必须是类，但得到: {type(PoseWithCovarianceStamped)}")
		msg_module = getattr(PoseWithCovarianceStamped, '__module__', '')
		debug_print(f"创建 Publisher - Topic: {pub_init_pose_topic}, 消息类型: {PoseWithCovarianceStamped}, 模块: {msg_module}")
		if 'geometry_msgs' not in msg_module:
			raise ImportError(f"PoseWithCovarianceStamped 模块不正确: {msg_module}，可能导入了 ROS1 消息类型")
		pub_init_pose = ros_node.create_publisher_wrapper(PoseWithCovarianceStamped, pub_init_pose_topic, ros_node._get_qos_navigation(pub_init_pose_queue))
	else:
		pub_init_pose = rospy.Publisher(pub_init_pose_topic, PoseWithCovarianceStamped, queue_size=pub_init_pose_queue)
	
	pub_end_loop_topic = '/end_loop'
	pub_end_loop_queue = publishers_config.get(pub_end_loop_topic, {}).get('queue_size', 1) if publishers_config else 1
	if ros_version == 'ros2':
		# Event: 诊断/调试消息，使用 volatile
		pub_end_loop = ros_node.create_publisher_wrapper(Event, pub_end_loop_topic, ros_node._get_qos_diagnostic(pub_end_loop_queue))
	else:
		pub_end_loop = rospy.Publisher(pub_end_loop_topic, Event, queue_size=pub_end_loop_queue)
	
	pub_msg_to_traj_topic = '/traj_manage'
	pub_msg_to_traj_queue = publishers_config.get(pub_msg_to_traj_topic, {}).get('queue_size', 2) if publishers_config else 2
	if ros_version == 'ros2':
		# Event: 诊断/调试消息，使用 volatile
		pub_msg_to_traj = ros_node.create_publisher_wrapper(Event, pub_msg_to_traj_topic, ros_node._get_qos_diagnostic(pub_msg_to_traj_queue))
	else:
		pub_msg_to_traj = rospy.Publisher(pub_msg_to_traj_topic, Event, queue_size=pub_msg_to_traj_queue)
	
	pub_routing_request_topic = '/legion_bridge/RoutingRequest'
	pub_routing_request_queue = publishers_config.get(pub_routing_request_topic, {}).get('queue_size', 10) if publishers_config else 10
	if ros_version == 'ros2':
		# RoutingRequest: 触发/控制指令，使用 transient_local
		pub_routing_request = ros_node.create_publisher_wrapper(RoutingRequest, pub_routing_request_topic, ros_node._get_qos_trigger(pub_routing_request_queue))
	else:
		pub_routing_request = rospy.Publisher(pub_routing_request_topic, RoutingRequest, queue_size=pub_routing_request_queue)

	# 创建 Subscribers
	sub_location_topic = '/localization/global_fusion/Location'
	if ros_version == 'ros2':
		# Location: 周期性状态消息，使用 volatile
		ros_node.create_subscription_wrapper(Location, sub_location_topic, handle_location, ros_node._get_qos_periodic_status(10))
	else:
		rospy.Subscriber(sub_location_topic, Location, handle_location)
	
	sub_chassis_topic = '/drivers/canbus/Chassis'
	if ros_version == 'ros2':
		# Chassis: 周期性状态消息，使用 volatile
		ros_node.create_subscription_wrapper(Chassis, sub_chassis_topic, handle_chassis, ros_node._get_qos_periodic_status(10))
	else:
		rospy.Subscriber(sub_chassis_topic, Chassis, handle_chassis)
	
	sub_vehicle_topic = '/drivers/canbus/Vehicle'
	if ros_version == 'ros2':
		# Vehicle: 周期性状态消息，使用 volatile
		ros_node.create_subscription_wrapper(Vehicle, sub_vehicle_topic, handle_vehicle, ros_node._get_qos_periodic_status(10))
	else:
		rospy.Subscriber(sub_vehicle_topic, Vehicle, handle_vehicle)
	
	sub_imu_topic = '/imu/Event'
	if ros_version == 'ros2':
		# Event: 诊断/调试消息，使用 volatile
		ros_node.create_subscription_wrapper(Event, sub_imu_topic, handle_imu_event, ros_node._get_qos_diagnostic(10))
	else:
		rospy.Subscriber(sub_imu_topic, Event, handle_imu_event)
	# rospy.Subscriber('/task_operate',Event,handle_cloud_operate)
	
	sub_adc_trajectory_topic = '/planning/ADCTrajectory'
	if ros_version == 'ros2':
		# ADCTrajectory: 大数据量消息，使用 volatile
		ros_node.create_subscription_wrapper(ADCTrajectory, sub_adc_trajectory_topic, handle_adctrajectory, ros_node._get_qos_large_data(10))
	else:
		rospy.Subscriber(sub_adc_trajectory_topic, ADCTrajectory, handle_adctrajectory)
	
	# 根据配置文件决定是否订阅告警管理器topic
	sub_warning_manager_topic = '/warning_manager'
	if global_config and 'ros' in global_config:
		subscribers_config = global_config['ros'].get('subscribers', {})
		warning_manager_config = subscribers_config.get(sub_warning_manager_topic, {})
		warning_manager_enabled = warning_manager_config.get('enabled', True)  # 默认启用
	else:
		warning_manager_enabled = True  # 默认启用
	
	if warning_manager_enabled:
		if ros_version == 'ros2':
			# Events (warning_manager): 触发/一次性消息，使用 transient_local
			ros_node.create_subscription_wrapper(Events, sub_warning_manager_topic, handle_warning_manager, ros_node._get_qos_trigger(10))
		else:
			rospy.Subscriber(sub_warning_manager_topic, Events, handle_warning_manager)
		debug_print(f"已订阅告警管理器topic: {sub_warning_manager_topic}")
	else:
		debug_print(f"告警管理器topic已禁用: {sub_warning_manager_topic}")

	# 从配置文件读取 WebSocket 配置
	if global_config and 'websocket' in global_config:
		ws_config = global_config['websocket']
		control_host = ws_config.get('control', {}).get('host', '0.0.0.0')
		control_port = ws_config.get('control', {}).get('port', 8282)
		data_host = ws_config.get('data', {}).get('host', '0.0.0.0')
		data_port = ws_config.get('data', {}).get('port', 8283)
	else:
		control_host = '0.0.0.0'
		control_port = 8282
		data_host = '0.0.0.0'
		data_port = 8283

	serv = websockets.serve(control, control_host, control_port)
	serv2 = websockets.serve(task1, data_host, data_port)

	# try:
	#     _thread.start_new_thread(mqtt_sub, ('mqtt_sub',client_sub,))
	# except Exception:
	#     log_to_file("Error: 无法启动 mqtt_sub 线程:{}".format(Exception))

	asyncio.get_event_loop().run_until_complete(serv)
	asyncio.get_event_loop().run_until_complete(serv2)
	# asyncio.get_event_loop().run_until_complete(serv3)

	# map转base64
	map_storage = trans_map_to_base64(mode=1)
	debug_print(map_storage.keys())
	for i in map_storage.keys():
		debug_print(f'{i}:{len(map_storage[i])}')

	# 在单独的线程中启动 ROS spin（仅 ROS2 需要）
	if ros_version == 'ros2':
		import threading
		ros_spin_thread = threading.Thread(target=ros_spin, daemon=True)
		ros_spin_thread.start()
		debug_print("ROS2 spin 线程已启动")

	# 设置信号处理以优雅关闭
	def signal_handler(sig, frame):
		debug_print("接收到关闭信号，正在清理...")
		import rclpy
		if ros_version == 'ros2' and rclpy.ok():
			rclpy.shutdown()
		loop = asyncio.get_event_loop()
		for task in asyncio.all_tasks(loop):
			task.cancel()
		loop.stop()
		import os
		os._exit(0)

	import signal
	signal.signal(signal.SIGINT, signal_handler)
	signal.signal(signal.SIGTERM, signal_handler)

	asyncio.get_event_loop().run_forever()

	debug_print("程序已关闭")

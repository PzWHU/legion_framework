import asyncio
import websockets
import time
import rospy
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
sys.path.append('../../message/ros/devel/lib/python2.7/dist-packages')
# from wx_app_msg.msg import WxAppControl
from geometry_msgs.msg import PoseWithCovarianceStamped
from std_msgs.msg import Header
from ros_interface.msg import Event
from ros_interface.msg import Events
from ros_interface.msg import Location
from ros_interface.msg import Chassis
from ros_interface.msg import Vehicle
from ros_interface.msg import RoutingRequest, KeyPoint, ADCTrajectory



#存储当前轨迹到文件
def dump_traj(msg):
	global task_traj_file_name
	with open(task_traj_file_name, 'w') as f:
		f.write(str(msg))



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
	print('quit')
	sys.exit()



#发布 Event 消息
def event_pub(pub,code,msg,log=True):
	global cur_cycly_number
	t = time.time()
	sec = math.floor(t)
	nsec = math.floor((t-sec)*10**9)
	wsmsg = Event()
	wsmsg.timestamp.sec=sec
	wsmsg.timestamp.nsec=nsec
	wsmsg.code=code
	wsmsg.reason=msg
	pub.publish(wsmsg)
	
	if "召回" in msg:
		cur_cycly_number=0

	if log:
		if "自动驾驶" in msg or "清扫" in msg or "洒水" in msg or "warning" in msg or "召回" in msg:
			log_to_file(msg)



#发布 PoseWithCovarianceStamped 消息
def pose_pub(pub,x,y,theta):
	pose_msg = PoseWithCovarianceStamped()
	pose_msg.header.frame_id='map'
	pose_msg.pose.pose.position.x=x
	pose_msg.pose.pose.position.y=y
	print(f"pub pose:{x},{y}")
	pose_msg.pose.covariance[0]=0.25
	pose_msg.pose.covariance[6*1+1]=0.25
	pose_msg.pose.covariance[6*5+5]=0.06853891945200942
	# heading 转 四元素
	pose_msg.pose.pose.orientation.z=math.sin(theta/2)
	pose_msg.pose.pose.orientation.w=math.cos(theta/2)
	pub.publish(pose_msg)



#切换当前使用的map
def shift_map(map_name,double_init_point_flag=0):
	global map_path, config, global_cur_map
	try:
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
			os.system('echo titan4 | sudo -S sudo supervisorctl stop DRIVER:location_2d')
			os.system('echo titan4 | sudo -S sudo supervisorctl stop DRIVER:location_3d')
			os.system('echo titan4 | sudo -S sudo supervisorctl start DRIVER:location_2d')
		elif map_type == 3:
			os.system('echo titan4 | sudo -S sudo supervisorctl stop DRIVER:location_2d')
			os.system('echo titan4 | sudo -S sudo supervisorctl stop DRIVER:location_3d')
			os.system('echo titan4 | sudo -S sudo supervisorctl start DRIVER:location_3d')
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
		print(f"battery:{battery}")
		is_battery_low = 1
	last_battery = battery

	if is_battery_low == 1:
		if not rospy.is_shutdown():
			try:
				is_on_auto_driving = False
				is_battery_low = -1
				event_pub(pub_err,4,"warning-battery low")
				time.sleep(0.1)
				event_pub(pub_wx_controll,10,"清扫关闭-电量低告警")
				time.sleep(0.1)
				if not is_multi_task :
					event_pub(pub_wx_controll,40,"结束自动驾驶-电量低告警")
				time.sleep(0.1)
				event_pub(pub_end_loop,1,'召回车辆-电量低')
				time.sleep(0.1)
				# event_pub(pub_wx_controll,41,"开始自动驾驶-自动召回")
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
		if not rospy.is_shutdown():
			pass
			# event_pub(pub_wx_controll,41,"开始自动驾驶-定位状态恢复")
			#print("auto drive on: location status recover")
	#定位失效时停止自动驾驶并发出告警
	if location_is_valid == 3 and is_location_err == 0:
		if not rospy.is_shutdown():
			is_on_auto_driving = False
			is_location_err = 1
			event_pub(pub_err,1,"warning-location status err")
			time.sleep(0.1)
			event_pub(pub_wx_controll,10,"清扫关闭-定位状态告警")
			time.sleep(0.1)
			event_pub(pub_wx_controll,40,"结束自动驾驶-定位状态告警")
			print("auto drive off: location status err")
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
				event_pub(pub_wx_controll,10,"清扫关闭-车辆静止告警")
				time.sleep(0.1)
				event_pub(pub_wx_controll,40,"结束自动驾驶-车辆静止告警")
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
				"data":
				{
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
		
		await websocket.send(res_json)
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
				print('send_map_and_traj')
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
				print("send_map_pic")
				# pic_str = encode_image(map_dir)
				pic_str = map_storage[map_dir.split('/')[-2]][0]
				res_dict = {"type":"map_pic","data":pic_str}
				res_json = json.dumps(res_dict)
				await websocket.send(res_json)
				send_map_pic = 0
				map_dir=""
			except Exception:
				traceback.print_exc()
			print('send_map_pic_to_client:',map_dir)

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
				print('send_map_json_to_client:',send_map_json_to_client)
			except Exception:
				traceback.print_exc()

		#发送任务配置文件
		if send_task_json_to_client == 1:
			try:
				print("send_task_json")
				with open(config,'r') as f:
					res = json.load(f)
				res_dict = {"type":"task_json","data":res}
				res_json = json.dumps(res_dict)
				print(res_json)
				await websocket.send(res_json)
				send_task_json_to_client = 0
			except Exception:
				traceback.print_exc()

		if send_map_split_to_client == 1:
			print(f'send_map_split_to_client：{send_map_split_to_client}')
			print(f'split_map_name:{split_map_name}')
			print(f'map_storage:{map_storage.keys()}')
			try:
				if len(split_map_name) > 0 and (split_map_name in map_storage.keys()):
					res_dict = {"type":"split_map", "data":map_storage[split_map_name]}
					res_json = json.dumps(res_dict)
					await websocket.send(res_json)
					split_map_name = ''
					# print(f'res_dict:{res_dict}')
					send_map_split_to_client = 0
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
	print("client break connection send_location")	



#数据相关 websocket 回调
async def get_data(websocket):
	global config
	global map_path
	# global site_list
	if not websocket.closed:
		while(not websocket.closed):
			await asyncio.sleep(1)

			if websocket.closed:
				break

			msg = await websocket.recv()

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
						print("in record_traj_end")
						map_name = msg_l[1].split('|')[1]
						map_json = map_path + map_name +'/test.json'
						traj_name = msg_l[1].split('|')[0]
						record_loc = 0
						# 轨迹数据存入txt
						with open (traj_path + traj_name + '.txt','w') as f:
							for data in loc_l:
								f.write("'" + data + "'")
								f.write('\n')
						try:
							# 更新map json
							file_data = ''

							with open(map_json, 'r') as f:
								file_data = json.load(f)
								traj_json_data = {}
								traj_json_data['id'] = len(file_data['track_list'])+1
								traj_json_data['name'] = traj_name
								traj_json_data['path'] = traj_path
								traj_json_data['type'] = 'record'
								traj_json_data['length'] = len(traj_list)
								# traj_json_data['points'] = traj_list
								file_data['track_list'].append(traj_json_data)
								print(file_data)

							with open(map_json,'w') as f:
								print(file_data)
								json.dump(file_data, f)

							# 录制完轨迹后，对轨迹进行平滑处理，并保存为二进制文件（解决每次开始任务耗时久的问题）
							cmd_str = f'python3 filter_adctraj.py {traj_path}{traj_name}.txt'
							cmd_res = os.system(cmd_str)
							print(f"cmd_res:{cmd_res}")
							if cmd_res == 0:
							# traj_name = '3dtest_1'
							# TODO
								cmd_str2 = f'python3 to_osm_map.py {traj_path}{traj_name}.pc {traj_path}{traj_name}.osm'
								cmd_res2 = os.system(cmd_str2)
								print(f"cmd_res2:{cmd_res2}")

						except Exception:
							raise

						loc_l=[]
						traj_list = []
			
					elif msg_l[0] == 'record_map_start':
						# os.system('echo titan4 | sudo -S sudo supervisorctl stop DRIVER:location')
						os.system('echo titan4 | sudo -S sudo supervisorctl stop DRIVER:location_2d')
						os.system('echo titan4 | sudo -S sudo supervisorctl start DRIVER:mapping')
						is_on_mapping = 1
						mapping_name = msg_l[1]
				
					elif msg_l[0] == 'record_map_end':
						try:
							mapping_name = msg_l[1]
							save_location_map(mapping_name)
							is_on_mapping = 0
							mapping_count = 0
							os.system('echo titan4 | sudo -S sudo supervisorctl stop DRIVER:mapping')
							# shift_map(mapping_name)
						except Exception:
							traceback.print_exc()
					
					elif msg_l[0] == 'get_map_pic':
						print("get_map_pic")
						global send_map_pic
						global map_dir
						global server_map_json
						if msg_l[1] in map_l:
							send_map_pic = 1
							map_dir = map_path + msg_l[1]+'/test.png'
							server_map_json = map_path + msg_l[1]+'/test.json'
		
					elif msg_l[0] == 'get_map_json':
						print("get_map_json")
						send_map_json_to_client = 1
						map_name = msg_l[1]
						server_map_json = map_path + map_name + '/test.json'
				
					elif msg_l[0] == 'get_task_json':
						print("get_task_json")
						send_task_json_to_client = 1
			
					elif msg_l[0] == 'shift_map':
						print("shift_map")
						print(msg_l[1])
						shift_map(msg_l[1])
				
					elif msg_l[0] == 'set_speed':
						print(f"set_speed:{msg_l[1]}")
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
							print('get send_task_json')
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
			# print('send_map_pic:',send_map_pic)
			# print('send_map_json_to_client:',send_map_json_to_client)
			# print("get_data recieve msg: {}".format(msg))
			
	print("client break connection get_data")	



async def task1(websocket,path):
	t = time.asctime(time.localtime(time.time()))
	print(str(t)+" socket 连接成功 端口8283 func: task1")
	a = asyncio.get_event_loop().create_task(get_data(websocket))
	b = asyncio.get_event_loop().create_task(send_location(websocket))
	await a
	await b
	print("client break connection 8283")



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
		event_pub(pub_wx_controll,40,f"结束自动驾驶-任务_{role}")	
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
	print('start_task')
	print("site_list:",site_list)
	try:
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
						print('next_site_index = 0')
				elif len(traj_l_) != 0 and len(site_l_) == 0:
					task_type = 'traj'
		
		# 循环
		if next_site_index > len(site_list)-1:
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
	except Exception:
			traceback.print_exc()

	# 发下一个站点给 routing 模块
	print("create_routing_request")
	request = create_routing_request(cur_latitude, cur_longitude, theta, next_latitude , next_longitude, next_theta)
	print("publish")
	pub_routing_request.publish(request)

	if log == 1:
		event_pub(pub_wx_controll,41,f"开始自动驾驶-任务_{role}")
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
	print(str(t)+" socket 连接成功 端口 8282 func: control")

	async for message in websocket: 
		print("control recieve msg: {}".format(message))
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
						print("start_task(msg_l[1], role='wxapp',clean=0, water=0, log=1)")
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
			if not rospy.is_shutdown():
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

				event_pub(pub_wx_controll,code,msg)
		continue
	#连接中断发一帧数据，停车
	if websocket.closed:
		print("client break connection 8282")
		if not rospy.is_shutdown():
			event_pub(pub_wx_controll,5,"socket break")
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
			event_pub(pub_wx_controll,10,"清扫关闭-IMU状态告警")
			time.sleep(0.1)
			event_pub(pub_wx_controll,40,"结束自动驾驶-IMU状态告警")
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
    # 创建一个RoutingRequest实例并填充数据
	request = RoutingRequest()
	start = KeyPoint()
	start.ele = 0.0
	start.heading = theta
	start.latitude = cur_latitude
	start.longitude = cur_longitude
	start.name = "start"
	goal = KeyPoint()
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
				event_pub(pub_wx_controll,40,f"结束自动驾驶-{i.reason}告警")

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

	print(f"map_name_l:{map_name_l}")
	
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

			im_width = im.size[0]
			im_height = im.size[1]
			i,w = divmod(im_width,pic_w)
			j,h = divmod(im_height,pic_h)
			i+=1
			j+=1
			# print(f'i:{i},j:{j}')

			for j_ in range(1, j+1):
				for i_ in range(1, i+1):
					img_byte_arr = io.BytesIO()
					sub_im = im.crop( ((i_-1)*pic_w, (j_-1)*pic_h, i_*pic_w, j_*pic_h) )
					sub_im.save(img_byte_arr, format='PNG')
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
	print("min_x: ",min_x)
	print("min_y:",min_y)
	print("pixel_per_meter: ",pixel_per_meter)
	x = (u - pad_pixels) / pixel_per_meter + min_x
	y = max_y - (v - pad_pixels) / pixel_per_meter
	return x, y

def xy_to_ll(x,y):
	import utm
	global origin_x, origin_y
	origin_x_, origin_y_, zone_num, zone_letter = utm.from_latlon(origin_x, origin_y)
	print("origin_x_:",origin_x_)
	print("origin_y_:",origin_y_)
	dx = origin_x_ + x
	dy = origin_y_ + y
	lat, lon = utm.to_latlon(dx, dy, zone_num, zone_letter)
	print("lat:",lat)
	print("lon:",lon)
	return lat, lon

def trans_uv_to_ll(u,v):
	x,y = uv_to_xy(u,v)
	print(f'u,v:{u},{v}')
	print(f'x,y:{x},{y}')
	return xy_to_ll(x,y)
	

if __name__ == '__main__':

	vehicle_id = 'P1'
	# TODO 
	# 小满计算好后填空
	#建图起点经纬度
	origion_pos = [0, 0, 0]
	print(f"SoftWare Version: 1.0.1-{vehicle_id}")
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
	cur_x = 0
	cur_y = 0
	cur_latitude = 0
	cur_longitude = 0

	last_x = 0
	last_y = 0
	same_frame_count = 0
	data_same_frame_count_thresh = 500
	loc_error_cout = 0
	loc_error_cout_thresh = 5
	theta = 0
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

	config = './wx_server_config.json'
	# get_config(config)

	traj_path = '/home/titan/legion_framework/modules/drivers/wxapp/traj/'
	# traj_path = '/home/lx/workspace/legion-framework/modules/drivers/wxapp/traj/'

	map_path = '/home/titan/legion_framework/modules/drivers/wxapp/map/'
	# map_path = '/home/lx/workspace/legion-framework/modules/drivers/wxapp/map/'

	# location_map_path = '/home/titan/legion_framework/modules/drivers/location/2d_mapping_location/map/'

	location_map_path = '/media/data/map/'
	location_process_path = '/home/titan/legion_framework/modules/drivers/location/slam_tool_ws/'

	location_path = '/home/titan/legion_framework/modules/drivers/location/2d_mapping_location/'
	# location_path = '/home/lx/workspace/legion-framework/modules/drivers/location/2d_mapping_location/'

	log_path = '/media/data/sweeper/log/'

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

	rospy.init_node('wx_app_driver',anonymous=False)
	pub_wx_controll = rospy.Publisher("/driver/wx_app_contrll",Event,queue_size=10)
	pub_task_to_cloud = rospy.Publisher("/task_to_cloud",Event,queue_size=2)
	pub_err = rospy.Publisher("/error_code",Event,queue_size=1)
	pub_init_pose = rospy.Publisher('/initialpose',PoseWithCovarianceStamped,queue_size=1)
	pub_end_loop = rospy.Publisher("/end_loop",Event,queue_size=1)
	pub_msg_to_traj = rospy.Publisher("/traj_manage",Event,queue_size=2)
	pub_routing_request = rospy.Publisher('/legion_bridge/RoutingRequest', RoutingRequest, queue_size=10)

	rospy.Subscriber('/localization/global_fusion/Location',Location,handle_location)
	rospy.Subscriber('/drivers/canbus/Chassis',Chassis,handle_chassis)
	rospy.Subscriber('/drivers/canbus/Vehicle',Vehicle,handle_vehicle)
	rospy.Subscriber('/imu/Event',Event,handle_imu_event)
	# rospy.Subscriber('/task_operate',Event,handle_cloud_operate)
	rospy.Subscriber('/planning/ADCTrajectory',ADCTrajectory,handle_adctrajectory)
	rospy.Subscriber('/warning_manager',Events,handle_warning_manager)

	signal.signal(signal.SIGTERM,quit)
	signal.signal(signal.SIGINT,quit)

	serv = websockets.serve(control,'192.168.1.101',8282)
	serv2 = websockets.serve(task1,'192.168.1.101',8283)
	# serv3 = websockets.serve(task2,'192.168.1.101',8284)

	# serv = websockets.serve(control,'172.22.105.28',8282)
	# serv2 = websockets.serve(task1,'172.22.105.28',8283)
	# serv3 = websockets.serve(task2,'172.22.105.28',8284)

	# try:
	#     _thread.start_new_thread(mqtt_sub, ('mqtt_sub',client_sub,))
	# except Exception:
	#     log_to_file("Error: 无法启动 mqtt_sub 线程:{}".format(Exception))

	asyncio.get_event_loop().run_until_complete(serv)
	asyncio.get_event_loop().run_until_complete(serv2)
	# asyncio.get_event_loop().run_until_complete(serv3)

	# map转base64
	map_storage = trans_map_to_base64(mode=1)
	print(map_storage.keys())
	for i in map_storage.keys():
		print(f'{i}:{len(map_storage[i])}')

	asyncio.get_event_loop().run_forever()

	rospy.spin()


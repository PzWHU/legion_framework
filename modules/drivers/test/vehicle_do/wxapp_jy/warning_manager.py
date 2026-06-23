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
from ros_interface.msg import UssObstacleList
from sensor_msgs.msg import Imu
from sensor_msgs.msg import PointCloud2



def quit():
	sys.exit()

# 解析车端数据，赋给全局变量
def handle_location(msg):
	global location_count
	location_count += 1

def handle_top_lidar(msg):
	global top_lidar_count
	top_lidar_count += 1

def handle_front_lidar(msg):
	global front_lidar_count
	front_lidar_count += 1

def handle_uss(msg):
	global uss_count
	uss_count += 1

def handle_imu(msg):
	global imu_count
	imu_count += 1

def handle_radar(msg):
	global radar_count
	radar_count += 1

def handle_acamera(msg):
	global camera_count
	camera_count += 1

def warning_detection(name):
	global location_count, top_lidar_count, front_lidar_count, imu_count, uss_count, radar_count, camera_count
	global events_l


	while(1):
		events_l = []
		if location_count <  location_hz and (location_hz - location_count)/(location_count + 1e-4) > hz_err_ratio:
			eve = create_event(10,'定位帧率异常')	
			events_l.append(eve)
		if top_lidar_count < top_lidar_hz and (top_lidar_hz -top_lidar_count)/(top_lidar_count + 1e-4) > hz_err_ratio:
			eve = create_event(20,'top_lidar雷达帧率异常')
			events_l.append(eve)
		if imu_count < imu_hz and (imu_hz -imu_count)/(imu_count + 1e-4) > hz_err_ratio:
			eve = create_event(30,'imu帧率异常')
			events_l.append(eve)
		if uss_count < uss_hz and (uss_hz -uss_count)/(uss_count + 1e-4) > hz_err_ratio:
			eve = create_event(40,'uss帧率异常')
			events_l.append(eve)
		# if radar_count < radar_hz and (radar_hz -radar_count)/(radar_count + 1e-4) > hz_err_ratio:
		# 	eve = create_event(50,'radar帧率异常')
		# 	events_l.append(eve)
		# if camera_count < camera_hz and (camera_hz -camera_count)/(camera_count + 1e-4) > hz_err_ratio:
		# 	eve = create_event(60,'camera帧率异常')
		# 	events_l.append(eve)
		if front_lidar_count < front_lidar_hz and (front_lidar_hz -front_lidar_count)/(front_lidar_count + 1e-4) > hz_err_ratio:
			eve = create_event(70,'front激光雷达帧率异常')
			events_l.append(eve)

		reset_count() 

		events = Events()
		events.events = events_l
		pub_app_control_command.publish(events)

		time.sleep(1)

def create_event(code ,msg):
	t = time.time()
	sec = math.floor(t)
	nsec = math.floor((t-sec)*10**9)
	res = Event()
	res.timestamp.sec=sec
	res.timestamp.nsec=nsec
	res.code=code
	res.reason=msg
	return res

def reset_count():
	global location_count, top_lidar_count, front_lidar_count, uss_count, imu_count, radar_count, camera_count
	location_count = 0
	top_lidar_count = 0
	front_lidar_count = 0
	uss_count = 0
	imu_count = 0
	radar_count = 0
	camera_count = 0



if __name__ == '__main__':

	hz_err_ratio = 0.5

	location_hz = 20
	top_lidar_hz = 10
	front_lidar_hz = 10
	uss_hz = 6
	imu_hz = 100
	radar_hz = 10
	camera_hz = 10

	location_count = 0
	top_lidar_count = 0
	front_lidar_count = 0
	uss_count = 0
	imu_count = 0
	radar_count = 0
	camera_count = 0

	events_l = []

	rospy.init_node('warning_manager',anonymous=False)

	pub_app_control_command = rospy.Publisher('/warning_manager',Events,queue_size=1)

	# 订阅车端消息  检测传感器状态
	rospy.Subscriber('/localization/global_fusion/Location',Location,handle_location)
	rospy.Subscriber('/lslidar_point_cloud',PointCloud2,handle_top_lidar)
	rospy.Subscriber('//lslidar_point_cloud_ch32',PointCloud2,handle_front_lidar)
	rospy.Subscriber('/uss_driver/UssObstacleList',UssObstacleList,handle_uss)
	rospy.Subscriber('/imu',Imu,handle_imu)
	# 预留
	# rospy.Subscriber('/Radar',Event,handle_radar)
	# rospy.Subscriber('/Camera',Event,handle_acamera)

	try:
		_thread.start_new_thread(warning_detection, ('warning_detection',))
	except Exception:
		exit("Error: 无法启动 mqtt_sub 线程:{}".format(Exception))

	signal.signal(signal.SIGTERM,quit)
	signal.signal(signal.SIGINT,quit)

	rospy.spin()

 

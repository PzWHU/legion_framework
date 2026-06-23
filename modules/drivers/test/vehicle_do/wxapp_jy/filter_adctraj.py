import sys
import math
import rospy
import threading
import signal
import pickle
sys.path.append('../../message/ros/devel/lib/python2.7/dist-packages')
from ros_interface.msg import ADCTrajectory, TrajectoryPoint, Location, Chassis

yaw_weight = 3.184   # 每弧度转化为距离偏差的权重，单位m/rad 3.184
cur_pose = Location()  # 当前定位
location_init = False


def quit():
	print('quit')
	sys.exit()

def poly_traj(x, y, level):
    import numpy as np

    x_ = np.array(x)
    y_ = np.array(y)
    z = np.polyfit(x_, y_, level)
    res_y = []
    res_x = []
    for i in x_:
        res = 0
        for index in range(level + 1):
            res += z[index] * i ** (level - index)
        res_y.append(res)
        res_x.append(i)
    return res_x, res_y


def get_data_from_file(txt_name):
    world_x = []
    world_y = []
    theta_l = []
    last_x = None
    last_y = None
    with open(txt_name, "r+") as f:
        lines = f.readlines()
        print(f"line count:{len(lines)}")
        for line in lines:
            if line:
                str_ = [i.strip() for i in line.split(":")]
                x_value = float(str_[2].split(",")[0].strip())
                y_value = float(str_[3].split(",")[0].strip())
                theta_value = float(str_[4].split(",")[0].strip())
                if not last_x and not last_y:
                    last_x = x_value
                    last_y = y_value
                    world_x.append(x_value)
                    world_y.append(y_value)
                    theta_l.append(theta_value)
                else:
                    # 去重
                    if abs(last_x - x_value) < 0.001 and abs(last_y - y_value) < 0.001:
                        continue
                    else:
                        world_x.append(x_value)
                        world_y.append(y_value)
                        theta_l.append(theta_value)
                        last_x = x_value
                        last_y = y_value
    wx = [data - world_x[0] for data in world_x]
    wy = [data - world_y[0] for data in world_y]
    s_l = [
        ((wx[i] - wx[i - 1]) ** 2 + (wy[i] - wy[i - 1]) ** 2) ** 0.5
        for i in range(1, len(wx))
    ]
    s_l_ = []
    for i in range(len(wx)):
        if i == 0:
            s_l_.append(0)
        else:
            res = 0
            for j in range(i):
                res += s_l[j]
            s_l_.append(res)

    return world_x, world_y, theta_l, s_l_


def filter(x_l, y_l, t_l, s_l, theta_thresh):
    del_x_back = None
    del_y_back = None
    del_x_front = None
    del_y_front = None

    world_x_ = []
    world_y_ = []
    res_t_ = []
    res_s_ = []

    start = 0
    before = 0
    after = 1

    bad_data = []

    while start < len(x_l):
        if after >= len(x_l):
            break
        if start == 0:
            world_x_.append(x_l[start])
            world_y_.append(y_l[start])
            res_t_.append(t_l[start])
            res_s_.append(s_l[start])
            after += 1
        else:
            del_x_back = x_l[start] - x_l[before]
            del_y_back = y_l[start] - y_l[before]
            del_x_front = x_l[after] - x_l[start]
            del_y_front = y_l[after] - y_l[start]
            theta = math.acos(
                (del_x_back * del_x_front + del_y_back * del_y_front)
                / (
                    (del_x_back**2 + del_y_back**2) ** 0.5
                    * (del_x_front**2 + del_y_front**2) ** 0.5
                    + 0.00001
                )
            )
            # print(f'theta2:{theta/math.pi*180}')
            if theta / math.pi * 180 >= theta_thresh:
                bad_data.append(start)
                print(f"before: {x_l[before]} , {y_l[before]}")
                print(f"after: {x_l[after]} , {y_l[after]}")
                start += 1
                after += 1
                continue
            world_x_.append(x_l[start])
            world_y_.append(y_l[start])
            res_t_.append(t_l[start])
            res_s_.append(s_l[start])
            before += 1
            # 跳过异常点
            for index in bad_data:
                if before == index:
                    before += 1
            after += 1
        start += 1

    return world_x_, world_y_, res_t_, res_s_


def poly_fit(x_l, y_l, len_traj, level):
    res_x_ = []
    res_y_ = []

    for i in range(0, len(x_l), len_traj):
        if i + len_traj < len(x_l):
            if len(res_x_):
                # x_l_ = [res_x_[-1]] + x_l[i:i+len_traj-1]
                # y_l_ = [res_y_[-1]] + y_l[i:i+len_traj-1]
                x_l_ = x_l[i : i + len_traj]
                y_l_ = y_l[i : i + len_traj]
            else:
                x_l_ = x_l[i : i + len_traj]
                y_l_ = y_l[i : i + len_traj]

            x_, y_ = poly_traj(x_l_, y_l_, level)

            res_x_ += x_
            res_y_ += y_

        else:
            x_ = x_l[i:]
            y_ = y_l[i:]

            res_x_ += x_
            res_y_ += y_

    return res_x_, res_y_


def pubdata(pub, rospy, rate, world_x, world_y, theta_l, s_l_):
    while not rospy.is_shutdown():
        adc = ADCTrajectory()
        traj_p_l = []
        s_l_last = s_l_[0]
        for index, data in enumerate(world_x):
            p = TrajectoryPoint()
            if index == 0:
                p.v = 1.2
                p.a = 0.2
                p.da = 1.0
                p.path_point.index = index
                p.path_point.x = world_x[0]
                p.path_point.y = world_y[0]
                p.path_point.theta = theta_l[0]
                p.path_point.s = s_l_[0]
                s_l_last = s_l_[0]
            if index > 0 and s_l_[index] != s_l_last:
                p.v = 1.2
                p.a = 0.2
                p.da = 1.0
                p.path_point.index = index
                p.path_point.x = data
                p.path_point.y = world_y[index]
                p.path_point.theta = theta_l[index]
                p.path_point.s = s_l_[index]
                s_l_last = s_l_[index]
                traj_p_l.append(p)
        adc.trajectory_points = traj_p_l
        adc.driving_mode = 1
        pub.publish(adc)
        rate.sleep()


def pubdata_slice(pub, world_x, world_y, theta_l, s_l_):
    adc = ADCTrajectory()
    traj_p_l = []
    s_l_last = s_l_[0]
    for index, data in enumerate(world_x):
        p = TrajectoryPoint()
        if index == 0:
            p.v = 0.65
            p.a = 0.35
            p.da = 1.0
            p.gear = 1
            # p.path_point.index = index
            p.path_point.x = world_x[0]
            p.path_point.y = world_y[0]
            p.path_point.theta = theta_l[0]
            p.path_point.s = s_l_[0]
            s_l_last = s_l_[0]
        if index > 0 and s_l_[index] != s_l_last:
            p.v = 0.65
            p.a = 0.35
            p.gear = 1
            if abs(steering_value) >= steering_thresh - 5:
                p.v = 0.4
            p.da = 1.0
            # p.path_point.index = index
            p.path_point.x = data
            p.path_point.y = world_y[index]
            p.path_point.theta = theta_l[index]
            p.path_point.s = s_l_[index]
            s_l_last = s_l_[index]
            traj_p_l.append(p)
    adc.trajectory_points = traj_p_l
    adc.driving_mode = 1
    pub.publish(adc)


def get_slice(index, front_len, back_len, xl, yl, tl, sl):
    size_all = len(xl)
    back_index = index - back_len
    if back_index < 0:
        back_index = 0
    front_index = index + front_len
    if front_index > size_all - 1:
        front_index = size_all - 1
    return (
        back_index,
        xl[back_index : front_index + 1],
        yl[back_index : front_index + 1],
        tl[back_index : front_index + 1],
        sl[back_index : front_index + 1],
    )

def thread_func():
    """spin"""
    rospy.spin()


if __name__ == "__main__":

    if len(sys.argv[1].split(".")) < 2:
        print("useage:python3 send_traj.py xxx.txt  请输入txt文件作为参数！")
        sys.exit()
    elif sys.argv[1].split(".")[-1] != "txt":
        print("useage:python3 send_traj.py xxx.txt  请输入txt文件作为参数！")
        sys.exit()

    signal.signal(signal.SIGTERM,quit)
    signal.signal(signal.SIGINT,quit)    

    txt_name = sys.argv[1]

    level = 20
    litle_traj_points_count = 10
    steering_value = 0
    steering_thresh = 120

    res_x, res_y, res_theta, res_s = get_data_from_file(txt_name)
    res_x_f, res_y_f, res_t_f, res_s_f = filter(res_x, res_y, res_theta, res_s, 15)
    res_x_p, res_y_p = poly_fit(res_x_f, res_y_f, litle_traj_points_count, level)
    res_x_f2, res_y_f2, res_t_f2, res_s_f2 = filter(
        res_x_p, res_y_p, res_t_f, res_s_f, 30
    )

    data_dic = {}
    data_dic['res_x_f2'] = res_x_f2
    data_dic['res_y_f2'] = res_y_f2
    data_dic['res_t_f2'] = res_t_f2
    data_dic['res_s_f2'] = res_s_f2

    with open(f'{".".join(sys.argv[1].split(".")[0:-1])}.pc', 'wb') as f:
        pickle.dump(data_dic, f)


    # cur_start_index = 0
    # local_match_index = 0
    # slice_length_front = 250
    # slice_length_back = 5
    # # 此处定义循环，轮询车辆位置和切片匹配情况来进行下发
    # first_send = True

    # match_tolerance = 2.0

    # local_x_l = []
    # local_y_l = []
    # local_t_l = []
    # local_s_l = []

    # print("main function start")
    # print("loop : "+str(loop_flag))
    # # pubdata_slice(pub, res_x_f2, res_y_f2, res_t_f2, res_s_f2)
    # max_index=len(res_x_f2)-1
    # thread_=threading.Thread(target=thread_func)
    # while True:
    #     if location_init:
    #         if first_send:
    #             # first send采用全局匹配
    #             dis, index = point2line_match(
    #                 cur_pose.utm_position.x,
    #                 cur_pose.utm_position.y,
    #                 cur_pose.heading,
    #                 res_x_f2,
    #                 res_y_f2,
    #                 res_t_f2,
    #                 match_tolerance,
    #             )
    #             if index >= 0:
    #                 # 匹配成功
    #                 # 此处的里程s可能需要改为局部的里程
    #                 cur_index = index
    #                 (
    #                     cur_start_index,
    #                     local_x_l,
    #                     local_y_l,
    #                     local_t_l,
    #                     local_s_l,
    #                 ) = get_slice(
    #                     cur_index,
    #                     slice_length_front,
    #                     slice_length_back,
    #                     res_x_f2,
    #                     res_y_f2,
    #                     res_t_f2,
    #                     res_s_f2,
    #                 )
    #                 print("first send "+str(cur_index))
    #                 pubdata_slice(pub, local_x_l, local_y_l, local_t_l, local_s_l)
    #                 first_send = False
    #         else:
    #             # 后续则采用在前一次切片的基础上匹配，然后更新
    #             local_match_dis, local_match_index = point2line_dis(
    #                 cur_pose.utm_position.x,
    #                 cur_pose.utm_position.y,
    #                 cur_pose.heading,
    #                 local_x_l,
    #                 local_y_l,
    #                 local_t_l,
    #             )
    #             if local_match_dis < match_tolerance:
    #                 # 更新 索引
    #                 cur_index = cur_start_index + local_match_index
    #                 # 更新切片
    #                 (
    #                     cur_start_index,
    #                     local_x_l,
    #                     local_y_l,
    #                     local_t_l,
    #                     local_s_l,
    #                 ) = get_slice(
    #                     cur_index,
    #                     slice_length_front,
    #                     slice_length_back,
    #                     res_x_f2,
    #                     res_y_f2,
    #                     res_t_f2,
    #                     res_s_f2,
    #                 )
    #                 print("update "+str(cur_index))
    #                 pubdata_slice(pub, local_x_l, local_y_l, local_t_l, local_s_l)
    #                 if loop_flag:
    #                     if(cur_index+slice_length_front>max_index):
    #                         first_send=True
    #                         # 强制从头开始匹配
    #     else:
    #         print("location not init")
    #     rate.sleep()

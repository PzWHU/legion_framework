#!/usr/bin/env python3
# -*- coding:utf-8 -*-
import pickle
import lxml.etree as ET
import utm
import math
import sys

# import xml.etree.ElementTree as ET

n = len(sys.argv)
if n != 3:
    exit("USAGE: python3 to_osm_map.py [pc文件路径] [osm存储路径]")
input_pc_path = sys.argv[1]
output_osm_path = sys.argv[2]

id_count = 0
pretty_print = True

origin_lon = 114.08191418260574
origin_lat = 30.444914811173376

shift_width = 0.5
max_distance = 0.5

# input_pc_path = "./data/t0_0.pc"
# output_osm_path = "./data/test.osm"

# Proj(proj='utm',zone=10,ellps='WGS84', preserve_units=False) # use kwargs
origin_x, origin_y, zone_num, zone_letter = utm.from_latlon(origin_lat, origin_lon)


def to_xy(lat, lon):
    global origin_x, origin_y
    dx, dy = utm.from_latlon(lat, lon)
    x = dx - origin_x
    y = dy - origin_y
    return x, y


def to_ll(x, y):
    global origin_x, origin_y, zone_num, zone_letter
    dx = origin_x + x
    dy = origin_y + y
    lat, lon = utm.to_latlon(dx, dy, zone_num, zone_letter)
    return lat, lon


def get_unique_id() -> str:
    global id_count
    id_count = id_count + 1
    return str(id_count)


def dis(p1, p2):
    """
    计算两个点之间的距离，单位为米。

    Args:
        p1 (Tuple[float, float, yaw]): 第一个点，为(x, y, yaw)元组。
        p2 (Tuple[float, float, yaw]): 第二个点，为(x, y, yaw)元组。

    Returns:
        float: 两个点之间的距离，单位为米。
    """
    # 提取x和y坐标，忽略yaw
    x1, y1 = p1[:2]
    x2, y2 = p2[:2]

    # 使用勾股定理计算两点间距离
    distance = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

    return distance


def thin_out_points(points, max_distance):
    """
    按照最大距离抽稀轨迹点

    Args:
        points (List[Tuple[float, float, float]]): 轨迹点列表，每个点为(x, y, yaw)元组。
        max_distance (float): 抽稀时使用的最大允许距离，单位为米。

    Returns:
        List[Tuple[float, float, float]]: 抽稀后的轨迹点列表。
    """
    if not points:
        return []

    # 确保按顺序处理轨迹点
    result = [points[0]]  # 保留起始点

    for current_point in points[1:]:
        prev_point = result[-1]
        # 计算当前点与结果列表中最后一个点之间的距离
        distance = dis(prev_point, current_point)
        if distance >= max_distance:
            result.append(current_point)
    return result


def shift_point_by_yaw(x, y, yaw, shift_distance):
    # 计算向左平移后的坐标
    x_left = x - shift_distance * math.sin(yaw)
    y_left = y + shift_distance * math.cos(yaw)

    # 计算向右平移后的坐标
    x_right = x + shift_distance * math.sin(yaw)
    y_right = y - shift_distance * math.cos(yaw)

    # 返回向左和平移后的坐标点
    return x_left, y_left, x_right, y_right


# 读取轨迹
traj_path = input_pc_path
with open(traj_path, "rb") as f:
    data_dic = pickle.load(f)
    res_x_f2 = data_dic["res_x_f2"]  # x
    res_y_f2 = data_dic["res_y_f2"]  # y
    res_t_f2 = data_dic["res_t_f2"]  # theta
    res_s_f2 = data_dic["res_s_f2"]  # mileage
    max_index = len(res_x_f2) - 1
    print("load trajectory success at : " + traj_path)
    points = [(x, y, yaw) for x, y, yaw, in zip(res_x_f2, res_y_f2, res_t_f2)]

#st_p  = [points[0][0], points[0][1], points[0][2]/math.pi*180]
#end_p = [points[-1][0], points[-1][1], points[-1][2]/math.pi*180]

filter_points = thin_out_points(points, max_distance)
osm = ET.Element("osm")
osm.set("version", "0.6")
osm.set("upload", "false")
osm.set("generator", "nobody")
osm.set("origin_lat", str(origin_lat))
osm.set("origin_lon", str(origin_lon))

lway = ET.Element("way")
lway_id = get_unique_id()
lway.set("id", lway_id)
lway.set("action", "modify")
lway.set("visible", "true")
lway.set("version", "1")

rway = ET.Element("way")
rway_id = get_unique_id()
rway.set("id", rway_id)
rway.set("action", "modify")
rway.set("visible", "true")
rway.set("version", "1")

relation=ET.Element("relation")
relation.set("id", get_unique_id())
relation.set("action", "modify")
relation.set("version", "1")


for point in filter_points:
    x, y, yaw = point
    lpoint_element = ET.Element("node")
    rpoint_element = ET.Element("node")
    lpid = get_unique_id()
    rpid = get_unique_id()
    # lpoint
    lpoint_element.set("id", lpid)
    lpoint_element.set("action", "modify")
    lpoint_element.set("visible", "true")
    lpoint_element.set("version", "1")

    # rpoint
    rpoint_element.set("id", rpid)
    rpoint_element.set("action", "modify")
    rpoint_element.set("visible", "true")
    rpoint_element.set("version", "1")
    # 坐标
    x_left, y_left, x_right, y_right = shift_point_by_yaw(x, y, yaw, shift_width)
    l_lat, l_lon = to_ll(x_left, y_left)
    r_lat, r_lon = to_ll(x_right, y_right)
    lpoint_element.set("lat", str(l_lat))
    lpoint_element.set("lon", str(l_lon))
    rpoint_element.set("lat", str(r_lat))
    rpoint_element.set("lon", str(r_lon))

    osm.append(lpoint_element)  # 加入地图
    osm.append(rpoint_element)
    l_sub_nd = ET.SubElement(lway, "nd")  # 加入线
    l_sub_nd.set("ref", lpid)
    r_sub_nd = ET.SubElement(rway, "nd")
    r_sub_nd.set("ref", rpid)
osm.append(lway)
osm.append(rway)
# 添加member子元素
member_left = ET.SubElement(relation, "member")
member_left.set("type", "way")
member_left.set("ref", lway_id)
member_left.set("role", "left")

member_right = ET.SubElement(relation, "member")
member_right.set("type", "way")
member_right.set("ref", rway_id)
member_right.set("role", "right")

# 添加tag子元素
tag_location = ET.SubElement(relation, "tag")
tag_location.set("k", "location")
tag_location.set("v", "urban")

tag_speed_limit = ET.SubElement(relation, "tag")
tag_speed_limit.set("k", "speed_limit")
tag_speed_limit.set("v", "5")

tag_subtype = ET.SubElement(relation, "tag")
tag_subtype.set("k", "subtype")
tag_subtype.set("v", "road")

tag_type = ET.SubElement(relation, "tag")
tag_type.set("k", "type")
tag_type.set("v", "lanelet")
osm.append(relation)
tree = ET.ElementTree(osm)
tree.write(
    output_osm_path,
    encoding="utf-8",
    xml_declaration=True,
    pretty_print=True,
)

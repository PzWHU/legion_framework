std_msgs/Header   header     # 消息头
int32   vehicle_type     # 车辆类型
string   vid     # 车辆 ID
string   vehicle_num     # 车牌号
string   oid     # OBU ID
int32   operation     # 运行模式
float64   totalcurrent     # 总电流， 单位： A  (0~20 000)
float64   batterysoc     # 电池电量值（％）
float64   totalvoltage     # 电池电压（单位：V）
float64   recharge     # 续航里程，单位： Km
int32   dcdc     # DC-DC 状态
uint32   resistance     # 绝缘电阻，单位：kΩ(0~60 000)
uint8[] seats # 座椅状态数组： 0.未坐人， 1.坐人
int32   servicemode     # 车辆运营模式
int32[] seat_belt # 主驾驶位安全带状态
int32   engine_status     # 发动机状态
float64   battery_voltage     # 电压 (V)
float64   battery_ammeter     # 电流 (A)
float64   battery_consumption     # 能耗 (W)
float64   battery_probe     # 探针数
float64[] battery_temperatures # 温度数组，无则数组为空
float64   battery_h_tepemperatures     # 最高温度
float64   battery_ltepemperatures     # 最低温度
float64   battery_probe_code     # 最高温度探针代号
float64   battery_h_concentration     # 最高浓度
float64   battery_c_sensor_code     # 最高浓度传感器代号
float64   battery_stress     # 最高压力
float64   battery_s_sensor_code     # 最高压力传感器代号
float64   battery_h_dc_dc     # 高压 DC/DC 状态
float64   battery_capacity     # 电池包额定容量(mAh )
float64   airconditioning_idx     # 电压 (V)
float64   airconditioning_status     # 电流 (A)
int32   airconditioning_model     # 空调模式状态
int32   airconditioning_volume     # 风量状态
int32   airconditioning_defrost     # 除霜/除雾模式状态
int32[] door_status # 车门状态
float64   rsrp     # 接收功率
float64   sinr     # 信噪比
float64   uspeed     # 上行速率，单位： Mbit/s
float64   dspeed     # 下行速率， 单位： Mbit/s
float64   loss     # 丢包率，单位：%
uint32   delay     # 网络延时，单位： ms
uint8   refrigeration_idx     # 序号
int32   refrigeration_status     # 状态， 0.关， 1.开
float64   refrigeration_stemp     # 设定温度
float64   refrigeration_ctemp     # 实际温度
uint8   driving_motor_idx     # 电机序号
uint8   driving_motor_status     # 电机状态： 0:异常； 1：正常
float64   driving_motor_ctemp     # 控制器温度，单位：℃
uint8   driving_motor_rspeed     # 转速 (r/min)
float64   driving_motor_torque     # 转矩 ( N.m)
float64   driving_motor_etemp     # 电机温度 (℃)
float64   driving_motor_voltage     # 电压 (V)
float64   driving_motor_ammeter     # 电流 (A)
int32   outline_lamp_status     # 示廊灯
int32   warning_lamp_status     # 双闪灯状态
int32   backlight_lamp_status     # 照明灯状态
int32   brakelamp_lamp_status     # 制动灯状态
int32   left_lamp_status     # 左转向灯状态
int32   right_lamp_status     # 右转向灯状态
int32   front_touch_status     # 前防撞条状态
int32   rear_touch_status     # 后防撞条状态
int32   horn_status     # 喇叭状态
int8   length     # 车长
int8   width     # 车宽
int8   height     # 车高
int32   cleanup_switch_status     # 清扫功能开关状态
int32   watering_switch_status     # 洒水功能开关状态
int32   trash_can_status     # 垃圾箱满状态指示
int32   water_tank_status     # 水箱空状态指示
int32   water_add_switch_status     # 加水开关状态指示
int32   hatch_unlock_switch_status     # 舱盖解锁开关状态指示
float64   water_tank_level     # 水箱液位状态
int32   hmi_highbeam     # HMI灯光指令
int32   hmi_cleanup     # HMI清扫指令
int32   hmi_watering     # HMI洒水指令
int32   bms_charge_status     # 充电状态
int32   emergency_button_status     # 车辆急停按钮状态
int32   traction     # 牵引力控制系统作用状态  0-系统未装备或不可用 1-系统处于关闭状态 2-系统处于开启状态，但未触发3-系统被触发，处于作用状态
int32   abs     # ABS作用状态 0-系统未装备或不可用  1-系统处于关闭状态 2-系统处于开启状态，但未触发 3-系统被触发，处于作用状态
int32   scs     # 车身稳定控制系统作用状态  0-系统未装备或不可用 1-系统处于关闭状态 2-系统处于开启状态，但未触发3-系统被触发，处于作用状态
int32   brake_boost     # 刹车助力系统作用状态  0-系统未装备或不可用 1-系统处于关闭状态 2-系统处于开启状态，但未触发 3-系统被触发，处于作用状态
int32   aux_brakes     # 刹车辅助系统作用状态（通常为手刹）  0-未装备或不可用 1-系统处于关闭状态 2-系统处于开启状态，但未触发 3-保留

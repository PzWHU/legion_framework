# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/Vehicle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'seats'
# Member 'seat_belt'
# Member 'battery_temperatures'
# Member 'door_status'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Vehicle(type):
    """Metaclass of message 'Vehicle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_interface.msg.Vehicle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Vehicle(metaclass=Metaclass_Vehicle):
    """Message class 'Vehicle'."""

    __slots__ = [
        '_header',
        '_vehicle_type',
        '_vid',
        '_vehicle_num',
        '_oid',
        '_operation',
        '_totalcurrent',
        '_batterysoc',
        '_totalvoltage',
        '_recharge',
        '_dcdc',
        '_resistance',
        '_seats',
        '_servicemode',
        '_seat_belt',
        '_engine_status',
        '_battery_voltage',
        '_battery_ammeter',
        '_battery_consumption',
        '_battery_probe',
        '_battery_temperatures',
        '_battery_h_tepemperatures',
        '_battery_ltepemperatures',
        '_battery_probe_code',
        '_battery_h_concentration',
        '_battery_c_sensor_code',
        '_battery_stress',
        '_battery_s_sensor_code',
        '_battery_h_dc_dc',
        '_battery_capacity',
        '_airconditioning_idx',
        '_airconditioning_status',
        '_airconditioning_model',
        '_airconditioning_volume',
        '_airconditioning_defrost',
        '_door_status',
        '_rsrp',
        '_sinr',
        '_uspeed',
        '_dspeed',
        '_loss',
        '_delay',
        '_refrigeration_idx',
        '_refrigeration_status',
        '_refrigeration_stemp',
        '_refrigeration_ctemp',
        '_driving_motor_idx',
        '_driving_motor_status',
        '_driving_motor_ctemp',
        '_driving_motor_rspeed',
        '_driving_motor_torque',
        '_driving_motor_etemp',
        '_driving_motor_voltage',
        '_driving_motor_ammeter',
        '_outline_lamp_status',
        '_warning_lamp_status',
        '_backlight_lamp_status',
        '_brakelamp_lamp_status',
        '_left_lamp_status',
        '_right_lamp_status',
        '_front_touch_status',
        '_rear_touch_status',
        '_horn_status',
        '_length',
        '_width',
        '_height',
        '_cleanup_switch_status',
        '_watering_switch_status',
        '_trash_can_status',
        '_water_tank_status',
        '_water_add_switch_status',
        '_hatch_unlock_switch_status',
        '_water_tank_level',
        '_hmi_highbeam',
        '_hmi_cleanup',
        '_hmi_watering',
        '_bms_charge_status',
        '_emergency_button_status',
        '_traction',
        '_abs',
        '_scs',
        '_brake_boost',
        '_aux_brakes',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vehicle_type': 'int32',
        'vid': 'string',
        'vehicle_num': 'string',
        'oid': 'string',
        'operation': 'int32',
        'totalcurrent': 'double',
        'batterysoc': 'double',
        'totalvoltage': 'double',
        'recharge': 'double',
        'dcdc': 'int32',
        'resistance': 'uint32',
        'seats': 'sequence<uint8>',
        'servicemode': 'int32',
        'seat_belt': 'sequence<int32>',
        'engine_status': 'int32',
        'battery_voltage': 'double',
        'battery_ammeter': 'double',
        'battery_consumption': 'double',
        'battery_probe': 'double',
        'battery_temperatures': 'sequence<double>',
        'battery_h_tepemperatures': 'double',
        'battery_ltepemperatures': 'double',
        'battery_probe_code': 'double',
        'battery_h_concentration': 'double',
        'battery_c_sensor_code': 'double',
        'battery_stress': 'double',
        'battery_s_sensor_code': 'double',
        'battery_h_dc_dc': 'double',
        'battery_capacity': 'double',
        'airconditioning_idx': 'double',
        'airconditioning_status': 'double',
        'airconditioning_model': 'int32',
        'airconditioning_volume': 'int32',
        'airconditioning_defrost': 'int32',
        'door_status': 'sequence<int32>',
        'rsrp': 'double',
        'sinr': 'double',
        'uspeed': 'double',
        'dspeed': 'double',
        'loss': 'double',
        'delay': 'uint32',
        'refrigeration_idx': 'uint8',
        'refrigeration_status': 'int32',
        'refrigeration_stemp': 'double',
        'refrigeration_ctemp': 'double',
        'driving_motor_idx': 'uint8',
        'driving_motor_status': 'uint8',
        'driving_motor_ctemp': 'double',
        'driving_motor_rspeed': 'uint8',
        'driving_motor_torque': 'double',
        'driving_motor_etemp': 'double',
        'driving_motor_voltage': 'double',
        'driving_motor_ammeter': 'double',
        'outline_lamp_status': 'int32',
        'warning_lamp_status': 'int32',
        'backlight_lamp_status': 'int32',
        'brakelamp_lamp_status': 'int32',
        'left_lamp_status': 'int32',
        'right_lamp_status': 'int32',
        'front_touch_status': 'int32',
        'rear_touch_status': 'int32',
        'horn_status': 'int32',
        'length': 'int8',
        'width': 'int8',
        'height': 'int8',
        'cleanup_switch_status': 'int32',
        'watering_switch_status': 'int32',
        'trash_can_status': 'int32',
        'water_tank_status': 'int32',
        'water_add_switch_status': 'int32',
        'hatch_unlock_switch_status': 'int32',
        'water_tank_level': 'double',
        'hmi_highbeam': 'int32',
        'hmi_cleanup': 'int32',
        'hmi_watering': 'int32',
        'bms_charge_status': 'int32',
        'emergency_button_status': 'int32',
        'traction': 'int32',
        'abs': 'int32',
        'scs': 'int32',
        'brake_boost': 'int32',
        'aux_brakes': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vehicle_type = kwargs.get('vehicle_type', int())
        self.vid = kwargs.get('vid', str())
        self.vehicle_num = kwargs.get('vehicle_num', str())
        self.oid = kwargs.get('oid', str())
        self.operation = kwargs.get('operation', int())
        self.totalcurrent = kwargs.get('totalcurrent', float())
        self.batterysoc = kwargs.get('batterysoc', float())
        self.totalvoltage = kwargs.get('totalvoltage', float())
        self.recharge = kwargs.get('recharge', float())
        self.dcdc = kwargs.get('dcdc', int())
        self.resistance = kwargs.get('resistance', int())
        self.seats = array.array('B', kwargs.get('seats', []))
        self.servicemode = kwargs.get('servicemode', int())
        self.seat_belt = array.array('i', kwargs.get('seat_belt', []))
        self.engine_status = kwargs.get('engine_status', int())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.battery_ammeter = kwargs.get('battery_ammeter', float())
        self.battery_consumption = kwargs.get('battery_consumption', float())
        self.battery_probe = kwargs.get('battery_probe', float())
        self.battery_temperatures = array.array('d', kwargs.get('battery_temperatures', []))
        self.battery_h_tepemperatures = kwargs.get('battery_h_tepemperatures', float())
        self.battery_ltepemperatures = kwargs.get('battery_ltepemperatures', float())
        self.battery_probe_code = kwargs.get('battery_probe_code', float())
        self.battery_h_concentration = kwargs.get('battery_h_concentration', float())
        self.battery_c_sensor_code = kwargs.get('battery_c_sensor_code', float())
        self.battery_stress = kwargs.get('battery_stress', float())
        self.battery_s_sensor_code = kwargs.get('battery_s_sensor_code', float())
        self.battery_h_dc_dc = kwargs.get('battery_h_dc_dc', float())
        self.battery_capacity = kwargs.get('battery_capacity', float())
        self.airconditioning_idx = kwargs.get('airconditioning_idx', float())
        self.airconditioning_status = kwargs.get('airconditioning_status', float())
        self.airconditioning_model = kwargs.get('airconditioning_model', int())
        self.airconditioning_volume = kwargs.get('airconditioning_volume', int())
        self.airconditioning_defrost = kwargs.get('airconditioning_defrost', int())
        self.door_status = array.array('i', kwargs.get('door_status', []))
        self.rsrp = kwargs.get('rsrp', float())
        self.sinr = kwargs.get('sinr', float())
        self.uspeed = kwargs.get('uspeed', float())
        self.dspeed = kwargs.get('dspeed', float())
        self.loss = kwargs.get('loss', float())
        self.delay = kwargs.get('delay', int())
        self.refrigeration_idx = kwargs.get('refrigeration_idx', int())
        self.refrigeration_status = kwargs.get('refrigeration_status', int())
        self.refrigeration_stemp = kwargs.get('refrigeration_stemp', float())
        self.refrigeration_ctemp = kwargs.get('refrigeration_ctemp', float())
        self.driving_motor_idx = kwargs.get('driving_motor_idx', int())
        self.driving_motor_status = kwargs.get('driving_motor_status', int())
        self.driving_motor_ctemp = kwargs.get('driving_motor_ctemp', float())
        self.driving_motor_rspeed = kwargs.get('driving_motor_rspeed', int())
        self.driving_motor_torque = kwargs.get('driving_motor_torque', float())
        self.driving_motor_etemp = kwargs.get('driving_motor_etemp', float())
        self.driving_motor_voltage = kwargs.get('driving_motor_voltage', float())
        self.driving_motor_ammeter = kwargs.get('driving_motor_ammeter', float())
        self.outline_lamp_status = kwargs.get('outline_lamp_status', int())
        self.warning_lamp_status = kwargs.get('warning_lamp_status', int())
        self.backlight_lamp_status = kwargs.get('backlight_lamp_status', int())
        self.brakelamp_lamp_status = kwargs.get('brakelamp_lamp_status', int())
        self.left_lamp_status = kwargs.get('left_lamp_status', int())
        self.right_lamp_status = kwargs.get('right_lamp_status', int())
        self.front_touch_status = kwargs.get('front_touch_status', int())
        self.rear_touch_status = kwargs.get('rear_touch_status', int())
        self.horn_status = kwargs.get('horn_status', int())
        self.length = kwargs.get('length', int())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.cleanup_switch_status = kwargs.get('cleanup_switch_status', int())
        self.watering_switch_status = kwargs.get('watering_switch_status', int())
        self.trash_can_status = kwargs.get('trash_can_status', int())
        self.water_tank_status = kwargs.get('water_tank_status', int())
        self.water_add_switch_status = kwargs.get('water_add_switch_status', int())
        self.hatch_unlock_switch_status = kwargs.get('hatch_unlock_switch_status', int())
        self.water_tank_level = kwargs.get('water_tank_level', float())
        self.hmi_highbeam = kwargs.get('hmi_highbeam', int())
        self.hmi_cleanup = kwargs.get('hmi_cleanup', int())
        self.hmi_watering = kwargs.get('hmi_watering', int())
        self.bms_charge_status = kwargs.get('bms_charge_status', int())
        self.emergency_button_status = kwargs.get('emergency_button_status', int())
        self.traction = kwargs.get('traction', int())
        self.abs = kwargs.get('abs', int())
        self.scs = kwargs.get('scs', int())
        self.brake_boost = kwargs.get('brake_boost', int())
        self.aux_brakes = kwargs.get('aux_brakes', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.vehicle_type != other.vehicle_type:
            return False
        if self.vid != other.vid:
            return False
        if self.vehicle_num != other.vehicle_num:
            return False
        if self.oid != other.oid:
            return False
        if self.operation != other.operation:
            return False
        if self.totalcurrent != other.totalcurrent:
            return False
        if self.batterysoc != other.batterysoc:
            return False
        if self.totalvoltage != other.totalvoltage:
            return False
        if self.recharge != other.recharge:
            return False
        if self.dcdc != other.dcdc:
            return False
        if self.resistance != other.resistance:
            return False
        if self.seats != other.seats:
            return False
        if self.servicemode != other.servicemode:
            return False
        if self.seat_belt != other.seat_belt:
            return False
        if self.engine_status != other.engine_status:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.battery_ammeter != other.battery_ammeter:
            return False
        if self.battery_consumption != other.battery_consumption:
            return False
        if self.battery_probe != other.battery_probe:
            return False
        if self.battery_temperatures != other.battery_temperatures:
            return False
        if self.battery_h_tepemperatures != other.battery_h_tepemperatures:
            return False
        if self.battery_ltepemperatures != other.battery_ltepemperatures:
            return False
        if self.battery_probe_code != other.battery_probe_code:
            return False
        if self.battery_h_concentration != other.battery_h_concentration:
            return False
        if self.battery_c_sensor_code != other.battery_c_sensor_code:
            return False
        if self.battery_stress != other.battery_stress:
            return False
        if self.battery_s_sensor_code != other.battery_s_sensor_code:
            return False
        if self.battery_h_dc_dc != other.battery_h_dc_dc:
            return False
        if self.battery_capacity != other.battery_capacity:
            return False
        if self.airconditioning_idx != other.airconditioning_idx:
            return False
        if self.airconditioning_status != other.airconditioning_status:
            return False
        if self.airconditioning_model != other.airconditioning_model:
            return False
        if self.airconditioning_volume != other.airconditioning_volume:
            return False
        if self.airconditioning_defrost != other.airconditioning_defrost:
            return False
        if self.door_status != other.door_status:
            return False
        if self.rsrp != other.rsrp:
            return False
        if self.sinr != other.sinr:
            return False
        if self.uspeed != other.uspeed:
            return False
        if self.dspeed != other.dspeed:
            return False
        if self.loss != other.loss:
            return False
        if self.delay != other.delay:
            return False
        if self.refrigeration_idx != other.refrigeration_idx:
            return False
        if self.refrigeration_status != other.refrigeration_status:
            return False
        if self.refrigeration_stemp != other.refrigeration_stemp:
            return False
        if self.refrigeration_ctemp != other.refrigeration_ctemp:
            return False
        if self.driving_motor_idx != other.driving_motor_idx:
            return False
        if self.driving_motor_status != other.driving_motor_status:
            return False
        if self.driving_motor_ctemp != other.driving_motor_ctemp:
            return False
        if self.driving_motor_rspeed != other.driving_motor_rspeed:
            return False
        if self.driving_motor_torque != other.driving_motor_torque:
            return False
        if self.driving_motor_etemp != other.driving_motor_etemp:
            return False
        if self.driving_motor_voltage != other.driving_motor_voltage:
            return False
        if self.driving_motor_ammeter != other.driving_motor_ammeter:
            return False
        if self.outline_lamp_status != other.outline_lamp_status:
            return False
        if self.warning_lamp_status != other.warning_lamp_status:
            return False
        if self.backlight_lamp_status != other.backlight_lamp_status:
            return False
        if self.brakelamp_lamp_status != other.brakelamp_lamp_status:
            return False
        if self.left_lamp_status != other.left_lamp_status:
            return False
        if self.right_lamp_status != other.right_lamp_status:
            return False
        if self.front_touch_status != other.front_touch_status:
            return False
        if self.rear_touch_status != other.rear_touch_status:
            return False
        if self.horn_status != other.horn_status:
            return False
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.cleanup_switch_status != other.cleanup_switch_status:
            return False
        if self.watering_switch_status != other.watering_switch_status:
            return False
        if self.trash_can_status != other.trash_can_status:
            return False
        if self.water_tank_status != other.water_tank_status:
            return False
        if self.water_add_switch_status != other.water_add_switch_status:
            return False
        if self.hatch_unlock_switch_status != other.hatch_unlock_switch_status:
            return False
        if self.water_tank_level != other.water_tank_level:
            return False
        if self.hmi_highbeam != other.hmi_highbeam:
            return False
        if self.hmi_cleanup != other.hmi_cleanup:
            return False
        if self.hmi_watering != other.hmi_watering:
            return False
        if self.bms_charge_status != other.bms_charge_status:
            return False
        if self.emergency_button_status != other.emergency_button_status:
            return False
        if self.traction != other.traction:
            return False
        if self.abs != other.abs:
            return False
        if self.scs != other.scs:
            return False
        if self.brake_boost != other.brake_boost:
            return False
        if self.aux_brakes != other.aux_brakes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def vehicle_type(self):
        """Message field 'vehicle_type'."""
        return self._vehicle_type

    @vehicle_type.setter
    def vehicle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vehicle_type' field must be an integer in [-2147483648, 2147483647]"
        self._vehicle_type = value

    @builtins.property
    def vid(self):
        """Message field 'vid'."""
        return self._vid

    @vid.setter
    def vid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vid' field must be of type 'str'"
        self._vid = value

    @builtins.property
    def vehicle_num(self):
        """Message field 'vehicle_num'."""
        return self._vehicle_num

    @vehicle_num.setter
    def vehicle_num(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vehicle_num' field must be of type 'str'"
        self._vehicle_num = value

    @builtins.property
    def oid(self):
        """Message field 'oid'."""
        return self._oid

    @oid.setter
    def oid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'oid' field must be of type 'str'"
        self._oid = value

    @builtins.property
    def operation(self):
        """Message field 'operation'."""
        return self._operation

    @operation.setter
    def operation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'operation' field must be an integer in [-2147483648, 2147483647]"
        self._operation = value

    @builtins.property
    def totalcurrent(self):
        """Message field 'totalcurrent'."""
        return self._totalcurrent

    @totalcurrent.setter
    def totalcurrent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'totalcurrent' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'totalcurrent' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._totalcurrent = value

    @builtins.property
    def batterysoc(self):
        """Message field 'batterysoc'."""
        return self._batterysoc

    @batterysoc.setter
    def batterysoc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'batterysoc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'batterysoc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._batterysoc = value

    @builtins.property
    def totalvoltage(self):
        """Message field 'totalvoltage'."""
        return self._totalvoltage

    @totalvoltage.setter
    def totalvoltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'totalvoltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'totalvoltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._totalvoltage = value

    @builtins.property
    def recharge(self):
        """Message field 'recharge'."""
        return self._recharge

    @recharge.setter
    def recharge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'recharge' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'recharge' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._recharge = value

    @builtins.property
    def dcdc(self):
        """Message field 'dcdc'."""
        return self._dcdc

    @dcdc.setter
    def dcdc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dcdc' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dcdc' field must be an integer in [-2147483648, 2147483647]"
        self._dcdc = value

    @builtins.property
    def resistance(self):
        """Message field 'resistance'."""
        return self._resistance

    @resistance.setter
    def resistance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'resistance' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'resistance' field must be an unsigned integer in [0, 4294967295]"
        self._resistance = value

    @builtins.property
    def seats(self):
        """Message field 'seats'."""
        return self._seats

    @seats.setter
    def seats(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'seats' array.array() must have the type code of 'B'"
            self._seats = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'seats' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._seats = array.array('B', value)

    @builtins.property
    def servicemode(self):
        """Message field 'servicemode'."""
        return self._servicemode

    @servicemode.setter
    def servicemode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servicemode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'servicemode' field must be an integer in [-2147483648, 2147483647]"
        self._servicemode = value

    @builtins.property
    def seat_belt(self):
        """Message field 'seat_belt'."""
        return self._seat_belt

    @seat_belt.setter
    def seat_belt(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'seat_belt' array.array() must have the type code of 'i'"
            self._seat_belt = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'seat_belt' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._seat_belt = array.array('i', value)

    @builtins.property
    def engine_status(self):
        """Message field 'engine_status'."""
        return self._engine_status

    @engine_status.setter
    def engine_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engine_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'engine_status' field must be an integer in [-2147483648, 2147483647]"
        self._engine_status = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_voltage = value

    @builtins.property
    def battery_ammeter(self):
        """Message field 'battery_ammeter'."""
        return self._battery_ammeter

    @battery_ammeter.setter
    def battery_ammeter(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_ammeter' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_ammeter' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_ammeter = value

    @builtins.property
    def battery_consumption(self):
        """Message field 'battery_consumption'."""
        return self._battery_consumption

    @battery_consumption.setter
    def battery_consumption(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_consumption' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_consumption' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_consumption = value

    @builtins.property
    def battery_probe(self):
        """Message field 'battery_probe'."""
        return self._battery_probe

    @battery_probe.setter
    def battery_probe(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_probe' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_probe' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_probe = value

    @builtins.property
    def battery_temperatures(self):
        """Message field 'battery_temperatures'."""
        return self._battery_temperatures

    @battery_temperatures.setter
    def battery_temperatures(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'battery_temperatures' array.array() must have the type code of 'd'"
            self._battery_temperatures = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'battery_temperatures' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._battery_temperatures = array.array('d', value)

    @builtins.property
    def battery_h_tepemperatures(self):
        """Message field 'battery_h_tepemperatures'."""
        return self._battery_h_tepemperatures

    @battery_h_tepemperatures.setter
    def battery_h_tepemperatures(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_h_tepemperatures' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_h_tepemperatures' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_h_tepemperatures = value

    @builtins.property
    def battery_ltepemperatures(self):
        """Message field 'battery_ltepemperatures'."""
        return self._battery_ltepemperatures

    @battery_ltepemperatures.setter
    def battery_ltepemperatures(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_ltepemperatures' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_ltepemperatures' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_ltepemperatures = value

    @builtins.property
    def battery_probe_code(self):
        """Message field 'battery_probe_code'."""
        return self._battery_probe_code

    @battery_probe_code.setter
    def battery_probe_code(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_probe_code' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_probe_code' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_probe_code = value

    @builtins.property
    def battery_h_concentration(self):
        """Message field 'battery_h_concentration'."""
        return self._battery_h_concentration

    @battery_h_concentration.setter
    def battery_h_concentration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_h_concentration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_h_concentration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_h_concentration = value

    @builtins.property
    def battery_c_sensor_code(self):
        """Message field 'battery_c_sensor_code'."""
        return self._battery_c_sensor_code

    @battery_c_sensor_code.setter
    def battery_c_sensor_code(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_c_sensor_code' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_c_sensor_code' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_c_sensor_code = value

    @builtins.property
    def battery_stress(self):
        """Message field 'battery_stress'."""
        return self._battery_stress

    @battery_stress.setter
    def battery_stress(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_stress' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_stress' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_stress = value

    @builtins.property
    def battery_s_sensor_code(self):
        """Message field 'battery_s_sensor_code'."""
        return self._battery_s_sensor_code

    @battery_s_sensor_code.setter
    def battery_s_sensor_code(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_s_sensor_code' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_s_sensor_code' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_s_sensor_code = value

    @builtins.property
    def battery_h_dc_dc(self):
        """Message field 'battery_h_dc_dc'."""
        return self._battery_h_dc_dc

    @battery_h_dc_dc.setter
    def battery_h_dc_dc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_h_dc_dc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_h_dc_dc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_h_dc_dc = value

    @builtins.property
    def battery_capacity(self):
        """Message field 'battery_capacity'."""
        return self._battery_capacity

    @battery_capacity.setter
    def battery_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_capacity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_capacity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_capacity = value

    @builtins.property
    def airconditioning_idx(self):
        """Message field 'airconditioning_idx'."""
        return self._airconditioning_idx

    @airconditioning_idx.setter
    def airconditioning_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'airconditioning_idx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'airconditioning_idx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._airconditioning_idx = value

    @builtins.property
    def airconditioning_status(self):
        """Message field 'airconditioning_status'."""
        return self._airconditioning_status

    @airconditioning_status.setter
    def airconditioning_status(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'airconditioning_status' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'airconditioning_status' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._airconditioning_status = value

    @builtins.property
    def airconditioning_model(self):
        """Message field 'airconditioning_model'."""
        return self._airconditioning_model

    @airconditioning_model.setter
    def airconditioning_model(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'airconditioning_model' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'airconditioning_model' field must be an integer in [-2147483648, 2147483647]"
        self._airconditioning_model = value

    @builtins.property
    def airconditioning_volume(self):
        """Message field 'airconditioning_volume'."""
        return self._airconditioning_volume

    @airconditioning_volume.setter
    def airconditioning_volume(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'airconditioning_volume' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'airconditioning_volume' field must be an integer in [-2147483648, 2147483647]"
        self._airconditioning_volume = value

    @builtins.property
    def airconditioning_defrost(self):
        """Message field 'airconditioning_defrost'."""
        return self._airconditioning_defrost

    @airconditioning_defrost.setter
    def airconditioning_defrost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'airconditioning_defrost' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'airconditioning_defrost' field must be an integer in [-2147483648, 2147483647]"
        self._airconditioning_defrost = value

    @builtins.property
    def door_status(self):
        """Message field 'door_status'."""
        return self._door_status

    @door_status.setter
    def door_status(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'door_status' array.array() must have the type code of 'i'"
            self._door_status = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'door_status' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._door_status = array.array('i', value)

    @builtins.property
    def rsrp(self):
        """Message field 'rsrp'."""
        return self._rsrp

    @rsrp.setter
    def rsrp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rsrp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rsrp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rsrp = value

    @builtins.property
    def sinr(self):
        """Message field 'sinr'."""
        return self._sinr

    @sinr.setter
    def sinr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sinr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sinr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sinr = value

    @builtins.property
    def uspeed(self):
        """Message field 'uspeed'."""
        return self._uspeed

    @uspeed.setter
    def uspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uspeed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'uspeed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._uspeed = value

    @builtins.property
    def dspeed(self):
        """Message field 'dspeed'."""
        return self._dspeed

    @dspeed.setter
    def dspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dspeed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dspeed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dspeed = value

    @builtins.property
    def loss(self):
        """Message field 'loss'."""
        return self._loss

    @loss.setter
    def loss(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loss' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loss' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loss = value

    @builtins.property
    def delay(self):
        """Message field 'delay'."""
        return self._delay

    @delay.setter
    def delay(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delay' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'delay' field must be an unsigned integer in [0, 4294967295]"
        self._delay = value

    @builtins.property
    def refrigeration_idx(self):
        """Message field 'refrigeration_idx'."""
        return self._refrigeration_idx

    @refrigeration_idx.setter
    def refrigeration_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'refrigeration_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'refrigeration_idx' field must be an unsigned integer in [0, 255]"
        self._refrigeration_idx = value

    @builtins.property
    def refrigeration_status(self):
        """Message field 'refrigeration_status'."""
        return self._refrigeration_status

    @refrigeration_status.setter
    def refrigeration_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'refrigeration_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'refrigeration_status' field must be an integer in [-2147483648, 2147483647]"
        self._refrigeration_status = value

    @builtins.property
    def refrigeration_stemp(self):
        """Message field 'refrigeration_stemp'."""
        return self._refrigeration_stemp

    @refrigeration_stemp.setter
    def refrigeration_stemp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'refrigeration_stemp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'refrigeration_stemp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._refrigeration_stemp = value

    @builtins.property
    def refrigeration_ctemp(self):
        """Message field 'refrigeration_ctemp'."""
        return self._refrigeration_ctemp

    @refrigeration_ctemp.setter
    def refrigeration_ctemp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'refrigeration_ctemp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'refrigeration_ctemp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._refrigeration_ctemp = value

    @builtins.property
    def driving_motor_idx(self):
        """Message field 'driving_motor_idx'."""
        return self._driving_motor_idx

    @driving_motor_idx.setter
    def driving_motor_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driving_motor_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'driving_motor_idx' field must be an unsigned integer in [0, 255]"
        self._driving_motor_idx = value

    @builtins.property
    def driving_motor_status(self):
        """Message field 'driving_motor_status'."""
        return self._driving_motor_status

    @driving_motor_status.setter
    def driving_motor_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driving_motor_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'driving_motor_status' field must be an unsigned integer in [0, 255]"
        self._driving_motor_status = value

    @builtins.property
    def driving_motor_ctemp(self):
        """Message field 'driving_motor_ctemp'."""
        return self._driving_motor_ctemp

    @driving_motor_ctemp.setter
    def driving_motor_ctemp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'driving_motor_ctemp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'driving_motor_ctemp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._driving_motor_ctemp = value

    @builtins.property
    def driving_motor_rspeed(self):
        """Message field 'driving_motor_rspeed'."""
        return self._driving_motor_rspeed

    @driving_motor_rspeed.setter
    def driving_motor_rspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driving_motor_rspeed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'driving_motor_rspeed' field must be an unsigned integer in [0, 255]"
        self._driving_motor_rspeed = value

    @builtins.property
    def driving_motor_torque(self):
        """Message field 'driving_motor_torque'."""
        return self._driving_motor_torque

    @driving_motor_torque.setter
    def driving_motor_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'driving_motor_torque' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'driving_motor_torque' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._driving_motor_torque = value

    @builtins.property
    def driving_motor_etemp(self):
        """Message field 'driving_motor_etemp'."""
        return self._driving_motor_etemp

    @driving_motor_etemp.setter
    def driving_motor_etemp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'driving_motor_etemp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'driving_motor_etemp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._driving_motor_etemp = value

    @builtins.property
    def driving_motor_voltage(self):
        """Message field 'driving_motor_voltage'."""
        return self._driving_motor_voltage

    @driving_motor_voltage.setter
    def driving_motor_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'driving_motor_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'driving_motor_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._driving_motor_voltage = value

    @builtins.property
    def driving_motor_ammeter(self):
        """Message field 'driving_motor_ammeter'."""
        return self._driving_motor_ammeter

    @driving_motor_ammeter.setter
    def driving_motor_ammeter(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'driving_motor_ammeter' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'driving_motor_ammeter' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._driving_motor_ammeter = value

    @builtins.property
    def outline_lamp_status(self):
        """Message field 'outline_lamp_status'."""
        return self._outline_lamp_status

    @outline_lamp_status.setter
    def outline_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'outline_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'outline_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._outline_lamp_status = value

    @builtins.property
    def warning_lamp_status(self):
        """Message field 'warning_lamp_status'."""
        return self._warning_lamp_status

    @warning_lamp_status.setter
    def warning_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'warning_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'warning_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._warning_lamp_status = value

    @builtins.property
    def backlight_lamp_status(self):
        """Message field 'backlight_lamp_status'."""
        return self._backlight_lamp_status

    @backlight_lamp_status.setter
    def backlight_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'backlight_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'backlight_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._backlight_lamp_status = value

    @builtins.property
    def brakelamp_lamp_status(self):
        """Message field 'brakelamp_lamp_status'."""
        return self._brakelamp_lamp_status

    @brakelamp_lamp_status.setter
    def brakelamp_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brakelamp_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brakelamp_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._brakelamp_lamp_status = value

    @builtins.property
    def left_lamp_status(self):
        """Message field 'left_lamp_status'."""
        return self._left_lamp_status

    @left_lamp_status.setter
    def left_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._left_lamp_status = value

    @builtins.property
    def right_lamp_status(self):
        """Message field 'right_lamp_status'."""
        return self._right_lamp_status

    @right_lamp_status.setter
    def right_lamp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_lamp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_lamp_status' field must be an integer in [-2147483648, 2147483647]"
        self._right_lamp_status = value

    @builtins.property
    def front_touch_status(self):
        """Message field 'front_touch_status'."""
        return self._front_touch_status

    @front_touch_status.setter
    def front_touch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_touch_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_touch_status' field must be an integer in [-2147483648, 2147483647]"
        self._front_touch_status = value

    @builtins.property
    def rear_touch_status(self):
        """Message field 'rear_touch_status'."""
        return self._rear_touch_status

    @rear_touch_status.setter
    def rear_touch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_touch_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rear_touch_status' field must be an integer in [-2147483648, 2147483647]"
        self._rear_touch_status = value

    @builtins.property
    def horn_status(self):
        """Message field 'horn_status'."""
        return self._horn_status

    @horn_status.setter
    def horn_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'horn_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'horn_status' field must be an integer in [-2147483648, 2147483647]"
        self._horn_status = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'length' field must be an integer in [-128, 127]"
        self._length = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'width' field must be an integer in [-128, 127]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'height' field must be an integer in [-128, 127]"
        self._height = value

    @builtins.property
    def cleanup_switch_status(self):
        """Message field 'cleanup_switch_status'."""
        return self._cleanup_switch_status

    @cleanup_switch_status.setter
    def cleanup_switch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cleanup_switch_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cleanup_switch_status' field must be an integer in [-2147483648, 2147483647]"
        self._cleanup_switch_status = value

    @builtins.property
    def watering_switch_status(self):
        """Message field 'watering_switch_status'."""
        return self._watering_switch_status

    @watering_switch_status.setter
    def watering_switch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'watering_switch_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'watering_switch_status' field must be an integer in [-2147483648, 2147483647]"
        self._watering_switch_status = value

    @builtins.property
    def trash_can_status(self):
        """Message field 'trash_can_status'."""
        return self._trash_can_status

    @trash_can_status.setter
    def trash_can_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trash_can_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trash_can_status' field must be an integer in [-2147483648, 2147483647]"
        self._trash_can_status = value

    @builtins.property
    def water_tank_status(self):
        """Message field 'water_tank_status'."""
        return self._water_tank_status

    @water_tank_status.setter
    def water_tank_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'water_tank_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'water_tank_status' field must be an integer in [-2147483648, 2147483647]"
        self._water_tank_status = value

    @builtins.property
    def water_add_switch_status(self):
        """Message field 'water_add_switch_status'."""
        return self._water_add_switch_status

    @water_add_switch_status.setter
    def water_add_switch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'water_add_switch_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'water_add_switch_status' field must be an integer in [-2147483648, 2147483647]"
        self._water_add_switch_status = value

    @builtins.property
    def hatch_unlock_switch_status(self):
        """Message field 'hatch_unlock_switch_status'."""
        return self._hatch_unlock_switch_status

    @hatch_unlock_switch_status.setter
    def hatch_unlock_switch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hatch_unlock_switch_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hatch_unlock_switch_status' field must be an integer in [-2147483648, 2147483647]"
        self._hatch_unlock_switch_status = value

    @builtins.property
    def water_tank_level(self):
        """Message field 'water_tank_level'."""
        return self._water_tank_level

    @water_tank_level.setter
    def water_tank_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'water_tank_level' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'water_tank_level' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._water_tank_level = value

    @builtins.property
    def hmi_highbeam(self):
        """Message field 'hmi_highbeam'."""
        return self._hmi_highbeam

    @hmi_highbeam.setter
    def hmi_highbeam(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_highbeam' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hmi_highbeam' field must be an integer in [-2147483648, 2147483647]"
        self._hmi_highbeam = value

    @builtins.property
    def hmi_cleanup(self):
        """Message field 'hmi_cleanup'."""
        return self._hmi_cleanup

    @hmi_cleanup.setter
    def hmi_cleanup(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_cleanup' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hmi_cleanup' field must be an integer in [-2147483648, 2147483647]"
        self._hmi_cleanup = value

    @builtins.property
    def hmi_watering(self):
        """Message field 'hmi_watering'."""
        return self._hmi_watering

    @hmi_watering.setter
    def hmi_watering(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_watering' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hmi_watering' field must be an integer in [-2147483648, 2147483647]"
        self._hmi_watering = value

    @builtins.property
    def bms_charge_status(self):
        """Message field 'bms_charge_status'."""
        return self._bms_charge_status

    @bms_charge_status.setter
    def bms_charge_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_charge_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bms_charge_status' field must be an integer in [-2147483648, 2147483647]"
        self._bms_charge_status = value

    @builtins.property
    def emergency_button_status(self):
        """Message field 'emergency_button_status'."""
        return self._emergency_button_status

    @emergency_button_status.setter
    def emergency_button_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emergency_button_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'emergency_button_status' field must be an integer in [-2147483648, 2147483647]"
        self._emergency_button_status = value

    @builtins.property
    def traction(self):
        """Message field 'traction'."""
        return self._traction

    @traction.setter
    def traction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'traction' field must be an integer in [-2147483648, 2147483647]"
        self._traction = value

    @builtins.property  # noqa: A003
    def abs(self):  # noqa: A003
        """Message field 'abs'."""
        return self._abs

    @abs.setter  # noqa: A003
    def abs(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'abs' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'abs' field must be an integer in [-2147483648, 2147483647]"
        self._abs = value

    @builtins.property
    def scs(self):
        """Message field 'scs'."""
        return self._scs

    @scs.setter
    def scs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scs' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'scs' field must be an integer in [-2147483648, 2147483647]"
        self._scs = value

    @builtins.property
    def brake_boost(self):
        """Message field 'brake_boost'."""
        return self._brake_boost

    @brake_boost.setter
    def brake_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_boost' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brake_boost' field must be an integer in [-2147483648, 2147483647]"
        self._brake_boost = value

    @builtins.property
    def aux_brakes(self):
        """Message field 'aux_brakes'."""
        return self._aux_brakes

    @aux_brakes.setter
    def aux_brakes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aux_brakes' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'aux_brakes' field must be an integer in [-2147483648, 2147483647]"
        self._aux_brakes = value

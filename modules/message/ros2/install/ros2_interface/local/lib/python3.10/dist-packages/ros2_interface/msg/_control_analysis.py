# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/ControlAnalysis.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlAnalysis(type):
    """Metaclass of message 'ControlAnalysis'."""

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
                'ros2_interface.msg.ControlAnalysis')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_analysis
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_analysis
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_analysis
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_analysis
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_analysis

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


class ControlAnalysis(metaclass=Metaclass_ControlAnalysis):
    """Message class 'ControlAnalysis'."""

    __slots__ = [
        '_header',
        '_driving_mode',
        '_driving_mode_fd',
        '_gear_location_fd',
        '_gear_location_cmd',
        '_epb_level_fd',
        '_epb_level_cmd',
        '_speed_mps',
        '_speed_reference',
        '_accel_value_fd',
        '_accel_value_cmd',
        '_brake_value_fd',
        '_brake_value_cmd',
        '_path_remain',
        '_has_stop_point',
        '_is_full_stop',
        '_is_stopped',
        '_lon_acc_jerk',
        '_acceleration_cmd',
        '_acceleration_cmd_closeloop',
        '_preview_acceleration_reference',
        '_slope_offset_compensation',
        '_turning_offset_compensation',
        '_speed_error_limited',
        '_speed_error',
        '_speed_offset',
        '_station_error_limited',
        '_station_error',
        '_lon_target_point_s',
        '_lon_calculate_time',
        '_lon_calculate_time_max',
        '_ref_curvature',
        '_ref_heading',
        '_current_heading',
        '_heading_error',
        '_heading_error_rate',
        '_lateral_error',
        '_lateral_error_rate',
        '_lon_error',
        '_front_steering_value_fd',
        '_front_steering_target',
        '_front_steering_rate',
        '_front_steer_angle_feedforward',
        '_front_steer_angle_feedback',
        '_front_steer_angle_lateral_contribution',
        '_front_steer_angle_lateral_rate_contribution',
        '_front_steer_angle_heading_contribution',
        '_front_steer_angle_heading_rate_contribution',
        '_rear_steering_value_fd',
        '_rear_steering_target',
        '_rear_steering_rate',
        '_rear_steer_angle_feedforward',
        '_rear_steer_angle_feedback',
        '_rear_steer_angle_lateral_contribution',
        '_rear_steer_angle_lateral_rate_contribution',
        '_rear_steer_angle_heading_contribution',
        '_rear_steer_angle_heading_rate_contribution',
        '_matrix_k_00',
        '_matrix_k_01',
        '_matrix_k_02',
        '_matrix_k_03',
        '_matrix_k_10',
        '_matrix_k_11',
        '_matrix_k_12',
        '_matrix_k_13',
        '_matrix_state_0',
        '_matrix_state_1',
        '_matrix_state_2',
        '_matrix_state_3',
        '_matrix_q_updated_0',
        '_matrix_q_updated_1',
        '_matrix_q_updated_2',
        '_matrix_q_updated_3',
        '_current_x',
        '_current_y',
        '_target_point_x',
        '_target_point_y',
        '_lat_target_point_s',
        '_lqr_calculate_time',
        '_lqr_calculate_time_max',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'driving_mode': 'int32',
        'driving_mode_fd': 'int32',
        'gear_location_fd': 'int32',
        'gear_location_cmd': 'int32',
        'epb_level_fd': 'int32',
        'epb_level_cmd': 'int32',
        'speed_mps': 'double',
        'speed_reference': 'double',
        'accel_value_fd': 'double',
        'accel_value_cmd': 'double',
        'brake_value_fd': 'double',
        'brake_value_cmd': 'double',
        'path_remain': 'double',
        'has_stop_point': 'boolean',
        'is_full_stop': 'boolean',
        'is_stopped': 'boolean',
        'lon_acc_jerk': 'double',
        'acceleration_cmd': 'double',
        'acceleration_cmd_closeloop': 'double',
        'preview_acceleration_reference': 'double',
        'slope_offset_compensation': 'double',
        'turning_offset_compensation': 'double',
        'speed_error_limited': 'double',
        'speed_error': 'double',
        'speed_offset': 'double',
        'station_error_limited': 'double',
        'station_error': 'double',
        'lon_target_point_s': 'double',
        'lon_calculate_time': 'int64',
        'lon_calculate_time_max': 'int64',
        'ref_curvature': 'double',
        'ref_heading': 'double',
        'current_heading': 'double',
        'heading_error': 'double',
        'heading_error_rate': 'double',
        'lateral_error': 'double',
        'lateral_error_rate': 'double',
        'lon_error': 'double',
        'front_steering_value_fd': 'double',
        'front_steering_target': 'double',
        'front_steering_rate': 'double',
        'front_steer_angle_feedforward': 'double',
        'front_steer_angle_feedback': 'double',
        'front_steer_angle_lateral_contribution': 'double',
        'front_steer_angle_lateral_rate_contribution': 'double',
        'front_steer_angle_heading_contribution': 'double',
        'front_steer_angle_heading_rate_contribution': 'double',
        'rear_steering_value_fd': 'double',
        'rear_steering_target': 'double',
        'rear_steering_rate': 'double',
        'rear_steer_angle_feedforward': 'double',
        'rear_steer_angle_feedback': 'double',
        'rear_steer_angle_lateral_contribution': 'double',
        'rear_steer_angle_lateral_rate_contribution': 'double',
        'rear_steer_angle_heading_contribution': 'double',
        'rear_steer_angle_heading_rate_contribution': 'double',
        'matrix_k_00': 'double',
        'matrix_k_01': 'double',
        'matrix_k_02': 'double',
        'matrix_k_03': 'double',
        'matrix_k_10': 'double',
        'matrix_k_11': 'double',
        'matrix_k_12': 'double',
        'matrix_k_13': 'double',
        'matrix_state_0': 'double',
        'matrix_state_1': 'double',
        'matrix_state_2': 'double',
        'matrix_state_3': 'double',
        'matrix_q_updated_0': 'double',
        'matrix_q_updated_1': 'double',
        'matrix_q_updated_2': 'double',
        'matrix_q_updated_3': 'double',
        'current_x': 'double',
        'current_y': 'double',
        'target_point_x': 'double',
        'target_point_y': 'double',
        'lat_target_point_s': 'double',
        'lqr_calculate_time': 'int64',
        'lqr_calculate_time_max': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.driving_mode = kwargs.get('driving_mode', int())
        self.driving_mode_fd = kwargs.get('driving_mode_fd', int())
        self.gear_location_fd = kwargs.get('gear_location_fd', int())
        self.gear_location_cmd = kwargs.get('gear_location_cmd', int())
        self.epb_level_fd = kwargs.get('epb_level_fd', int())
        self.epb_level_cmd = kwargs.get('epb_level_cmd', int())
        self.speed_mps = kwargs.get('speed_mps', float())
        self.speed_reference = kwargs.get('speed_reference', float())
        self.accel_value_fd = kwargs.get('accel_value_fd', float())
        self.accel_value_cmd = kwargs.get('accel_value_cmd', float())
        self.brake_value_fd = kwargs.get('brake_value_fd', float())
        self.brake_value_cmd = kwargs.get('brake_value_cmd', float())
        self.path_remain = kwargs.get('path_remain', float())
        self.has_stop_point = kwargs.get('has_stop_point', bool())
        self.is_full_stop = kwargs.get('is_full_stop', bool())
        self.is_stopped = kwargs.get('is_stopped', bool())
        self.lon_acc_jerk = kwargs.get('lon_acc_jerk', float())
        self.acceleration_cmd = kwargs.get('acceleration_cmd', float())
        self.acceleration_cmd_closeloop = kwargs.get('acceleration_cmd_closeloop', float())
        self.preview_acceleration_reference = kwargs.get('preview_acceleration_reference', float())
        self.slope_offset_compensation = kwargs.get('slope_offset_compensation', float())
        self.turning_offset_compensation = kwargs.get('turning_offset_compensation', float())
        self.speed_error_limited = kwargs.get('speed_error_limited', float())
        self.speed_error = kwargs.get('speed_error', float())
        self.speed_offset = kwargs.get('speed_offset', float())
        self.station_error_limited = kwargs.get('station_error_limited', float())
        self.station_error = kwargs.get('station_error', float())
        self.lon_target_point_s = kwargs.get('lon_target_point_s', float())
        self.lon_calculate_time = kwargs.get('lon_calculate_time', int())
        self.lon_calculate_time_max = kwargs.get('lon_calculate_time_max', int())
        self.ref_curvature = kwargs.get('ref_curvature', float())
        self.ref_heading = kwargs.get('ref_heading', float())
        self.current_heading = kwargs.get('current_heading', float())
        self.heading_error = kwargs.get('heading_error', float())
        self.heading_error_rate = kwargs.get('heading_error_rate', float())
        self.lateral_error = kwargs.get('lateral_error', float())
        self.lateral_error_rate = kwargs.get('lateral_error_rate', float())
        self.lon_error = kwargs.get('lon_error', float())
        self.front_steering_value_fd = kwargs.get('front_steering_value_fd', float())
        self.front_steering_target = kwargs.get('front_steering_target', float())
        self.front_steering_rate = kwargs.get('front_steering_rate', float())
        self.front_steer_angle_feedforward = kwargs.get('front_steer_angle_feedforward', float())
        self.front_steer_angle_feedback = kwargs.get('front_steer_angle_feedback', float())
        self.front_steer_angle_lateral_contribution = kwargs.get('front_steer_angle_lateral_contribution', float())
        self.front_steer_angle_lateral_rate_contribution = kwargs.get('front_steer_angle_lateral_rate_contribution', float())
        self.front_steer_angle_heading_contribution = kwargs.get('front_steer_angle_heading_contribution', float())
        self.front_steer_angle_heading_rate_contribution = kwargs.get('front_steer_angle_heading_rate_contribution', float())
        self.rear_steering_value_fd = kwargs.get('rear_steering_value_fd', float())
        self.rear_steering_target = kwargs.get('rear_steering_target', float())
        self.rear_steering_rate = kwargs.get('rear_steering_rate', float())
        self.rear_steer_angle_feedforward = kwargs.get('rear_steer_angle_feedforward', float())
        self.rear_steer_angle_feedback = kwargs.get('rear_steer_angle_feedback', float())
        self.rear_steer_angle_lateral_contribution = kwargs.get('rear_steer_angle_lateral_contribution', float())
        self.rear_steer_angle_lateral_rate_contribution = kwargs.get('rear_steer_angle_lateral_rate_contribution', float())
        self.rear_steer_angle_heading_contribution = kwargs.get('rear_steer_angle_heading_contribution', float())
        self.rear_steer_angle_heading_rate_contribution = kwargs.get('rear_steer_angle_heading_rate_contribution', float())
        self.matrix_k_00 = kwargs.get('matrix_k_00', float())
        self.matrix_k_01 = kwargs.get('matrix_k_01', float())
        self.matrix_k_02 = kwargs.get('matrix_k_02', float())
        self.matrix_k_03 = kwargs.get('matrix_k_03', float())
        self.matrix_k_10 = kwargs.get('matrix_k_10', float())
        self.matrix_k_11 = kwargs.get('matrix_k_11', float())
        self.matrix_k_12 = kwargs.get('matrix_k_12', float())
        self.matrix_k_13 = kwargs.get('matrix_k_13', float())
        self.matrix_state_0 = kwargs.get('matrix_state_0', float())
        self.matrix_state_1 = kwargs.get('matrix_state_1', float())
        self.matrix_state_2 = kwargs.get('matrix_state_2', float())
        self.matrix_state_3 = kwargs.get('matrix_state_3', float())
        self.matrix_q_updated_0 = kwargs.get('matrix_q_updated_0', float())
        self.matrix_q_updated_1 = kwargs.get('matrix_q_updated_1', float())
        self.matrix_q_updated_2 = kwargs.get('matrix_q_updated_2', float())
        self.matrix_q_updated_3 = kwargs.get('matrix_q_updated_3', float())
        self.current_x = kwargs.get('current_x', float())
        self.current_y = kwargs.get('current_y', float())
        self.target_point_x = kwargs.get('target_point_x', float())
        self.target_point_y = kwargs.get('target_point_y', float())
        self.lat_target_point_s = kwargs.get('lat_target_point_s', float())
        self.lqr_calculate_time = kwargs.get('lqr_calculate_time', int())
        self.lqr_calculate_time_max = kwargs.get('lqr_calculate_time_max', int())

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
        if self.driving_mode != other.driving_mode:
            return False
        if self.driving_mode_fd != other.driving_mode_fd:
            return False
        if self.gear_location_fd != other.gear_location_fd:
            return False
        if self.gear_location_cmd != other.gear_location_cmd:
            return False
        if self.epb_level_fd != other.epb_level_fd:
            return False
        if self.epb_level_cmd != other.epb_level_cmd:
            return False
        if self.speed_mps != other.speed_mps:
            return False
        if self.speed_reference != other.speed_reference:
            return False
        if self.accel_value_fd != other.accel_value_fd:
            return False
        if self.accel_value_cmd != other.accel_value_cmd:
            return False
        if self.brake_value_fd != other.brake_value_fd:
            return False
        if self.brake_value_cmd != other.brake_value_cmd:
            return False
        if self.path_remain != other.path_remain:
            return False
        if self.has_stop_point != other.has_stop_point:
            return False
        if self.is_full_stop != other.is_full_stop:
            return False
        if self.is_stopped != other.is_stopped:
            return False
        if self.lon_acc_jerk != other.lon_acc_jerk:
            return False
        if self.acceleration_cmd != other.acceleration_cmd:
            return False
        if self.acceleration_cmd_closeloop != other.acceleration_cmd_closeloop:
            return False
        if self.preview_acceleration_reference != other.preview_acceleration_reference:
            return False
        if self.slope_offset_compensation != other.slope_offset_compensation:
            return False
        if self.turning_offset_compensation != other.turning_offset_compensation:
            return False
        if self.speed_error_limited != other.speed_error_limited:
            return False
        if self.speed_error != other.speed_error:
            return False
        if self.speed_offset != other.speed_offset:
            return False
        if self.station_error_limited != other.station_error_limited:
            return False
        if self.station_error != other.station_error:
            return False
        if self.lon_target_point_s != other.lon_target_point_s:
            return False
        if self.lon_calculate_time != other.lon_calculate_time:
            return False
        if self.lon_calculate_time_max != other.lon_calculate_time_max:
            return False
        if self.ref_curvature != other.ref_curvature:
            return False
        if self.ref_heading != other.ref_heading:
            return False
        if self.current_heading != other.current_heading:
            return False
        if self.heading_error != other.heading_error:
            return False
        if self.heading_error_rate != other.heading_error_rate:
            return False
        if self.lateral_error != other.lateral_error:
            return False
        if self.lateral_error_rate != other.lateral_error_rate:
            return False
        if self.lon_error != other.lon_error:
            return False
        if self.front_steering_value_fd != other.front_steering_value_fd:
            return False
        if self.front_steering_target != other.front_steering_target:
            return False
        if self.front_steering_rate != other.front_steering_rate:
            return False
        if self.front_steer_angle_feedforward != other.front_steer_angle_feedforward:
            return False
        if self.front_steer_angle_feedback != other.front_steer_angle_feedback:
            return False
        if self.front_steer_angle_lateral_contribution != other.front_steer_angle_lateral_contribution:
            return False
        if self.front_steer_angle_lateral_rate_contribution != other.front_steer_angle_lateral_rate_contribution:
            return False
        if self.front_steer_angle_heading_contribution != other.front_steer_angle_heading_contribution:
            return False
        if self.front_steer_angle_heading_rate_contribution != other.front_steer_angle_heading_rate_contribution:
            return False
        if self.rear_steering_value_fd != other.rear_steering_value_fd:
            return False
        if self.rear_steering_target != other.rear_steering_target:
            return False
        if self.rear_steering_rate != other.rear_steering_rate:
            return False
        if self.rear_steer_angle_feedforward != other.rear_steer_angle_feedforward:
            return False
        if self.rear_steer_angle_feedback != other.rear_steer_angle_feedback:
            return False
        if self.rear_steer_angle_lateral_contribution != other.rear_steer_angle_lateral_contribution:
            return False
        if self.rear_steer_angle_lateral_rate_contribution != other.rear_steer_angle_lateral_rate_contribution:
            return False
        if self.rear_steer_angle_heading_contribution != other.rear_steer_angle_heading_contribution:
            return False
        if self.rear_steer_angle_heading_rate_contribution != other.rear_steer_angle_heading_rate_contribution:
            return False
        if self.matrix_k_00 != other.matrix_k_00:
            return False
        if self.matrix_k_01 != other.matrix_k_01:
            return False
        if self.matrix_k_02 != other.matrix_k_02:
            return False
        if self.matrix_k_03 != other.matrix_k_03:
            return False
        if self.matrix_k_10 != other.matrix_k_10:
            return False
        if self.matrix_k_11 != other.matrix_k_11:
            return False
        if self.matrix_k_12 != other.matrix_k_12:
            return False
        if self.matrix_k_13 != other.matrix_k_13:
            return False
        if self.matrix_state_0 != other.matrix_state_0:
            return False
        if self.matrix_state_1 != other.matrix_state_1:
            return False
        if self.matrix_state_2 != other.matrix_state_2:
            return False
        if self.matrix_state_3 != other.matrix_state_3:
            return False
        if self.matrix_q_updated_0 != other.matrix_q_updated_0:
            return False
        if self.matrix_q_updated_1 != other.matrix_q_updated_1:
            return False
        if self.matrix_q_updated_2 != other.matrix_q_updated_2:
            return False
        if self.matrix_q_updated_3 != other.matrix_q_updated_3:
            return False
        if self.current_x != other.current_x:
            return False
        if self.current_y != other.current_y:
            return False
        if self.target_point_x != other.target_point_x:
            return False
        if self.target_point_y != other.target_point_y:
            return False
        if self.lat_target_point_s != other.lat_target_point_s:
            return False
        if self.lqr_calculate_time != other.lqr_calculate_time:
            return False
        if self.lqr_calculate_time_max != other.lqr_calculate_time_max:
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
    def driving_mode(self):
        """Message field 'driving_mode'."""
        return self._driving_mode

    @driving_mode.setter
    def driving_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driving_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'driving_mode' field must be an integer in [-2147483648, 2147483647]"
        self._driving_mode = value

    @builtins.property
    def driving_mode_fd(self):
        """Message field 'driving_mode_fd'."""
        return self._driving_mode_fd

    @driving_mode_fd.setter
    def driving_mode_fd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driving_mode_fd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'driving_mode_fd' field must be an integer in [-2147483648, 2147483647]"
        self._driving_mode_fd = value

    @builtins.property
    def gear_location_fd(self):
        """Message field 'gear_location_fd'."""
        return self._gear_location_fd

    @gear_location_fd.setter
    def gear_location_fd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_location_fd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gear_location_fd' field must be an integer in [-2147483648, 2147483647]"
        self._gear_location_fd = value

    @builtins.property
    def gear_location_cmd(self):
        """Message field 'gear_location_cmd'."""
        return self._gear_location_cmd

    @gear_location_cmd.setter
    def gear_location_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_location_cmd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gear_location_cmd' field must be an integer in [-2147483648, 2147483647]"
        self._gear_location_cmd = value

    @builtins.property
    def epb_level_fd(self):
        """Message field 'epb_level_fd'."""
        return self._epb_level_fd

    @epb_level_fd.setter
    def epb_level_fd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_level_fd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'epb_level_fd' field must be an integer in [-2147483648, 2147483647]"
        self._epb_level_fd = value

    @builtins.property
    def epb_level_cmd(self):
        """Message field 'epb_level_cmd'."""
        return self._epb_level_cmd

    @epb_level_cmd.setter
    def epb_level_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_level_cmd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'epb_level_cmd' field must be an integer in [-2147483648, 2147483647]"
        self._epb_level_cmd = value

    @builtins.property
    def speed_mps(self):
        """Message field 'speed_mps'."""
        return self._speed_mps

    @speed_mps.setter
    def speed_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_mps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_mps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_mps = value

    @builtins.property
    def speed_reference(self):
        """Message field 'speed_reference'."""
        return self._speed_reference

    @speed_reference.setter
    def speed_reference(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_reference' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_reference' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_reference = value

    @builtins.property
    def accel_value_fd(self):
        """Message field 'accel_value_fd'."""
        return self._accel_value_fd

    @accel_value_fd.setter
    def accel_value_fd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_value_fd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'accel_value_fd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._accel_value_fd = value

    @builtins.property
    def accel_value_cmd(self):
        """Message field 'accel_value_cmd'."""
        return self._accel_value_cmd

    @accel_value_cmd.setter
    def accel_value_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_value_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'accel_value_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._accel_value_cmd = value

    @builtins.property
    def brake_value_fd(self):
        """Message field 'brake_value_fd'."""
        return self._brake_value_fd

    @brake_value_fd.setter
    def brake_value_fd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_value_fd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_value_fd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_value_fd = value

    @builtins.property
    def brake_value_cmd(self):
        """Message field 'brake_value_cmd'."""
        return self._brake_value_cmd

    @brake_value_cmd.setter
    def brake_value_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_value_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_value_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_value_cmd = value

    @builtins.property
    def path_remain(self):
        """Message field 'path_remain'."""
        return self._path_remain

    @path_remain.setter
    def path_remain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'path_remain' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'path_remain' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._path_remain = value

    @builtins.property
    def has_stop_point(self):
        """Message field 'has_stop_point'."""
        return self._has_stop_point

    @has_stop_point.setter
    def has_stop_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_stop_point' field must be of type 'bool'"
        self._has_stop_point = value

    @builtins.property
    def is_full_stop(self):
        """Message field 'is_full_stop'."""
        return self._is_full_stop

    @is_full_stop.setter
    def is_full_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_full_stop' field must be of type 'bool'"
        self._is_full_stop = value

    @builtins.property
    def is_stopped(self):
        """Message field 'is_stopped'."""
        return self._is_stopped

    @is_stopped.setter
    def is_stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_stopped' field must be of type 'bool'"
        self._is_stopped = value

    @builtins.property
    def lon_acc_jerk(self):
        """Message field 'lon_acc_jerk'."""
        return self._lon_acc_jerk

    @lon_acc_jerk.setter
    def lon_acc_jerk(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon_acc_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon_acc_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon_acc_jerk = value

    @builtins.property
    def acceleration_cmd(self):
        """Message field 'acceleration_cmd'."""
        return self._acceleration_cmd

    @acceleration_cmd.setter
    def acceleration_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration_cmd = value

    @builtins.property
    def acceleration_cmd_closeloop(self):
        """Message field 'acceleration_cmd_closeloop'."""
        return self._acceleration_cmd_closeloop

    @acceleration_cmd_closeloop.setter
    def acceleration_cmd_closeloop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_cmd_closeloop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration_cmd_closeloop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration_cmd_closeloop = value

    @builtins.property
    def preview_acceleration_reference(self):
        """Message field 'preview_acceleration_reference'."""
        return self._preview_acceleration_reference

    @preview_acceleration_reference.setter
    def preview_acceleration_reference(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'preview_acceleration_reference' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'preview_acceleration_reference' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._preview_acceleration_reference = value

    @builtins.property
    def slope_offset_compensation(self):
        """Message field 'slope_offset_compensation'."""
        return self._slope_offset_compensation

    @slope_offset_compensation.setter
    def slope_offset_compensation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'slope_offset_compensation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'slope_offset_compensation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._slope_offset_compensation = value

    @builtins.property
    def turning_offset_compensation(self):
        """Message field 'turning_offset_compensation'."""
        return self._turning_offset_compensation

    @turning_offset_compensation.setter
    def turning_offset_compensation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turning_offset_compensation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turning_offset_compensation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turning_offset_compensation = value

    @builtins.property
    def speed_error_limited(self):
        """Message field 'speed_error_limited'."""
        return self._speed_error_limited

    @speed_error_limited.setter
    def speed_error_limited(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_error_limited' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_error_limited' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_error_limited = value

    @builtins.property
    def speed_error(self):
        """Message field 'speed_error'."""
        return self._speed_error

    @speed_error.setter
    def speed_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_error = value

    @builtins.property
    def speed_offset(self):
        """Message field 'speed_offset'."""
        return self._speed_offset

    @speed_offset.setter
    def speed_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_offset = value

    @builtins.property
    def station_error_limited(self):
        """Message field 'station_error_limited'."""
        return self._station_error_limited

    @station_error_limited.setter
    def station_error_limited(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'station_error_limited' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'station_error_limited' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._station_error_limited = value

    @builtins.property
    def station_error(self):
        """Message field 'station_error'."""
        return self._station_error

    @station_error.setter
    def station_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'station_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'station_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._station_error = value

    @builtins.property
    def lon_target_point_s(self):
        """Message field 'lon_target_point_s'."""
        return self._lon_target_point_s

    @lon_target_point_s.setter
    def lon_target_point_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon_target_point_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon_target_point_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon_target_point_s = value

    @builtins.property
    def lon_calculate_time(self):
        """Message field 'lon_calculate_time'."""
        return self._lon_calculate_time

    @lon_calculate_time.setter
    def lon_calculate_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lon_calculate_time' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lon_calculate_time' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lon_calculate_time = value

    @builtins.property
    def lon_calculate_time_max(self):
        """Message field 'lon_calculate_time_max'."""
        return self._lon_calculate_time_max

    @lon_calculate_time_max.setter
    def lon_calculate_time_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lon_calculate_time_max' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lon_calculate_time_max' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lon_calculate_time_max = value

    @builtins.property
    def ref_curvature(self):
        """Message field 'ref_curvature'."""
        return self._ref_curvature

    @ref_curvature.setter
    def ref_curvature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_curvature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_curvature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_curvature = value

    @builtins.property
    def ref_heading(self):
        """Message field 'ref_heading'."""
        return self._ref_heading

    @ref_heading.setter
    def ref_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_heading = value

    @builtins.property
    def current_heading(self):
        """Message field 'current_heading'."""
        return self._current_heading

    @current_heading.setter
    def current_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_heading = value

    @builtins.property
    def heading_error(self):
        """Message field 'heading_error'."""
        return self._heading_error

    @heading_error.setter
    def heading_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_error = value

    @builtins.property
    def heading_error_rate(self):
        """Message field 'heading_error_rate'."""
        return self._heading_error_rate

    @heading_error_rate.setter
    def heading_error_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_error_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_error_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_error_rate = value

    @builtins.property
    def lateral_error(self):
        """Message field 'lateral_error'."""
        return self._lateral_error

    @lateral_error.setter
    def lateral_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_error = value

    @builtins.property
    def lateral_error_rate(self):
        """Message field 'lateral_error_rate'."""
        return self._lateral_error_rate

    @lateral_error_rate.setter
    def lateral_error_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_error_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_error_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_error_rate = value

    @builtins.property
    def lon_error(self):
        """Message field 'lon_error'."""
        return self._lon_error

    @lon_error.setter
    def lon_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon_error = value

    @builtins.property
    def front_steering_value_fd(self):
        """Message field 'front_steering_value_fd'."""
        return self._front_steering_value_fd

    @front_steering_value_fd.setter
    def front_steering_value_fd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steering_value_fd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steering_value_fd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steering_value_fd = value

    @builtins.property
    def front_steering_target(self):
        """Message field 'front_steering_target'."""
        return self._front_steering_target

    @front_steering_target.setter
    def front_steering_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steering_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steering_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steering_target = value

    @builtins.property
    def front_steering_rate(self):
        """Message field 'front_steering_rate'."""
        return self._front_steering_rate

    @front_steering_rate.setter
    def front_steering_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steering_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steering_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steering_rate = value

    @builtins.property
    def front_steer_angle_feedforward(self):
        """Message field 'front_steer_angle_feedforward'."""
        return self._front_steer_angle_feedforward

    @front_steer_angle_feedforward.setter
    def front_steer_angle_feedforward(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steer_angle_feedforward' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steer_angle_feedforward' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steer_angle_feedforward = value

    @builtins.property
    def front_steer_angle_feedback(self):
        """Message field 'front_steer_angle_feedback'."""
        return self._front_steer_angle_feedback

    @front_steer_angle_feedback.setter
    def front_steer_angle_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steer_angle_feedback' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steer_angle_feedback' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steer_angle_feedback = value

    @builtins.property
    def front_steer_angle_lateral_contribution(self):
        """Message field 'front_steer_angle_lateral_contribution'."""
        return self._front_steer_angle_lateral_contribution

    @front_steer_angle_lateral_contribution.setter
    def front_steer_angle_lateral_contribution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steer_angle_lateral_contribution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steer_angle_lateral_contribution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steer_angle_lateral_contribution = value

    @builtins.property
    def front_steer_angle_lateral_rate_contribution(self):
        """Message field 'front_steer_angle_lateral_rate_contribution'."""
        return self._front_steer_angle_lateral_rate_contribution

    @front_steer_angle_lateral_rate_contribution.setter
    def front_steer_angle_lateral_rate_contribution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steer_angle_lateral_rate_contribution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steer_angle_lateral_rate_contribution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steer_angle_lateral_rate_contribution = value

    @builtins.property
    def front_steer_angle_heading_contribution(self):
        """Message field 'front_steer_angle_heading_contribution'."""
        return self._front_steer_angle_heading_contribution

    @front_steer_angle_heading_contribution.setter
    def front_steer_angle_heading_contribution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steer_angle_heading_contribution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steer_angle_heading_contribution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steer_angle_heading_contribution = value

    @builtins.property
    def front_steer_angle_heading_rate_contribution(self):
        """Message field 'front_steer_angle_heading_rate_contribution'."""
        return self._front_steer_angle_heading_rate_contribution

    @front_steer_angle_heading_rate_contribution.setter
    def front_steer_angle_heading_rate_contribution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_steer_angle_heading_rate_contribution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_steer_angle_heading_rate_contribution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_steer_angle_heading_rate_contribution = value

    @builtins.property
    def rear_steering_value_fd(self):
        """Message field 'rear_steering_value_fd'."""
        return self._rear_steering_value_fd

    @rear_steering_value_fd.setter
    def rear_steering_value_fd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steering_value_fd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steering_value_fd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steering_value_fd = value

    @builtins.property
    def rear_steering_target(self):
        """Message field 'rear_steering_target'."""
        return self._rear_steering_target

    @rear_steering_target.setter
    def rear_steering_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steering_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steering_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steering_target = value

    @builtins.property
    def rear_steering_rate(self):
        """Message field 'rear_steering_rate'."""
        return self._rear_steering_rate

    @rear_steering_rate.setter
    def rear_steering_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steering_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steering_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steering_rate = value

    @builtins.property
    def rear_steer_angle_feedforward(self):
        """Message field 'rear_steer_angle_feedforward'."""
        return self._rear_steer_angle_feedforward

    @rear_steer_angle_feedforward.setter
    def rear_steer_angle_feedforward(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steer_angle_feedforward' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steer_angle_feedforward' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steer_angle_feedforward = value

    @builtins.property
    def rear_steer_angle_feedback(self):
        """Message field 'rear_steer_angle_feedback'."""
        return self._rear_steer_angle_feedback

    @rear_steer_angle_feedback.setter
    def rear_steer_angle_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steer_angle_feedback' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steer_angle_feedback' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steer_angle_feedback = value

    @builtins.property
    def rear_steer_angle_lateral_contribution(self):
        """Message field 'rear_steer_angle_lateral_contribution'."""
        return self._rear_steer_angle_lateral_contribution

    @rear_steer_angle_lateral_contribution.setter
    def rear_steer_angle_lateral_contribution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steer_angle_lateral_contribution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steer_angle_lateral_contribution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steer_angle_lateral_contribution = value

    @builtins.property
    def rear_steer_angle_lateral_rate_contribution(self):
        """Message field 'rear_steer_angle_lateral_rate_contribution'."""
        return self._rear_steer_angle_lateral_rate_contribution

    @rear_steer_angle_lateral_rate_contribution.setter
    def rear_steer_angle_lateral_rate_contribution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steer_angle_lateral_rate_contribution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steer_angle_lateral_rate_contribution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steer_angle_lateral_rate_contribution = value

    @builtins.property
    def rear_steer_angle_heading_contribution(self):
        """Message field 'rear_steer_angle_heading_contribution'."""
        return self._rear_steer_angle_heading_contribution

    @rear_steer_angle_heading_contribution.setter
    def rear_steer_angle_heading_contribution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steer_angle_heading_contribution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steer_angle_heading_contribution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steer_angle_heading_contribution = value

    @builtins.property
    def rear_steer_angle_heading_rate_contribution(self):
        """Message field 'rear_steer_angle_heading_rate_contribution'."""
        return self._rear_steer_angle_heading_rate_contribution

    @rear_steer_angle_heading_rate_contribution.setter
    def rear_steer_angle_heading_rate_contribution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_steer_angle_heading_rate_contribution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rear_steer_angle_heading_rate_contribution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rear_steer_angle_heading_rate_contribution = value

    @builtins.property
    def matrix_k_00(self):
        """Message field 'matrix_k_00'."""
        return self._matrix_k_00

    @matrix_k_00.setter
    def matrix_k_00(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_k_00' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_k_00' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_k_00 = value

    @builtins.property
    def matrix_k_01(self):
        """Message field 'matrix_k_01'."""
        return self._matrix_k_01

    @matrix_k_01.setter
    def matrix_k_01(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_k_01' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_k_01' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_k_01 = value

    @builtins.property
    def matrix_k_02(self):
        """Message field 'matrix_k_02'."""
        return self._matrix_k_02

    @matrix_k_02.setter
    def matrix_k_02(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_k_02' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_k_02' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_k_02 = value

    @builtins.property
    def matrix_k_03(self):
        """Message field 'matrix_k_03'."""
        return self._matrix_k_03

    @matrix_k_03.setter
    def matrix_k_03(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_k_03' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_k_03' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_k_03 = value

    @builtins.property
    def matrix_k_10(self):
        """Message field 'matrix_k_10'."""
        return self._matrix_k_10

    @matrix_k_10.setter
    def matrix_k_10(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_k_10' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_k_10' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_k_10 = value

    @builtins.property
    def matrix_k_11(self):
        """Message field 'matrix_k_11'."""
        return self._matrix_k_11

    @matrix_k_11.setter
    def matrix_k_11(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_k_11' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_k_11' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_k_11 = value

    @builtins.property
    def matrix_k_12(self):
        """Message field 'matrix_k_12'."""
        return self._matrix_k_12

    @matrix_k_12.setter
    def matrix_k_12(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_k_12' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_k_12' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_k_12 = value

    @builtins.property
    def matrix_k_13(self):
        """Message field 'matrix_k_13'."""
        return self._matrix_k_13

    @matrix_k_13.setter
    def matrix_k_13(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_k_13' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_k_13' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_k_13 = value

    @builtins.property
    def matrix_state_0(self):
        """Message field 'matrix_state_0'."""
        return self._matrix_state_0

    @matrix_state_0.setter
    def matrix_state_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_state_0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_state_0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_state_0 = value

    @builtins.property
    def matrix_state_1(self):
        """Message field 'matrix_state_1'."""
        return self._matrix_state_1

    @matrix_state_1.setter
    def matrix_state_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_state_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_state_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_state_1 = value

    @builtins.property
    def matrix_state_2(self):
        """Message field 'matrix_state_2'."""
        return self._matrix_state_2

    @matrix_state_2.setter
    def matrix_state_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_state_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_state_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_state_2 = value

    @builtins.property
    def matrix_state_3(self):
        """Message field 'matrix_state_3'."""
        return self._matrix_state_3

    @matrix_state_3.setter
    def matrix_state_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_state_3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_state_3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_state_3 = value

    @builtins.property
    def matrix_q_updated_0(self):
        """Message field 'matrix_q_updated_0'."""
        return self._matrix_q_updated_0

    @matrix_q_updated_0.setter
    def matrix_q_updated_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_q_updated_0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_q_updated_0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_q_updated_0 = value

    @builtins.property
    def matrix_q_updated_1(self):
        """Message field 'matrix_q_updated_1'."""
        return self._matrix_q_updated_1

    @matrix_q_updated_1.setter
    def matrix_q_updated_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_q_updated_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_q_updated_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_q_updated_1 = value

    @builtins.property
    def matrix_q_updated_2(self):
        """Message field 'matrix_q_updated_2'."""
        return self._matrix_q_updated_2

    @matrix_q_updated_2.setter
    def matrix_q_updated_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_q_updated_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_q_updated_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_q_updated_2 = value

    @builtins.property
    def matrix_q_updated_3(self):
        """Message field 'matrix_q_updated_3'."""
        return self._matrix_q_updated_3

    @matrix_q_updated_3.setter
    def matrix_q_updated_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matrix_q_updated_3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matrix_q_updated_3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matrix_q_updated_3 = value

    @builtins.property
    def current_x(self):
        """Message field 'current_x'."""
        return self._current_x

    @current_x.setter
    def current_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_x = value

    @builtins.property
    def current_y(self):
        """Message field 'current_y'."""
        return self._current_y

    @current_y.setter
    def current_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_y = value

    @builtins.property
    def target_point_x(self):
        """Message field 'target_point_x'."""
        return self._target_point_x

    @target_point_x.setter
    def target_point_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_point_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_point_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_point_x = value

    @builtins.property
    def target_point_y(self):
        """Message field 'target_point_y'."""
        return self._target_point_y

    @target_point_y.setter
    def target_point_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_point_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_point_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_point_y = value

    @builtins.property
    def lat_target_point_s(self):
        """Message field 'lat_target_point_s'."""
        return self._lat_target_point_s

    @lat_target_point_s.setter
    def lat_target_point_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_target_point_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat_target_point_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat_target_point_s = value

    @builtins.property
    def lqr_calculate_time(self):
        """Message field 'lqr_calculate_time'."""
        return self._lqr_calculate_time

    @lqr_calculate_time.setter
    def lqr_calculate_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lqr_calculate_time' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lqr_calculate_time' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lqr_calculate_time = value

    @builtins.property
    def lqr_calculate_time_max(self):
        """Message field 'lqr_calculate_time_max'."""
        return self._lqr_calculate_time_max

    @lqr_calculate_time_max.setter
    def lqr_calculate_time_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lqr_calculate_time_max' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lqr_calculate_time_max' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lqr_calculate_time_max = value

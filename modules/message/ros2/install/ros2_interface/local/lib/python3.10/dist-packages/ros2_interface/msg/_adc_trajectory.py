# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/ADCTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ADCTrajectory(type):
    """Metaclass of message 'ADCTrajectory'."""

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
                'ros2_interface.msg.ADCTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__adc_trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__adc_trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__adc_trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__adc_trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__adc_trajectory

            from ros2_interface.msg import EStop
            if EStop.__class__._TYPE_SUPPORT is None:
                EStop.__class__.__import_type_support__()

            from ros2_interface.msg import RSSInfo
            if RSSInfo.__class__._TYPE_SUPPORT is None:
                RSSInfo.__class__.__import_type_support__()

            from ros2_interface.msg import TrajectoryPoint
            if TrajectoryPoint.__class__._TYPE_SUPPORT is None:
                TrajectoryPoint.__class__.__import_type_support__()

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


class ADCTrajectory(metaclass=Metaclass_ADCTrajectory):
    """Message class 'ADCTrajectory'."""

    __slots__ = [
        '_header',
        '_total_path_length',
        '_total_path_time',
        '_trajectory_points',
        '_car_action',
        '_behaviour_lat_state',
        '_behaviour_lon_state',
        '_scenario',
        '_driving_mode',
        '_adc_trajectory_type',
        '_estop',
        '_is_replan',
        '_replan_reason',
        '_right_of_way_status',
        '_rss_info',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'total_path_length': 'double',
        'total_path_time': 'double',
        'trajectory_points': 'sequence<ros2_interface/TrajectoryPoint>',
        'car_action': 'int32',
        'behaviour_lat_state': 'int32',
        'behaviour_lon_state': 'int32',
        'scenario': 'int32',
        'driving_mode': 'int32',
        'adc_trajectory_type': 'int32',
        'estop': 'ros2_interface/EStop',
        'is_replan': 'boolean',
        'replan_reason': 'string',
        'right_of_way_status': 'int32',
        'rss_info': 'ros2_interface/RSSInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrajectoryPoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'EStop'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'RSSInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.total_path_length = kwargs.get('total_path_length', float())
        self.total_path_time = kwargs.get('total_path_time', float())
        self.trajectory_points = kwargs.get('trajectory_points', [])
        self.car_action = kwargs.get('car_action', int())
        self.behaviour_lat_state = kwargs.get('behaviour_lat_state', int())
        self.behaviour_lon_state = kwargs.get('behaviour_lon_state', int())
        self.scenario = kwargs.get('scenario', int())
        self.driving_mode = kwargs.get('driving_mode', int())
        self.adc_trajectory_type = kwargs.get('adc_trajectory_type', int())
        from ros2_interface.msg import EStop
        self.estop = kwargs.get('estop', EStop())
        self.is_replan = kwargs.get('is_replan', bool())
        self.replan_reason = kwargs.get('replan_reason', str())
        self.right_of_way_status = kwargs.get('right_of_way_status', int())
        from ros2_interface.msg import RSSInfo
        self.rss_info = kwargs.get('rss_info', RSSInfo())

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
        if self.total_path_length != other.total_path_length:
            return False
        if self.total_path_time != other.total_path_time:
            return False
        if self.trajectory_points != other.trajectory_points:
            return False
        if self.car_action != other.car_action:
            return False
        if self.behaviour_lat_state != other.behaviour_lat_state:
            return False
        if self.behaviour_lon_state != other.behaviour_lon_state:
            return False
        if self.scenario != other.scenario:
            return False
        if self.driving_mode != other.driving_mode:
            return False
        if self.adc_trajectory_type != other.adc_trajectory_type:
            return False
        if self.estop != other.estop:
            return False
        if self.is_replan != other.is_replan:
            return False
        if self.replan_reason != other.replan_reason:
            return False
        if self.right_of_way_status != other.right_of_way_status:
            return False
        if self.rss_info != other.rss_info:
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
    def total_path_length(self):
        """Message field 'total_path_length'."""
        return self._total_path_length

    @total_path_length.setter
    def total_path_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_path_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_path_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_path_length = value

    @builtins.property
    def total_path_time(self):
        """Message field 'total_path_time'."""
        return self._total_path_time

    @total_path_time.setter
    def total_path_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_path_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_path_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_path_time = value

    @builtins.property
    def trajectory_points(self):
        """Message field 'trajectory_points'."""
        return self._trajectory_points

    @trajectory_points.setter
    def trajectory_points(self, value):
        if __debug__:
            from ros2_interface.msg import TrajectoryPoint
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
                 all(isinstance(v, TrajectoryPoint) for v in value) and
                 True), \
                "The 'trajectory_points' field must be a set or sequence and each value of type 'TrajectoryPoint'"
        self._trajectory_points = value

    @builtins.property
    def car_action(self):
        """Message field 'car_action'."""
        return self._car_action

    @car_action.setter
    def car_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'car_action' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'car_action' field must be an integer in [-2147483648, 2147483647]"
        self._car_action = value

    @builtins.property
    def behaviour_lat_state(self):
        """Message field 'behaviour_lat_state'."""
        return self._behaviour_lat_state

    @behaviour_lat_state.setter
    def behaviour_lat_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'behaviour_lat_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'behaviour_lat_state' field must be an integer in [-2147483648, 2147483647]"
        self._behaviour_lat_state = value

    @builtins.property
    def behaviour_lon_state(self):
        """Message field 'behaviour_lon_state'."""
        return self._behaviour_lon_state

    @behaviour_lon_state.setter
    def behaviour_lon_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'behaviour_lon_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'behaviour_lon_state' field must be an integer in [-2147483648, 2147483647]"
        self._behaviour_lon_state = value

    @builtins.property
    def scenario(self):
        """Message field 'scenario'."""
        return self._scenario

    @scenario.setter
    def scenario(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scenario' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'scenario' field must be an integer in [-2147483648, 2147483647]"
        self._scenario = value

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
    def adc_trajectory_type(self):
        """Message field 'adc_trajectory_type'."""
        return self._adc_trajectory_type

    @adc_trajectory_type.setter
    def adc_trajectory_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'adc_trajectory_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'adc_trajectory_type' field must be an integer in [-2147483648, 2147483647]"
        self._adc_trajectory_type = value

    @builtins.property
    def estop(self):
        """Message field 'estop'."""
        return self._estop

    @estop.setter
    def estop(self, value):
        if __debug__:
            from ros2_interface.msg import EStop
            assert \
                isinstance(value, EStop), \
                "The 'estop' field must be a sub message of type 'EStop'"
        self._estop = value

    @builtins.property
    def is_replan(self):
        """Message field 'is_replan'."""
        return self._is_replan

    @is_replan.setter
    def is_replan(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_replan' field must be of type 'bool'"
        self._is_replan = value

    @builtins.property
    def replan_reason(self):
        """Message field 'replan_reason'."""
        return self._replan_reason

    @replan_reason.setter
    def replan_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'replan_reason' field must be of type 'str'"
        self._replan_reason = value

    @builtins.property
    def right_of_way_status(self):
        """Message field 'right_of_way_status'."""
        return self._right_of_way_status

    @right_of_way_status.setter
    def right_of_way_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_of_way_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_of_way_status' field must be an integer in [-2147483648, 2147483647]"
        self._right_of_way_status = value

    @builtins.property
    def rss_info(self):
        """Message field 'rss_info'."""
        return self._rss_info

    @rss_info.setter
    def rss_info(self, value):
        if __debug__:
            from ros2_interface.msg import RSSInfo
            assert \
                isinstance(value, RSSInfo), \
                "The 'rss_info' field must be a sub message of type 'RSSInfo'"
        self._rss_info = value

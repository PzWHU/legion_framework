# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/TrafficLightDebug.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficLightDebug(type):
    """Metaclass of message 'TrafficLightDebug'."""

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
                'ros2_interface.msg.TrafficLightDebug')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_light_debug
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_light_debug
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_light_debug
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_light_debug
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_light_debug

            from ros2_interface.msg import TrafficLightBox
            if TrafficLightBox.__class__._TYPE_SUPPORT is None:
                TrafficLightBox.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficLightDebug(metaclass=Metaclass_TrafficLightDebug):
    """Message class 'TrafficLightDebug'."""

    __slots__ = [
        '_cropbox',
        '_box',
        '_signal_num',
        '_valid_pos',
        '_ts_diff_pos',
        '_ts_diff_sys',
        '_project_error',
        '_distance_to_stop_line',
        '_camera_id',
        '_crop_roi',
        '_projected_roi',
        '_rectified_roi',
        '_debug_roi',
    ]

    _fields_and_field_types = {
        'cropbox': 'ros2_interface/TrafficLightBox',
        'box': 'sequence<ros2_interface/TrafficLightBox>',
        'signal_num': 'int32',
        'valid_pos': 'int32',
        'ts_diff_pos': 'double',
        'ts_diff_sys': 'double',
        'project_error': 'int32',
        'distance_to_stop_line': 'double',
        'camera_id': 'int32',
        'crop_roi': 'sequence<ros2_interface/TrafficLightBox>',
        'projected_roi': 'sequence<ros2_interface/TrafficLightBox>',
        'rectified_roi': 'sequence<ros2_interface/TrafficLightBox>',
        'debug_roi': 'sequence<ros2_interface/TrafficLightBox>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrafficLightBox'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrafficLightBox')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrafficLightBox')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrafficLightBox')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrafficLightBox')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrafficLightBox')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ros2_interface.msg import TrafficLightBox
        self.cropbox = kwargs.get('cropbox', TrafficLightBox())
        self.box = kwargs.get('box', [])
        self.signal_num = kwargs.get('signal_num', int())
        self.valid_pos = kwargs.get('valid_pos', int())
        self.ts_diff_pos = kwargs.get('ts_diff_pos', float())
        self.ts_diff_sys = kwargs.get('ts_diff_sys', float())
        self.project_error = kwargs.get('project_error', int())
        self.distance_to_stop_line = kwargs.get('distance_to_stop_line', float())
        self.camera_id = kwargs.get('camera_id', int())
        self.crop_roi = kwargs.get('crop_roi', [])
        self.projected_roi = kwargs.get('projected_roi', [])
        self.rectified_roi = kwargs.get('rectified_roi', [])
        self.debug_roi = kwargs.get('debug_roi', [])

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
        if self.cropbox != other.cropbox:
            return False
        if self.box != other.box:
            return False
        if self.signal_num != other.signal_num:
            return False
        if self.valid_pos != other.valid_pos:
            return False
        if self.ts_diff_pos != other.ts_diff_pos:
            return False
        if self.ts_diff_sys != other.ts_diff_sys:
            return False
        if self.project_error != other.project_error:
            return False
        if self.distance_to_stop_line != other.distance_to_stop_line:
            return False
        if self.camera_id != other.camera_id:
            return False
        if self.crop_roi != other.crop_roi:
            return False
        if self.projected_roi != other.projected_roi:
            return False
        if self.rectified_roi != other.rectified_roi:
            return False
        if self.debug_roi != other.debug_roi:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cropbox(self):
        """Message field 'cropbox'."""
        return self._cropbox

    @cropbox.setter
    def cropbox(self, value):
        if __debug__:
            from ros2_interface.msg import TrafficLightBox
            assert \
                isinstance(value, TrafficLightBox), \
                "The 'cropbox' field must be a sub message of type 'TrafficLightBox'"
        self._cropbox = value

    @builtins.property
    def box(self):
        """Message field 'box'."""
        return self._box

    @box.setter
    def box(self, value):
        if __debug__:
            from ros2_interface.msg import TrafficLightBox
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
                 all(isinstance(v, TrafficLightBox) for v in value) and
                 True), \
                "The 'box' field must be a set or sequence and each value of type 'TrafficLightBox'"
        self._box = value

    @builtins.property
    def signal_num(self):
        """Message field 'signal_num'."""
        return self._signal_num

    @signal_num.setter
    def signal_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'signal_num' field must be an integer in [-2147483648, 2147483647]"
        self._signal_num = value

    @builtins.property
    def valid_pos(self):
        """Message field 'valid_pos'."""
        return self._valid_pos

    @valid_pos.setter
    def valid_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'valid_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'valid_pos' field must be an integer in [-2147483648, 2147483647]"
        self._valid_pos = value

    @builtins.property
    def ts_diff_pos(self):
        """Message field 'ts_diff_pos'."""
        return self._ts_diff_pos

    @ts_diff_pos.setter
    def ts_diff_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ts_diff_pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ts_diff_pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ts_diff_pos = value

    @builtins.property
    def ts_diff_sys(self):
        """Message field 'ts_diff_sys'."""
        return self._ts_diff_sys

    @ts_diff_sys.setter
    def ts_diff_sys(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ts_diff_sys' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ts_diff_sys' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ts_diff_sys = value

    @builtins.property
    def project_error(self):
        """Message field 'project_error'."""
        return self._project_error

    @project_error.setter
    def project_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'project_error' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'project_error' field must be an integer in [-2147483648, 2147483647]"
        self._project_error = value

    @builtins.property
    def distance_to_stop_line(self):
        """Message field 'distance_to_stop_line'."""
        return self._distance_to_stop_line

    @distance_to_stop_line.setter
    def distance_to_stop_line(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_stop_line' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance_to_stop_line' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance_to_stop_line = value

    @builtins.property
    def camera_id(self):
        """Message field 'camera_id'."""
        return self._camera_id

    @camera_id.setter
    def camera_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'camera_id' field must be an integer in [-2147483648, 2147483647]"
        self._camera_id = value

    @builtins.property
    def crop_roi(self):
        """Message field 'crop_roi'."""
        return self._crop_roi

    @crop_roi.setter
    def crop_roi(self, value):
        if __debug__:
            from ros2_interface.msg import TrafficLightBox
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
                 all(isinstance(v, TrafficLightBox) for v in value) and
                 True), \
                "The 'crop_roi' field must be a set or sequence and each value of type 'TrafficLightBox'"
        self._crop_roi = value

    @builtins.property
    def projected_roi(self):
        """Message field 'projected_roi'."""
        return self._projected_roi

    @projected_roi.setter
    def projected_roi(self, value):
        if __debug__:
            from ros2_interface.msg import TrafficLightBox
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
                 all(isinstance(v, TrafficLightBox) for v in value) and
                 True), \
                "The 'projected_roi' field must be a set or sequence and each value of type 'TrafficLightBox'"
        self._projected_roi = value

    @builtins.property
    def rectified_roi(self):
        """Message field 'rectified_roi'."""
        return self._rectified_roi

    @rectified_roi.setter
    def rectified_roi(self, value):
        if __debug__:
            from ros2_interface.msg import TrafficLightBox
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
                 all(isinstance(v, TrafficLightBox) for v in value) and
                 True), \
                "The 'rectified_roi' field must be a set or sequence and each value of type 'TrafficLightBox'"
        self._rectified_roi = value

    @builtins.property
    def debug_roi(self):
        """Message field 'debug_roi'."""
        return self._debug_roi

    @debug_roi.setter
    def debug_roi(self, value):
        if __debug__:
            from ros2_interface.msg import TrafficLightBox
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
                 all(isinstance(v, TrafficLightBox) for v in value) and
                 True), \
                "The 'debug_roi' field must be a set or sequence and each value of type 'TrafficLightBox'"
        self._debug_roi = value

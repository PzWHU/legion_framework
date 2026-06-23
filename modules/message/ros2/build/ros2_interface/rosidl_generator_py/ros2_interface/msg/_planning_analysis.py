# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/PlanningAnalysis.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningAnalysis(type):
    """Metaclass of message 'PlanningAnalysis'."""

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
                'ros2_interface.msg.PlanningAnalysis')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_analysis
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_analysis
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_analysis
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_analysis
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_analysis

            from ros2_interface.msg import PlanningParkingDebug
            if PlanningParkingDebug.__class__._TYPE_SUPPORT is None:
                PlanningParkingDebug.__class__.__import_type_support__()

            from ros2_interface.msg import TimeConsume
            if TimeConsume.__class__._TYPE_SUPPORT is None:
                TimeConsume.__class__.__import_type_support__()

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


class PlanningAnalysis(metaclass=Metaclass_PlanningAnalysis):
    """Message class 'PlanningAnalysis'."""

    __slots__ = [
        '_header',
        '_frame_update_time',
        '_generator_time',
        '_evaluator_time',
        '_selector_time',
        '_planning_parking_debug',
        '_dis_to_center_line',
        '_diff_to_velocity',
        '_referencline_kappa',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'frame_update_time': 'double',
        'generator_time': 'double',
        'evaluator_time': 'sequence<ros2_interface/TimeConsume>',
        'selector_time': 'double',
        'planning_parking_debug': 'ros2_interface/PlanningParkingDebug',
        'dis_to_center_line': 'double',
        'diff_to_velocity': 'double',
        'referencline_kappa': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TimeConsume')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'PlanningParkingDebug'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.frame_update_time = kwargs.get('frame_update_time', float())
        self.generator_time = kwargs.get('generator_time', float())
        self.evaluator_time = kwargs.get('evaluator_time', [])
        self.selector_time = kwargs.get('selector_time', float())
        from ros2_interface.msg import PlanningParkingDebug
        self.planning_parking_debug = kwargs.get('planning_parking_debug', PlanningParkingDebug())
        self.dis_to_center_line = kwargs.get('dis_to_center_line', float())
        self.diff_to_velocity = kwargs.get('diff_to_velocity', float())
        self.referencline_kappa = kwargs.get('referencline_kappa', float())

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
        if self.frame_update_time != other.frame_update_time:
            return False
        if self.generator_time != other.generator_time:
            return False
        if self.evaluator_time != other.evaluator_time:
            return False
        if self.selector_time != other.selector_time:
            return False
        if self.planning_parking_debug != other.planning_parking_debug:
            return False
        if self.dis_to_center_line != other.dis_to_center_line:
            return False
        if self.diff_to_velocity != other.diff_to_velocity:
            return False
        if self.referencline_kappa != other.referencline_kappa:
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
    def frame_update_time(self):
        """Message field 'frame_update_time'."""
        return self._frame_update_time

    @frame_update_time.setter
    def frame_update_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'frame_update_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'frame_update_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._frame_update_time = value

    @builtins.property
    def generator_time(self):
        """Message field 'generator_time'."""
        return self._generator_time

    @generator_time.setter
    def generator_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'generator_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'generator_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._generator_time = value

    @builtins.property
    def evaluator_time(self):
        """Message field 'evaluator_time'."""
        return self._evaluator_time

    @evaluator_time.setter
    def evaluator_time(self, value):
        if __debug__:
            from ros2_interface.msg import TimeConsume
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
                 all(isinstance(v, TimeConsume) for v in value) and
                 True), \
                "The 'evaluator_time' field must be a set or sequence and each value of type 'TimeConsume'"
        self._evaluator_time = value

    @builtins.property
    def selector_time(self):
        """Message field 'selector_time'."""
        return self._selector_time

    @selector_time.setter
    def selector_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'selector_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'selector_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._selector_time = value

    @builtins.property
    def planning_parking_debug(self):
        """Message field 'planning_parking_debug'."""
        return self._planning_parking_debug

    @planning_parking_debug.setter
    def planning_parking_debug(self, value):
        if __debug__:
            from ros2_interface.msg import PlanningParkingDebug
            assert \
                isinstance(value, PlanningParkingDebug), \
                "The 'planning_parking_debug' field must be a sub message of type 'PlanningParkingDebug'"
        self._planning_parking_debug = value

    @builtins.property
    def dis_to_center_line(self):
        """Message field 'dis_to_center_line'."""
        return self._dis_to_center_line

    @dis_to_center_line.setter
    def dis_to_center_line(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dis_to_center_line' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dis_to_center_line' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dis_to_center_line = value

    @builtins.property
    def diff_to_velocity(self):
        """Message field 'diff_to_velocity'."""
        return self._diff_to_velocity

    @diff_to_velocity.setter
    def diff_to_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diff_to_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'diff_to_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._diff_to_velocity = value

    @builtins.property
    def referencline_kappa(self):
        """Message field 'referencline_kappa'."""
        return self._referencline_kappa

    @referencline_kappa.setter
    def referencline_kappa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'referencline_kappa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'referencline_kappa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._referencline_kappa = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/SecurityDecision.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SecurityDecision(type):
    """Metaclass of message 'SecurityDecision'."""

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
                'ros2_interface.msg.SecurityDecision')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__security_decision
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__security_decision
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__security_decision
            cls._TYPE_SUPPORT = module.type_support_msg__msg__security_decision
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__security_decision

            from ros2_interface.msg import TrajectoryLimitCommand
            if TrajectoryLimitCommand.__class__._TYPE_SUPPORT is None:
                TrajectoryLimitCommand.__class__.__import_type_support__()

            from ros2_interface.msg import WarningCommand
            if WarningCommand.__class__._TYPE_SUPPORT is None:
                WarningCommand.__class__.__import_type_support__()

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


class SecurityDecision(metaclass=Metaclass_SecurityDecision):
    """Message class 'SecurityDecision'."""

    __slots__ = [
        '_header',
        '_warning_command',
        '_brake_report',
        '_change_lane_command',
        '_trajectory_limit_command',
        '_park_command',
        '_drivingmode_report',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'warning_command': 'ros2_interface/WarningCommand',
        'brake_report': 'int32',
        'change_lane_command': 'int32',
        'trajectory_limit_command': 'ros2_interface/TrajectoryLimitCommand',
        'park_command': 'int32',
        'drivingmode_report': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'WarningCommand'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'TrajectoryLimitCommand'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ros2_interface.msg import WarningCommand
        self.warning_command = kwargs.get('warning_command', WarningCommand())
        self.brake_report = kwargs.get('brake_report', int())
        self.change_lane_command = kwargs.get('change_lane_command', int())
        from ros2_interface.msg import TrajectoryLimitCommand
        self.trajectory_limit_command = kwargs.get('trajectory_limit_command', TrajectoryLimitCommand())
        self.park_command = kwargs.get('park_command', int())
        self.drivingmode_report = kwargs.get('drivingmode_report', int())

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
        if self.warning_command != other.warning_command:
            return False
        if self.brake_report != other.brake_report:
            return False
        if self.change_lane_command != other.change_lane_command:
            return False
        if self.trajectory_limit_command != other.trajectory_limit_command:
            return False
        if self.park_command != other.park_command:
            return False
        if self.drivingmode_report != other.drivingmode_report:
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
    def warning_command(self):
        """Message field 'warning_command'."""
        return self._warning_command

    @warning_command.setter
    def warning_command(self, value):
        if __debug__:
            from ros2_interface.msg import WarningCommand
            assert \
                isinstance(value, WarningCommand), \
                "The 'warning_command' field must be a sub message of type 'WarningCommand'"
        self._warning_command = value

    @builtins.property
    def brake_report(self):
        """Message field 'brake_report'."""
        return self._brake_report

    @brake_report.setter
    def brake_report(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_report' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brake_report' field must be an integer in [-2147483648, 2147483647]"
        self._brake_report = value

    @builtins.property
    def change_lane_command(self):
        """Message field 'change_lane_command'."""
        return self._change_lane_command

    @change_lane_command.setter
    def change_lane_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'change_lane_command' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'change_lane_command' field must be an integer in [-2147483648, 2147483647]"
        self._change_lane_command = value

    @builtins.property
    def trajectory_limit_command(self):
        """Message field 'trajectory_limit_command'."""
        return self._trajectory_limit_command

    @trajectory_limit_command.setter
    def trajectory_limit_command(self, value):
        if __debug__:
            from ros2_interface.msg import TrajectoryLimitCommand
            assert \
                isinstance(value, TrajectoryLimitCommand), \
                "The 'trajectory_limit_command' field must be a sub message of type 'TrajectoryLimitCommand'"
        self._trajectory_limit_command = value

    @builtins.property
    def park_command(self):
        """Message field 'park_command'."""
        return self._park_command

    @park_command.setter
    def park_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'park_command' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'park_command' field must be an integer in [-2147483648, 2147483647]"
        self._park_command = value

    @builtins.property
    def drivingmode_report(self):
        """Message field 'drivingmode_report'."""
        return self._drivingmode_report

    @drivingmode_report.setter
    def drivingmode_report(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drivingmode_report' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'drivingmode_report' field must be an integer in [-2147483648, 2147483647]"
        self._drivingmode_report = value

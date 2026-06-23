# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/PlanningCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningCmd(type):
    """Metaclass of message 'PlanningCmd'."""

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
                'ros2_interface.msg.PlanningCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_cmd

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


class PlanningCmd(metaclass=Metaclass_PlanningCmd):
    """Message class 'PlanningCmd'."""

    __slots__ = [
        '_header',
        '_turn_lamp_ctrl',
        '_high_beam_ctrl',
        '_low_beam_ctrl',
        '_horn_ctrl',
        '_front_wiper_ctrl',
        '_rear_wiper_ctrl',
        '_position_lamp_ctrl',
        '_front_fog_lamp_ctrl',
        '_rear_fog_lamp_ctrl',
        '_brake_lamp_ctrl',
        '_alarm_lamp_ctrl',
        '_lf_door_ctrl',
        '_rf_door_ctrl',
        '_lr_door_ctrl',
        '_rr_door_ctrl',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'turn_lamp_ctrl': 'int32',
        'high_beam_ctrl': 'int32',
        'low_beam_ctrl': 'int32',
        'horn_ctrl': 'int32',
        'front_wiper_ctrl': 'int32',
        'rear_wiper_ctrl': 'int32',
        'position_lamp_ctrl': 'int32',
        'front_fog_lamp_ctrl': 'int32',
        'rear_fog_lamp_ctrl': 'int32',
        'brake_lamp_ctrl': 'int32',
        'alarm_lamp_ctrl': 'int32',
        'lf_door_ctrl': 'int32',
        'rf_door_ctrl': 'int32',
        'lr_door_ctrl': 'int32',
        'rr_door_ctrl': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.turn_lamp_ctrl = kwargs.get('turn_lamp_ctrl', int())
        self.high_beam_ctrl = kwargs.get('high_beam_ctrl', int())
        self.low_beam_ctrl = kwargs.get('low_beam_ctrl', int())
        self.horn_ctrl = kwargs.get('horn_ctrl', int())
        self.front_wiper_ctrl = kwargs.get('front_wiper_ctrl', int())
        self.rear_wiper_ctrl = kwargs.get('rear_wiper_ctrl', int())
        self.position_lamp_ctrl = kwargs.get('position_lamp_ctrl', int())
        self.front_fog_lamp_ctrl = kwargs.get('front_fog_lamp_ctrl', int())
        self.rear_fog_lamp_ctrl = kwargs.get('rear_fog_lamp_ctrl', int())
        self.brake_lamp_ctrl = kwargs.get('brake_lamp_ctrl', int())
        self.alarm_lamp_ctrl = kwargs.get('alarm_lamp_ctrl', int())
        self.lf_door_ctrl = kwargs.get('lf_door_ctrl', int())
        self.rf_door_ctrl = kwargs.get('rf_door_ctrl', int())
        self.lr_door_ctrl = kwargs.get('lr_door_ctrl', int())
        self.rr_door_ctrl = kwargs.get('rr_door_ctrl', int())

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
        if self.turn_lamp_ctrl != other.turn_lamp_ctrl:
            return False
        if self.high_beam_ctrl != other.high_beam_ctrl:
            return False
        if self.low_beam_ctrl != other.low_beam_ctrl:
            return False
        if self.horn_ctrl != other.horn_ctrl:
            return False
        if self.front_wiper_ctrl != other.front_wiper_ctrl:
            return False
        if self.rear_wiper_ctrl != other.rear_wiper_ctrl:
            return False
        if self.position_lamp_ctrl != other.position_lamp_ctrl:
            return False
        if self.front_fog_lamp_ctrl != other.front_fog_lamp_ctrl:
            return False
        if self.rear_fog_lamp_ctrl != other.rear_fog_lamp_ctrl:
            return False
        if self.brake_lamp_ctrl != other.brake_lamp_ctrl:
            return False
        if self.alarm_lamp_ctrl != other.alarm_lamp_ctrl:
            return False
        if self.lf_door_ctrl != other.lf_door_ctrl:
            return False
        if self.rf_door_ctrl != other.rf_door_ctrl:
            return False
        if self.lr_door_ctrl != other.lr_door_ctrl:
            return False
        if self.rr_door_ctrl != other.rr_door_ctrl:
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
    def turn_lamp_ctrl(self):
        """Message field 'turn_lamp_ctrl'."""
        return self._turn_lamp_ctrl

    @turn_lamp_ctrl.setter
    def turn_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'turn_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._turn_lamp_ctrl = value

    @builtins.property
    def high_beam_ctrl(self):
        """Message field 'high_beam_ctrl'."""
        return self._high_beam_ctrl

    @high_beam_ctrl.setter
    def high_beam_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'high_beam_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'high_beam_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._high_beam_ctrl = value

    @builtins.property
    def low_beam_ctrl(self):
        """Message field 'low_beam_ctrl'."""
        return self._low_beam_ctrl

    @low_beam_ctrl.setter
    def low_beam_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'low_beam_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'low_beam_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._low_beam_ctrl = value

    @builtins.property
    def horn_ctrl(self):
        """Message field 'horn_ctrl'."""
        return self._horn_ctrl

    @horn_ctrl.setter
    def horn_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'horn_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'horn_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._horn_ctrl = value

    @builtins.property
    def front_wiper_ctrl(self):
        """Message field 'front_wiper_ctrl'."""
        return self._front_wiper_ctrl

    @front_wiper_ctrl.setter
    def front_wiper_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_wiper_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_wiper_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._front_wiper_ctrl = value

    @builtins.property
    def rear_wiper_ctrl(self):
        """Message field 'rear_wiper_ctrl'."""
        return self._rear_wiper_ctrl

    @rear_wiper_ctrl.setter
    def rear_wiper_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_wiper_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rear_wiper_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._rear_wiper_ctrl = value

    @builtins.property
    def position_lamp_ctrl(self):
        """Message field 'position_lamp_ctrl'."""
        return self._position_lamp_ctrl

    @position_lamp_ctrl.setter
    def position_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._position_lamp_ctrl = value

    @builtins.property
    def front_fog_lamp_ctrl(self):
        """Message field 'front_fog_lamp_ctrl'."""
        return self._front_fog_lamp_ctrl

    @front_fog_lamp_ctrl.setter
    def front_fog_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_fog_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_fog_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._front_fog_lamp_ctrl = value

    @builtins.property
    def rear_fog_lamp_ctrl(self):
        """Message field 'rear_fog_lamp_ctrl'."""
        return self._rear_fog_lamp_ctrl

    @rear_fog_lamp_ctrl.setter
    def rear_fog_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_fog_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rear_fog_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._rear_fog_lamp_ctrl = value

    @builtins.property
    def brake_lamp_ctrl(self):
        """Message field 'brake_lamp_ctrl'."""
        return self._brake_lamp_ctrl

    @brake_lamp_ctrl.setter
    def brake_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brake_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._brake_lamp_ctrl = value

    @builtins.property
    def alarm_lamp_ctrl(self):
        """Message field 'alarm_lamp_ctrl'."""
        return self._alarm_lamp_ctrl

    @alarm_lamp_ctrl.setter
    def alarm_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm_lamp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'alarm_lamp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._alarm_lamp_ctrl = value

    @builtins.property
    def lf_door_ctrl(self):
        """Message field 'lf_door_ctrl'."""
        return self._lf_door_ctrl

    @lf_door_ctrl.setter
    def lf_door_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lf_door_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lf_door_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._lf_door_ctrl = value

    @builtins.property
    def rf_door_ctrl(self):
        """Message field 'rf_door_ctrl'."""
        return self._rf_door_ctrl

    @rf_door_ctrl.setter
    def rf_door_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rf_door_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rf_door_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._rf_door_ctrl = value

    @builtins.property
    def lr_door_ctrl(self):
        """Message field 'lr_door_ctrl'."""
        return self._lr_door_ctrl

    @lr_door_ctrl.setter
    def lr_door_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lr_door_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lr_door_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._lr_door_ctrl = value

    @builtins.property
    def rr_door_ctrl(self):
        """Message field 'rr_door_ctrl'."""
        return self._rr_door_ctrl

    @rr_door_ctrl.setter
    def rr_door_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rr_door_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rr_door_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._rr_door_ctrl = value

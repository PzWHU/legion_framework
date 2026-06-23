# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/VehicleTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleTask(type):
    """Metaclass of message 'VehicleTask'."""

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
                'ros2_interface.msg.VehicleTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_task

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


class VehicleTask(metaclass=Metaclass_VehicleTask):
    """Message class 'VehicleTask'."""

    __slots__ = [
        '_header',
        '_clean_up_ctrl',
        '_watering_ctrl',
        '_water_add_ctrl',
        '_hatch_unlock_ctrl',
        '_decorative_light_ctrl',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'clean_up_ctrl': 'int32',
        'watering_ctrl': 'int32',
        'water_add_ctrl': 'int32',
        'hatch_unlock_ctrl': 'int32',
        'decorative_light_ctrl': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.clean_up_ctrl = kwargs.get('clean_up_ctrl', int())
        self.watering_ctrl = kwargs.get('watering_ctrl', int())
        self.water_add_ctrl = kwargs.get('water_add_ctrl', int())
        self.hatch_unlock_ctrl = kwargs.get('hatch_unlock_ctrl', int())
        self.decorative_light_ctrl = kwargs.get('decorative_light_ctrl', int())

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
        if self.clean_up_ctrl != other.clean_up_ctrl:
            return False
        if self.watering_ctrl != other.watering_ctrl:
            return False
        if self.water_add_ctrl != other.water_add_ctrl:
            return False
        if self.hatch_unlock_ctrl != other.hatch_unlock_ctrl:
            return False
        if self.decorative_light_ctrl != other.decorative_light_ctrl:
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
    def clean_up_ctrl(self):
        """Message field 'clean_up_ctrl'."""
        return self._clean_up_ctrl

    @clean_up_ctrl.setter
    def clean_up_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'clean_up_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'clean_up_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._clean_up_ctrl = value

    @builtins.property
    def watering_ctrl(self):
        """Message field 'watering_ctrl'."""
        return self._watering_ctrl

    @watering_ctrl.setter
    def watering_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'watering_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'watering_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._watering_ctrl = value

    @builtins.property
    def water_add_ctrl(self):
        """Message field 'water_add_ctrl'."""
        return self._water_add_ctrl

    @water_add_ctrl.setter
    def water_add_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'water_add_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'water_add_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._water_add_ctrl = value

    @builtins.property
    def hatch_unlock_ctrl(self):
        """Message field 'hatch_unlock_ctrl'."""
        return self._hatch_unlock_ctrl

    @hatch_unlock_ctrl.setter
    def hatch_unlock_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hatch_unlock_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hatch_unlock_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._hatch_unlock_ctrl = value

    @builtins.property
    def decorative_light_ctrl(self):
        """Message field 'decorative_light_ctrl'."""
        return self._decorative_light_ctrl

    @decorative_light_ctrl.setter
    def decorative_light_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'decorative_light_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'decorative_light_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._decorative_light_ctrl = value

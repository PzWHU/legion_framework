# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/Grid.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Grid(type):
    """Metaclass of message 'Grid'."""

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
                'ros2_interface.msg.Grid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__grid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__grid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__grid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__grid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__grid

            from ros2_interface.msg import SLPoint
            if SLPoint.__class__._TYPE_SUPPORT is None:
                SLPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Grid(metaclass=Metaclass_Grid):
    """Message class 'Grid'."""

    __slots__ = [
        '_x',
        '_y',
        '_sl_point',
        '_yaw',
        '_potential',
        '_region_id',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'sl_point': 'ros2_interface/SLPoint',
        'yaw': 'double',
        'potential': 'double',
        'region_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'SLPoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        from ros2_interface.msg import SLPoint
        self.sl_point = kwargs.get('sl_point', SLPoint())
        self.yaw = kwargs.get('yaw', float())
        self.potential = kwargs.get('potential', float())
        self.region_id = kwargs.get('region_id', int())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.sl_point != other.sl_point:
            return False
        if self.yaw != other.yaw:
            return False
        if self.potential != other.potential:
            return False
        if self.region_id != other.region_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def sl_point(self):
        """Message field 'sl_point'."""
        return self._sl_point

    @sl_point.setter
    def sl_point(self, value):
        if __debug__:
            from ros2_interface.msg import SLPoint
            assert \
                isinstance(value, SLPoint), \
                "The 'sl_point' field must be a sub message of type 'SLPoint'"
        self._sl_point = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def potential(self):
        """Message field 'potential'."""
        return self._potential

    @potential.setter
    def potential(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'potential' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'potential' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._potential = value

    @builtins.property
    def region_id(self):
        """Message field 'region_id'."""
        return self._region_id

    @region_id.setter
    def region_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'region_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'region_id' field must be an integer in [-2147483648, 2147483647]"
        self._region_id = value

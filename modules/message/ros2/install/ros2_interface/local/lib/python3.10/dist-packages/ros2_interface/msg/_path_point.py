# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/PathPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathPoint(type):
    """Metaclass of message 'PathPoint'."""

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
                'ros2_interface.msg.PathPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_point

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPoint(metaclass=Metaclass_PathPoint):
    """Message class 'PathPoint'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_theta',
        '_kappa',
        '_s',
        '_dkappa',
        '_ddkappa',
        '_lane_id',
        '_x_derivative',
        '_y_derivative',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'theta': 'double',
        'kappa': 'double',
        's': 'double',
        'dkappa': 'double',
        'ddkappa': 'double',
        'lane_id': 'double',
        'x_derivative': 'double',
        'y_derivative': 'double',
    }

    SLOT_TYPES = (
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.theta = kwargs.get('theta', float())
        self.kappa = kwargs.get('kappa', float())
        self.s = kwargs.get('s', float())
        self.dkappa = kwargs.get('dkappa', float())
        self.ddkappa = kwargs.get('ddkappa', float())
        self.lane_id = kwargs.get('lane_id', float())
        self.x_derivative = kwargs.get('x_derivative', float())
        self.y_derivative = kwargs.get('y_derivative', float())

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
        if self.z != other.z:
            return False
        if self.theta != other.theta:
            return False
        if self.kappa != other.kappa:
            return False
        if self.s != other.s:
            return False
        if self.dkappa != other.dkappa:
            return False
        if self.ddkappa != other.ddkappa:
            return False
        if self.lane_id != other.lane_id:
            return False
        if self.x_derivative != other.x_derivative:
            return False
        if self.y_derivative != other.y_derivative:
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
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta = value

    @builtins.property
    def kappa(self):
        """Message field 'kappa'."""
        return self._kappa

    @kappa.setter
    def kappa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kappa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kappa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kappa = value

    @builtins.property
    def s(self):
        """Message field 's'."""
        return self._s

    @s.setter
    def s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 's' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._s = value

    @builtins.property
    def dkappa(self):
        """Message field 'dkappa'."""
        return self._dkappa

    @dkappa.setter
    def dkappa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dkappa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dkappa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dkappa = value

    @builtins.property
    def ddkappa(self):
        """Message field 'ddkappa'."""
        return self._ddkappa

    @ddkappa.setter
    def ddkappa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ddkappa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ddkappa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ddkappa = value

    @builtins.property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_id' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lane_id' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lane_id = value

    @builtins.property
    def x_derivative(self):
        """Message field 'x_derivative'."""
        return self._x_derivative

    @x_derivative.setter
    def x_derivative(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_derivative' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_derivative' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_derivative = value

    @builtins.property
    def y_derivative(self):
        """Message field 'y_derivative'."""
        return self._y_derivative

    @y_derivative.setter
    def y_derivative(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_derivative' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_derivative' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_derivative = value

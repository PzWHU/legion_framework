# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/UssParkingInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UssParkingInfo(type):
    """Metaclass of message 'UssParkingInfo'."""

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
                'ros2_interface.msg.UssParkingInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uss_parking_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uss_parking_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uss_parking_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uss_parking_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uss_parking_info

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

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


class UssParkingInfo(metaclass=Metaclass_UssParkingInfo):
    """Message class 'UssParkingInfo'."""

    __slots__ = [
        '_header',
        '_uss_parking_type',
        '_parking_point0',
        '_parking_point1',
        '_parking_point2',
        '_parking_point3',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'uss_parking_type': 'int32',
        'parking_point0': 'ros2_interface/Point3D',
        'parking_point1': 'ros2_interface/Point3D',
        'parking_point2': 'ros2_interface/Point3D',
        'parking_point3': 'ros2_interface/Point3D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.uss_parking_type = kwargs.get('uss_parking_type', int())
        from ros2_interface.msg import Point3D
        self.parking_point0 = kwargs.get('parking_point0', Point3D())
        from ros2_interface.msg import Point3D
        self.parking_point1 = kwargs.get('parking_point1', Point3D())
        from ros2_interface.msg import Point3D
        self.parking_point2 = kwargs.get('parking_point2', Point3D())
        from ros2_interface.msg import Point3D
        self.parking_point3 = kwargs.get('parking_point3', Point3D())

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
        if self.uss_parking_type != other.uss_parking_type:
            return False
        if self.parking_point0 != other.parking_point0:
            return False
        if self.parking_point1 != other.parking_point1:
            return False
        if self.parking_point2 != other.parking_point2:
            return False
        if self.parking_point3 != other.parking_point3:
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
    def uss_parking_type(self):
        """Message field 'uss_parking_type'."""
        return self._uss_parking_type

    @uss_parking_type.setter
    def uss_parking_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uss_parking_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uss_parking_type' field must be an integer in [-2147483648, 2147483647]"
        self._uss_parking_type = value

    @builtins.property
    def parking_point0(self):
        """Message field 'parking_point0'."""
        return self._parking_point0

    @parking_point0.setter
    def parking_point0(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'parking_point0' field must be a sub message of type 'Point3D'"
        self._parking_point0 = value

    @builtins.property
    def parking_point1(self):
        """Message field 'parking_point1'."""
        return self._parking_point1

    @parking_point1.setter
    def parking_point1(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'parking_point1' field must be a sub message of type 'Point3D'"
        self._parking_point1 = value

    @builtins.property
    def parking_point2(self):
        """Message field 'parking_point2'."""
        return self._parking_point2

    @parking_point2.setter
    def parking_point2(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'parking_point2' field must be a sub message of type 'Point3D'"
        self._parking_point2 = value

    @builtins.property
    def parking_point3(self):
        """Message field 'parking_point3'."""
        return self._parking_point3

    @parking_point3.setter
    def parking_point3(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'parking_point3' field must be a sub message of type 'Point3D'"
        self._parking_point3 = value

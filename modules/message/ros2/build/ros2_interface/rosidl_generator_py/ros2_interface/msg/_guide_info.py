# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/GuideInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GuideInfo(type):
    """Metaclass of message 'GuideInfo'."""

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
                'ros2_interface.msg.GuideInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__guide_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__guide_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__guide_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__guide_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__guide_info

            from ros2_interface.msg import GuideRoad
            if GuideRoad.__class__._TYPE_SUPPORT is None:
                GuideRoad.__class__.__import_type_support__()

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


class GuideInfo(metaclass=Metaclass_GuideInfo):
    """Message class 'GuideInfo'."""

    __slots__ = [
        '_header',
        '_next_dis',
        '_current_road',
        '_next_road',
        '_round_status',
        '_intersection_status',
        '_roads_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'next_dis': 'double',
        'current_road': 'ros2_interface/GuideRoad',
        'next_road': 'ros2_interface/GuideRoad',
        'round_status': 'int8',
        'intersection_status': 'int8',
        'roads_status': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'GuideRoad'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'GuideRoad'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.next_dis = kwargs.get('next_dis', float())
        from ros2_interface.msg import GuideRoad
        self.current_road = kwargs.get('current_road', GuideRoad())
        from ros2_interface.msg import GuideRoad
        self.next_road = kwargs.get('next_road', GuideRoad())
        self.round_status = kwargs.get('round_status', int())
        self.intersection_status = kwargs.get('intersection_status', int())
        self.roads_status = kwargs.get('roads_status', int())

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
        if self.next_dis != other.next_dis:
            return False
        if self.current_road != other.current_road:
            return False
        if self.next_road != other.next_road:
            return False
        if self.round_status != other.round_status:
            return False
        if self.intersection_status != other.intersection_status:
            return False
        if self.roads_status != other.roads_status:
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
    def next_dis(self):
        """Message field 'next_dis'."""
        return self._next_dis

    @next_dis.setter
    def next_dis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'next_dis' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'next_dis' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._next_dis = value

    @builtins.property
    def current_road(self):
        """Message field 'current_road'."""
        return self._current_road

    @current_road.setter
    def current_road(self, value):
        if __debug__:
            from ros2_interface.msg import GuideRoad
            assert \
                isinstance(value, GuideRoad), \
                "The 'current_road' field must be a sub message of type 'GuideRoad'"
        self._current_road = value

    @builtins.property
    def next_road(self):
        """Message field 'next_road'."""
        return self._next_road

    @next_road.setter
    def next_road(self, value):
        if __debug__:
            from ros2_interface.msg import GuideRoad
            assert \
                isinstance(value, GuideRoad), \
                "The 'next_road' field must be a sub message of type 'GuideRoad'"
        self._next_road = value

    @builtins.property
    def round_status(self):
        """Message field 'round_status'."""
        return self._round_status

    @round_status.setter
    def round_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'round_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'round_status' field must be an integer in [-128, 127]"
        self._round_status = value

    @builtins.property
    def intersection_status(self):
        """Message field 'intersection_status'."""
        return self._intersection_status

    @intersection_status.setter
    def intersection_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'intersection_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'intersection_status' field must be an integer in [-128, 127]"
        self._intersection_status = value

    @builtins.property
    def roads_status(self):
        """Message field 'roads_status'."""
        return self._roads_status

    @roads_status.setter
    def roads_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roads_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'roads_status' field must be an integer in [-128, 127]"
        self._roads_status = value

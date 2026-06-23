# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/ParkingInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParkingInfo(type):
    """Metaclass of message 'ParkingInfo'."""

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
                'ros2_interface.msg.ParkingInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parking_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parking_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parking_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parking_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parking_info

            from ros2_interface.msg import ParkingStopper
            if ParkingStopper.__class__._TYPE_SUPPORT is None:
                ParkingStopper.__class__.__import_type_support__()

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

            from ros2_interface.msg import Polygon3D
            if Polygon3D.__class__._TYPE_SUPPORT is None:
                Polygon3D.__class__.__import_type_support__()

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


class ParkingInfo(metaclass=Metaclass_ParkingInfo):
    """Message class 'ParkingInfo'."""

    __slots__ = [
        '_header',
        '_parking_space_id',
        '_parking_type',
        '_parking_status',
        '_confidence',
        '_center_point_of_parking',
        '_theta',
        '_width',
        '_length',
        '_yaw_offset',
        '_polygon',
        '_sensor_id',
        '_is_lane_width_valid',
        '_lane_width',
        '_parking_stoppers',
        '_parking_direction_type',
        '_left_occupied_status',
        '_right_occupied_status',
        '_parking_source_type',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'parking_space_id': 'int32',
        'parking_type': 'int32',
        'parking_status': 'int32',
        'confidence': 'double',
        'center_point_of_parking': 'ros2_interface/Point3D',
        'theta': 'double',
        'width': 'double',
        'length': 'double',
        'yaw_offset': 'double',
        'polygon': 'ros2_interface/Polygon3D',
        'sensor_id': 'int32',
        'is_lane_width_valid': 'boolean',
        'lane_width': 'double',
        'parking_stoppers': 'sequence<ros2_interface/ParkingStopper>',
        'parking_direction_type': 'int32',
        'left_occupied_status': 'int32',
        'right_occupied_status': 'int32',
        'parking_source_type': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Polygon3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'ParkingStopper')),  # noqa: E501
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
        self.parking_space_id = kwargs.get('parking_space_id', int())
        self.parking_type = kwargs.get('parking_type', int())
        self.parking_status = kwargs.get('parking_status', int())
        self.confidence = kwargs.get('confidence', float())
        from ros2_interface.msg import Point3D
        self.center_point_of_parking = kwargs.get('center_point_of_parking', Point3D())
        self.theta = kwargs.get('theta', float())
        self.width = kwargs.get('width', float())
        self.length = kwargs.get('length', float())
        self.yaw_offset = kwargs.get('yaw_offset', float())
        from ros2_interface.msg import Polygon3D
        self.polygon = kwargs.get('polygon', Polygon3D())
        self.sensor_id = kwargs.get('sensor_id', int())
        self.is_lane_width_valid = kwargs.get('is_lane_width_valid', bool())
        self.lane_width = kwargs.get('lane_width', float())
        self.parking_stoppers = kwargs.get('parking_stoppers', [])
        self.parking_direction_type = kwargs.get('parking_direction_type', int())
        self.left_occupied_status = kwargs.get('left_occupied_status', int())
        self.right_occupied_status = kwargs.get('right_occupied_status', int())
        self.parking_source_type = kwargs.get('parking_source_type', int())

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
        if self.parking_space_id != other.parking_space_id:
            return False
        if self.parking_type != other.parking_type:
            return False
        if self.parking_status != other.parking_status:
            return False
        if self.confidence != other.confidence:
            return False
        if self.center_point_of_parking != other.center_point_of_parking:
            return False
        if self.theta != other.theta:
            return False
        if self.width != other.width:
            return False
        if self.length != other.length:
            return False
        if self.yaw_offset != other.yaw_offset:
            return False
        if self.polygon != other.polygon:
            return False
        if self.sensor_id != other.sensor_id:
            return False
        if self.is_lane_width_valid != other.is_lane_width_valid:
            return False
        if self.lane_width != other.lane_width:
            return False
        if self.parking_stoppers != other.parking_stoppers:
            return False
        if self.parking_direction_type != other.parking_direction_type:
            return False
        if self.left_occupied_status != other.left_occupied_status:
            return False
        if self.right_occupied_status != other.right_occupied_status:
            return False
        if self.parking_source_type != other.parking_source_type:
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
    def parking_space_id(self):
        """Message field 'parking_space_id'."""
        return self._parking_space_id

    @parking_space_id.setter
    def parking_space_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_space_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_space_id' field must be an integer in [-2147483648, 2147483647]"
        self._parking_space_id = value

    @builtins.property
    def parking_type(self):
        """Message field 'parking_type'."""
        return self._parking_type

    @parking_type.setter
    def parking_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_type' field must be an integer in [-2147483648, 2147483647]"
        self._parking_type = value

    @builtins.property
    def parking_status(self):
        """Message field 'parking_status'."""
        return self._parking_status

    @parking_status.setter
    def parking_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_status' field must be an integer in [-2147483648, 2147483647]"
        self._parking_status = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value

    @builtins.property
    def center_point_of_parking(self):
        """Message field 'center_point_of_parking'."""
        return self._center_point_of_parking

    @center_point_of_parking.setter
    def center_point_of_parking(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'center_point_of_parking' field must be a sub message of type 'Point3D'"
        self._center_point_of_parking = value

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
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._width = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length = value

    @builtins.property
    def yaw_offset(self):
        """Message field 'yaw_offset'."""
        return self._yaw_offset

    @yaw_offset.setter
    def yaw_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_offset = value

    @builtins.property
    def polygon(self):
        """Message field 'polygon'."""
        return self._polygon

    @polygon.setter
    def polygon(self, value):
        if __debug__:
            from ros2_interface.msg import Polygon3D
            assert \
                isinstance(value, Polygon3D), \
                "The 'polygon' field must be a sub message of type 'Polygon3D'"
        self._polygon = value

    @builtins.property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sensor_id' field must be an integer in [-2147483648, 2147483647]"
        self._sensor_id = value

    @builtins.property
    def is_lane_width_valid(self):
        """Message field 'is_lane_width_valid'."""
        return self._is_lane_width_valid

    @is_lane_width_valid.setter
    def is_lane_width_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_lane_width_valid' field must be of type 'bool'"
        self._is_lane_width_valid = value

    @builtins.property
    def lane_width(self):
        """Message field 'lane_width'."""
        return self._lane_width

    @lane_width.setter
    def lane_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lane_width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lane_width = value

    @builtins.property
    def parking_stoppers(self):
        """Message field 'parking_stoppers'."""
        return self._parking_stoppers

    @parking_stoppers.setter
    def parking_stoppers(self, value):
        if __debug__:
            from ros2_interface.msg import ParkingStopper
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
                 all(isinstance(v, ParkingStopper) for v in value) and
                 True), \
                "The 'parking_stoppers' field must be a set or sequence and each value of type 'ParkingStopper'"
        self._parking_stoppers = value

    @builtins.property
    def parking_direction_type(self):
        """Message field 'parking_direction_type'."""
        return self._parking_direction_type

    @parking_direction_type.setter
    def parking_direction_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_direction_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_direction_type' field must be an integer in [-2147483648, 2147483647]"
        self._parking_direction_type = value

    @builtins.property
    def left_occupied_status(self):
        """Message field 'left_occupied_status'."""
        return self._left_occupied_status

    @left_occupied_status.setter
    def left_occupied_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_occupied_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_occupied_status' field must be an integer in [-2147483648, 2147483647]"
        self._left_occupied_status = value

    @builtins.property
    def right_occupied_status(self):
        """Message field 'right_occupied_status'."""
        return self._right_occupied_status

    @right_occupied_status.setter
    def right_occupied_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_occupied_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_occupied_status' field must be an integer in [-2147483648, 2147483647]"
        self._right_occupied_status = value

    @builtins.property
    def parking_source_type(self):
        """Message field 'parking_source_type'."""
        return self._parking_source_type

    @parking_source_type.setter
    def parking_source_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_source_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_source_type' field must be an integer in [-2147483648, 2147483647]"
        self._parking_source_type = value

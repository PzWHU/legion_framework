# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/HMIObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HMIObstacle(type):
    """Metaclass of message 'HMIObstacle'."""

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
                'ros2_interface.msg.HMIObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hmi_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hmi_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hmi_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hmi_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hmi_obstacle

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HMIObstacle(metaclass=Metaclass_HMIObstacle):
    """Message class 'HMIObstacle'."""

    __slots__ = [
        '_id',
        '_center_pos_vehicle',
        '_center_pos_abs',
        '_theta_vehicle',
        '_theta_abs',
        '_length',
        '_width',
        '_height',
        '_type',
        '_confidence',
        '_confidence_type',
        '_sub_type',
        '_points',
        '_cipv_flag',
        '_fusion_type',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'center_pos_vehicle': 'ros2_interface/Point3D',
        'center_pos_abs': 'ros2_interface/Point3D',
        'theta_vehicle': 'double',
        'theta_abs': 'double',
        'length': 'double',
        'width': 'double',
        'height': 'double',
        'type': 'int32',
        'confidence': 'double',
        'confidence_type': 'int32',
        'sub_type': 'int32',
        'points': 'sequence<ros2_interface/Point3D>',
        'cipv_flag': 'uint8',
        'fusion_type': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from ros2_interface.msg import Point3D
        self.center_pos_vehicle = kwargs.get('center_pos_vehicle', Point3D())
        from ros2_interface.msg import Point3D
        self.center_pos_abs = kwargs.get('center_pos_abs', Point3D())
        self.theta_vehicle = kwargs.get('theta_vehicle', float())
        self.theta_abs = kwargs.get('theta_abs', float())
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.height = kwargs.get('height', float())
        self.type = kwargs.get('type', int())
        self.confidence = kwargs.get('confidence', float())
        self.confidence_type = kwargs.get('confidence_type', int())
        self.sub_type = kwargs.get('sub_type', int())
        self.points = kwargs.get('points', [])
        self.cipv_flag = kwargs.get('cipv_flag', int())
        self.fusion_type = kwargs.get('fusion_type', int())

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
        if self.id != other.id:
            return False
        if self.center_pos_vehicle != other.center_pos_vehicle:
            return False
        if self.center_pos_abs != other.center_pos_abs:
            return False
        if self.theta_vehicle != other.theta_vehicle:
            return False
        if self.theta_abs != other.theta_abs:
            return False
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.type != other.type:
            return False
        if self.confidence != other.confidence:
            return False
        if self.confidence_type != other.confidence_type:
            return False
        if self.sub_type != other.sub_type:
            return False
        if self.points != other.points:
            return False
        if self.cipv_flag != other.cipv_flag:
            return False
        if self.fusion_type != other.fusion_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def center_pos_vehicle(self):
        """Message field 'center_pos_vehicle'."""
        return self._center_pos_vehicle

    @center_pos_vehicle.setter
    def center_pos_vehicle(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'center_pos_vehicle' field must be a sub message of type 'Point3D'"
        self._center_pos_vehicle = value

    @builtins.property
    def center_pos_abs(self):
        """Message field 'center_pos_abs'."""
        return self._center_pos_abs

    @center_pos_abs.setter
    def center_pos_abs(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'center_pos_abs' field must be a sub message of type 'Point3D'"
        self._center_pos_abs = value

    @builtins.property
    def theta_vehicle(self):
        """Message field 'theta_vehicle'."""
        return self._theta_vehicle

    @theta_vehicle.setter
    def theta_vehicle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_vehicle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_vehicle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_vehicle = value

    @builtins.property
    def theta_abs(self):
        """Message field 'theta_abs'."""
        return self._theta_abs

    @theta_abs.setter
    def theta_abs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_abs' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_abs' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_abs = value

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
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

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
    def confidence_type(self):
        """Message field 'confidence_type'."""
        return self._confidence_type

    @confidence_type.setter
    def confidence_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'confidence_type' field must be an integer in [-2147483648, 2147483647]"
        self._confidence_type = value

    @builtins.property
    def sub_type(self):
        """Message field 'sub_type'."""
        return self._sub_type

    @sub_type.setter
    def sub_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sub_type' field must be an integer in [-2147483648, 2147483647]"
        self._sub_type = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
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
                 all(isinstance(v, Point3D) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point3D'"
        self._points = value

    @builtins.property
    def cipv_flag(self):
        """Message field 'cipv_flag'."""
        return self._cipv_flag

    @cipv_flag.setter
    def cipv_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cipv_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cipv_flag' field must be an unsigned integer in [0, 255]"
        self._cipv_flag = value

    @builtins.property
    def fusion_type(self):
        """Message field 'fusion_type'."""
        return self._fusion_type

    @fusion_type.setter
    def fusion_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fusion_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fusion_type' field must be an integer in [-2147483648, 2147483647]"
        self._fusion_type = value

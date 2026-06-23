# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/PerceptionObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'position_covariance'
# Member 'velocity_covariance'
# Member 'acceleration_covariance'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PerceptionObstacle(type):
    """Metaclass of message 'PerceptionObstacle'."""

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
                'ros2_interface.msg.PerceptionObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__perception_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__perception_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__perception_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__perception_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__perception_obstacle

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


class PerceptionObstacle(metaclass=Metaclass_PerceptionObstacle):
    """Message class 'PerceptionObstacle'."""

    __slots__ = [
        '_id',
        '_position',
        '_theta',
        '_velocity',
        '_length',
        '_width',
        '_height',
        '_polygon_point',
        '_tracking_time',
        '_type',
        '_lane_position',
        '_confidence',
        '_timestamp',
        '_confidence_type',
        '_drops',
        '_acceleration',
        '_anchor_point',
        '_bounding_box',
        '_sub_type',
        '_height_above_ground',
        '_position_covariance',
        '_velocity_covariance',
        '_acceleration_covariance',
        '_light_status',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'position': 'ros2_interface/Point3D',
        'theta': 'double',
        'velocity': 'ros2_interface/Point3D',
        'length': 'double',
        'width': 'double',
        'height': 'double',
        'polygon_point': 'sequence<ros2_interface/Point3D>',
        'tracking_time': 'double',
        'type': 'int32',
        'lane_position': 'int32',
        'confidence': 'double',
        'timestamp': 'double',
        'confidence_type': 'uint8',
        'drops': 'ros2_interface/Point3D',
        'acceleration': 'ros2_interface/Point3D',
        'anchor_point': 'ros2_interface/Point3D',
        'bounding_box': 'sequence<ros2_interface/Point3D>',
        'sub_type': 'int32',
        'height_above_ground': 'double',
        'position_covariance': 'sequence<double>',
        'velocity_covariance': 'sequence<double>',
        'acceleration_covariance': 'sequence<double>',
        'light_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from ros2_interface.msg import Point3D
        self.position = kwargs.get('position', Point3D())
        self.theta = kwargs.get('theta', float())
        from ros2_interface.msg import Point3D
        self.velocity = kwargs.get('velocity', Point3D())
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.height = kwargs.get('height', float())
        self.polygon_point = kwargs.get('polygon_point', [])
        self.tracking_time = kwargs.get('tracking_time', float())
        self.type = kwargs.get('type', int())
        self.lane_position = kwargs.get('lane_position', int())
        self.confidence = kwargs.get('confidence', float())
        self.timestamp = kwargs.get('timestamp', float())
        self.confidence_type = kwargs.get('confidence_type', int())
        from ros2_interface.msg import Point3D
        self.drops = kwargs.get('drops', Point3D())
        from ros2_interface.msg import Point3D
        self.acceleration = kwargs.get('acceleration', Point3D())
        from ros2_interface.msg import Point3D
        self.anchor_point = kwargs.get('anchor_point', Point3D())
        self.bounding_box = kwargs.get('bounding_box', [])
        self.sub_type = kwargs.get('sub_type', int())
        self.height_above_ground = kwargs.get('height_above_ground', float())
        self.position_covariance = array.array('d', kwargs.get('position_covariance', []))
        self.velocity_covariance = array.array('d', kwargs.get('velocity_covariance', []))
        self.acceleration_covariance = array.array('d', kwargs.get('acceleration_covariance', []))
        self.light_status = kwargs.get('light_status', int())

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
        if self.position != other.position:
            return False
        if self.theta != other.theta:
            return False
        if self.velocity != other.velocity:
            return False
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.polygon_point != other.polygon_point:
            return False
        if self.tracking_time != other.tracking_time:
            return False
        if self.type != other.type:
            return False
        if self.lane_position != other.lane_position:
            return False
        if self.confidence != other.confidence:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.confidence_type != other.confidence_type:
            return False
        if self.drops != other.drops:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.anchor_point != other.anchor_point:
            return False
        if self.bounding_box != other.bounding_box:
            return False
        if self.sub_type != other.sub_type:
            return False
        if self.height_above_ground != other.height_above_ground:
            return False
        if self.position_covariance != other.position_covariance:
            return False
        if self.velocity_covariance != other.velocity_covariance:
            return False
        if self.acceleration_covariance != other.acceleration_covariance:
            return False
        if self.light_status != other.light_status:
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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'position' field must be a sub message of type 'Point3D'"
        self._position = value

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
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'velocity' field must be a sub message of type 'Point3D'"
        self._velocity = value

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

    @builtins.property
    def polygon_point(self):
        """Message field 'polygon_point'."""
        return self._polygon_point

    @polygon_point.setter
    def polygon_point(self, value):
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
                "The 'polygon_point' field must be a set or sequence and each value of type 'Point3D'"
        self._polygon_point = value

    @builtins.property
    def tracking_time(self):
        """Message field 'tracking_time'."""
        return self._tracking_time

    @tracking_time.setter
    def tracking_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tracking_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tracking_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tracking_time = value

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
    def lane_position(self):
        """Message field 'lane_position'."""
        return self._lane_position

    @lane_position.setter
    def lane_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_position' field must be an integer in [-2147483648, 2147483647]"
        self._lane_position = value

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
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

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
            assert value >= 0 and value < 256, \
                "The 'confidence_type' field must be an unsigned integer in [0, 255]"
        self._confidence_type = value

    @builtins.property
    def drops(self):
        """Message field 'drops'."""
        return self._drops

    @drops.setter
    def drops(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'drops' field must be a sub message of type 'Point3D'"
        self._drops = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'acceleration' field must be a sub message of type 'Point3D'"
        self._acceleration = value

    @builtins.property
    def anchor_point(self):
        """Message field 'anchor_point'."""
        return self._anchor_point

    @anchor_point.setter
    def anchor_point(self, value):
        if __debug__:
            from ros2_interface.msg import Point3D
            assert \
                isinstance(value, Point3D), \
                "The 'anchor_point' field must be a sub message of type 'Point3D'"
        self._anchor_point = value

    @builtins.property
    def bounding_box(self):
        """Message field 'bounding_box'."""
        return self._bounding_box

    @bounding_box.setter
    def bounding_box(self, value):
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
                "The 'bounding_box' field must be a set or sequence and each value of type 'Point3D'"
        self._bounding_box = value

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
    def height_above_ground(self):
        """Message field 'height_above_ground'."""
        return self._height_above_ground

    @height_above_ground.setter
    def height_above_ground(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_above_ground' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height_above_ground' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height_above_ground = value

    @builtins.property
    def position_covariance(self):
        """Message field 'position_covariance'."""
        return self._position_covariance

    @position_covariance.setter
    def position_covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'position_covariance' array.array() must have the type code of 'd'"
            self._position_covariance = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position_covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position_covariance = array.array('d', value)

    @builtins.property
    def velocity_covariance(self):
        """Message field 'velocity_covariance'."""
        return self._velocity_covariance

    @velocity_covariance.setter
    def velocity_covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'velocity_covariance' array.array() must have the type code of 'd'"
            self._velocity_covariance = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'velocity_covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._velocity_covariance = array.array('d', value)

    @builtins.property
    def acceleration_covariance(self):
        """Message field 'acceleration_covariance'."""
        return self._acceleration_covariance

    @acceleration_covariance.setter
    def acceleration_covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'acceleration_covariance' array.array() must have the type code of 'd'"
            self._acceleration_covariance = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'acceleration_covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._acceleration_covariance = array.array('d', value)

    @builtins.property
    def light_status(self):
        """Message field 'light_status'."""
        return self._light_status

    @light_status.setter
    def light_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'light_status' field must be an unsigned integer in [0, 255]"
        self._light_status = value

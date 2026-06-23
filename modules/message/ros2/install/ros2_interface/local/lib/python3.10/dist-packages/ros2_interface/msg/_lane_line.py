# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/LaneLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'homography_mat'
# Member 'homography_mat_inv'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneLine(type):
    """Metaclass of message 'LaneLine'."""

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
                'ros2_interface.msg.LaneLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_line

            from ros2_interface.msg import EndPoints
            if EndPoints.__class__._TYPE_SUPPORT is None:
                EndPoints.__class__.__import_type_support__()

            from ros2_interface.msg import LaneLineCubicCurve
            if LaneLineCubicCurve.__class__._TYPE_SUPPORT is None:
                LaneLineCubicCurve.__class__.__import_type_support__()

            from ros2_interface.msg import Point2D
            if Point2D.__class__._TYPE_SUPPORT is None:
                Point2D.__class__.__import_type_support__()

            from ros2_interface.msg import Point3D
            if Point3D.__class__._TYPE_SUPPORT is None:
                Point3D.__class__.__import_type_support__()

            from ros2_interface.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneLine(metaclass=Metaclass_LaneLine):
    """Message class 'LaneLine'."""

    __slots__ = [
        '_lane_type',
        '_lane_color',
        '_pos_type',
        '_curve_vehicle',
        '_curve_image',
        '_curve_abs',
        '_pts_vehicle',
        '_pts_image',
        '_pts_abs',
        '_image_end_point',
        '_pts_key',
        '_hd_lane_id',
        '_confidence',
        '_lane_quality',
        '_fused_lane_type',
        '_homography_mat',
        '_homography_mat_inv',
        '_lane_coordinate_type',
        '_use_type',
        '_create_time',
    ]

    _fields_and_field_types = {
        'lane_type': 'int32',
        'lane_color': 'int32',
        'pos_type': 'int32',
        'curve_vehicle': 'ros2_interface/LaneLineCubicCurve',
        'curve_image': 'ros2_interface/LaneLineCubicCurve',
        'curve_abs': 'ros2_interface/LaneLineCubicCurve',
        'pts_vehicle': 'sequence<ros2_interface/Point3D>',
        'pts_image': 'sequence<ros2_interface/Point2D>',
        'pts_abs': 'sequence<ros2_interface/Point3D>',
        'image_end_point': 'ros2_interface/EndPoints',
        'pts_key': 'sequence<ros2_interface/Point2D>',
        'hd_lane_id': 'uint8',
        'confidence': 'double',
        'lane_quality': 'int32',
        'fused_lane_type': 'int32',
        'homography_mat': 'sequence<double>',
        'homography_mat_inv': 'sequence<double>',
        'lane_coordinate_type': 'int32',
        'use_type': 'int32',
        'create_time': 'ros2_interface/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LaneLineCubicCurve'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LaneLineCubicCurve'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LaneLineCubicCurve'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point3D')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'EndPoints'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Point2D')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane_type = kwargs.get('lane_type', int())
        self.lane_color = kwargs.get('lane_color', int())
        self.pos_type = kwargs.get('pos_type', int())
        from ros2_interface.msg import LaneLineCubicCurve
        self.curve_vehicle = kwargs.get('curve_vehicle', LaneLineCubicCurve())
        from ros2_interface.msg import LaneLineCubicCurve
        self.curve_image = kwargs.get('curve_image', LaneLineCubicCurve())
        from ros2_interface.msg import LaneLineCubicCurve
        self.curve_abs = kwargs.get('curve_abs', LaneLineCubicCurve())
        self.pts_vehicle = kwargs.get('pts_vehicle', [])
        self.pts_image = kwargs.get('pts_image', [])
        self.pts_abs = kwargs.get('pts_abs', [])
        from ros2_interface.msg import EndPoints
        self.image_end_point = kwargs.get('image_end_point', EndPoints())
        self.pts_key = kwargs.get('pts_key', [])
        self.hd_lane_id = kwargs.get('hd_lane_id', int())
        self.confidence = kwargs.get('confidence', float())
        self.lane_quality = kwargs.get('lane_quality', int())
        self.fused_lane_type = kwargs.get('fused_lane_type', int())
        self.homography_mat = array.array('d', kwargs.get('homography_mat', []))
        self.homography_mat_inv = array.array('d', kwargs.get('homography_mat_inv', []))
        self.lane_coordinate_type = kwargs.get('lane_coordinate_type', int())
        self.use_type = kwargs.get('use_type', int())
        from ros2_interface.msg import Time
        self.create_time = kwargs.get('create_time', Time())

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
        if self.lane_type != other.lane_type:
            return False
        if self.lane_color != other.lane_color:
            return False
        if self.pos_type != other.pos_type:
            return False
        if self.curve_vehicle != other.curve_vehicle:
            return False
        if self.curve_image != other.curve_image:
            return False
        if self.curve_abs != other.curve_abs:
            return False
        if self.pts_vehicle != other.pts_vehicle:
            return False
        if self.pts_image != other.pts_image:
            return False
        if self.pts_abs != other.pts_abs:
            return False
        if self.image_end_point != other.image_end_point:
            return False
        if self.pts_key != other.pts_key:
            return False
        if self.hd_lane_id != other.hd_lane_id:
            return False
        if self.confidence != other.confidence:
            return False
        if self.lane_quality != other.lane_quality:
            return False
        if self.fused_lane_type != other.fused_lane_type:
            return False
        if self.homography_mat != other.homography_mat:
            return False
        if self.homography_mat_inv != other.homography_mat_inv:
            return False
        if self.lane_coordinate_type != other.lane_coordinate_type:
            return False
        if self.use_type != other.use_type:
            return False
        if self.create_time != other.create_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lane_type(self):
        """Message field 'lane_type'."""
        return self._lane_type

    @lane_type.setter
    def lane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_type' field must be an integer in [-2147483648, 2147483647]"
        self._lane_type = value

    @builtins.property
    def lane_color(self):
        """Message field 'lane_color'."""
        return self._lane_color

    @lane_color.setter
    def lane_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_color' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_color' field must be an integer in [-2147483648, 2147483647]"
        self._lane_color = value

    @builtins.property
    def pos_type(self):
        """Message field 'pos_type'."""
        return self._pos_type

    @pos_type.setter
    def pos_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pos_type' field must be an integer in [-2147483648, 2147483647]"
        self._pos_type = value

    @builtins.property
    def curve_vehicle(self):
        """Message field 'curve_vehicle'."""
        return self._curve_vehicle

    @curve_vehicle.setter
    def curve_vehicle(self, value):
        if __debug__:
            from ros2_interface.msg import LaneLineCubicCurve
            assert \
                isinstance(value, LaneLineCubicCurve), \
                "The 'curve_vehicle' field must be a sub message of type 'LaneLineCubicCurve'"
        self._curve_vehicle = value

    @builtins.property
    def curve_image(self):
        """Message field 'curve_image'."""
        return self._curve_image

    @curve_image.setter
    def curve_image(self, value):
        if __debug__:
            from ros2_interface.msg import LaneLineCubicCurve
            assert \
                isinstance(value, LaneLineCubicCurve), \
                "The 'curve_image' field must be a sub message of type 'LaneLineCubicCurve'"
        self._curve_image = value

    @builtins.property
    def curve_abs(self):
        """Message field 'curve_abs'."""
        return self._curve_abs

    @curve_abs.setter
    def curve_abs(self, value):
        if __debug__:
            from ros2_interface.msg import LaneLineCubicCurve
            assert \
                isinstance(value, LaneLineCubicCurve), \
                "The 'curve_abs' field must be a sub message of type 'LaneLineCubicCurve'"
        self._curve_abs = value

    @builtins.property
    def pts_vehicle(self):
        """Message field 'pts_vehicle'."""
        return self._pts_vehicle

    @pts_vehicle.setter
    def pts_vehicle(self, value):
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
                "The 'pts_vehicle' field must be a set or sequence and each value of type 'Point3D'"
        self._pts_vehicle = value

    @builtins.property
    def pts_image(self):
        """Message field 'pts_image'."""
        return self._pts_image

    @pts_image.setter
    def pts_image(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
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
                 all(isinstance(v, Point2D) for v in value) and
                 True), \
                "The 'pts_image' field must be a set or sequence and each value of type 'Point2D'"
        self._pts_image = value

    @builtins.property
    def pts_abs(self):
        """Message field 'pts_abs'."""
        return self._pts_abs

    @pts_abs.setter
    def pts_abs(self, value):
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
                "The 'pts_abs' field must be a set or sequence and each value of type 'Point3D'"
        self._pts_abs = value

    @builtins.property
    def image_end_point(self):
        """Message field 'image_end_point'."""
        return self._image_end_point

    @image_end_point.setter
    def image_end_point(self, value):
        if __debug__:
            from ros2_interface.msg import EndPoints
            assert \
                isinstance(value, EndPoints), \
                "The 'image_end_point' field must be a sub message of type 'EndPoints'"
        self._image_end_point = value

    @builtins.property
    def pts_key(self):
        """Message field 'pts_key'."""
        return self._pts_key

    @pts_key.setter
    def pts_key(self, value):
        if __debug__:
            from ros2_interface.msg import Point2D
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
                 all(isinstance(v, Point2D) for v in value) and
                 True), \
                "The 'pts_key' field must be a set or sequence and each value of type 'Point2D'"
        self._pts_key = value

    @builtins.property
    def hd_lane_id(self):
        """Message field 'hd_lane_id'."""
        return self._hd_lane_id

    @hd_lane_id.setter
    def hd_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hd_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hd_lane_id' field must be an unsigned integer in [0, 255]"
        self._hd_lane_id = value

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
    def lane_quality(self):
        """Message field 'lane_quality'."""
        return self._lane_quality

    @lane_quality.setter
    def lane_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_quality' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_quality' field must be an integer in [-2147483648, 2147483647]"
        self._lane_quality = value

    @builtins.property
    def fused_lane_type(self):
        """Message field 'fused_lane_type'."""
        return self._fused_lane_type

    @fused_lane_type.setter
    def fused_lane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fused_lane_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fused_lane_type' field must be an integer in [-2147483648, 2147483647]"
        self._fused_lane_type = value

    @builtins.property
    def homography_mat(self):
        """Message field 'homography_mat'."""
        return self._homography_mat

    @homography_mat.setter
    def homography_mat(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'homography_mat' array.array() must have the type code of 'd'"
            self._homography_mat = value
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
                "The 'homography_mat' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._homography_mat = array.array('d', value)

    @builtins.property
    def homography_mat_inv(self):
        """Message field 'homography_mat_inv'."""
        return self._homography_mat_inv

    @homography_mat_inv.setter
    def homography_mat_inv(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'homography_mat_inv' array.array() must have the type code of 'd'"
            self._homography_mat_inv = value
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
                "The 'homography_mat_inv' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._homography_mat_inv = array.array('d', value)

    @builtins.property
    def lane_coordinate_type(self):
        """Message field 'lane_coordinate_type'."""
        return self._lane_coordinate_type

    @lane_coordinate_type.setter
    def lane_coordinate_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_coordinate_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_coordinate_type' field must be an integer in [-2147483648, 2147483647]"
        self._lane_coordinate_type = value

    @builtins.property
    def use_type(self):
        """Message field 'use_type'."""
        return self._use_type

    @use_type.setter
    def use_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'use_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'use_type' field must be an integer in [-2147483648, 2147483647]"
        self._use_type = value

    @builtins.property
    def create_time(self):
        """Message field 'create_time'."""
        return self._create_time

    @create_time.setter
    def create_time(self, value):
        if __debug__:
            from ros2_interface.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'create_time' field must be a sub message of type 'Time'"
        self._create_time = value

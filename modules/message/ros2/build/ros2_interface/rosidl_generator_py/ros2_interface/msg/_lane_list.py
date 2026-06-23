# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interface:msg/LaneList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneList(type):
    """Metaclass of message 'LaneList'."""

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
                'ros2_interface.msg.LaneList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_list

            from ros2_interface.msg import HolisticPathPrediction
            if HolisticPathPrediction.__class__._TYPE_SUPPORT is None:
                HolisticPathPrediction.__class__.__import_type_support__()

            from ros2_interface.msg import LaneLine
            if LaneLine.__class__._TYPE_SUPPORT is None:
                LaneLine.__class__.__import_type_support__()

            from ros2_interface.msg import RoadMark
            if RoadMark.__class__._TYPE_SUPPORT is None:
                RoadMark.__class__.__import_type_support__()

            from ros2_interface.msg import SensorCalibrator
            if SensorCalibrator.__class__._TYPE_SUPPORT is None:
                SensorCalibrator.__class__.__import_type_support__()

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


class LaneList(metaclass=Metaclass_LaneList):
    """Message class 'LaneList'."""

    __slots__ = [
        '_header',
        '_sensor_id',
        '_error_code',
        '_sensor_status',
        '_change_origin_flag',
        '_is_valid',
        '_sensor_calibrator',
        '_camera_laneline',
        '_hpp',
        '_road_marks',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor_id': 'int32',
        'error_code': 'int8',
        'sensor_status': 'uint8',
        'change_origin_flag': 'int32',
        'is_valid': 'boolean',
        'sensor_calibrator': 'ros2_interface/SensorCalibrator',
        'camera_laneline': 'sequence<ros2_interface/LaneLine>',
        'hpp': 'ros2_interface/HolisticPathPrediction',
        'road_marks': 'sequence<ros2_interface/RoadMark>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'SensorCalibrator'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'LaneLine')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'HolisticPathPrediction'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros2_interface', 'msg'], 'RoadMark')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.sensor_id = kwargs.get('sensor_id', int())
        self.error_code = kwargs.get('error_code', int())
        self.sensor_status = kwargs.get('sensor_status', int())
        self.change_origin_flag = kwargs.get('change_origin_flag', int())
        self.is_valid = kwargs.get('is_valid', bool())
        from ros2_interface.msg import SensorCalibrator
        self.sensor_calibrator = kwargs.get('sensor_calibrator', SensorCalibrator())
        self.camera_laneline = kwargs.get('camera_laneline', [])
        from ros2_interface.msg import HolisticPathPrediction
        self.hpp = kwargs.get('hpp', HolisticPathPrediction())
        self.road_marks = kwargs.get('road_marks', [])

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
        if self.sensor_id != other.sensor_id:
            return False
        if self.error_code != other.error_code:
            return False
        if self.sensor_status != other.sensor_status:
            return False
        if self.change_origin_flag != other.change_origin_flag:
            return False
        if self.is_valid != other.is_valid:
            return False
        if self.sensor_calibrator != other.sensor_calibrator:
            return False
        if self.camera_laneline != other.camera_laneline:
            return False
        if self.hpp != other.hpp:
            return False
        if self.road_marks != other.road_marks:
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
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'error_code' field must be an integer in [-128, 127]"
        self._error_code = value

    @builtins.property
    def sensor_status(self):
        """Message field 'sensor_status'."""
        return self._sensor_status

    @sensor_status.setter
    def sensor_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_status' field must be an unsigned integer in [0, 255]"
        self._sensor_status = value

    @builtins.property
    def change_origin_flag(self):
        """Message field 'change_origin_flag'."""
        return self._change_origin_flag

    @change_origin_flag.setter
    def change_origin_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'change_origin_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'change_origin_flag' field must be an integer in [-2147483648, 2147483647]"
        self._change_origin_flag = value

    @builtins.property
    def is_valid(self):
        """Message field 'is_valid'."""
        return self._is_valid

    @is_valid.setter
    def is_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid' field must be of type 'bool'"
        self._is_valid = value

    @builtins.property
    def sensor_calibrator(self):
        """Message field 'sensor_calibrator'."""
        return self._sensor_calibrator

    @sensor_calibrator.setter
    def sensor_calibrator(self, value):
        if __debug__:
            from ros2_interface.msg import SensorCalibrator
            assert \
                isinstance(value, SensorCalibrator), \
                "The 'sensor_calibrator' field must be a sub message of type 'SensorCalibrator'"
        self._sensor_calibrator = value

    @builtins.property
    def camera_laneline(self):
        """Message field 'camera_laneline'."""
        return self._camera_laneline

    @camera_laneline.setter
    def camera_laneline(self, value):
        if __debug__:
            from ros2_interface.msg import LaneLine
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
                 all(isinstance(v, LaneLine) for v in value) and
                 True), \
                "The 'camera_laneline' field must be a set or sequence and each value of type 'LaneLine'"
        self._camera_laneline = value

    @builtins.property
    def hpp(self):
        """Message field 'hpp'."""
        return self._hpp

    @hpp.setter
    def hpp(self, value):
        if __debug__:
            from ros2_interface.msg import HolisticPathPrediction
            assert \
                isinstance(value, HolisticPathPrediction), \
                "The 'hpp' field must be a sub message of type 'HolisticPathPrediction'"
        self._hpp = value

    @builtins.property
    def road_marks(self):
        """Message field 'road_marks'."""
        return self._road_marks

    @road_marks.setter
    def road_marks(self, value):
        if __debug__:
            from ros2_interface.msg import RoadMark
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
                 all(isinstance(v, RoadMark) for v in value) and
                 True), \
                "The 'road_marks' field must be a set or sequence and each value of type 'RoadMark'"
        self._road_marks = value

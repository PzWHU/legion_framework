;; Auto-generated. Do not edit!


(when (boundp 'ros_interface::WxAppControl)
  (if (not (find-package "ROS_INTERFACE"))
    (make-package "ROS_INTERFACE"))
  (shadow 'WxAppControl (find-package "ROS_INTERFACE")))
(unless (find-package "ROS_INTERFACE::WXAPPCONTROL")
  (make-package "ROS_INTERFACE::WXAPPCONTROL"))

(in-package "ROS")
;;//! \htmlinclude WxAppControl.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass ros_interface::WxAppControl
  :super ros::object
  :slots (_header _value ))

(defmethod ros_interface::WxAppControl
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:value __value) "")
    )
   (send-super :init)
   (setq _header __header)
   (setq _value (string __value))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _value
    4 (length _value)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _value
       (write-long (length _value) s) (princ _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _value
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _value (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get ros_interface::WxAppControl :md5sum-) "22266ff9b4f762c77f0ee04338c1603a")
(setf (get ros_interface::WxAppControl :datatype-) "ros_interface/WxAppControl")
(setf (get ros_interface::WxAppControl :definition-)
      "Header header
string value

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :ros_interface/WxAppControl "22266ff9b4f762c77f0ee04338c1603a")




(cl:in-package :asdf)

(defsystem "ros_interface-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Event" :depends-on ("_package_Event"))
    (:file "_package_Event" :depends-on ("_package"))
    (:file "Time" :depends-on ("_package_Time"))
    (:file "_package_Time" :depends-on ("_package"))
    (:file "WxAppControl" :depends-on ("_package_WxAppControl"))
    (:file "_package_WxAppControl" :depends-on ("_package"))
  ))
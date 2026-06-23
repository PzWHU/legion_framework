cmake_minimum_required(VERSION 3.5)

set(OPENCV_LIBRARIES 
    opencv_highgui 
    opencv_calib3d
    opencv_flann
    opencv_video
    opencv_features2d
    opencv_imgcodecs
    opencv_imgproc
    opencv_core
    libpng zlib
    )

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(OpenCV DEFAULT_MSG OPENCV_LIBRARIES)

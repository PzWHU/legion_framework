cmake_minimum_required(VERSION 3.5)

set(BOOST_LIBRARIES 
    boost_system 
    boost_signals
    boost_iostreams
    boost_serialization
    boost_filesystem
    boost_atomic
    )

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Boost DEFAULT_MSG BOOST_LIBRARIES)

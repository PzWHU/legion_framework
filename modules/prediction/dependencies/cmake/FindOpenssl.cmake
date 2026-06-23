cmake_minimum_required(VERSION 3.5)

set(OPENSSL_LIBRARIES 
    crypto 
    ssl
    )

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Openssl DEFAULT_MSG OPENSSL_LIBRARIES)

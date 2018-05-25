cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_VERBOSE_MAKEFILE on)

add_library(three SHARED three.cpp)

set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../distribution)

set_target_properties(three
                      PROPERTIES
                      LIBRARY_OUTPUT_DIRECTORY
                      "${distribution_DIR}/three/lib/${ANDROID_ABI}")

add_custom_command(TARGET three POST_BUILD
                   COMMAND "${CMAKE_COMMAND}" -E
                   copy "${CMAKE_CURRENT_SOURCE_DIR}/three.h"
                   "${distribution_DIR}/three/include/three.h"
                   COMMENT "Copying three to output directory")
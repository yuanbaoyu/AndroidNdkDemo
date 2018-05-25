# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

#设置生成的so动态库最后输出的路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI})

set(CMAKE_VERBOSE_MAKEFILE on)
set(lib_src_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(lib_build_DIR $ENV{HOME}/tmp)
file(MAKE_DIRECTORY ${lib_build_DIR})

add_subdirectory(./src/main/cpp/one)
add_subdirectory(./src/main/cpp/two)
add_subdirectory(./src/main/cpp/three)
#
# Copyright (C) The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

cmake_minimum_required(VERSION 3.4.1)

# configure import libs
set(distribution_DIR ${CMAKE_SOURCE_DIR}/../distribution)

add_library(three SHARED IMPORTED)
set_target_properties(three PROPERTIES IMPORTED_LOCATION
    ${distribution_DIR}/three/lib/${ANDROID_ABI}/libthree.so)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

add_library(hello-libs SHARED
            src/main/cpp/hello-libs.cpp)

target_include_directories(hello-libs PRIVATE
                           ${distribution_DIR}/three/include)

target_link_libraries(hello-libs
                      android
                      three
                      log)
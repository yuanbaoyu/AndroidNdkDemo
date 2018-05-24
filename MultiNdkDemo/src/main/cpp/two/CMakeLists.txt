add_library(two SHARED two.cpp)

find_library(log-lib log)

target_link_libraries(two ${log-lib})
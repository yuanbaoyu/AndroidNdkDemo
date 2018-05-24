add_library(one SHARED one.cpp)

find_library(log-lib log)

target_link_libraries(one ${log-lib})
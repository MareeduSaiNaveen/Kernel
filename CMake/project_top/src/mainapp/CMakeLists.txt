add_executable(output main.c)
include_directories(${CMAKE_SOURCE_DIR}/inc)
target_link_libraries(output mylib)

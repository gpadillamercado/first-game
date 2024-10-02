cmake_minimum_required(VERSION 3.5.0)
project(yubaGame VERSION 0.1.0 LANGUAGES C)

add_executable(yubaGame main.c)
find_path(RL_INCLUDE_DIR NAMES raylib.h PATHS /usr/local/opt/raylib/include)
include_directories(${RL_INCLUDE_DIR})
find_library(RL_LIBRARY NAMES raylib PATHS /usr/local/opt/raylib/lib)
target_link_libraries(${CMAKE_PROJECT_NAME} ${RL_LIBRARY})

include(CTest)
enable_testing()


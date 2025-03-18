cmake_minimum_required(VERSION 3.0)

project(Night_sky)

set(RAYLIB_PATH "/path/to/raylib")

include_directories(${RAYLIB_PATH}/include)

link_directories(${RAYLIB_PATH}/lib)

add_executable(app ../src/main.cpp ../src/sky.cpp ../src/star.cpp)

target_link_libraries(app PRIVATE raylib)

include_directories(../include)


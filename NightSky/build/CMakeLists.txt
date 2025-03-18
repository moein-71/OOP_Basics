cmake_minimum_required(VERSION 3.0)

project(Night_sky)

add_executable(app ../src/main.cpp ../src/sky.cpp ../src/star.cpp)

include_directories(../include)
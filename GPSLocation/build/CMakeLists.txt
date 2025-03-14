cmake_minimum_required(VERSION 3.0) 

project(GPS_Location)

add_executable(app ../src/main.cpp ../src/gps.cpp)

include_directories(../include)


cmake_minimum_required(VERSION 3.0)

project(Calendar_Event)

add_executable(app ../src/main.cpp ../src/calendar.cpp ../src/event.cpp)

include_directories(../include)
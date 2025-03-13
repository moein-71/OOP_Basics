cmake_minimum_required(VERSION 3.0) 

project(Game_Character) 

add_executable(app ../src/main.cpp ../src/character.cpp ../src/game.cpp) 

include_directories(../include)
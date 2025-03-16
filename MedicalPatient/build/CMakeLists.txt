cmake_minimum_required(VERSION 3.0)

project(Medical_Patient)

add_executable(app ../src/main.cpp ../src/hospital.cpp ../src/patient.cpp ../src/Vital_sigs.cpp)

include_directories(../include)
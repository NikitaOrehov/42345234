cmake_minimum_required(VERSION 3.10)
project(main LANGUAGES CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
add_executable(main main.cpp Patient.cpp Doctor.cpp PatientQueue.cpp)
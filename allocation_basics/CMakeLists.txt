cmake_minimum_required(VERSION 3.20)
project(Zajecia1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Zajecia1 ../simpleCalc/src/main.cpp ../simpleCalc/include/calc.hpp ../simpleCalc/src/calc.cpp)

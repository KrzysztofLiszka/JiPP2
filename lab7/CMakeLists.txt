cmake_minimum_required(VERSION 3.20)
project(lab7)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab7 "src/main.cpp" src/Figura.cpp include/Figura.h src/Ostroslup.cpp include/Ostroslup.h src/Szescian.cpp include/Szescian.h src/Circle.cpp include/Circle.h src/Rectangle.cpp include/Rectangle.h)




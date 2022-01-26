cmake_minimum_required(VERSION 3.20)
project(projektKoncowy)

set(CMAKE_CXX_STANDARD 14)

add_executable(projektKoncowy src/main.cpp include/funkcje.h src/funkcje.cpp src/Produkt.cpp include/Produkt.h src/Ubranie.cpp include/Ubranie.h src/Jedzenie.cpp include/Jedzenie.h)




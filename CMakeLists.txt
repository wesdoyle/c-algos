cmake_minimum_required(VERSION 3.10)
project(c_algorithms C)

set(CMAKE_C_STANDARD 11)

add_library(c_algorithms linked-list-city-population.c linked-list-city-population.h)
add_executable(city_pop linked-list-city-population.c)

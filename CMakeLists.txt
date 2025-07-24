cmake_minimum_required(VERSION 3.31)
project(c_for_beginners C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(c_for_beginners
        c_boiler_plate_code.c)

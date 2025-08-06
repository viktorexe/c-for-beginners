cmake_minimum_required(VERSION 3.31)
project(c_for_beginners C)

set(CMAKE_C_STANDARD 11)

# Automatically collect all .c files recursively
file(GLOB_RECURSE SOURCE_FILES "${CMAKE_SOURCE_DIR}/*.c")

foreach(SOURCE_FILE ${SOURCE_FILES})
    get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)

    # Create a separate executable from each file individually
    add_executable(${FILE_NAME} ${SOURCE_FILE})
endforeach()

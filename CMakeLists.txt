cmake_minimum_required(VERSION 3.31)
project(c_for_beginners C)

set(CMAKE_C_STANDARD 11)

# Automatically collect all .c files recursively
file(GLOB_RECURSE SOURCE_FILES
        "${CMAKE_SOURCE_DIR}/*.c"
)

# Create a separate executable for each .c file with its own main()
foreach(SOURCE_FILE ${SOURCE_FILES})
    # Get the file name without directory and extension
    get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)

    # Create an executable for each source file
    add_executable(${FILE_NAME} ${SOURCE_FILE})
endforeach()

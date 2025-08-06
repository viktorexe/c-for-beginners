cmake_minimum_required(VERSION 3.31)
project(c_for_beginners)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_for_beginners
        .idea/.gitignore
        .idea/c-for-beginners.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        1.1_Beginning/1_print_statement.c
)
file(GLOB_RECURSE SOURCES "*.c" "*.cpp" "*.h")
add_executable(my_project ${SOURCES})
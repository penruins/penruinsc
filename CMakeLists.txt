# cmake_minimum_required(VERSION <specify CMake version here>)
project(penruinsC C)

set(CMAKE_C_STANDARD 99)

add_executable(penruinsC main.c eg.c eg.h cjson/cJSON.h cjson/cJSON.c)
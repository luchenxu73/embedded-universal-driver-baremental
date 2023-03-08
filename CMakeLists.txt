
cmake_minimum_required(VERSION 3.24)

# project settings
project(EUD-bare-mental C CXX ASM)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

include_directories(sensor/inc)
include_directories(utility/I2C/inc)
file(GLOB_RECURSE SOURCES "sensor/*.c" "utility/*.c" "./main.c")


add_executable(${PROJECT_NAME}.elf ${SOURCES})

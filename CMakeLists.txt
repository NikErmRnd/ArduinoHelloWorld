cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(PROJECT_NAME 1)
project(${PROJECT_NAME})

set(${CMAKE_PROJECT_NAME}_SKETCH 1.ino)
generate_arduino_firmware(${CMAKE_PROJECT_NAME})

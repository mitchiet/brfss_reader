cmake_minimum_required(VERSION 3.20)

# Make the project
set(TARGET "brfss_reader")
project(${TARGET})

# Build the executable
set(SOURCE_FILES brfss_reader.cpp)
add_executable(${TARGET} ${SOURCE_FILES})
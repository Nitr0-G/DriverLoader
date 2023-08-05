cmake_minimum_required(VERSION 3.15)
project("DriverLoader")

if(CMAKE_SYSTEM_PROCESSOR STREQUAL "AMD64")
    set(IS_X64 TRUE)
else()
    set(IS_X64 FALSE)
endif()

if(IS_X64)
    message("-- Building for x64 architecture")
else()
    message("-- Building for x86 architecture")
endif()

add_library(${PROJECT_NAME} STATIC
    "src/DriverLoader.cpp"
    "include/DriverLoader.hpp")

target_include_directories(${PROJECT_NAME} PRIVATE "include/")

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

cmake_minimum_required(VERSION 3.10)

project(Sort)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(sort)
enable_testing()
add_subdirectory(test)

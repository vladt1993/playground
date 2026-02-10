cmake_minimum_required(VERSION 3.16)
project(cleanCppProj VERSION 0.1 LANGUAGES CXX)

option(BUILD_TESTS "Build tests" ON)
option(BUILD_DOCS  "Build documentation" OFF)

add_subdirectory(src)

if (BUILD_TESTS)
    add_subdirectory(tests)
endif()

if (BUILD_DOCS)
    add_subdirectory(docs)
endif()

cmake_minimum_required(VERSION 3.16)
project(cleanCppProj VERSION 0.1 LANGUAGES CXX)

# -----------------------------
# Options
# -----------------------------
option(BUILD_TESTS "Build tests" ON)
option(BUILD_DOXY_DOCS "Build doxygen documentation" OFF)

# -----------------------------
# Source directories
# -----------------------------
add_subdirectory(src)

if(BUILD_TESTS)
    add_subdirectory(tests)
endif()

if(BUILD_DOXY_DOCS)
    add_subdirectory(doxy-docs)
endif()

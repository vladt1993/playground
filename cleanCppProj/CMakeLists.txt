cmake_minimum_required(VERSION 3.20)
project(cleanCppProj LANGUAGES CXX)

add_subdirectory(src)   # src contains main and lib
add_subdirectory(tests)

enable_testing()

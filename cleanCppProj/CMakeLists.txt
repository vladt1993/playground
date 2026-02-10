cmake_minimum_required(VERSION 3.20)
project(simple_app LANGUAGES CXX)

add_subdirectory(src)


enable_testing()
add_subdirectory(tests)


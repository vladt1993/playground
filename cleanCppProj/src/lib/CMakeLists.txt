# all cpp files in this folder
set(LIB_SOURCES calc.cpp)

# Create the library target
add_library(lib STATIC ${LIB_SOURCES})

# Make headers visible to anything that links lib
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)

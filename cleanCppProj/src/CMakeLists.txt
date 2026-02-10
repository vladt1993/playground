# Add subdirectory first, so lib exists before main
add_subdirectory(lib)  

# Then create the main executable
add_executable(myapp main.cpp)

# Link main executable with lib library target
target_link_libraries(myapp PRIVATE lib)

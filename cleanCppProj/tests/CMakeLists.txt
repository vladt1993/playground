find_package(GTest CONFIG REQUIRED)

add_executable(app_tests testExample.cpp)

# Link test executable with Google Test and your library
target_link_libraries(app_tests
    PRIVATE
        GTest::gtest
        GTest::gtest_main
        lib
)

add_test(NAME app_tests COMMAND app_tests)

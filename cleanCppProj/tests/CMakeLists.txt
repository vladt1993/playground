find_package(GTest CONFIG REQUIRED)

add_executable(app_tests testExample.cpp)

target_link_libraries(app_tests
    PRIVATE
        GTest::gtest
        GTest::gtest_main
)

add_test(NAME app_tests COMMAND app_tests)

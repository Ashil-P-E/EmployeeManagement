cmake_minimum_required(VERSION 3.14)

project(EmployeeManagement)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main application
add_executable(EmployeeManagement
    src/main.cpp
    src/Employee.cpp
)

target_include_directories(EmployeeManagement
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

# GoogleTest
include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Testing
enable_testing()

add_executable(EmployeeTest
    tests/EmployeeTest.cpp
    src/Employee.cpp
)

target_include_directories(EmployeeTest
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(EmployeeTest
    PRIVATE
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(EmployeeTest)
cmake_minimum_required(VERSION 3.10)
project(cpp-cli)

set(CMAKE_CXX_STANDARD 17)

# Application build
add_executable(cpp-cli src/main.cpp)

# Unit test executable
add_executable(test_unit tests/test_unit.cpp)

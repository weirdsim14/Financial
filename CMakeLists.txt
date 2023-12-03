cmake_minimum_required(VERSION 3.10)
project(Financial)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Overview src/overview.cpp)
add_executable(brace src/brace_initialization.cpp)
add_executable(enum src/enum_class.cpp)
add_executable(lambda src/lambda_expression.cpp)
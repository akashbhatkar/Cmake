cmake_minimum_required(VERSION 3.5)

project(cmakepractice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_subdirectory(Department)
add_executable(cmakepractice main.cpp)

target_link_directories(cmakepractice PUBLIC Department)
target_link_libraries(cmakepractice PUBLIC Department)

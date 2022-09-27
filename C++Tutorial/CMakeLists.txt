cmake_minimum_required(VERSION 3.10)

project(Tutorial)

include_directories(inc)
add_subdirectory(src)

add_executable(Tutorial main.cpp)
target_link_libraries(Tutorial TutorialLib)

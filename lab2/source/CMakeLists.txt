cmake_minimum_required(VERSION 2.8.11)

project(hypotrochoid)

find_package(Qt5Widgets)
add_executable(hypotrochoid main.cpp)
target_link_libraries(hypotrochoid Qt5::Widgets)

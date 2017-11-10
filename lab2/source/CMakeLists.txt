cmake_minimum_required(VERSION 3.2)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_CXX_STANDARD 11)

project(hypotrochoid)

find_package(Qt5Widgets REQUIRED)
add_executable(hypotrochoid WIN32 main.cpp mainwindow.cpp)
target_link_libraries(hypotrochoid Qt5::Widgets)

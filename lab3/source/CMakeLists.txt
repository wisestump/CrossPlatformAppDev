cmake_minimum_required(VERSION 3.2)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_CXX_STANDARD 11)

project(XMLEditor)

find_package(Qt5Widgets REQUIRED)
add_executable(XMLEditor WIN32 main.cpp mainwindow.cpp)
target_link_libraries(XMLEditor Qt5::Widgets)

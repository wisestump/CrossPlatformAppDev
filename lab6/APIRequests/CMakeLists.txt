cmake_minimum_required(VERSION 3.2)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_CXX_STANDARD 11)

project(APIRequests)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Network REQUIRED)
add_executable(APIRequests WIN32
main.cpp mainwindow.cpp requestfactory.cpp committablemodel.cpp)
target_link_libraries(APIRequests Qt5::Widgets Qt5::Network)

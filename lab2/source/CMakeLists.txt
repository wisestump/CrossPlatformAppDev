cmake_minimum_required(VERSION 2.8.11)

set (CMAKE_CXX_COMPILER "G:/ProgramFiles/Qt/Tools/mingw492_32/bin/g++.exe")
set (CMAKE_C_COMPILER "G:/ProgramFiles/Qt/Tools/mingw492_32/bin/gcc.exe")
set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_CXX_STANDARD 11)

set( ENV{PATH} "G:/ProgramFiles/Qt/5.5/mingw492_32;G:/ProgramFiles/Qt/Tools/mingw492_32/bin" )
set (CMAKE_PREFIX_PATH "G:/ProgramFiles/Qt/5.5/mingw492_32/")
include_directories (
"G:/ProgramFiles/Qt/Tools/mingw492_32/i686-w64-mingw32/include/c++/" 
"G:/ProgramFiles/Qt/Tools/mingw492_32/i686-w64-mingw32/include/c++/i686-w64-mingw32/"
"G:/ProgramFiles/Qt/Tools/mingw492_32/i686-w64-mingw32/include/")


project(hypotrochoid)

find_package(Qt5Widgets REQUIRED)
add_executable(hypotrochoid WIN32 main.cpp mainwindow.cpp)
target_link_libraries(hypotrochoid Qt5::Widgets)

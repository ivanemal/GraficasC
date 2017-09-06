cmake_minimum_required(VERSION 3.8)
project(GraficasC)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp InputFile.cpp InputFile.h Circle.cpp Circle.h Rectangle.cpp Rectangle.h Employee.cpp Employee.h)
add_executable(GraficasC    ${SOURCE_FILES})
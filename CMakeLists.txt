cmake_minimum_required(VERSION 3.29)
project(Library_Problem)

set(CMAKE_CXX_STANDARD 20)

add_executable(Library_Problem main.cpp
        Book.cpp
        Book.h
        cmake-build-debug/Library.h
        Address.h
)

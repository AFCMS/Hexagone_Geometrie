cmake_minimum_required(VERSION 3.27)
project(Geometrie_B1A)

set(CMAKE_CXX_STANDARD 23)

add_executable(Geometrie_B1A main.cpp
        Figure.cpp
        Figure.hpp
        Triangle.cpp
        Triangle.hpp
        Square.cpp
        Square.hpp
        Rectangle.cpp
        Rectangle.hpp
        Circle.cpp
        Circle.hpp)

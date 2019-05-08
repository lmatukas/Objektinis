cmake_minimum_required(VERSION 3.13)
project(Objektinis)

set(CMAKE_CXX_STANDARD 17)

add_executable(Objektinis main.cpp)
add_executable(Konstruktoroius Konstruktorius/Konstruktoroius.cpp)
add_executable(Box Box.cpp)
add_executable(Rodykles Rodykles/Rodykles.cpp)
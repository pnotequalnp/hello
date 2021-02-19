cmake_minimum_required(VERSION 3.10)
project(hello)
add_executable(hello main.cpp)
install(TARGETS hello DESTINATION bin)

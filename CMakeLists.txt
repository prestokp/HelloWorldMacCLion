cmake_minimum_required(VERSION 3.14)
project(HelloWorldMacCLion)

set(CMAKE_CXX_STANDARD 14)

add_library(HelloWorldMacCLion SHARED library.cpp library.h)
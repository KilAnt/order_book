cmake_minimum_required(VERSION 3.5)

project(order_book LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(order_book main.cpp
    orderbook.cpp
    orderbook.h
    source_data.h)

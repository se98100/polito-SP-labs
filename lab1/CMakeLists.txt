# cmake_minimum_required(VERSION <specify CMake version here>)
project(lab1)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab1 main.cpp message.cpp message.h duration_logger.cpp duration_logger.h message_store.cpp message_store.h)
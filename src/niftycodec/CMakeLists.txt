cmake_minimum_required(VERSION 3.9)
project(niftycodec)

set(CMAKE_CXX_STANDARD 11)

link_libraries(protobuf protoc)
add_executable(niftycodec main.cpp include/nifty_python_generator.hpp)
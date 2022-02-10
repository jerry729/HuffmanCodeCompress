cmake_minimum_required(VERSION 3.19)
project(HuffmanCompressCPro1)

set(CMAKE_CXX_STANDARD 17)

add_executable(HuffmanCompressCPro1 main.cpp HuffmanTree.h HuffmanTree.cpp Compress.h Compress.cpp BitIO.h BitIO.cpp)
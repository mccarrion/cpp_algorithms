cmake_minimum_required(VERSION 3.22)
project(cpp_testground)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_testground main.cpp
        projects/Calculator.cpp projects/Calculator.h
        projects/Magic8Ball.cpp projects/Magic8Ball.h
        algorithms/ArrayAlgorithms.cpp algorithms/ArrayAlgorithms.h
        algorithms/StringAlgorithms.cpp algorithms/StringAlgorithms.h)

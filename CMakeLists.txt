cmake_minimum_required(VERSION 3.26)
project(CPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(CPP demo.cpp
        operations/Addition.h
        operations/Subtraction.h
        operations/toBignumString.h
        operations/Multiplication.h
        operations/Division.h
        operations/Modulo.h
)

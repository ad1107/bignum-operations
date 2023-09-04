cmake_minimum_required(VERSION 3.26)
project(CPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(CPP demo.cpp
        operations/Addition.hpp
        operations/Subtraction.hpp
        operations/toBignumString.hpp
        operations/Multiplication.hpp
        operations/Division.hpp
        operations/Modulo.hpp
        operations/Power.hpp
        operations/nthRoot.hpp
)

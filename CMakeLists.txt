cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled "Persona+estudiante.cpp"
        persona.h
        persona.cpp
        estudiante.h
        estudiante.cpp
        "numeros y global.cpp"
)
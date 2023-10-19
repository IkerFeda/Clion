cmake_minimum_required(VERSION 3.26)
project(Proyecto2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyecto2 main.cpp)
# Agrega la definición de la biblioteca estática "matematicas"
add_library(matematicas STATIC matematicas.cpp)

# Agrega la definición de la biblioteca compartida "matematicas" (libmatematicas.so)
add_library(matematicas_shared SHARED matematicas.cpp)
# Agrega fmt::fmt a las bibliotecas a vincular
target_link_libraries(Proyecto2 PUBLIC fmt::fmt)

# Agrega FetchContent para descargar y hacer disponible la biblioteca fmt
include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
# Define los objetivos ejecutables con nombres únicos
add_executable(Proyecto2 main.cpp funciones.cpp funciones.h)
add_executable(funciones funciones.cpp funciones.h)

# Enlaza la biblioteca "matematicas" con tu ejecutable "main"
target_link_libraries(Proyecto2 PUBLIC matematicas)



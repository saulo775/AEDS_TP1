cmake_minimum_required(VERSION 3.23)
project(TP_01 C)
include_directories(headers, sources)

set(CMAKE_C_STANDARD 99)

add_executable(TP_01 main.c sources/palavra.c sources/dicionario.c)

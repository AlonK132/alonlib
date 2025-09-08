cmake_minimum_required(VERSION 3.31)
project(alonlib C)

set(CMAKE_C_STANDARD 11)

add_executable(alonlib
        main.c
        io/io.h
        io/io.c
        string/string.h
        string/string.c)

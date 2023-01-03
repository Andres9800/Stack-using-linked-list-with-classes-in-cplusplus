cmake_minimum_required(VERSION 3.20)
project(Lista_Simple_Templates)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lista_Simple_Templates main.cpp Nodo.cpp Nodo.h Lista.cpp Lista.h PilaLista.cpp PilaLista.h RuntimeException.h)

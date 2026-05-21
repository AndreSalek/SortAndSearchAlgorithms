cmake_minimum_required(VERSION 3.10.0)
project(CPlayground VERSION 0.1.0 LANGUAGES C)

add_library(algorithms STATIC algorithms.c)

add_executable(CPlayground main.c)
target_link_libraries(CPlayground algorithms)


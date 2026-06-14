cmake_minimum_required(VERSION 3.14)

project(ASCII-RPG)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES src/main.c src/menu.c src/game.c)

add_executable(ASCII-RPG ${SOURCES})

target_include_directories(ASCII-RPG PRIVATE ./include)
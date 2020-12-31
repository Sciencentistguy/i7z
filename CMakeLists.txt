cmake_minimum_required(VERSION 3.10)

project(r7z)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Curses REQUIRED)

add_executable(r7z i7z.c i7z.h i7z_Single_Socket.c i7z_Dual_Socket.c helper_functions.c)
target_link_libraries(r7z ${CURSES_LIBRARIES})

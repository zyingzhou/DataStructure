cmake_minimum_required(VERSION 3.15)
project(Data_Structure_In_C C)

# version
project(Data_Structure_In_C VERSION 1.0)

set(CMAKE_C_STANDARD 99)

# compile list first
add_library(list LinkedList/list.c LinkedList/list.h)

add_executable(use_linked_list use_linked_list.c)

target_link_libraries(use_linked_list list)

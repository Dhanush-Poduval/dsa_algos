cmake_minimum_required(VERSION 3.20.0)

project(linked_list)

add_library(
  ll
  STATIC
  src/linked_list.c

)

target_include_directories(
  ll
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/lib
)

add_executable(
  linked_list
  src/main.c
)

target_link_libraries(
  linked_list
  PRIVATE
  ll
)

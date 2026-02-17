cmake_minimum_required(VERSION 3.20.0)

project(binary_search)

add_library(
  binary
  STATIC
  src/binary_search.c
  src/merge_sort.cpp
  src/quick.cpp

)

target_include_directories(
   binary
   PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/include
)
add_executable(
  merge_sort
  src/merge_main.cpp
)
add_executable(
  quick_sort
  src/quick_main.cpp
)
add_executable(
  binary_search
  src/main.c

)
target_link_libraries(
  merge_sort
  PRIVATE
  binary
)
target_link_libraries(
  quick_sort
  PRIVATE
  binary
)
target_link_libraries(
   binary_search
   PRIVATE
   binary
)

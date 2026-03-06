cmake_minimum_required(VERSION 3.20.0)

project(dp)
add_library(
  dynamic
  STATIC
  src/least_common.c

)

target_include_directories(dynamic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib)
add_executable (
   dp_exec
   src/main.c
)
target_link_libraries (
  dp_exec
  PRIVATE
  dynamic
 
)


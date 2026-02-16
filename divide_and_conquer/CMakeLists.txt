cmake_minimum_required(VERSION 3.20.0)

project(binary_search)

add_library(
  binary
  STATIC
  src/binary_search.c

)

target_include_directories(
   binary
   PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(
  binary_search
  src/main.c

)

target_link_libraries(
   binary_search
   PRIVATE
   binary
)

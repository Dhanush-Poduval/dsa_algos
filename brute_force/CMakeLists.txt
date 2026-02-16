cmake_minimum_required(VERSION 3.20)

project(linear_search)

add_library(lin STATIC src/linear.c src/bubble/bubble.c)

target_include_directories(
   lin
   PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(
  app
  src/main.c
)
add_executable(
  bubble
  src/bubble_main.c
)
target_link_libraries(
 bubble
 PRIVATE
 lin
)
target_link_libraries(
  app
  PRIVATE
  lin
)


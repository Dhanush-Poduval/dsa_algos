cmake_minimum_required(VERSION 3.20)

project(linear_search)

add_library(lin STATIC src/linear.c src/bubble/bubble.c src/insertion.cpp)

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
add_executable(
   insert
   src/insertion_main.cpp
)
target_link_libraries(
   insert
   PRIVATE
   lin
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


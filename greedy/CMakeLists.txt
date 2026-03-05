cmake_minimum_required(VERSION 3.20.0)

project(greedy)

add_library(
  knapsack
  STATIC
  src/knapsack.c
)
target_include_directories(knapsack PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib)
add_executable(
  knapsack_executable
  src/main.c

)

target_link_libraries(
  knapsack_executable
  PRIVATE
  knapsack
)

cmake_minimum_required(VERSION 3.20)

project(stack)
add_library(
	stack
	STATIC
	src/stack.c
)
target_include_directories(
 	stack
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/lib


)

add_executable(
  stack_exec
  src/main.c
)

target_link_libraries(
   stack_exec
   PRIVATE
   stack
)

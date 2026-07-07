cmake_minimum_required(VERSION 3.10)
project (AWorldWhereWheyWait)

set (CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(
	saveSystem.h
	saveSystem.cpp
)

target_include_directories(A_world_where_they_wait PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
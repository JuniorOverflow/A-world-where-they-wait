cmake_minimum_required(VERSION 3.10)
project (AWorldWhereWheyWait)

set (CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
	chapter1.cpp
	chapter1.h
	chapter2.cpp
	chapter2.h
	chapter3.cpp
	chapter3.h
	chapter4.cpp
	chapter4.h
	chapter5.cpp
	chapter5.h
)

target_include_directories(A_world_where_they_wait PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
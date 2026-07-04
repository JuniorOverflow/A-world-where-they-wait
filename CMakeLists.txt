cmake_minimum_required(VERSION 3.10)
project (AWorldWhereWheyWait)

set (CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
	main.cpp
	saveSystem.h
	saveSystem.cpp
	game.h
	game.cpp
	player.h
	player.cpp
	creatingItems.h
	creatingItems.cpp
	chapter1.h
	chapter1.cpp
)

target_include_directories(A_world_where_they_wait PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
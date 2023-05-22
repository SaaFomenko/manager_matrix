cmake_minimum_required(VERSION 3.18)

project(manager_matrix
	VERSION 1.0.0
	DESCRIPTION "C++ application for view and edit data in matrix."
	LANGUAGES CXX)

add_subdirectory(lib)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_executable(${PROJECT_NAME}.exe main.cpp)

target_link_libraries(${PROJECT_NAME}.exe
	matrix_lib)

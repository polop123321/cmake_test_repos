cmake_minimum_required(VERSION 3.31.7 FATAL_ERROR)

set(project_name "test_cmake_project")

project(${project_name})

add_executable(test_cmake_project src/main.cpp src/vector/vector.cpp)

add_subdirectory(libs/glfw)

target_link_libraries(${project_name} glfw)
cmake_minimum_required(VERSION 3.31)
project(Renderer)

set(CMAKE_CXX_STANDARD 23)

add_executable(Renderer src/main.cpp)
target_link_libraries(Renderer glfw)
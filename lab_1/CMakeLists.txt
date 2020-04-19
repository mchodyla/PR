cmake_minimum_required(VERSION 3.10)

# set the project name
project(lab_1)

# added -fopenmp
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp -O3")

# for header files
include_directories(${PROJECT_SOURCE_DIR})

# add the executable
add_executable(lab_1 zadanie_1.cpp zadanie_2.cpp HelloWorlds.cpp Pi.cpp)
cmake_minimum_required(VERSION 3.20)
project(FinalProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(FinalProject)

set(SFML_DIR "C:/SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit/SFML-2.5.1/lib/cmake/SFML")

find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)
add_executable(FinalProject main.cpp)
target_link_libraries(FinalProject sfml-graphics sfml-audio)

cmake_minimum_required(VERSION 3.0)
project(Curve3D)

set(LIB_DIR "${CMAKE_SOURCE_DIR}/lib")
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(BUILD_DIR "${CMAKE_SOURCE_DIR}/build")

file(GLOB LIB_SOURCES "${LIB_DIR}/*.cpp")
file(GLOB LIB_HEADERS "${LIB_DIR}/*.hpp")

add_library(CurveLB SHARED ${LIB_SOURCES} ${LIB_HEADERS})

target_include_directories(CurveLB PUBLIC "${LIB_DIR}")

file(GLOB MAIN_SOURCES "${SRC_DIR}/*.cpp")

add_executable(Curve3D ${MAIN_SOURCES})

target_link_libraries( PRIVATE CurveLB)
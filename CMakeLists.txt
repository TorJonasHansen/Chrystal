cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)

project(Chrystal)

option(BUILD_SANDBOX "Build Sandbox project" OFF)

add_subdirectory(Chrystal)

if(BUILD_SANDBOX)
  add_subdirectory(Sandbox)
endif()
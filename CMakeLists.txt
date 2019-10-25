cmake_minimum_required(VERSION 3.3)
project(gtest_cuda CXX C CUDA)

set(gtest_cuda_MAJOR_VERSION "0")
set(gtest_cuda_MINOR_VERSION "0")
set(gtest_cuda_PATCH_VERSION "0")
set(gtest_cuda_VERSION_STRING ${gtest_cuda_MAJOR_VERSION}.${gtest_cuda_MINOR_VERSION}.${gtest_cuda_PATCH_VERSION})

# setup CUDA env
find_package(CUDA REQUIRED)
include_directories(/usr/local/cuda/include)

# Set default build type
if(NOT CMAKE_BUILD_TYPE)
  message(STATUS "Build type not set - defaulting to Release")
  set(CMAKE_BUILD_TYPE "Release")
endif()

# Options
option(BUILD_TEST "Build C++ test" OFF)

set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS}
        --compiler-options '-fPIC -fno-exceptions'
        --std c++11
        -dc
        -rdc=true
        -arch=sm_60
        )


# Flags
set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

# Cmake
include(cmake/Utils.cmake)

# Submodule
add_subdirectory(submodule/googletest)

# Test
include_directories(gtest_cuda)
add_subdirectory(test)
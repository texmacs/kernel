cmake_minimum_required (VERSION 3.5)

project (KERNEL CXX C) # check for C/C++ compiler

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "-Wno-deprecated-register")

set (Kernel_Include_Dirs
  ${KERNEL_SOURCE_DIR}/src/Kernel/Containers/
  ${KERNEL_SOURCE_DIR}/src/Kernel/Abstractions/
  ${KERNEL_SOURCE_DIR}/src/Kernel/Types/
  ${KERNEL_SOURCE_DIR}/src/System/Misc/
)

file (GLOB_RECURSE Kernel_SRCS
  "${KERNEL_SOURCE_DIR}/src/Kernel/*.cpp"
  "${KERNEL_SOURCE_DIR}/src/System/*.cpp"
)

include_directories(${Kernel_Include_Dirs})

add_library(kernel STATIC ${Kernel_SRCS})

### --------------------------------------------------------------------
### Testing
### --------------------------------------------------------------------
include (CTest)
set (GTEST_ROOT "${KERNEL_SOURCE_DIR}/3rdparty/benchmark/googletest/googletest")
set (GTEST_INCLUDE_DIR ${GTEST_ROOT}/include)
set (GTEST_LIBRARIES gtest gtest_main)
set (GTEST_MAIN_LIBRARY gtest_main)
set (GTEST_LIBRARY gtest)

add_subdirectory (3rdparty/benchmark EXCLUDE_FROM_ALL)
add_subdirectory (${GTEST_ROOT} EXCLUDE_FROM_ALL)
find_package (GTest REQUIRED)

enable_testing ()

add_subdirectory (tests)
add_subdirectory (benchmark)

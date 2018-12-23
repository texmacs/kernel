cmake_minimum_required (VERSION 3.5)

project (KERNEL CXX C) # check for C/C++ compiler

set (CMAKE_CXX_STANDARD 11)

set (Kernel_Include_Dirs
  ${KERNEL_SOURCE_DIR}/src/Kernel/Containers/
)

file (GLOB_RECURSE Kernel_SRCS
  "${KERNEL_SOURCE_DIR}/src/Kernel/*.cpp"
)

include_directories(${Kernel_Include_Dirs})

add_library(kernel STATIC ${Kernel_SRCS})

file(GLOB_RECURSE BENCH_SRC_FILES "*.cpp")

include_directories(../3rdparty/benchmark/include)

# from list of files we'll create tests test_name.cpp -> test_name
foreach (_bench_file ${BENCH_SRC_FILES})
  get_filename_component (_bench_name ${_bench_file} NAME_WE)
  add_executable (${_bench_name}
    ${_bench_file}
  )
  target_link_libraries (${_bench_name}
    kernel
    benchmark_main
  )
endforeach ()

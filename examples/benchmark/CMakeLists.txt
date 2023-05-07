cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

file(GLOB_RECURSE srcs CONFIGUE_DEPENDS src/*.cpp)

# link_directories(../../external/benchmark/lib)
add_executable(mybenchmark)
target_sources(mybenchmark PUBLIC ${srcs})
target_include_directories(mybenchmark PRIVATE ../../external/benchmark/include)
target_link_directories(mybenchmark PRIVATE ../../external/benchmark/lib)
target_link_libraries(mybenchmark PRIVATE benchmark pthread)
cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

file(GLOB_RECURSE srcs CONFIGURE_DEPENS src/*.cpp include/*.h)

add_executable(test)
target_sources(test PRIVATE ${srcs})

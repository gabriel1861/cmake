cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

file(GLOB_RECURSE srcs CONFIGUE_DEPENDS src/*.cpp)

add_executable(testSpdlog)
target_sources(testSpdlog PUBLIC ${srcs})
target_include_directories(testSpdlog PRIVATE ../../external/spdlog-1.11.0/include)
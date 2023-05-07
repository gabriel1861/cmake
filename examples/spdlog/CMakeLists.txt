cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

file(GLOB_RECURSE srcs CONFIGUE_DEPENDS src/*.cpp)

add_executable(mySpdlog)
target_sources(mySpdlog PUBLIC ${srcs})
target_include_directories(mySpdlog PRIVATE ../../external/spdlog/include)
target_link_directories(mySpdlog PRIVATE ../../external/spdlog/lib)
target_link_libraries(mySpdlog PRIVATE spdlog)
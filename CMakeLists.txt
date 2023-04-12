cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(cmake
    VERSION         0.0.1
    DISCRIPTION     "sux's CMake demo"
    HOMEPAGE_URL    "https://github.com/gabriel1861/cmake"
    LANGUAGES       C CXX
)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(BuildInfo)

add_subdirectory(external)

add_subdirectory(src)

add_subdirectory(docs)

add_subdirectory(test)

add_subdirectory(packaging)
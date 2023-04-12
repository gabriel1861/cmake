cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(cmake
    VERSION         0.0.1
    DISCRIPTION     "sux's CMake demo"
    HOMEPAGE_URL    "https://github.com/gabriel1861/cmake"
    LANGUAGES       CXX
)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(BuildInfo)
cmake_minimum_required(VERSION 3.16)
project(design-patterns 
    VERSION 0.1.0 
    DESCRIPTION "Implementation of design patterns in C++." 
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY "https://github.com/google/googletest.git"
    GIT_TAG "main"
)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

add_subdirectory(extern/spdlog)
add_subdirectory(src)

add_executable(design-patterns main.cpp)
target_link_libraries(design-patterns PRIVATE spdlog::spdlog)

add_subdirectory(tests)
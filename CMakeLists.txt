cmake_minimum_required(VERSION 3.15)
project(MyProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)
add_subdirectory(tests)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE SortArrays)


file(GLOB_RECURSE ALL_SOURCE_FILES "*.cpp" "*.h")

add_custom_target(
    format
    COMMAND clang-format
    -i
    ${ALL_SOURCE_FILES}
    COMMENT "Running clang-format on source files"
)

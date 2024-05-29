enable_testing()

add_executable(test_sort_arrays test_sort_arrays.cpp)
target_link_libraries(test_sort_arrays PRIVATE SortArrays)

add_test(NAME TestSortArrays COMMAND $<TARGET_FILE:test_sort_arrays>)

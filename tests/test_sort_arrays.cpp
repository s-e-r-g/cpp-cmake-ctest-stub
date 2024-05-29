#include "sort_arrays.h"
#include <cassert>
#include <iostream>
#include <vector>

void test_relativeSortArray()
{
    {
        std::vector<int> arr1     = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
        std::vector<int> arr2     = {2, 1, 4, 3, 9, 6};
        std::vector<int> expected = {2, 2, 2, 1, 4, 3, 3, 9, 6, 7, 19};
        assert(relativeSortArray(arr1, arr2) == expected);
    }

    {
        std::vector<int> arr1     = {28, 6, 22, 8, 44, 17};
        std::vector<int> arr2     = {22, 28, 8, 6};
        std::vector<int> expected = {22, 28, 8, 6, 17, 44};
        assert(relativeSortArray(arr1, arr2) == expected);
    }

    std::cout << "All tests passed!" << std::endl;
}

int main() { test_relativeSortArray(); }

#include "sort_arrays.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    std::vector<int> arr2 = {2, 1, 4, 3, 9, 6};

    std::vector<int> result = relativeSortArray(arr1, arr2);

    for (int num : result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

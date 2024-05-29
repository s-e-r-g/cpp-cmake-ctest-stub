#include "sort_arrays.h"
#include <algorithm>
#include <unordered_map>

std::vector<int> relativeSortArray(const std::vector<int>& arr1, const std::vector<int>& arr2)
{
    std::unordered_map<int, int> order_map;
    for (size_t i = 0; i < arr2.size(); ++i)
    {
        order_map[arr2[i]] = i;
    }

    std::vector<int> result = arr1;
    std::stable_sort(result.begin(), result.end(),
                     [&order_map, &arr2](int a, int b)
                     {
                         auto it_a = order_map.find(a);
                         auto it_b = order_map.find(b);

                         if (it_a != order_map.end() && it_b != order_map.end())
                         {
                             return it_a->second < it_b->second;
                         }
                         else if (it_a != order_map.end())
                         {
                             return true;
                         }
                         else if (it_b != order_map.end())
                         {
                             return false;
                         }
                         else
                         {
                             return a < b;
                         }
                     });

    return result;
}

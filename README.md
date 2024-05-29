# Relative Sort Array Project

This project implements a function to sort elements of one array (`arr1`) such that the relative ordering of items in `arr1` is the same as in another array (`arr2`). Elements that do not appear in `arr2` are placed at the end of `arr1` in ascending order.

## Description

Given two arrays `arr1` and `arr2`, where the elements of `arr2` are distinct and all elements in `arr2` are also in `arr1`, the task is to sort the elements of `arr1` such that the relative ordering of items in `arr1` is the same as in `arr2`. Elements that do not appear in `arr2` should be placed at the end of `arr1` in ascending order.

### Example 1
- **Input:** `arr1 = [2,3,1,3,2,4,6,7,9,2,19]`, `arr2 = [2,1,4,3,9,6]`
- **Output:** `[2,2,2,1,4,3,3,9,6,7,19]`

### Example 2
- **Input:** `arr1 = [28,6,22,8,44,17]`, `arr2 = [22,28,8,6]`
- **Output:** `[22,28,8,6,17,44]`

### Constraints
- `1 <= arr1.length, arr2.length <= 1000`
- `0 <= arr1[i], arr2[i] <= 1000`
- All elements of `arr2` are distinct.
- Each `arr2[i]` is in `arr1`.

## Build and Test Instructions

### Prerequisites

- CMake 3.15 or higher
- A C++20 compatible compiler

### Build Steps

1. **Create a build directory**:
    ```sh
    mkdir build
    cd build
    ```

2. **Run CMake**:
    ```sh
    cmake ..
    ```

3. **Build the project**:
    ```sh
    cmake --build .
    ```

### Running the Main Program

After building the project, you can run the main executable:

```sh
./main
```

### Running the Tests 

After building the project, you can run tests:

```sh
ctest
```

# Rotate Matrix Problem

## Problem Statement
You are given an `n x n` 2D matrix representing an image. Rotate the image by 90 degrees (clockwise).

You have to rotate the image in place, which means you have to modify the input 2D matrix directly. **Do not** allocate another 2D matrix and do the rotation.

## Example

### Example 1
**Input:**  [
[1,2,3],
[4,5,6],
[7,8,9]
]

**Output:**  
[
[7,4,1],
[8,5,2],
[9,6,3]
]


### Example 2
**Input:**  
[
[5,1,9,11],
[2,4,8,10],
[13,3,6,7],
[15,14,12,16]
]

**Output:**  
[
[15,13,2,5],
[14,3,4,1],
[12,6,8,9],
[16,7,10,11]
]


## Solution
To rotate the matrix by 90 degrees clockwise:
1. **Transpose** the matrix.
2. **Reverse** each row.

## C++ Code

```cpp
#include <vector>
#include <algorithm>
#include <iostream>

void rotate(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    
    // Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Reverse each row
    for (int i = 0; i < n; ++i) {
        std::reverse(matrix[i].begin(), matrix[i].end());
    }
}

// Helper function to print the matrix
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

// Test cases
int main() {
    std::vector<std::vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    std::vector<std::vector<int>> matrix2 = {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16}
    };
    
    std::cout << "Original matrix 1:" << std::endl;
    printMatrix(matrix1);
    rotate(matrix1);
    std::cout << "Rotated matrix 1:" << std::endl;
    printMatrix(matrix1);
    std::cout << std::endl;
    
    std::cout << "Original matrix 2:" << std::endl;
    printMatrix(matrix2);
    rotate(matrix2);
    std::cout << "Rotated matrix 2:" << std::endl;
    printMatrix(matrix2);
    std::cout << std::endl;
    
    return 0;
}
```

## Explanation
1. **Transpose the matrix:** Convert all rows to columns and vice versa. This is done by swapping `matrix[i][j]` with `matrix[j][i]` for all `i` and `j` where `i < j`.
2. Reverse each row: After transposing, reverse each row to get the final rotated matrix. This can be done using the `std::reverse function`.


This Markdown includes the problem statement, examples, solution approach, and C++ code, making it a comprehensive guide for anyone looking to understand and solve the "Rotate Matrix" problem using C++.
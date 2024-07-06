# Set Matrix Zeroes Problem

## Problem Statement
Given an `m x n` matrix, if an element is `0`, set its entire row and column to `0`. Do it in place.

## Example

### Example 1
**Input:** [
  [1, 1, 1],
  [1, 0, 1],
  [1, 1, 1]
]
 
**Output:**  
[
  [1, 0, 1],
  [0, 0, 0],
  [1, 0, 1]
]

### Explanation:
- The element at `matrix[1][1]` is `0`.
- Set the entire row and column to `0`.


### Example 2
**Input:** 
[
  [0, 1, 2, 0],
  [3, 4, 5, 2],
  [1, 3, 1, 5]
]


**Output:**  
[
  [0, 0, 0, 0],
  [0, 4, 5, 0],
  [0, 3, 1, 0]
]

### Explanation:
- The element at `matrix[0][0]` is `0`.
- Set the entire row and column to `0`.

## Solution
To solve this problem in place without using extra space:

1. Use the first row and first column of the matrix to mark which rows and columns should be set to `0`.
2. Iterate through the matrix starting from the second row and second column:
- If an element is `0`, set the corresponding element in the first row and first column to `0`.
3. Iterate through the matrix again (excluding the first row and first column):
- If either the corresponding element in the first row or first column is 0, set the current element to 0.
4. Handle the first row and first column separately based on the markings.


## C++ Code

```cpp
#include <vector>
#include <iostream>

void setZeroes(std::vector<std::vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    bool firstRowZero = false;
    bool firstColZero = false;
    
    // Check if first row needs to be zeroed
    for (int j = 0; j < n; ++j) {
        if (matrix[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }
    
    // Check if first column needs to be zeroed
    for (int i = 0; i < m; ++i) {
        if (matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }
    
    // Use first row and first column to mark zeroing requirement
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    // Set zeros based on marks in first row and first column
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Handle first row and first column if they need to be zeroed
    if (firstRowZero) {
        for (int j = 0; j < n; ++j) {
            matrix[0][j] = 0;
        }
    }
    
    if (firstColZero) {
        for (int i = 0; i < m; ++i) {
            matrix[i][0] = 0;
        }
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
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    
    std::vector<std::vector<int>> matrix2 = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };
    
    std::cout << "Original matrix 1:" << std::endl;
    printMatrix(matrix1);
    setZeroes(matrix1);
    std::cout << "Matrix 1 after setting zeroes:" << std::endl;
    printMatrix(matrix1);
    std::cout << std::endl;
    
    std::cout << "Original matrix 2:" << std::endl;
    printMatrix(matrix2);
    setZeroes(matrix2);
    std::cout << "Matrix 2 after setting zeroes:" << std::endl;
    printMatrix(matrix2);
    std::cout << std::endl;
    
    return 0;
}
```
### Explanation
1. Identify if the first row and first column initially contain zeros and set flags (`firstRowZero` and `firstColZero`) accordingly.

2. Iterate through the matrix starting from the second row and second column.

3. Mark the zeroing requirement using the first row and the first column.
4. Set zeros based on the marks from the first row and the first column.
5. Handle the first row and the first column separately if they need to be zeroed out.


This Markdown includes the problem statement, examples, solution approach, and C++ code, providing a comprehensive guide for solving the "Set Matrix Zeroes" problem.
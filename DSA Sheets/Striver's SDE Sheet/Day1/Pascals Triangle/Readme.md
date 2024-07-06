# Pascal's Triangle Problem

## Problem Statement
Given an integer `numRows`, generate the first `numRows` of Pascal's Triangle.

In Pascal's Triangle, each number is the sum of the two numbers directly above it.

## Example

### Example 1
**Input:** `5`  
**Output:**  


### Example 2
**Input:** `1`  
**Output:**  


## Solution
To generate Pascal's Triangle, we can use a nested loop. The outer loop will iterate through each row, and the inner loop will calculate the values for each element in the current row based on the values from the previous row.

## C++ Code

```cpp
#include <vector>
#include <iostream>

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> triangle;
    
    if (numRows == 0) return triangle;
    
    triangle.push_back({1});
    
    for (int i = 1; i < numRows; ++i) {
        std::vector<int> row(i + 1, 1);
        for (int j = 1; j < i; ++j) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }
    
    return triangle;
}

// Helper function to print the triangle
void printTriangle(const std::vector<std::vector<int>>& triangle) {
    for (const auto& row : triangle) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

// Test cases
int main() {
    int numRows1 = 5;
    int numRows2 = 1;

    std::vector<std::vector<int>> triangle1 = generate(numRows1);
    std::vector<std::vector<int>> triangle2 = generate(numRows2);

    std::cout << "Pascal's Triangle with " << numRows1 << " rows:" << std::endl;
    printTriangle(triangle1);
    std::cout << std::endl;

    std::cout << "Pascal's Triangle with " << numRows2 << " rows:" << std::endl;
    printTriangle(triangle2);
    std::cout << std::endl;

    return 0;
}
```
### Explanation
1. Initialize the triangle with the first `row [1]`.
2. For each subsequent row up to `numRows`:
- Create a row with `i + 1 `elements, all initialized to `1`.
8 Calculate the intermediate values of the row using the values from the previous row.
3. Add the row to the triangle.
4. Return the generated triangle.


This Markdown includes the problem statement, examples, solution approach, and C++ code, making it a comprehensive guide for anyone looking to understand and solve the "Pascal's Triangle" problem using C++.
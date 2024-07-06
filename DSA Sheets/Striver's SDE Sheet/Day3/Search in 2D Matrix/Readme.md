# Problem: Search in a 2D Matrix

## Description
You are given an `m x n` matrix where each row is sorted in ascending order from left to right, and each column is sorted in ascending order from top to bottom. Your task is to write an efficient algorithm to search for a target value in this matrix.

## Example

Consider the following matrix:

[
[1, 4, 7, 11, 15],
[2, 5, 8, 12, 19],
[3, 6, 9, 16, 22],
[10, 13, 14, 17, 24],
[18, 21, 23, 26, 30]
]


Let's say the target value is `5`. In this case, your function should return `true` because `5` is present in the matrix.

If the target value is `20`, your function should return `false` because `20` is not present in the matrix.

## Approach

1. **Start from the Top-Right Corner:**
   - Begin your search from the top-right corner of the matrix.
   - Let the initial position be `(row, col) = (0, n-1)` where `n` is the number of columns.

2. **Traverse the Matrix:**
   - If the current element equals the target, return `true`.
   - If the current element is greater than the target, move left (i.e., `col--`).
   - If the current element is less than the target, move down (i.e., `row++`).

3. **Terminate Conditions:**
   - If you move out of the bounds of the matrix (i.e., `row >= m` or `col < 0`), the target is not in the matrix, and you should return `false`.

## Complexity
- **Time Complexity:** O(m + n), where `m` is the number of rows and `n` is the number of columns.
- **Space Complexity:** O(1) since no additional space is used.

## Pseudocode

```plaintext
function searchMatrix(matrix, target):
    if matrix is empty:
        return false
    
    row = 0
    col = number of columns in matrix - 1
    
    while row < number of rows in matrix and col >= 0:
        if matrix[row][col] == target:
            return true
        else if matrix[row][col] > target:
            col -= 1
        else:
            row += 1
    
    return false
```

## C++ Code
```cpp
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0;
        int col = cols - 1;
        
        while (row < rows && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                col--;
            } else {
                row++;
            }
        }
        
        return false;
    }
};
```

This approach efficiently narrows down the possible location of the target by leveraging the sorted properties of the matrix.
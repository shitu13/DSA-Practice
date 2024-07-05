# Sorting 0s, 1s, and 2s

The problem of sorting an array consisting of only 0s, 1s, and 2s can be solved efficiently using the Dutch National Flag algorithm. This algorithm is optimal for this problem as it sorts the array in a single pass with constant space complexity.

## Problem Explanation

You are given an array of integers where each integer is either 0, 1, or 2. The task is to sort the array in-place so that all 0s come first, followed by all 1s, and then all 2s.

### Example

For example, given the array `nums = [2, 0, 2, 1, 1, 0]`, the sorted array should be `[0, 0, 1, 1, 2, 2]`.

## Solution Approach: Dutch National Flag Algorithm

The Dutch National Flag algorithm uses three pointers to sort the array efficiently in a single pass:

1. **Three Pointers**:
   - `low`: This pointer will track the boundary for the next position of 0.
   - `mid`: This pointer will traverse the array and decide the position of elements.
   - `high`: This pointer will track the boundary for the next position of 2.

2. **Algorithm**:
   - Initialize `low`, `mid` to 0 and `high` to `n-1` (where `n` is the length of the array).
   - Traverse the array with `mid` from the start to the end (i.e., while `mid <= high`):
     - If `nums[mid]` is 0:
       - Swap `nums[mid]` with `nums[low]`.
       - Increment both `low` and `mid`.
     - If `nums[mid]` is 1:
       - Increment `mid`.
     - If `nums[mid]` is 2:
       - Swap `nums[mid]` with `nums[high]`.
       - Decrement `high`.

This way, all 0s are moved to the beginning, 1s stay in the middle, and 2s are moved to the end of the array.

## Implementation

Here is a C++ implementation of the algorithm:

```cpp
#include <vector>
#include <iostream>

void sortColors(std::vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    
    while (mid <= high) {
        if (nums[mid] == 0) {
            std::swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            std::swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    std::vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    // Output: 0 0 1 1 2 2
    return 0;
}
```


## Explanation of the Code

1. Initialization: The three pointers `low`, `mid`, and `high` are initialized to point to the start and end of the array.

2. Traversal and Swapping:
- If the current element `(nums[mid])` is 0, it is swapped with the element at `low`, and both `low` and `mid` are incremented.
- If the current element is 1, only `mid` is incremented.

- If the current element is 2, it is swapped with the element at `high`, and 'high' is decremented.

3. Termination
The loop continues until `mid` surpasses `high`, ensuring all elements are correctly positioned.

This Markdown includes the problem statement, constraints, examples, solution approach, and C++ code, making it a comprehensive guide for anyone looking to understand and solve the "Next Permutation" problem using C++.
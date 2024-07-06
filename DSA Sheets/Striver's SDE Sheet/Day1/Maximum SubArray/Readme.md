# Maximum Subarray Problem

## Problem Statement
Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Write a function that returns the maximum sum of the contiguous subarray.

## Constraints
- The array will contain at least one element.
- The elements of the array can be negative or positive integers.

## Example

### Example 1
**Input:** `[-2,1,-3,4,-1,2,1,-5,4]`  
**Output:** `6`  
**Explanation:** The subarray `[4,-1,2,1]` has the largest sum = 6.

### Example 2
**Input:** `[1]`  
**Output:** `1`  
**Explanation:** The subarray `[1]` has the largest sum = 1.

### Example 3
**Input:** `[5,4,-1,7,8]`  
**Output:** `23`  
**Explanation:** The subarray `[5,4,-1,7,8]` has the largest sum = 23.

## Solution
The problem can be solved using Kadane's Algorithm, which is a dynamic programming approach. It involves iterating through the array while maintaining the maximum subarray sum ending at the current position and updating the global maximum subarray sum.

## C++ Code

```cpp
#include <vector>
#include <algorithm>
#include <iostream>

int maxSubArray(const std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int currentSum = nums[0];
    int maxSum = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        currentSum = std::max(nums[i], currentSum + nums[i]);
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}

// Test cases
int main() {
    std::vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::vector<int> nums2 = {1};
    std::vector<int> nums3 = {5, 4, -1, 7, 8};

    std::cout << "Max subarray sum for nums1: " << maxSubArray(nums1) << std::endl; // Output: 6
    std::cout << "Max subarray sum for nums2: " << maxSubArray(nums2) << std::endl; // Output: 1
    std::cout << "Max subarray sum for nums3: " << maxSubArray(nums3) << std::endl; // Output: 23

    return 0;
}
```

### Explanation
1. Initialize `currentSum` and `maxSum` to the first element of the array.
2. Iterate through the array starting from the second element.
3. For each element:
- Update `currentSum` to be the maximum of the current element and the sum of `currentSum` and the current element.
- Update `maxSum` to be the maximum of `maxSum` and `currentSum`.

4. Return `maxSum` at the end of the iteration.

This Markdown includes the problem statement, constraints, examples, solution approach, and C++ code, making it a comprehensive guide for anyone looking to understand and solve the "Next Permutation" problem using C++.
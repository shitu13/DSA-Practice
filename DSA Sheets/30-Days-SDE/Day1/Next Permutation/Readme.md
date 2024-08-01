# Next Permutation Problem

## Problem Statement
Implement `nextPermutation`, which rearranges numbers into the lexicographically next greater permutation of numbers. If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

## Constraints
- The array will contain at least one element.
- Elements of the array can be positive or negative integers.

## Example

### Example 1
**Input:** `[1,2,3]`  
**Output:** `[1,3,2]`  
**Explanation:** The next permutation of the input array is `[1,3,2]`.

### Example 2
**Input:** `[3,2,1]`  
**Output:** `[1,2,3]`  
**Explanation:** The input array is the highest permutation, so the next permutation is the lowest (sorted in ascending order).

### Example 3
**Input:** `[1,1,5]`  
**Output:** `[1,5,1]`  
**Explanation:** The next permutation of the input array is `[1,5,1]`.

## Solution
To generate the next permutation in lexicographic order, we can follow these steps:
1. Find the largest index `k` such that `nums[k] < nums[k + 1]`. If no such index exists, the permutation is the last permutation.
2. Find the largest index `l` greater than `k` such that `nums[k] < nums[l]`.
3. Swap the value of `nums[k]` with that of `nums[l]`.
4. Reverse the sequence from `nums[k + 1]` to the end.

## C++ Code

```cpp
#include <vector>
#include <algorithm>
#include <iostream>

void nextPermutation(std::vector<int>& nums) {
    int n = nums.size();
    int k = -1;
    
    // Find the largest index k such that nums[k] < nums[k + 1]
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] < nums[i + 1]) {
            k = i;
            break;
        }
    }
    
    if (k == -1) {
        // If no such index exists, the permutation is the last permutation
        std::reverse(nums.begin(), nums.end());
        return;
    }
    
    // Find the largest index l greater than k such that nums[k] < nums[l]
    int l = -1;
    for (int i = n - 1; i > k; --i) {
        if (nums[i] > nums[k]) {
            l = i;
            break;
        }
    }
    
    // Swap the value of nums[k] with that of nums[l]
    std::swap(nums[k], nums[l]);
    
    // Reverse the sequence from nums[k + 1] to the end
    std::reverse(nums.begin() + k + 1, nums.end());
}

// Test cases
int main() {
    std::vector<int> nums1 = {1, 2, 3};
    std::vector<int> nums2 = {3, 2, 1};
    std::vector<int> nums3 = {1, 1, 5};
    
    nextPermutation(nums1);
    nextPermutation(nums2);
    nextPermutation(nums3);
    
    std::cout << "Next permutation for nums1: ";
    for (int num : nums1) std::cout << num << " "; // Output: 1 3 2
    std::cout << std::endl;
    
    std::cout << "Next permutation for nums2: ";
    for (int num : nums2) std::cout << num << " "; // Output: 1 2 3
    std::cout << std::endl;
    
    std::cout << "Next permutation for nums3: ";
    for (int num : nums3) std::cout << num << " "; // Output: 1 5 1
    std::cout << std::endl;
    
    return 0;
}
```

### Explanation
1. Find the largest index `k` such that `nums[k] < nums[k + 1]`. If no such index exists, reverse the array to get the smallest permutation.
2. Find the largest index `l` greater than `k` such that `nums[k] < nums[l]`.
3. Swap `nums[k]` and `nums[l]`.
4. Reverse the subarray from `nums[k + 1]` to the end to get the next permutation.


This Markdown includes the problem statement, constraints, examples, solution approach, and C++ code, making it a comprehensive guide for anyone looking to understand and solve the "Next Permutation" problem using C++.
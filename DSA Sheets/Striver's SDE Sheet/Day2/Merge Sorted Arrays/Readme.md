# Merge Sorted Array Problem

## Problem Statement
Given two sorted integer arrays `nums1` and `nums2`, merge `nums2` into `nums1` as one sorted array.

- The number of elements initialized in `nums1` and `nums2` are `m` and `n` respectively.
- You may assume that `nums1` has enough space (size that is greater or equal to `m + n`) to hold additional elements from `nums2`.

## Example

### Example 1
**Input:** 

`nums1 = [1,2,3,0,0,0], m = 3`  
`nums2 = [2,5,6], n = 3`

**Output:** `[1,2,2,3,5,6]`  

**Explanation:** After merging, `nums1` becomes `[1,2,2,3,5,6]`.

### Example 2
**Input:** 
`nums1 = [1], m = 1`
`nums2 = [], n = 0 `

**Output:** `[1]`  
**Explanation:** After merging, `nums1` becomes `[1]`.


## Solution
To merge two sorted arrays `nums1` and `nums2` into `nums1`:
1. Use two pointers, `i` and `j`, initialized to the last valid elements of `nums1` and `nums2` respectively.
2. Compare elements starting from the end of both arrays:
- If an element from `nums1` is greater than or equal to an element from `nums2`, place it at the end of `nums1`.
- Otherwise, place the element from nums2 at the end of `nums1`.
3. Continue this process until all elements from `nums2` are merged into `nums1`

## C++ Code

```cpp
#include <vector>
#include <iostream>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i = m - 1; // Pointer for nums1
    int j = n - 1; // Pointer for nums2
    int k = m + n - 1; // Index to merge elements
    
    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[k] = nums1[i];
            --i;
        } else {
            nums1[k] = nums2[j];
            --j;
        }
        --k;
    }
    
    // Copy remaining elements from nums2 if any
    while (j >= 0) {
        nums1[k] = nums2[j];
        --j;
        --k;
    }
}

// Helper function to print the array
void printArray(const std::vector<int>& nums) {
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Test cases
int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;

    std::cout << "Original nums1:" << std::endl;
    printArray(nums1);
    std::cout << "Original nums2:" << std::endl;
    printArray(nums2);

    merge(nums1, m, nums2, n);

    std::cout << "Merged sorted array:" << std::endl;
    printArray(nums1);

    return 0;
}

```

## Explanation
1. Initialize three pointers:
- `i` starts from the end of `nums1 (m - 1)`,
- `j` starts from the end of `nums2 (n - 1)`.
- `k` starts from the end of the allocated space in nums1 `(m + n - 1)`.
2. Compare elements pointed by `i` and `j`, placing the larger element at position `k` in `nums1`.
3. Decrement pointers accordingly until all elements from `nums2` are merged into `nums1`.


This Markdown includes the problem statement, examples, solution approach, and C++ code, providing a comprehensive guide for solving the "Merge Sorted Array" problem.







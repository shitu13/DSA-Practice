# Floyd's Cycle Detection Algorithm (Tortoise and Hare) with Array

Floyd's Cycle Detection Algorithm, also known as the Tortoise and Hare algorithm, can be applied to detect cycles in an array where each element points to the index of the next element.

## Problem
Given an array where each element points to the index of the next element, determine if there is a cycle. The array elements are indices within the array, which means they represent the next position to jump to.

## Steps:

1. **Initialization**:
   - Start with two pointers, both pointing to the first element of the array.
   - The slow pointer (tortoise) moves one step at a time.
   - The fast pointer (hare) moves two steps at a time.

2. **Traversal**:
   - Move the slow pointer by one step and the fast pointer by two steps in each iteration.
   - If there is no cycle, the fast pointer will go out of the array bounds.
   - If there is a cycle, the fast pointer will eventually meet the slow pointer within the cycle.

3. **Cycle Detection**:
   - If the slow pointer and fast pointer meet at any point, a cycle exists in the array.
   - If the fast pointer goes out of bounds, there is no cycle.

## C++ Implementation

```cpp
#include <iostream>
#include <vector>

bool hasCycle(const std::vector<int>& nums) {
    if (nums.empty()) {
        return false;
    }

    int slow = 0;
    int fast = 0;

    do {
        // Move slow pointer by one step
        slow = nums[slow];

        // Move fast pointer by two steps
        fast = nums[fast];
        if (fast >= 0 && fast < nums.size()) {
            fast = nums[fast];
        } else {
            return false;
        }

    } while (slow != fast && fast >= 0 && fast < nums.size());

    return slow == fast;
}

int main() {
    // Example usage:
    std::vector<int> nums = {1, 2, 3, 4, 2}; // Creates a cycle (2 -> 3 -> 4 -> 2)

    if (hasCycle(nums)) {
        std::cout << "Cycle detected" << std::endl;
    } else {
        std::cout << "No cycle detected" << std::endl;
    }

    return 0;
}
```

### Explanation
- **Initialization:** Both slow and fast start at the first element of the array.
- **Traversal:** The while loop continues as long as slow does not equal fast and fast is within bounds of the array.
- **Cycle Detection:** If slow equals fast at any point, it means there is a cycle in the array. If the loop exits because fast goes out of bounds, there is no cycle.

This implementation checks for cycles in an array where each element represents the index of the next element to move to. The algorithm runs in O(n) time complexity and uses O(1) space complexity.
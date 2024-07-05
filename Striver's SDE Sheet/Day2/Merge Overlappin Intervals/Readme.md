# Merge Overlapping Intervals Problem

## Problem Statement
Given a collection of intervals, merge all overlapping intervals.

## Example

### Example 1
**Input:** `[[1,3],[2,6],[8,10],[15,18]]`  
**Output:** `[[1,6],[8,10],[15,18]]`  
**Explanation:** Since intervals `[1,3]` and `[2,6]` overlap, merge them into `[1,6]`.

### Example 2
**Input:** `[[1,4],[4,5]]`  
**Output:** `[[1,5]]`  
**Explanation:** Intervals `[1,4]` and `[4,5]` are considered overlapping.

## Solution
To merge overlapping intervals:
1. Sort the intervals by their start times.
2. Traverse the sorted intervals and merge them if they overlap.

## C++ Code

```cpp
#include <vector>
#include <algorithm>
#include <iostream>

std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
    if (intervals.empty()) return {};
    
    // Sort intervals by the start time
    std::sort(intervals.begin(), intervals.end());
    
    std::vector<std::vector<int>> merged;
    merged.push_back(intervals[0]);
    
    for (const auto& interval : intervals) {
        if (interval[0] <= merged.back()[1]) {
            // There is an overlap, so merge the current interval with the last interval in merged
            merged.back()[1] = std::max(merged.back()[1], interval[1]);
        } else {
            // No overlap, add the current interval to merged
            merged.push_back(interval);
        }
    }
    
    return merged;
}

// Helper function to print the intervals
void printIntervals(const std::vector<std::vector<int>>& intervals) {
    for (const auto& interval : intervals) {
        std::cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    std::cout << std::endl;
}

// Test cases
int main() {
    std::vector<std::vector<int>> intervals1 = {{1,3}, {2,6}, {8,10}, {15,18}};
    std::vector<std::vector<int>> intervals2 = {{1,4}, {4,5}};
    
    std::vector<std::vector<int>> merged1 = merge(intervals1);
    std::vector<std::vector<int>> merged2 = merge(intervals2);
    
    std::cout << "Merged intervals 1: ";
    printIntervals(merged1); // Output: [[1,6],[8,10],[15,18]]
    
    std::cout << "Merged intervals 2: ";
    printIntervals(merged2); // Output: [[1,5]]
    
    return 0;
}
```

## Explanation
1. Sort the intervals by their start times.


2. Initialize a merged vector with the first interval.
3. Iterate through each interval:
- If the current interval overlaps with the last interval in merged, update the end time of the last interval in merged.

- If the current interval does not overlap, add it to merged.

4. Return the merged intervals.


This Markdown includes the problem statement, examples, solution approach, and C++ code, making it a comprehensive guide for anyone looking to understand and solve the "Merge Overlapping Intervals" problem using C++.







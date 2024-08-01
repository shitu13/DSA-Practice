# Problem: Majority Element

## Description
The majority element in an array of size `n` is an element that appears more than `n/2` times. The task is to find this element in a given array. It is guaranteed that the array always contains a majority element.

## Example

1. Input: `[3, 2, 3]`
   - Output: `3`

2. Input: `[2, 2, 1, 1, 1, 2, 2]`
   - Output: `2`

## Approach

### Boyer-Moore Voting Algorithm

This algorithm is an efficient method to find the majority element with a time complexity of O(n) and a space complexity of O(1).

1. **Initialization:**
   - Set a candidate element.
   - Initialize a counter to `0`.

2. **Candidate Selection:**
   - Traverse through the array.
   - If the counter is `0`, set the current element as the candidate.
   - If the current element is the same as the candidate, increment the counter.
   - If the current element is different, decrement the counter.

3. **Majority Element Verification:**
   - After completing the traversal, the candidate element will be the majority element.

### Complexity
- **Time Complexity:** O(n), where `n` is the length of the array.
- **Space Complexity:** O(1), constant space.

## Pseudocode

```plaintext
function majorityElement(nums):
    candidate = None
    counter = 0
    
    for num in nums:
        if counter == 0:
            candidate = num
        if num == candidate:
            counter += 1
        else:
            counter -= 1
    
    return candidate
```

## C++ Code
```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int counter = 0;
        
        for (int num : nums) {
            if (counter == 0) {
                candidate = num;
            }
            if (num == candidate) {
                counter++;
            } else {
                counter--;
            }
        }
        
        return candidate;
    }
};
```

## Explanation
1. Initialization: `candidate` is set to None and `counter` is initialized to `0`.

2. First Iteration:
- num is checked.
- If `counter` is `0`, the current `num` is set as `candidate`.
- If `num` equals `candidate`, `counter` is incremented.
- Otherwise, `counter` is decremented.

3. Final Result:

- The `candidate` with the highest `counter` value at the end of the iteration is returned as the majority element.

This approach efficiently identifies the majority element by maintaining a balance between the candidate and its `counter`.
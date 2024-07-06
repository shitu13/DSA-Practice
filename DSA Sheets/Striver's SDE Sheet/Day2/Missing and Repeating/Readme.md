# Finding Missing and Repeating Numbers

## Problem Statement

Given an array of size `n` containing numbers from 1 to `n`, some numbers are missing, and some are repeated. Your task is to identify the missing number and the repeating number.

## Approach

### Using Mathematical Formulas

1. **Sum of First `n` Natural Numbers**: The sum of the first `n` natural numbers is given by the formula:
   \[
   S = \frac{n \times (n + 1)}{2}
   \]
   
2. **Sum of Squares of First `n` Natural Numbers**: The sum of the squares of the first `n` natural numbers is given by the formula:
   \[
   P = \frac{n \times (n + 1) \times (2n + 1)}{6}
   \]

3. **Calculate the Sum and Sum of Squares of the Given Array**: Compute the sum (`S'`) and sum of squares (`P'`) of the elements in the given array.

4. **Form Equations**:
   \[
   S' - S = (x - y) \quad \text{(Equation 1)}
   \]
   \[
   P' - P = (x^2 - y^2) = (x + y)(x - y) \quad \text{(Equation 2)}
   \]

   Here, `x` is the repeating number and `y` is the missing number.

5. **Solve the Equations**: Using Equation 1 and Equation 2, solve for `x` and `y`.

## Sample Code

```cpp
#include <iostream>
#include <vector>
#include <cmath>

std::pair<int, int> findMissingAndRepeating(const std::vector<int>& arr) {
    int n = arr.size();
    long long S = (n * (n + 1)) / 2;
    long long P = (n * (n + 1) * (2 * n + 1)) / 6;

    long long S_prime = 0;
    long long P_prime = 0;

    for (const int& num : arr) {
        S_prime += num;
        P_prime += static_cast<long long>(num) * num;
    }

    long long S_diff = S_prime - S;
    long long P_diff = P_prime - P;

    long long sum_xy = P_diff / S_diff;  // x + y
    long long diff_xy = S_diff;          // x - y

    int repeating = (sum_xy + diff_xy) / 2;
    int missing = sum_xy - repeating;

    return {missing, repeating};
}

int main() {
    std::vector<int> arr = {4, 3, 6, 2, 1, 6};
    auto result = findMissingAndRepeating(arr);
    std::cout << "Missing number: " << result.first << std::endl;
    std::cout << "Repeating number: " << result.second << std::endl;
    return 0;
}
```



## Explanation
1. Compute `S` and `P`: Calculate the theoretical sum and sum of squares for the range [1, n].
2. Compute `S` and `P`': Calculate the actual sum and sum of squares of the elements in the array.
3. Calculate Differences: Compute the differences S_diff (difference in sums) and P_diff (difference in sum of squares).
4. Solve for x and y:
- Use the equations derived to find the repeating (x) and missing (y) numbers.
- Return the result.

## Conclusion
By using mathematical formulas, we can efficiently determine the missing and repeating numbers in the array with a time complexity of O(n).
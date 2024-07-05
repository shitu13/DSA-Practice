# Buy and Sell Stock Problem

## Problem Statement
You are given an array where each element represents the price of a stock on that day. You need to maximize your profit by choosing a single day to buy one stock and a different day in the future to sell that stock.

Write a function that returns the maximum profit you can achieve from this transaction. If no profit can be made, return 0.

## Constraints
- The array of stock prices will contain at least one element.
- The stock prices will be non-negative integers.

## Example

### Example 1
**Input:** `[7, 1, 5, 3, 6, 4]`  
**Output:** `5`  
**Explanation:** Buy on day 2 (price = 1) and sell on day 5 (price = 6). Profit = 6 - 1 = 5.

### Example 2
**Input:** `[7, 6, 4, 3, 1]`  
**Output:** `0`  
**Explanation:** No transaction is done, so the maximum profit is 0.

## Solution
The problem can be solved using a single pass approach. We will keep track of the minimum price encountered so far and calculate the maximum profit possible at each step.

## C++ Code

```cpp
#include <vector>
#include <algorithm>
#include <iostream>

int maxProfit(const std::vector<int>& prices) {
    if (prices.empty()) {
        return 0;
    }

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price;
        } else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice;
        }
    }

    return maxProfit;
}

// Test cases
int main() {
    std::vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    std::vector<int> prices2 = {7, 6, 4, 3, 1};

    std::cout << "Max profit for prices1: " << maxProfit(prices1) << std::endl; // Output: 5
    std::cout << "Max profit for prices2: " << maxProfit(prices2) << std::endl; // Output: 0

    return 0;
}
```

## Explanation

1. Initialize `minPrice` to the maximum possible integer value and `maxProfit` to 0.

2. Iterate through each price in the array.

3. For each price:
- Update `minPrice` if the current price is lower.
- Calculate the current profit by subtracting `minPrice` from the current price.
- Update `maxProfit` if the current profit is higher.

4. Return the `maxProfit` at the end of the iteration
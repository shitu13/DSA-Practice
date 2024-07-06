/*
121. Best Time to Buy and Sell Stock
Space Complexity: O(1)
Time Complexity: O(n)
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            
            if (prices[i] < buy_price) {
                buy_price = prices[i];
            } 
            else {
                int curr_profit = prices[i] - buy_price;
                max_profit = max(curr_profit, max_profit);
            }
        }
        return max_profit;
    }
};


// This is Cleaner Code. 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_pro = 0;
        int min_price = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
            min_price = min(prices[i], min_price);
            max_pro = max(prices[i] - min_price, max_pro);
        }
        return max_pro;
    }
};
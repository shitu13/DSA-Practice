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

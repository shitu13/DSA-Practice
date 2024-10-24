class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int leftProd = 1;
        int rightProd = 1;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            // if leftProd or rightProd becomes 0, make it 1;
            leftProd = leftProd == 0 ? 1 : leftProd;
            rightProd = rightProd == 0 ? 1 : rightProd;

            leftProd *= nums[i];
            rightProd *= nums[n-1-i];

            maxi = max(max(leftProd, rightProd), maxi);
        }

        return maxi;
    }
};
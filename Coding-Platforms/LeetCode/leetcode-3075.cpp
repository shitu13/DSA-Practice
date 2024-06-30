class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {

        sort(happiness.begin(), happiness.end(), greater<int>());

        long long ans = 0;
        for (int i = 0; i < k; i++) {
            if ((happiness[i] - i) <= 0) {
                ans += 0;
                break;
            }
            ans += happiness[i] - i;
        }
        return ans;
    }
};
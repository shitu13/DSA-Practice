//   Largest Positive Integer That Exists With Its Negative - LEETCODE 2441

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(), nums.end());
        int ans = -1;
        for (auto i : nums) {
            if (uset.count(-i)) {
                ans = max(ans, i);
            }
        }
        return ans;
    }
};
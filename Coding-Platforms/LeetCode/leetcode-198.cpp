// With memorization
class Solution {
private:
    int t[101];
    int solve(vector<int>& nums, int idx, int& n) {
        if (idx >= n)
            return 0;

        if (t[idx] != -1) {
            return t[idx];
        }

        int take = nums[idx] + solve(nums, idx + 2, n);
        int skip = solve(nums, idx + 1, n);

        return t[idx] = max(take, skip);
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        memset(t, -1, sizeof(t));

        return solve(nums, 0, n);
    }
};


// Without Memorization
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> t(n + 1, 0);

        t[0] = 0;
        t[1] = nums[0];

        for (int i = 2; i <= n; i++) {
            int steal = nums[i - 1] + t[i - 2];
            int skip = t[i - 1];

            t[i] = max(steal, skip);
        }

        return t[n];
    }
};
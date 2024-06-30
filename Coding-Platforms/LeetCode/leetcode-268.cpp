//  Missing Number - LEETCODE 268
// Approach 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = n * (n + 1) / 2;
        int res = 0;
        for (int i = 0; i < n; i++) {
            sum -= nums[i];
        }

        return sum;
    }
};


// Approach 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int res = n;

        for (int i = 0; i < n; i++) {
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }
};
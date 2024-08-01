/*
Leetcode 560. Subarray Sum Equals K
Approach 1: For only positive numbers
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int cumSum = 0;
        mp.insert({0, 1});
        int res = 0;

        for (int i = 0; i < nums.size(); i++) {
            cumSum += nums[i];
            
            if (mp.find(cumSum - k) != mp.end())
                res += mp[cumSum - k];

            mp[cumSum]++;
        }
        return res;
    }
};

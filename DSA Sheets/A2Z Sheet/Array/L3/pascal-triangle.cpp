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

/// Majority Element II - LEETCODE 229

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maj1 = NULL;
        int maj2 = NULL;
        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maj1)
                cnt1++;
            else if (nums[i] == maj2)
                cnt2++;
            else if (cnt1 == 0) {
                cnt1 = 1;
                maj1 = nums[i];
            } else if (cnt2 == 0) {
                cnt2 = 1;
                maj2 = nums[i];
            } else {
                cnt1--;
                cnt2--;
            }
        }

        vector<int> result;
        int freq1 = 0;
        int freq2 = 0;

        for (auto num : nums) {
            if (num == maj1)
                freq1++;
            if (num == maj2)
                freq2++;
        }

        if (freq1 > floor(nums.size() / 3) && maj1!=maj2)
            result.push_back(maj1);
        if (freq2 > floor(nums.size() / 3))
            result.push_back(maj2);

        return result;
    }
};
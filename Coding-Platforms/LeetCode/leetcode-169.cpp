//// Majority Element - LEETCODE 169

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = NULL;
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                maj = nums[i];
                cnt = 1;
            } else if (cnt != 0) {
                if (nums[i] == maj)
                    cnt++;
                else
                    cnt--;
            }
        }
        return maj;
    }
};
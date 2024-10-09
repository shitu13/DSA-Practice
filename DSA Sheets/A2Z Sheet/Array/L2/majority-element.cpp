class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0];
        int cnt = 1;

        for (int i = 1; i < nums.size(); i++) {
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

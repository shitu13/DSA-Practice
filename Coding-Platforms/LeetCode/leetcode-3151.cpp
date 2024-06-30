class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return true;

        for (int i = 0; i < n - 1; i += 1) {
            if (nums[i] % 2 == 0 && nums[i + 1] % 2 != 0)
                continue;

            else if (nums[i] % 2 != 0 && nums[i + 1] % 2 == 0)
                continue;

            else
                return false;
        }

        return true;
    }
};
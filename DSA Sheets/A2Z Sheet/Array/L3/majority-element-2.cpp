class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int maj1 = INT_MIN, maj2 = INT_MIN;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && maj2 != nums[i]) {
                cnt1 = 1, maj1 = nums[i];
            } else if (cnt2 == 0 && maj1 != nums[i]) {
                cnt2 = 1, maj2 = nums[i];
            } else if (maj1 == nums[i])
                cnt1++;
            else if (maj2 == nums[i])
                cnt2++;
            else {
                cnt1--, cnt2--;
            }
        }
        vector<int> ans;
        cnt1 = 0, cnt2 = 0;
        int cmp = int(n / 3) + 1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == maj1)
                cnt1++;
            if (nums[i] == maj2)
                cnt2++;
        }

        if (cnt1 >= cmp && maj1 != maj2)
            ans.push_back(maj1);
        if (cnt2 >= cmp)
            ans.push_back(maj2);

        return ans;
    }
};

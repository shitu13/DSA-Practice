// Leetcode 26: Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        int cnt = 0;

        while (r < n) {
            if (nums[l] != nums[r]) {
                l++;
                nums[l] = nums[r];
            }
            r++;
        }
        return l+1;
    }
};

/*
Leetcode 31. Next Permutation
Approach 1: 
Space Complexity: O(1)
Time Complexity: O(n)
*/


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int gol_idx = -1;

        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                gol_idx = i - 1;
                break;
            }
        }

        if (gol_idx != -1) {
            int swap_idx = gol_idx;

            for (int i = n - 1; i >= gol_idx + 1; i--) {
                if (nums[i] > nums[gol_idx]) {
                    swap_idx = i;
                    break;
                }
            }
            swap(nums[gol_idx], nums[swap_idx]);
        }

        reverse(nums.begin() + gol_idx + 1, nums.end());
    }
};
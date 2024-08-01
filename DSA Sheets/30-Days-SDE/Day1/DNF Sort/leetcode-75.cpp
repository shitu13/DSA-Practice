/*
Leetcode 75. Sort Colors
Approach 1: Cleaner Approach to me
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, m = 0, h = nums.size() - 1;

        while (m<=h) {
            if (nums[m] == 0) {
                swap(nums[l], nums[m]);
                l++, m++;
            } else if (nums[m] == 1) {
                m++;
            } else {
                swap(nums[m], nums[h]);
                h--;
            }
        }
    }
};


/*
Leetcode 75. Sort Colors
Approach 1: 
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one = -1;
        int zero = -1;
        int two = -1;

        for (int& num : nums) {
            if (num == 0) {
                nums[++two] = 2;
                nums[++one] = 1;
                nums[++zero] = 0;
            } else if (num == 1) {
                nums[++two] = 2;
                nums[++one] = 1;
            } else if (num == 2) {
                nums[++two] = 2;
            }
        }
    }
};
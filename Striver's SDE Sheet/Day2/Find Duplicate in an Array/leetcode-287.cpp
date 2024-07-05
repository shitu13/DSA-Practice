/*
Leetcode 287. Find the Duplicate Number
Approach 1: 
Space Complexity: O(1)
Time Complexity: O(n * log n)
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1])
            return nums[i];
        }
        return -1;
    }
};


/*
Leetcode 287. Find the Duplicate Number
Approach 2: using Hare and Tortoise algorithm 
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        slow = nums[slow];
        fast = nums[nums[fast]];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
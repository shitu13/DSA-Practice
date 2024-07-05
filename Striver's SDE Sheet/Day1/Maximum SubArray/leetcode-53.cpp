/*
Leetcode 53. Maximum Subarray
Approach 1: Doesn't get Accepted
Space Complexity: O(1)
Time Complexity: O(n^2)
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                maxi = max(sum, maxi);
            }
        }
        return maxi;
    }
};


/*
Approach : 2
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = max(sum, maxi);

            sum < 0 ? sum = 0 : sum;
        }
        return maxi;
    }
};
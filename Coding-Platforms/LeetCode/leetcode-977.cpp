// Squares of a Sorted Array - LEETCODE 977
// Approach 1 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(pow(nums[i], 2));
        }

        sort(res.begin(), res.end());
        return res;
    }
};

// Approach 2
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        int i = 0, j = n - 1;
        int k = n - 1;

        while (k >= 0) {
            int num1 = nums[i] * nums[i];
            int num2 = nums[j] * nums[j];

            if (num1 > num2) {
                res[k] = num1;
                i++;
            } else {
                res[k] = num2;
                j--;
            }
            k--;
        }
        return res;
    }
};
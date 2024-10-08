// Leetcode 268: Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(), nums.end());
        

        for(int i=0; i<nums.size();i++){
            if(i==nums[i]){
                ans++;
            }
        }
        
        return ans;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = n * (n + 1) / 2;
        int res = 0;
        for (int i = 0; i < n; i++) {
            sum -= nums[i];
        }

        return sum;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int res = n;

        for (int i = 0; i < n; i++) {
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }
};

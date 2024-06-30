// Approach 1
// Complexity: O(n^2)

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int result = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size();j++){
            if(nums[i]+nums[j]<target){
                result++;
            }
            }
        }
        return result;
    }
};

// Approach 2
// Complexity: O(n*log n)

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;
        int l = 0;
        int r = nums.size() - 1;
        sort(nums.begin(), nums.end());

        while (l != r) {
            if (nums[l] + nums[r] < target) {
                cnt += (r - l);
                l++;
            } else
                r--;
        }
        return cnt;
    }
};
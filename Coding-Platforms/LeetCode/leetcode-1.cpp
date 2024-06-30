// Two Sum - LEETCODE 1

// Approach 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];

            if (mp.find(rem) != mp.end()) {
                return {mp[rem], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};


// Approach 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                return {i,j};
                break;
                }
            }
        }
      
        return {};
    }
};
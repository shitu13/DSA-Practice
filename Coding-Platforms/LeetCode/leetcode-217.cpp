//// Contains Duplicate - LEETCODE 217

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i =0; i<n-1; i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>dupSet;
        
        for(auto i : nums){
            if(dupSet.find(i)!=dupSet.end())
                return true;
            else
                dupSet.insert(i);
        }
        return false;
    }
};
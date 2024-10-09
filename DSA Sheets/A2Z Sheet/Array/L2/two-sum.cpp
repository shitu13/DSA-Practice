class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;

        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size();j++){
                if((nums[i]+nums[j])==target && (i!=j)&& i<j){
                result.push_back(i);
                result.push_back(j);
                break;
                }
            }
        }
      
        return result;
    }
};


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

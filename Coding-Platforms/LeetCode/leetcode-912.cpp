/// Sort an Array - LEETCODE 912

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int &num : nums)
            mp[num]++;
        
        int mini = *min_element(begin(nums), end(nums));
        int maxi = *max_element(begin(nums), end(nums));

        int idx = 0;
        
        for(int num=mini; num<=maxi; num++){
            while(mp[num]>0){
                nums[idx] = num;
                idx++;
                mp[num]--;
            }
        }
        return nums;
    }
};
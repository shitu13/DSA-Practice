/// Find Pivot Index - LEETCODE 724

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tSum =0;
        for(auto i : nums)
            tSum+=i;

        int cSum =0;
        for(int i=0; i<nums.size(); i++){
            int ls = cSum;
            int rs = tSum - cSum - nums[i];

            if(ls== rs){
                return i;
                break;
            }
            cSum+=nums[i];
        }
        return -1;
    }
};
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        // find the index where the value of current index is just greater than
        // previous index. which is idx (condition:  nums[i] > nums[i-1])
        for (int i = n-1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                idx = i - 1;
                break;
            }
        }

        // find just greater element of nums[i-1]
        if (idx != -1) {
            int sw_idx = idx;


            for (int j = n - 1; j > idx; j--) {
                if (nums[j] > nums[idx]) {
                    sw_idx = j;
                    break;
                }
            }

            // now swap those two elements
            swap(nums[idx], nums[sw_idx]);
        }

        // reverse from idx+1 till end. 
        reverse(nums.begin()+idx+1, nums.end());
    }
};

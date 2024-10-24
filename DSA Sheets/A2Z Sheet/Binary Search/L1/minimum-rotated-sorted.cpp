class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = 5001;
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            
            // left part is sorted. take the minimum and eliminate the left half. 
            if (nums[low] <= nums[mid]) {
                mini = min(mini, nums[low]);
                low = mid + 1;
            } 
            
            // right part is sorted. take the minimum and eleminate the right half.
            else {
                mini = min(mini, nums[mid]);
                high = mid - 1;
            }
        }
        return mini;
    }
};
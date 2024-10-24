class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low =0, high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high-low)/2;

            // left neighbour is greater
            if(mid>0 && nums[mid-1]>nums[mid])
            high = mid - 1;
            // right neighbour is greater
            else if (mid < high && nums[mid] < nums[mid+1])
            low = mid + 1;
            else
            return mid;
        }
        return -1;
    }
};
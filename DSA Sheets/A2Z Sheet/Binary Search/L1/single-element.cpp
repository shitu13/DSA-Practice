class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // even number of elements on the right side.
            bool isEven = (high - mid) % 2 == 0;

            if (nums[mid] == nums[mid + 1]) {
                if (isEven) {
                    low = mid + 2;
                } else {
                    high = mid - 1;
                }
            } else if (nums[mid] == nums[mid - 1]) {
                if (isEven)
                    high = mid - 2;
                else
                    low = mid + 1;
            } else
                return nums[mid];
        }
        return nums[low];
    }
};
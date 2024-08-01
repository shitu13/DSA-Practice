/*
Leetcode 493. Reverse Pairs
Approach 1: Brute Force
Space Complexity: O(1)
Time Complexity: O(n^2)
*/
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] > 2 * nums[j])
                    cnt++;
            }
        }
        return cnt;
    }
};



/*
Leetcode 493. Reverse Pairs
Approach 2: Optimal
Space Complexity: O(n)
Time Complexity: O(nlog n)
*/

class Solution {
public:
    int cnt = 0;
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;    // temporary array
        int left = low;      // starting index of left half of arr
        int right = mid + 1; // starting index of right half of arr

        // storing elements in the temporary array in a sorted manner//

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        // if elements on the left half are still left //

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        //  if elements on the right half are still left //
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        // transfering all elements from temporary to arr //
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    void countPairs(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (right <= high && (nums[i] * .5) > nums[right]) {
                right++;
            }
            cnt += (right - (mid + 1));
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergeSort(nums, low, mid);      // left half
        mergeSort(nums, mid + 1, high); // right half
        countPairs(nums, low, mid, high);
        merge(nums, low, mid, high); // merging sorted halves
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n - 1);
        return cnt;
    }
};

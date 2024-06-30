/// Minimum Common Value - LEETCODE 2540
// Approach 1

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (nums1[i] == nums2[j]) {
                return nums1[i];
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                i++;
            }
        }
        return -1;
    }
};


// Approach 2
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st (nums1.begin(), nums1.end());

        for(int &num: nums2){
            if(st.find(num)!=st.end())
            return num;
        }
        return -1;
    }
};
/// 350. Intersection of Two Arrays II

/// Approach 1: using map
/// Space Complexity: O(n), Time Complexity: O(n)

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> mp;

        for (int& num : nums1) {
            mp[num]++;
        }

        for (int i = 0; i < nums2.size(); i++) {
            int num = nums2[i];
            if (mp[num] > 0) {
                mp[num]--;
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
};


/// Approach 2: using sort and two pointers
/// Space Complexity: O(1), Time Complexity: O(n*log n)
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0; // i indicates index for nums1
        int j = 0; // j indicates index for nums2

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                res.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else
                j++;
        }
        return res;
    }
};
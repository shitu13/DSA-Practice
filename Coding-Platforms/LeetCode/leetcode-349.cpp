                /******************************************************************************/
                // >>>>>>>>>>>>>>> Intersection of Two Arrays <<<<<<<<<<<<<< LEETCODE 349 /////

/// Approach 1
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(begin(nums1),end(nums1));
        unordered_set<int> st2;

        for(auto &num : nums2){
            if(st1.find(num)!= st1.end()){
                st2.insert(num);
            }
        }

        vector<int> result(begin(st2), end(st2));

        return result;
    }
};


/// @brief  Approach 2
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(begin(nums1),end(nums1));
        vector<int> result;

        for(auto &num : nums2){
            if(st1.find(num)!= st1.end()){
                result.push_back(num);
                st1.erase(num);
            }
        }
        return result;
    }
};
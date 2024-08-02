/*
Leetcode 15. 3Sum
Approach 1: 
Space Complexity: O(n)
Time Complexity: O(n^2)
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            set<int> mySet;
            for (int j = i + 1; j < n; j++) {
                int third = -(nums[i] + nums[j]);

                if (mySet.find(third) != mySet.end()) {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }

                mySet.insert(nums[j]);
            }
        }

        vector<vector<int>> res(st.begin(), st.end());
        return res;
    }
};


/*
Leetcode 15. 3Sum
Approach 2: 
Space Complexity: O(1)
Time Complexity: O(nlog n)
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            //remove duplicates
            if (i != 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                    j++;
                else if (sum > 0)
                    k--;
                else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    res.push_back(temp);
                    j++, k--;

                    // skip duplicates
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        return res;
    }
};

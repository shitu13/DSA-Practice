/*
Leetcode 1. Two Sum
Approach 1:
Space Complexity: O(1)
Time Complexity: O(nlog n)
*/
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(), book.end());

    int left = 0, right = n-1, sum = 0;

    while(left<right){
        int sum = book[left] + book[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

/*
Leetcode 1. Two Sum
Approach 2: Optimal
Space Complexity: O(n)
Time Complexity: O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];

            if (mp.find(rem) != mp.end()) {
                return {mp[rem], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

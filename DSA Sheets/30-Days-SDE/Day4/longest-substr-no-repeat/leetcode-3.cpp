/*
Leetcode 3. Longest Substring Without Repeating Characters
Approach 1: 
Space Complexity: O(n)
Time Complexity: O(n)
*/

class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        if (str.size() == 0)
            return 0;
        int maxans = INT_MIN;
        unordered_set<int> set;
        int l = 0;
        for (int r = 0; r < str.length();
             r++) 
        {
            // if duplicate element is found
            if (set.find(str[r]) != set.end()) 
            {
                while (l < r && set.find(str[r]) != set.end()) {
                    set.erase(str[l]);
                    l++;
                }
            }
            set.insert(str[r]);
            maxans = max(maxans, r - l + 1);
        }
        return maxans;
    }
};



/*
Leetcode 3. Longest Substring Without Repeating Characters
Approach 2: 
Space Complexity: O(1)
Time Complexity: O(n)
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> cnt(256, -1);
        int l = 0, r = 0, len = 0;

        while (r < s.length()) {
            if (cnt[s[r]] != -1)
                l = max(cnt[s[r]] + 1, l);

            cnt[s[r]] = r;

            len = max(len, r - l + 1);
            r++;
        }
        return len;
    }
};

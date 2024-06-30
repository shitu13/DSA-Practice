//// Longest Palindrome - LEETCODE 409

class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char, int> mp;
        for (auto c : s)
            mp[c]++;

        int res = 0;
        bool odd = false;

        for (auto i : mp) {
            if (i.second % 2 == 0) {
                res += i.second;
            } else {
                odd = true;
                res += i.second - 1;
            }
        }
        if (odd)
            res += 1;

        return res;
    }
};
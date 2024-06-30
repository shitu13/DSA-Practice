/// Maximum Odd Binary Number - LEETCODE 2864
// Approach 1
class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int n = s.length();
        string ans = string(n, '0');

        int i = 0;
        for (char& ch : s) {
            if (ch == '1') {
                if (ans[n - 1] == '1') {
                    ans[i] = '1';
                    i++;
                } else
                    ans[n - 1] = '1';
            }
        }

        return ans;
    }
};

// Approach 2
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        string ans = string(n, '0');

        int cnt1 = count(s.begin(), s.end(), '1');

        int i = 0;
        while (cnt1 > 1) {
            ans[i] = '1';
            cnt1--;
            i++;
        }

        ans[n - 1] = '1';
        return ans;
    }
};
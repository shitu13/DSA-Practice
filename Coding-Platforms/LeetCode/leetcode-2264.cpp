// Largest 3-Same-Digit Number in String - LEETCODE 2264

class Solution {
public:
    string largestGoodInteger(string num) {
        char maxi = ' ';

        for (int i = 1; i < num.length() - 1; i++) {
            if (num[i] == num[i - 1] && num[i] == num[i + 1]) {
                maxi = max(maxi, num[i]);
            }
        }

        if (maxi == ' ')
            return "";

        return string(3, maxi);
    }
};
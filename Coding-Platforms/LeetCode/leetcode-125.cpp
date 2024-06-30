                /*********************************************************************/
                // >>>>>>>>>>>>>>> Valid Palindrome <<<<<<<<<<<<<< LEETCODE 125 /////


class Solution {
private:
    bool isValid(char ch) {
        if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z') or
            (ch >= '0' and ch <= '9'))
            return true;
        else
            return false;
    }

    char toLowerCase(char ch) {
        if ((ch >= 'a' and ch <= 'z') or (ch >= '0' and ch <= '9'))
            return ch;
        else
            return ch - 'A' + 'a';
    }

public:
    bool isPalindrome(string s) {
        string str = "";

        for (int i = 0; i < s.length(); i++) {
            if (isValid(s[i]))
                str.push_back(s[i]);
        }

        for (int i = 0; i < str.length(); i++) {
            str[i] = toLowerCase(str[i]);
        }

        int start = 0;
        int end = str.size() - 1;

        while (start <= end) {
            if (str[start] != str[end]) {
                return false;
                break;
            } else {
                start++;
                end--;
            }
        }
        return true;
    }
};
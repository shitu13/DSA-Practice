class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int cnt = 0;

        for (char& ch : s) {
            if (ch == '(') {
                if (cnt > 0) {
                    res += ch;
                }
                cnt++;
            } 
            else if (ch == ')') {
                cnt--;
                if (cnt > 0)
                    res += ch;
            }
        }
        return res;
    }
};
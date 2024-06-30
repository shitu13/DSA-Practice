                /*********************************************************************/
             // >>>>>>>>>>>>>>> Valid Parentheses   <<<<<<<<<<<<<<    LEETCODE 20 /////


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            // If Opening bracket push into the stack
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }

            // If closing bracket, stacktop check and pop
            else {
                if (!st.empty()) {
                    char top = st.top();

                    if ((ch == ')' && top == '(') ||
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '[')) {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};
class Solution {
public:
    int maxDepth(string s) {
    
        int maxi = 0, cnt = 0;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(')
                cnt++;
            else if (ch == ')')
                cnt--;
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};
class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int res = 0;
        for (int i = 0; i < n; i++) {
            vector<int> count(26, 0);

            for (int j = i; j < n; j++) {
                int mini = INT_MAX;
                int maxi = INT_MIN;
                count[s[j] - 'a']++;

                for (int& x : count) {
                    if (x != 0) {
                        maxi = max(maxi, x);
                        mini = min(mini, x);
                    }
                }
                res = res + maxi - mini;
            }
        }
        return res;
    }
};
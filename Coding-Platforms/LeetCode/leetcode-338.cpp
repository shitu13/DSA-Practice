// Approach 1
// Complexity: O(n*log n)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i=0; i<=n; i++){
            ans.push_back(__builtin_popcount(i));
        }
        return ans;
    }
};

// Approach 2
// Complexity: O(n)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1);

        if (n == 0)
            return res;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0)
                res[i] = res[i / 2];
            else
                res[i] = res[i / 2] + 1;
        }
        return res;
    }
};
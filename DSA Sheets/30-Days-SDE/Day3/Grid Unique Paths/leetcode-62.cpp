/*
Leetcode 62. Unique Paths
Approach 1: Brute Force
Space Complexity: exponential
Time Complexity: exponential
*/

class Solution {
private:
    int countPaths(int i, int j, int m, int n) {
        if (i == n - 1 && j == m - 1)
            return 1;
        if (i >= n || j >= m)
            return 0;
        else
            return countPaths(i + 1, j, m, n) + countPaths(i, j + 1, m, n);
    }

public:
    int uniquePaths(int m, int n) { 
        return countPaths(0, 0, m, n); }
};


/*
Leetcode 62. Unique Paths
Approach 1: Better
Space Complexity: O(n * n)
Time Complexity: O(n * n)
*/

class Solution {
public:
    int countPaths(int i, int j, int n, int m, vector<vector<int>>& dp) {
        if (i == (n - 1) && j == (m - 1))
            return 1;
        if (i >= n || j >= m)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        else
            return dp[i][j] = countPaths(i + 1, j, n, m, dp) +
                              countPaths(i, j + 1, n, m, dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

        // dp[1][1]=1;
        int num = countPaths(0, 0, m, n, dp);
        if (m == 1 && n == 1)
            return num;
        return dp[0][0];
    }
};

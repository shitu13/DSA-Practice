/*
Leetcode 50. Pow(x, n)
Approach 1: 
Space Complexity: O(1)
Time Complexity: O(log n)
*/

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;

        long long nn = n;

        if (n < 0)
            nn = -nn;

        while (nn) {
            if (nn % 2) {
                ans = ans * x;
                nn = nn - 1;
            } else {
                x = x * x;
                nn = nn / 2;
            }
        }
        if (n < 0)
            ans = (double)(1.0) / (double)(ans);
        return ans;
    }
};

/*
Leetcode 50. Pow(x, n)
Approach 2: using recursion
Space Complexity: O(1)
Time Complexity: O(log n)
*/

class Solution {
private:
    double solve(double x, long n) {
        if (n == 0)
            return 1;
        if (n < 0)
            return 1 / solve(x, -n);
        if (n % 2==0)
            return solve(x * x, n / 2);

        return x * solve(x * x, (n - 1) / 2);
    }
    
public:
    double myPow(double x, int n) {
        return solve(x, (long)n);
    }
};
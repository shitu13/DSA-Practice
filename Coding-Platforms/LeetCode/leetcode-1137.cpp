/// N-th Tribonacci Number - LEETCODE 1137

// Approach 1
class Solution {
public:
    int t[38];
    int find(int n) {
        if (n == 0)
            return 0;
        else if (n == 1 || n == 2)
            return 1;

        if (t[n] != -1) {
            return t[n];
        }
        int a = find(n - 1);
        int b = find(n - 2);
        int c = find(n - 3);

        return t[n] = a + b + c;
    }
    int tribonacci(int n) {
        memset(t, -1, sizeof(t));
        return find(n);
    }
};

// Approach 2
class Solution {
public:
    int tribonacci(int n) {
        int t[38];

        t[0] = 0;
        t[1] = 1;
        t[2] = 1;

        for (int i = 3; i <= 37; i++) {
            t[i] = t[i - 1] + t[i - 2] + t[i - 3];
        }
        return t[n];
    }
};
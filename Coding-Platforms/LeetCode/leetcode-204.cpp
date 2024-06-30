//// Count Primes - LEETCODE 204

class Solution {
public:
    int countPrimes(int n) {
        int prime[5000001] = {0};
        int cnt = 0;

        for (int i = 2; i < sqrt(n) + 1; i++) {
            if (prime[i] == 0) {
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = 1;
                }
            }
        }

        for (int i = 2; i < n; i++) {
            if (prime[i] == 0)
                cnt++;
        }

        return cnt;
    }
};
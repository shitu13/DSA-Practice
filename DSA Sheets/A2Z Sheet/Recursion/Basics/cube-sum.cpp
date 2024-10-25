// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        if(n==1)
            return 1;
        
        return pow(n, 3) + sumOfSeries(n-1);
    }
};
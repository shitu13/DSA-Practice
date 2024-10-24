class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        long long n = arr.size();
        
        long long SN = (n * (n+1)) / 2;
        long long S2N = (n * (n+1) * (2*n +1)) / 6;
        
        long long S = 0, S2 = 0;
        
        for(int i=0; i<n; i++){
            S+= arr[i];
            S2+= (long long)arr[i] * (long long)arr[i];
        }
        
        // minus = x - y
        // plus = (x^2 - y^2)/ (x-y)
        
        long long val1 = S - SN;
        long long val2 = (S2 - S2N)/val1;
        
        long long x = (val1+val2)/2;
        long long y = x - val1;
        
        return {(int)x, (int)y};
    }
};


class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int cnt[n+1] = {0};
        
        for(int i =0; i<n; i++){
            cnt[arr[i]]++;
        }
        
        int repeating = -1;
        int missing = -1;
        
        for(int i=1; i<=n; i++){
            if(cnt[i]==2)
                repeating = i;
            else if(cnt[i]==0)
                missing = i;
        }
        
        return {repeating, missing};
    }
};
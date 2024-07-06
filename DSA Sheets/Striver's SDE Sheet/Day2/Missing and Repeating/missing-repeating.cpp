/*
GeeksForGeeks //// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
Approach 1: 
Space Complexity: O(n)
Time Complexity: O(n)
*/

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int>cnt (n+1, 0);

        for(int i=0; i<n; i++){
            cnt[arr[i]]++;
        }
        
        int repeat = -1;
        int missing = -1;
        
        for(int i=1; i<=n; i++){
            if(cnt[i]==2)
            repeat = i;
            
            else if(cnt[i]==0)
            missing = i;
            
            if(repeat!=-1 && missing!=-1)
            break;
        }
        
        return {repeat, missing};
    }
};


class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
    
    // Find Sn and S2n:
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    // Calculate S and S2:
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }

    //S-Sn = X-Y:
    long long val1 = S - SN;

    // S2-S2n = X^2-Y^2:
    long long val2 = S2 - S2N;

    //Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;

    //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    // Here, X-Y = val1 and X+Y = val2:
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
    }
};
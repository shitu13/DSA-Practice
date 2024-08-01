/*
https://www.naukri.com/code360/problems/subarrays-with-xor-k_6826258?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
Code-360: Subarrays with XOR ‘K’
Approach 1: 
Space Complexity: O(n)
Time Complexity: O(n)
*/



#include <bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector < int > a, int k) {
    // Write your code here
    int n = a.size(); 
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++; //setting the value of 0.
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        
        xr = xr ^ a[i];

        //By formula: x = xr^k:
        int x = xr ^ k;

        // add the occurrence of xr^k
        // to the count:
        cnt += mpp[x];

        // Insert the prefix xor till index i
        // into the map:
        mpp[xr]++;
    }
    return cnt;  
};


/*
https://www.naukri.com/code360/problems/subarrays-with-xor-k_6826258?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
Code-360: Subarrays with XOR ‘K’
Approach 2: 
Space Complexity: O(0)
Time Complexity: O(n^2)
*/


int subarraysWithXorK(vector<int> a, int k) {
    int n = a.size(); //size of the given array.
    int cnt = 0;

    // Step 1: Generating subarrays:
    for (int i = 0; i < n; i++) {
        int xorr = 0;
        for (int j = i; j < n; j++) {

            //step 2:calculate XOR of all
            // elements:
            xorr = xorr ^ a[j];

            // step 3:check XOR and count:
            if (xorr == k) cnt++;
        }
    }
    return cnt;
}

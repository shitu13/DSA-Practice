#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    vector<int> res;

    for(int i=0; i<n-1; i++){
        res.push_back(arr[i+1]);
    }

    res.push_back(arr[0]);

    return res;
}

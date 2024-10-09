

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int> res;
        int maxi = INT_MIN;
        
        for(int i=n-1; i>=0; i--){
            if(arr[i]>=maxi){
                res.push_back(arr[i]);
            }
            maxi = max(maxi, arr[i]);
        }
        sort(res.begin(), res.end(), greater<int>());
        return res;
    }
};

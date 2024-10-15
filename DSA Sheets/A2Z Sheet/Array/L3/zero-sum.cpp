/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        int maxi = 0;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                sum+= arr[j];
                if(sum==0)
                maxi = max(j-i+1, maxi);
            }
        }
        return maxi;
    }
};


/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map<int, int> mp;
        int maxi = 0;
        int sum = 0;
        
        for(int i=0; i<n; i++){
            sum+= arr[i];
            
            if(sum==0){
                maxi = i+ 1;
            }
            else{
                if(mp.find(sum)!= mp.end()){
                    maxi = max(maxi, i-mp[sum]);
                }else{
                    mp[sum] = i;
                }
            }
        }
        return maxi;
    }
};

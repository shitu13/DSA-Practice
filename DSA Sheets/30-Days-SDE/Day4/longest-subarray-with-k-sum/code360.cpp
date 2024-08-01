/*
Link: https://bit.ly/3GHyBOS
Approach 1: works For only positive numbers
Space Complexity: O(1)
Time Complexity: O(n)
*/


int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    long long sum = a[0];
    int maxLen = 0;
    int left = 0, right = 0;

    while(right<n){
        while(left<=right && sum>k){
            sum-= a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right-left+1);
        }
        
        right++;
        
        if(right<n)
            sum+= a[right];
    }
    return maxLen;
}


/*
Link: http://bit.ly/3mNSZ9u
Approach 1: works For both negative and positive numbers
Space Complexity: O(n)
Time Complexity: O(n)
*/

int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    unordered_map<int, int> mp;
    long long cumSum = 0;
    int maxLen = 0;
    
    for(int i=0; i<nums.size(); i++){
        cumSum+= nums[i];
        
        if(cumSum==k){
            maxLen = max(maxLen, i+1);
        }
        int rem = cumSum-k;

        if(mp.find(rem)!= mp.end()){
            int len = i - mp[rem];
            maxLen = max(maxLen, len);
        }

        if(mp.find(cumSum)==mp.end()){
        mp[cumSum] = i;}
    }
    return maxLen;

}

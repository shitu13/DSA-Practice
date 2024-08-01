/*
Leetcode 128. Longest Consecutive Sequence
Approach 1: 
Space Complexity: O(1)
Time Complexity: O(nlog n)
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int cnt = 0;
        int lastSmaller = INT_MIN;
        int longest = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] - 1 == lastSmaller) {
                cnt++;
                lastSmaller = a[i];
            } else if (nums[i] != lastSmaller) {
                cnt = 1;
                lastSmaller = a[i];
            }
            longest = max(cnt, longest);
        }
        return cnt;
    }
};

/*
Leetcode 128. Longest Consecutive Sequence
Approach 1: Brute Force
Space Complexity: O(n)
Time Complexity: O(n)
*/

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    if(n==0)
    return 0;

    set<int>st;
    int longest = 1;

    for(int i=0; i<n; i++){
        st.insert(a[i]);
    }

    for(auto it: st){
        if(st.find(it-1)==st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(it+1)!=st.end()){
                it = it+1;
                cnt = cnt+1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

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
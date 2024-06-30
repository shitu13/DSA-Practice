//   https://www.geeksforgeeks.org/problems/remove-minimum-number-of-elements4032/1?utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=remove-minimum-number-of-elements

class Solution{
  public:
    int minRemove(int a[], int b[], int n, int m) {
        unordered_map<int, int> cntA, cntB;
        
        for(int i=0; i<n; i++){
            cntA[a[i]]++;
        }
        
        for(int i=0; i<m; i++){
            cntB[b[i]]++;
        }
        
        int ans = 0; 
        
        for(auto &it: cntA){
            if(cntB.find(it.first)!=cntB.end()){
                ans+= min(it.second, cntB[it.first]);
            }
        }
        return ans;
    }
};
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int l = 0; 
        int r = arr.size() -1;
        
        recur(arr, l, r);
    }
    void recur(vector<int> &arr, int l, int r){
        if(l>=r)
        return;
        
        swap(arr[l], arr[r]);
        recur(arr, l+1, r-1);
    }
};